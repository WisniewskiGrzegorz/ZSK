#include <iostream>

using namespace std;
#include <math.h>

int main()
{
  double a, b, c, delta, x1, x2, x;
  cout<< "Podaj a, b, c,"<<endl;
  cin>>a>>b>>c;
   if (a==0)
  cout<<"to nie jest równanie kwadratowe"<<endl;
  else {
   delta=b*b-4*a*c;
   if (delta<0) cout<<"równanie nie ma pierwiastków"<<endl;
   else {
    if (delta==0){ x=b/(2*a);
    cout<<"x= "<<x<<endl;
    }

  else{
   x1=(-b-sqrt(delta))/(2*a);
   x2=(-b+sqrt(delta))/(2*a);
   cout<<"x1="<<x1<<endl;
   cout<<"x2="<<x2<<endl;
}
   }
    return 0;
}}
