#include <iostream>
#include "point.h"
#include <vector>

using namespace std;

vector<Point> inRect(const Point &lt, const Point &rb, const vector<Point> &points) {
    vector<Point> result;
    for(const Point &p : points){
        if(lt.x() <= p.x() && lt.y() <= p.y() && rb.x() >= p.x() && rb.y() >= p.y())
            result.push_back(p);
    }
    return result;
}


int main()
{
    vector<Point> vec(5);
    for(int i= 0; i< vec.size(); i++){
        vec[i] = Point(i,i);
    }
    vector<Point> inside = inRect(Point(2,1), Point(5,8), vec);

    for(const Point &p : inside)
        cout << p.x() << " " << p.y() << endl;


    //cout << "Hello World!" << endl;
    return 0;
}
