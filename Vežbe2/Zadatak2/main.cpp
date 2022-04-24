#include <iostream>
#include <iomanip>

using namespace std;
double const STOPAPOREZA = 8.25;
int main()
{
    double nabavnaCena, porez, prodajnaCena;

    cout<<"Unesite nabavnu cenu: ";
    cin>>nabavnaCena;
    cout<<endl;

    cout<<setprecision(2)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint);

    porez = (nabavnaCena * STOPAPOREZA) /100;
    prodajnaCena = nabavnaCena + porez;

    cout<<"Nabavna cena je:  "<<nabavnaCena<<endl;
    cout<<"Porez je: "<<setw(13)<<porez<<endl;
    cout<<"Prodajna cena je: "<<prodajnaCena<<endl;

}
