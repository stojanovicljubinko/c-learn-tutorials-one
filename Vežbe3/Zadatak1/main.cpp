#include <iostream>

using namespace std;

int main()
{
    char znak;
    int brojac = 0;
    cout<<"Unesite znak i na kraju pritisnite enter: "<<endl;

    znak = cin.get();
    while(znak!= '\n')
    {
        ++brojac;
        znak = cin.get();
    }
    cout<<"\nUneli ste: "<<brojac<<endl
        return 0;
}
