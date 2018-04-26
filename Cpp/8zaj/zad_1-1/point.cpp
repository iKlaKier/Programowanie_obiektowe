#include "point.h"

Point::Point(){
    
}


Point::Point(float x, float y){
    this->m_x = x;
    this->m_y = y;
}

float Point::x() const{
    return m_x;
}

float Point::y() const{
    return m_y;
}

float Point::SetX(float x) {
    m_x = x;
}

float Point::SetY(float y) {
    m_y = y;
}
