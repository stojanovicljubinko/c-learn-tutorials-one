#include <iostream>
#include <iomanip>

using namespace std;
int const CENARADNOGSATA = 44;
int main()
{
    float cenaDelova, ukupnaCena;
    int radniSati;

    cout<<"Unesite broj radnih sati: ";
    cin>>radniSati;
    cout<<endl;

    ukupnaCena = cenaDelova + (radniSati * CENARADNOGSATA);
    cout<<"Cena delova: "<<setw(17)<<cenaDelova<<endl;
    cout<<"Cena rada: "<<setw(8)<<radniSati<<endl;
    cout<<"-------------------------\n";
    cout<<"Ukupna cena: "<<setw(17)<<ukupnaCena<<endl;
    return 0;
}

