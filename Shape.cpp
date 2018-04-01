#include "Shape.h"


/**
 * Overloaded extraction operator for shape class
 *
 * @param[out]   strm     an output stream to which a object is sent
 * @param[out]   object   an object to be displayed
 *
 * @return  output stream by reference
 */
std::ostream& operator<< ( std::ostream& strm, const Shape& object )
{
    object.write( strm );
    return strm;
}


/**
 * Calculates the distance from a reference point
 *
 * @param   p_x     x coordinate
 * @param   p_y     y coordinate
 *
 * @return  distanse between object and reference point
 */
double Shape::getDistanceTo (double p_x, double p_y) const
{
    double distance;
    distance = sqrt( pow( (ref_x - p_x), 2 ) + pow( (ref_y - p_y), 2 ) );
    return distance;
}

