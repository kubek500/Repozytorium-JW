#include <iostream>

using namespace std;

int main()
{
    float w;
    int a,b;
    cout << "Podaj 2 liczby " << endl;
    cin>>a>>b;
    char z;
    cout << "Podaj dzialanie " << endl;
    cin>>z;
    if(z=='+')
    {
        w=a+b;
    }
    else if(z=='-')
    {
        w=(float)a-b;
    }
    else if(z=='*')
    {
        w=a*b;
    }
    else if(z=='/')
    {


        if(b==0)
        {
            cout<<"nie dziel przez 0"<<endl;
        }
        else
        {
             w=static_cast<float>(a/b);
        }
    }
    else if(z=='%')
    {
         w=static_cast<float>(a%b);
    }
    else
    {
        cout <<"zle dzialanie"<<endl;
    }
    cout <<w;
    return 0;
}
