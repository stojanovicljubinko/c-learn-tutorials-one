#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char znak;
    int brojac = 0;
    cout<<"Unesite znak i na kraju pritisnite enter: "<<endl;

    while((znak = cin.get()) !=EOF){
        ++brojac;
        while((znak = cin.get()) != '\n')
            ++brojac;
    }
    cout<<"\nUneli ste: "<<brojac<<endl;
    return 0;
    }
