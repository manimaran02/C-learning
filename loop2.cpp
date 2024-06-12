#include <iostream>
using namespace std;


bool is_prime(int N){
    int count = 0;
    for(int i =1;i<=N/2;i++){
        if(N % i == 0){
            count++;
         if(i != N/i)
            count++;    
        }
    }
    if(count == 2)
        return true;
    else
       return false;    
}


int main(){
    
    int N;
    cin >> N;
    // int count;
    // for(int i = 1 ; i*i <=N;i++){
    //     if(N % i == 0){
    //         count ++;
    //         if(i != N/i)
    //         count++;
    //     }
    // }
    // cout << count << endl;

    for(int i = 1;i <= N; i++){
        if(is_prime(i))
            cout << i << endl;
    }


    return 0;

}
