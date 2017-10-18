#include <iostream>


using namespace std;

int main()
{
 int a, b, c, d, najmniejsza;
 cout<<" Podaj a"<< endl;
 cin>>a;
 cout<<" Podaj b"<< endl;
 cin>>b;
 cout<<" Podaj c"<< endl;
 cin>>c;
 cout<<" Podaj d"<< endl;
 cin>>d;
  najmniejsza=a;
   if (b<najmniejsza){
        najmniejsza=b;
   }
   if (c<najmniejsza){
        najmniejsza =c;
   }
    if (d<najmniejsza){
        najmniejsza =d;
   }
cout<<endl<<"najmniejsza liczba wynosi: "<<najmniejsza;
    return 0;

}
