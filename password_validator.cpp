#include <iostream>
using namespace std;


int main(){
    string a;
 cin >> a;
    char uppercase = 'A';
    char lowercase = 'a';
    char num = '0';
    bool up =false;
    bool low = false;
    bool num1 =false;
    bool symbol = false;
    string sym = "@#$^_";
    
    int upper = (int)uppercase;
    int lower = (int)lowercase;
    int number = (int)num;
    if(a.length() >=10){
        for(int i =0;i<a.length();i++){
            // cout << (int)a[i]  << " " << a[i] << endl;
            if((int)a[i] >= upper && (int)a[i] <= upper+26 ){
                up = true;
                // cout << up <<" upper" << endl;
            }
            else if((int)a[i] >=lower && (int)a[i] <= lower+26){
                low = true;
                // cout << low <<" lower" << endl;
            }
            else if((int)a[i] >=number && (int)a[i] <=number+9){
                num1 = true;
                // cout << num1 << " number"<< endl;
            }
            else{
                
                for(int j = 0; j < sym.length();j++){
                    
                    if(a[i] == sym[j]){
                        symbol = true;
                        // cout << symbol <<" symbol" << endl;
                    }
                }
            }
        }
    }
    if((up && low && num1 && symbol) == true){

        cout << "Valid" << endl;
    }
    else{
        cout << "Not a valid" << endl;
    }
    return 0;
}