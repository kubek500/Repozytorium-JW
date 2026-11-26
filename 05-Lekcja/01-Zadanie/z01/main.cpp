#include <iostream>

using namespace std;

int main()
{
    int a,b,w;
    cout << "podaj dwie liczby" << endl;
    cin>> a;
    cin>> b;
    char z;
    cout << "podaj dzianie" << endl;
    cin >>z;
    switch (z){
    case '+':{
    w = a+b;
    cout<<w;break;}
    case '-':{
    w = a-b;
    cout<<w;break;}
    case '/':{
    w = a/b;
    cout<<w;break;}
    case '*':{
    w = a*b;
    cout<<w;break;}
    case '%':{
    w = a%b;
    cout<<w;break;}
    default :{cout << endl<<"Podaj inny znakl";}break;}

return 0;
    }


