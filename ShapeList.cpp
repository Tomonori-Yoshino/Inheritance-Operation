#include "ShapeList.h"


/**
 * Destructor for ShapeList
 */
ShapeList::~ShapeList()
{
    if ( !empty() )
        erase();
}


/**
 * displays all shapes object in the list on the screen.
 *
 * @param[out]   strm     an output stream to which a object is sent
 *
 * @return  void
 */
void ShapeList::write( std::ostream& strm_out ) const
{
    for ( const auto& item : *this )
    {
        item->write( strm_out );
        strm_out << '\n';
    }
}


/**
 * Overloaded extraction operator for ShapeList class
 *
 * @param[out]   strm_out     an output stream to which a object is sent
 * @param[out]   shapes       an object to be displayed
 *
 * @return  output stream by reference
 */
std::ostream& operator<<( std::ostream& strm_out, const ShapeList& shapes )
{
    shapes.write( strm_out );
    return strm_out;
}


/**
 * Removes the objects from the list and frees the memory allocated to them.
 *
 * @return  void
 */
void ShapeList::erase()
{
    cout << "Start to erase the list...\n";  //for debugging purposes
    for ( const auto& item : *this )
    {
        delete item;  //free the memory
        pop_front();  //remove the item from the list
    }
    cout << "Finish to erase the list...\n";  //for debugging purposes
}



/**
 * Finds the shpape closest to a reference point and return the pointer
 * for that object. If the list is empty, it returns a null pointer.
 *
 * @param   p_x  x coordinate
 * @param   p_y  y coordinate
 *
 * @return  a pointer for the object closest to a reference point
 */
Shape* ShapeList::findClosestTo (double p_x, double p_y) const
{
    Shape* closest_shape;
    if ( !empty() )  //if the list is not empty...
    {
        closest_shape = front();
        double min_distance  = front() -> getDistanceTo( p_x, p_y );
        double distance      = 0;
        for ( const auto& item : *this )
        {
            //get distance of each object from the point
            distance = item -> getDistanceTo( p_x, p_y );
            //if that is smaller than the current minimum...
            if ( distance < min_distance )
            {
                min_distance = distance;  //update the minimum distance
                closest_shape = item;  //update the closest shape
            }
        }
    }
    else
        closest_shape = nullptr;

    return closest_shape;
}
