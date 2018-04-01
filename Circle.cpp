#include "Circle.h"


/**
 * displays all attributes on the screen.
 *
 * @param[out]   strm     an output stream to which a object is sent
 *
 * @return  void
 */
void Circle::write( std::ostream& strm ) const
{
    Shape::write( strm );
    strm << "Radius: " << radius << endl;
}
    
/**
 * Overloaded extraction operator for circle class
 *
 * @param[out]   strm     an output stream to which a object is sent
 * @param[out]   object   an object to be displayed
 *
 * @return  output stream by reference
 */
std::ostream& operator<< ( std::ostream& strm, const Circle& object )
{
    object.write( strm );
    return strm;
}
