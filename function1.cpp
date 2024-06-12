#include <iostream>
using namespace std;


// int a = 65; // Global Variable

int val(int n){
    return n;
}

float divide(int &num,int &den){
    float result;
    if(den == 0){
        return 0;
    }
    else{
        result = (float)num/(float)den;
        cout << &num << endl << &den << endl;
    }

    return  result;

}


int main(){
    // int a = 5;
    // int b = 10;
    // if(a < 6){
        
    //     int b = 12;
    //     cout << b << endl;
    
    // }
    // cout << a << endl;
    // cout << ::a << endl;
    // cout << "Manimaran" << endl;
    // int i =50;
    // for(int i = 0 ; i < 5;i++){
    //     cout << i << endl;
    // }
    // cout << i << endl;
    int a= 10;
    int b = 5;
   
    cout << divide(a,b) << endl;
     cout << &a << endl << &b << endl; 

    return 0;
}


// 0x5ffe70
// 0x5ffe78
// 2
// 0x5ffe9c
// 0x5ffe98