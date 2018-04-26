#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> vec(3); //liczba w środku odrazu tworzy kilka ele.

    vec[0] = 5;
    vec[1] = 10;
    vec[2] = 15;


    vec.push_back(5);   //dodawanie na końcu vectora
    vec.push_back(10);
    vec.push_back(15);

    vec.push_back(105);
    vec.insert(vec.begin()+3, 20);
    vec.erase(vec.begin()+2, vec.end()-1);


    for(int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;

    //cout << "Hello World!" << endl;
    return 0;
}
