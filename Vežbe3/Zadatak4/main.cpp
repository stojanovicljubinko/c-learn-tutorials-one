#include <iostream>

using namespace std;

int main()
{
    char znak;
    cin>>znak;
    if(znak >='0' && znak<='9'){
        cout<<"Unesen je broj: "<<znak<<endl;
    }else{
    cout<<"Unesen je znak koji nije broj."<<endl;
    }
    return 0;
}
