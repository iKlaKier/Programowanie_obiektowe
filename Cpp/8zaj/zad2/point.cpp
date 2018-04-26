#include "point.h"

Point::Point(){

}

Point::Point(int x, int y)
{
    this->m_x = x;
    this->m_y = y;
}

int Point::x() const{
    return m_x;
}

int Point::y() const {
    return m_y;
}
