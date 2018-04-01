#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeList.h"
#include <string>
#include <fstream>



int main()
{
    //check if each shape object works properly
    Circle    c1{0, 0, 1};
    Square    s1{1, 0.5, 2.3};
    Triangle  t1{2, 3, 5, 3};
    Rectangle r1{9.9, 3.0, 10, 99};
    cout << "c1: " << c1 << endl;
    cout << "s1: " << s1 << endl;
    cout << "t1: " << t1 << endl;
    cout << "r1: " << r1 << endl;
    


    //check if ShapeList object works properly with each shape
    cout << "Press <enter> to continue...";
    cin.get( );  // waits on another <enter> key
    ShapeList shapes;
    shapes.add( new Circle{1, 2.3, 3} );
    shapes.add( new Square{5, 5, 10.2} );
    shapes.add( new Triangle{9.1, 5.3, 10.2, 5.6} );
    shapes.add( new Rectangle{2, 7, 4.6, 6.1} );

    cout << shapes << endl;
    
    
    

    //check if the constructor for input stream of each shape
    //object works properly
    cout << "Press <enter> to continue...";
    cin.get( );  // waits on another <enter> key
    std::ifstream fin( "oop09in.txt" );
    if ( !fin )
    {
        cout << "Input file could not be opened!  Exiting!\n";
        exit( 1 );
    }
    ShapeList shapes2;
    while ( fin.good( ) )  //read information in the file
    {
        std::string objectType;
        fin >> objectType;
        if ( objectType == "Square" )
        {
            shapes2.add( new Square{ fin } );
        }
        else if ( objectType == "Circle" )
        {
            shapes2.add( new Circle{ fin } );
        }
        else if ( objectType == "Triangle" )
        {
            shapes2.add( new Triangle{ fin } );
        }
        else if ( objectType == "Rectangle" )
        {
            shapes2.add( new Rectangle{ fin } );
        }
        else
        {
            cout << "Unexpected object type: " << objectType << endl;
            exit( 2 );
        }
    }
    
    cout << "Object locations:\n" << shapes2 << endl;




    //test findClosestTo function
    cout << "test \"closest\" methods...\n";
    double x;
    double y;
    cout << "Enter coordinates for search of closest object reference: ";
    cin  >> x >> y;
    Shape* closestObj = shapes2.findClosestTo( x, y );
    if ( closestObj != nullptr )
        cout << "The object closest to the point provided is located at "
        << *closestObj << endl;
    else
        cout << "No objects were entered!\n";


    
    //test erase function
    shapes2.erase();
    cout << endl;
    
    return 0;
}
