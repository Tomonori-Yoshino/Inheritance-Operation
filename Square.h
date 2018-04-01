#ifndef Square_h
#define Square_h

#include "Shape.h"

class Square : public Shape {
public:
    //constructors
    Square( double x, double y, double s ) : Shape{x, y}, side{s}
    { cout << "DEBUG: Executing Square constructor...\n"; }

    Square( std::istream& strm_in ) : Shape{strm_in}
    { strm_in >> side; }

    //destructor
    ~Square()
    { cout << "DEBUG: Executing Square destructor...\n"; }

    //member function
    void write( std::ostream& strm ) const;
    
private:
    double side;
};



#endif 
