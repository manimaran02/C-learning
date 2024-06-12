#include <iostream>
using namespace std;

int factorial(int N){
    int fact = 1;
    for(int i= 1;i<=N;i++){
        fact = fact * i;
    }
    return fact;
}


int main(){
    int N;
    cin >> N;
   cout << factorial(N);
    
    return 0;
}