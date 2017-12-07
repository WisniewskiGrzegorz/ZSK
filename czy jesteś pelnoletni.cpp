#include <iostream>

using namespace std;

int main()
{
    int wiek, odpowiedz, TAK, NIE;
    cout<<"podaj wiek"<<endl;
    cin>>wiek;
    if  (wiek >= 18) {
        cout << "Jestes pelnoletni " << endl;
        cout << "Czy pijesz alkohol?" << endl;
        cout << "TAK / NIE"<<endl;
        cin>>odpowiedz;
                if (odpowiedz=TAK){
                    cout<<"To normalne" <<endl;
                }else{
                    cout <<"Jak nie chcesz nikt ciebie nie zmusza"<<endl;
                    }
    }else{

    cout<<"nie jestes pelnoletni" <<endl;
    cout << "Czy pijesz alkohol?" << endl;
    cout << "TAK / NIE"<<endl;
    cin>>odpowiedz;
        if (odpowiedz=TAK){
            cout<<"Nie powienienes" <<endl;

        }else{

            cout <<"To dobrze"<<endl;}}

    return 0;
}
