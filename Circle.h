#ifndef Circle_h
#define Circle_h

#include "Shape.h"

class Circle : public Shape
{
public:
    //constructors
    Circle( double x, double y, double r ) : Shape{x, y}, radius{r}
    { cout << "DEBUG: Executing Circle constructor...\n"; }

    Circle( std::istream& strm_in ) : Shape{strm_in}
    { strm_in >> radius; }

    //destructor
    ~Circle()
    { cout << "DEBUG: Executing Circle destructor...\n"; }

    //member function
    void write( std::ostream& strm ) const;
    
private:
    double radius;
};


std::ostream& operator<< ( std::ostream& strm, const Circle& object );

#endif 
