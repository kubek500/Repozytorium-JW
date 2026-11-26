#include <iostream>

using namespace std;

int main(){
int we =0;
int a =0,b =0,w =0;
char z;


do{
        cout << "-Wybierz opcje:  1. Zmien pierwsza liczba  2. Zmien druga liczba  3. Wybierz dzialanie  4. Wyswietl wynik   5. Koniec-"<<endl;
        cin >> we;
        switch(we)
        {
        case 1:
            {
                cout << "Podaj pierwsza liczbe"<<endl;
                cin >> a;
                break;
            }
        case 2:
            {
                cout << "Podaj pierwsza druga"<<endl;
                cin >>b;
                 break;
            }
        case 3:
            {
                cout << "Podaj dzialanie"<<endl;
                cin >>z;
                 break;
            }
        case 4:
            {
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
            default :{cout << endl<<"Podaj inny znak";}
            break;}
            }
        default :
                {
                    cout << endl << "nie ma takiej opcji"<<endl;
                }
        }}
while (we != 5);
return 0;}





