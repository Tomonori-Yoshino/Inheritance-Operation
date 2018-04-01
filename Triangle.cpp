#include "Triangle.h"


/**
 * displays all attributes on the screen.
 *
 * @param[out]   strm     an output stream to which a object is sent
 *
 * @return  void
 */
void Triangle::write( std::ostream& strm ) const
{
    Shape::write( strm );
    strm << "Base: " << base << endl;
    strm << "Height: " << height << endl;
}

