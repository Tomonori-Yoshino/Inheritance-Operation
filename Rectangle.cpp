#include "Rectangle.h"



/**
 * displays all attributes on the screen.
 *
 * @param[out]   strm     an output stream to which a object is sent
 *
 * @return  void
 */
void Rectangle::write( std::ostream& strm ) const
{
    Shape::write( strm );
    strm << "Side1: " << side1 << endl;
    strm << "Side2; " << side2 << endl;
}

