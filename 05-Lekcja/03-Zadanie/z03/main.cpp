#include <iostream>

using namespace std;

int main()
{
    int r;
    cout<<"podaj range: 1.poddany 2.giermek 3.rycerz 4.mag 5.królowa "<<endl;
    cin >> r;
    switch(r)
    {
        case(5):
        {
            cout << "mo¿e wydawaæ rozkazy"<<endl;
            [[fallthrough]];
        }
        case(4):
        {
            cout << "mo¿e rozmawiaæ z w³adc¹"<<endl;
            [[fallthrough]];
        }

        case(3):
        {
            cout << "mo¿e wejœæ do zamku i przyj¹æ giermka"<<endl;
            [[fallthrough]];
        }
        case(2):
        {
            cout << "mo¿e wejœæ na dziedziniec"<<endl;
            [[fallthrough]];
        }
        case(1):
        {
            cout << "mo¿e oddaæ ho³d w³adcy"<<endl;
            break;
        }
        default:
        {
            cout << "MO¯ESZ NIC "<<endl;
            break;
        }

    }

    return 0;
}
