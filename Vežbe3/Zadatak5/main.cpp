#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double komisiona, cena;
    char znak;

    cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);
    cout<<"Unesite prodajnu ncenu prozivoda: ";
    cin>>cena;

    cout<<"\nDomaci proizvod:     unesite D\nRegionalni proizvod:     unesite R\nKomercijalni proizvod:     unesite C\n";
    cout<<"Izaberite opciju: ";
    cin>>znak;
    cout<<endl;

    switch(znak)
    {

    case 'D':
        komisiona = 0.060 * cena;
        break;
    case 'R':
        komisiona = 0.050 * cena;
        break;
    case 'K':
        komisiona = 0.045 * cena;
        break;
    }

    cout<<"Komisiona cena je: "<<komisiona<<endl;
    return 0;
}
