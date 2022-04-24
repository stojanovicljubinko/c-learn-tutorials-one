#include <iostream>

using namespace std;

int main()
{
    float milje, stope;
    int metriMiljeStope, kilometri, metri;
    cout << "Unesite broj milja: ";
    cin>>milje;

    cout<<"Unesite broj stopa: ";
    cin>>stope;
    cout<<endl;

    metriMiljeStope =(int) milje*1609.35+ stope*0.30480;
    kilometri = (int) metriMiljeStope/1000;
    metri = metriMiljeStope%1000;


    cout<<"Rastojanje je "<< kilometri<<"km i "<<metri<<"m\n";

    return 0;
}
