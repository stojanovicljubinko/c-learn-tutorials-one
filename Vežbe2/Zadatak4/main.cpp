#include <iostream>
#include <iomanip>

using namespace std;
float const POREZ = 2.86;
int main()
{
    float novac, kusur, cenaObroka;

    cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
    cout<<"***** BRZA HRANA *****\n";
    cout<<"Drinska ulica 104\n\n";

    cout<<"Unesite cenu obroka: RSD ";
    cin>>cenaObroka;
    cout<<"\n\n";

    cout<<"Cena obroka: "<<cenaObroka;
    cout<<"\nPorez: "<<POREZ<<"\n------------------";
    cout<<"\nUnesite iznos koji je musterija dala: RSD ";
    cin>>novac;
    cout<<"\n\n";

    cout<<"Dati iznos: RSD "<<novac;
    cout<<"\nUkupan iznos: RSD "<<cenaObroka+POREZ;
    cout<<"\n----------------------\n";
    cout<<"Kusur: RSD "<<novac-(cenaObroka+POREZ);

    cout<<"\nPrijatno! Dodjite nam opet!\n\n";
    return 0;
}
