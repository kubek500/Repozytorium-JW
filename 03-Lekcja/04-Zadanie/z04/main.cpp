#include <iostream>

using namespace std;

int main()
{
    int q,w,e,r,t;
    int i=0;
    cout << "Podaj 5 ocen" << endl;
    cin>>q>>w>>e>>r>>t;
    if (q==1){i++;}
    if (w==1){i++;}
    if (e==1){i++;}
    if (r==1){i++;}
    if (t==1){i++;}
    cout << (q+w+e+r+t)/5 << " oto srednia " << endl;
    cout << i << " liczba jedynek";





    return 0;
}
