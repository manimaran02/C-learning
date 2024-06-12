#include <iostream>
using namespace std;

int magic(int N){
    int sum = 0;
    int last;
    while(N > 0){
        last = N % 10;
        sum = sum + last;
        N = N/10;
    }
   return sum; 
}



int main(){

// Factorial
    // int N;
    // cin >> N;
    // int fact = 1;
    // int i =1;

    // while(i <= N){
    //     fact = fact*i;
    //     i++;
    // }
    // cout << fact << endl;

// Prime Number

    int N;
    cin >> N;
    // int sum = 0;
    // int last;
    // while(N > 0){
    //     last = N % 10;
    //     sum = sum + last;
    //     N = N/10;
    // }

    // cout << sum << endl;
    // int given = N; 
    // int rev;
    // int last;
    // while(N != 0){
    //     last = N % 10;
    //     rev =rev * 10 + last;
    //     N = N /10;
    // }
    //  cout << "Rev " << rev << endl;

    // if(given == rev)
    //     cout << "Palindrome" << endl;
    // else
    //     cout << "Not Palindrome" << endl;    

    // int val = magic(N);
    // cout << val << endl;   
    while(N >= 10){
    N = magic(N);
    cout << N << endl;

    }

if(N == 1){
    cout << "Magic" << endl;
}
else{
    cout << "Not Magic" << endl;
}


    return 0;

}