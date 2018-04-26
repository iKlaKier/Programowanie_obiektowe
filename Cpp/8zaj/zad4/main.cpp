#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> fun(const vector<int> &vec1, const vector<int> &vec2) {
    set<int> s;
    for(const int i :vec1)
        s.insert(i);

    for(const int i :vec2)
        s.insert(i);

    vector<int> result;

    for(const int i : s)
        result.push_back(i);

    return result;
}


int main()
{
    int myints1[] = { 5,2,1,8};
    vector<int> vec1(myints1, myints1 + sizeof(myints1) / sizeof(int));
    int myints2[] = { 5,6,3,0};
    vector<int> vec2(myints2, myints2 + sizeof(myints2) / sizeof(int));

    vector<int> vec3 = fun(vec1, vec2);
    for(const int i : vec3)
        cout << i << " ";
    return 0;
}
