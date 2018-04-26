#include <iostream>
#include <list>

using namespace std;

void display(list<string>::iterator b, list<string>::iterator e) {
    for(list<string>::iterator it = b; it !=e; it++)
        cout << *it << " ";
}

int main()
{
    list<string> l;
    l.push_back(" ma");
    l.push_back(" kota.");
    l.push_front("ala");

    list<string>::iterator it = l.begin();
    it++;

    l.insert(it, " nie");

    for(const string &s : l)
        cout << s;

    cout << endl;

    display(++l.begin(),----l.end());   //pobawić się iteratorami

    //cout << "Hello World!" << endl;
    return 0;
}
