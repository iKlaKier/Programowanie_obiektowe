#include <iostream>
#include <vector>
#include <algorithm>
#include "point.h"


using namespace std;

int main()
{
   /* vector<int> vec(3);
    vec[0] = 50;
    vec[1] = 4;
    vec[2] = 10;

    sort (vec.begin(), vec.end());
    for(int i = 0; i< vec.size(); i++)
        cout << vec[i] << endl;
    */

    vector<Point> vec(3);

    vec[0] = Point(1, 9);
    vec[1] = Point(2, 8);
    vec[2] = Point(3, 7);

//    for(size_t i = 0; i< vec.size() ; i++)
//        cout << vec[i] << endl;

    for(Point p : vec)
        p.SetX(p.x()+10);

    for(Point &p : vec)
        cout << p.x() << " " << p.y() << endl;

    return 0;
}
