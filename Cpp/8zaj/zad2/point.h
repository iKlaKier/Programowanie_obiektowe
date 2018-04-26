#ifndef POINT_H
#define POINT_H


class Point
{
    int m_x, m_y;
public:
    Point();
    Point(int x, int y);
    int x() const;
    int y() const;

};

#endif // POINT_H
