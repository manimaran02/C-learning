#include <iostream>
using namespace std;

int main(){

    string a = "abcdefghijklmnopqrstuvwxyz";
    for(int i =0;i<a.length();i++){
        cout << a[i] <<  i <<  " - " << (int)a[i] << endl;
    }

    return 0;
}
