#include "Square.h"


/**
 * displays all attributes on the screen.
 *
 * @param[out]   strm     an output stream to which a object is sent
 *
 * @return  void
 */
void Square::write( std::ostream& strm ) const
{
    Shape::write( strm );
    strm << "Side: " << side << endl;
}





