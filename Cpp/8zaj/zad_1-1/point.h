#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
    float m_x, m_y;
public:
    Point();
    Point(float x, float y);
    float x() const;
    float y() const;
    float SetX(float);
    float SetY(float);
};

#endif // POINT_H
