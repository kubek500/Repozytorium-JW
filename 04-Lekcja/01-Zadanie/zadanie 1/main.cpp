#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<< "Podaj liczbe naturlna"<<endl;
    cin>>n;
    int a=0;
    for(int i = 1;i<n;i++)
    {
        a=a+i;
    }
    cout<<a<<endl;
    return 0;
}
