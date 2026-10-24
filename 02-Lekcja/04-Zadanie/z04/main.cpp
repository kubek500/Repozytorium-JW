#include <iostream>

using namespace std;

int main()
{
    int s,g;

    cout << "podaj sekundy" << endl;
    cin >>s;
    g=s/60;
    s%=60;
    cout <<"sekundy "<<s<<endl;
    cout <<"godziny "<<g <<endl;
    return 0;
}
