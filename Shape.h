#ifndef Shape_h
#define Shape_h

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>


class Shape
{
public:
    //constructors
    Shape( double x, double y ) : ref_x{x}, ref_y{y}
    { cout << "DEBUG: Executing Shape constructor...\n"; }

    Shape( std::istream& strm_in )
    { strm_in >> ref_x >> ref_y; }

    //destructor
    ~Shape()
    { cout << "DEBUG: Executing Shape destructor...\n"; }

    //member functions
    double getDistanceTo (double p_x, double p_y) const;
    void   write( std::ostream& strm )            const
    { strm << "(" << ref_x << ", " << ref_y << ")\n"; }

private:
    double ref_x;
    double ref_y;
};

std::ostream& operator<< ( std::ostream& strm, const Shape& object );



#endif 
