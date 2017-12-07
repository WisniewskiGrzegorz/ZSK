#include <iostream>

using namespace std;

int main()
{
    string haslo="zsk",x;

    int i;

    for (i=1;i<=3;i++) {
        cout<<"Podaj haslo"<<endl;
        cin>>x;
        if (x==haslo && i<=3 ) {
            cout<<"Gratuluje odgadles haslo za "<<i<<endl;
            break;
        }
        if (i==3 && x!=haslo) {
            cout<<"NIE ODGADLES HASLA"<<endl;
            break;
        }
    }

return 0;
}
