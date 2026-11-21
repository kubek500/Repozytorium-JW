#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int s=0;

    int n=1;
    int ma=n;
    int mi=n;
    while(n!=0)
    {
        cout<< "Podaj liczbe "<<endl;
        cin >> n;
        i++;
        s=s+n;
        if (n>ma){ma=n;}
        if (n<mi && n!=0){mi=n;}
    }
    float sr=(float)s/i;
    cout << "Suma = " << s << endl;
    cout << "Srednia = " << sr << endl;
    cout << "Najwieksza= " << ma << endl;
    cout << "Najmniejsza= " << mi << endl;
    return 0;
}
