#include <iostream>
using namespace std;
int main () {
    //prima atau bukan
    int x,y;
    bool angka_prima=true;
    cout<<"masukkan angka: ";
    cin>>x;
    if (x==0 && x==1)
    {
        angka_prima=false;
    }
    else {
        for (y=2; y<=x/2; y++) {
            if (x %y == 0) {
                angka_prima=false;
            }
        }   
    }
    if (angka_prima)
    cout<<x<<" merupakan angka prima"<<endl;
    else
    cout<<x<<" bukan angka prima"<<endl;
    //ganjil atau genap
    if (x%2==0)
    {
        cout<<x<<" merupakan angka genap "<<endl;
    }
    else {
        cout<<x<<" merupakan angka ganjil "<<endl;
    }
    return 0;
}