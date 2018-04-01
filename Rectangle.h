#ifndef Rectangle_h
#define Rectangle_h

#include "Shape.h"

class Rectangle : public Shape
{
public:
    //constructors
    Rectangle( double x, double y, double s1, double s2 ) : Shape{x, y}, side1{s1}, side2{s2}
    { cout << "DEBUG: Executing Rectangle constructor...\n"; }
    Rectangle( std::istream& strm_in ) : Shape{strm_in}
    { strm_in >> side1 >> side2; }

    //destructor
    ~Rectangle()
    { cout << "DEBUG: Executing Rectangle destructor...\n"; }

    //member function
    void write( std::ostream& strm ) const;
private:
    double side1;
    double side2;
};


#endif
