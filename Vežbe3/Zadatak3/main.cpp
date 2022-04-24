#include <iostream>

using namespace std;

int main()
{
    int broj;
    cin>>broj;
    int i, j;
    for(i = 1; i<=broj; ++i){
        cout<<endl;
        for(j = 1; j <= i; ++j)
            cout<<"X";
    }
    return 0;
}
