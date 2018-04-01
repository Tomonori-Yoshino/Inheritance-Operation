#ifndef Triangle_h
#define Triangle_h

#include "Shape.h"

class Triangle : public Shape
{
public:
    //constructors
    Triangle( double x, double y, double b, double h ) : Shape{x, y}, base{b}, height{h}
    { cout << "DEBUG: Executing Triangle constructor...\n"; }
    Triangle( std::istream& strm_in ) : Shape{strm_in}
    { strm_in >> base >> height; }

    //destructor
    ~Triangle()
    { cout << "DEBUG: Executing Triangle destructor...\n"; }

    //member function
    void write( std::ostream& strm ) const;
    
private:
    double base;
    double height;
};



#endif
