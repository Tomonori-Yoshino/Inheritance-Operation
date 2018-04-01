#ifndef ShapeList_h
#define ShapeList_h

#include "Shape.h"
#include <list>

class ShapeList : protected std::list<Shape*> {
public:
    //constructor
    ShapeList() = default;

    //destructor
    ~ShapeList();

    //member functions
    void   add( Shape* newShape ) { push_back( newShape ); }
    void   erase();
    void   write( std::ostream& strm_out )          const;
    Shape* findClosestTo (double p_x, double p_y)   const;
    
    friend std::ostream& operator<<( std::ostream& strm_out, const ShapeList& shapes );
};





#endif 
