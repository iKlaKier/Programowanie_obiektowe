#include <iostream>
#include <algorithm>
#include <string>
#include <list>


using namespace std;
using std::string;
//      PRZYKŁAD
                   //v tu może być dowolna nazwa, jeżeli używamy tylko raz to T..T1..T2 itd;
//template <typename T>     //tu nie może być średnika !!!
////             ^ tu może wystapic typename lub class
//T min(T a, T b) {
//    if(a<b)
//        return a;
//    else return b;
//}         //przykładowa tablica

//zad1

template <typename T>
T &minBetween(T *a, T *b) {
    T &min = *a;
    for(T *i = a; i<b; i++){
        if(min>*i)
            min =*i;
    }
    return min;
}

//zad2

template <>
string &minBetween(string *a, string *b) {
    string min = *a;
    string &minRef = *a;
    transform(min.begin(), min.end(), min.begin(), ::toupper);
    for(string *i = a; i<b; i++) {
        string current = *i;
        transform(current.begin(), current.end(), current.begin(), ::toupper);
        if(min.compare(current) > 4){
            min=current;
            minRef=*i;
        }
    }

    return minRef;
}

//nowe
template <template<typename ...> class C, typename T>
T &minInContainer(C<T> container) {
    T &min=*container.begin();
    for(T &item : container) {
        if(item <min)
            min = item;
    }
    return min;
}



int main()
{
    //cout << min(5.0f, 10.0f) <<endl;          // do przykładu
//    int a[8] = { 5,0,0,3,1,3,3,7};        //zad1
//    cout << minBetween(a, a+8) << endl;
//    cout << ::min(2,3) << endl; //do przykładu nazywamy funkcje min

//    string a[3] = {"tola", "kota", "MA"}; // zad2
//    cout<< minBetween(a, a+3) <<endl;
        //do nowego
    list<int> l;
    l.push_back(5);
    l.push_back(5);
    l.push_back(10);
    cout << minInContainer(l) << endl;
    return 0;
}
