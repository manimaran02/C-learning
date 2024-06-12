#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int count =0;
        // int N,M;
        // cin >>  N;
        // cin >> M;
        // for(int i = N;i <= M;i++){
        //     if(i % 2 ==0)
        //         cout << i << endl;
        // }

        // for(int i=1;i<=1001;i+=100){
        //     cout << i << endl;
        //     count++;
        // }

        // cout << count << endl;

        // int N;
        // cin >> N;
        // int val = 1;

        // Time complexity -> N
        // for(int i=0;val < N;i++){
        //     cout << val << endl;
        //     val = val * 2;
        // }


        // Time complexity -> log_2(N) + 1
        // for(int val =1;val < N;val *=2)
        //     cout << val << endl;

    //     int num = 2;
    // int val = 1;
    // for(int i =0;i<=20;i++){
    //     cout << val << endl;
    //     val = val * 2;
    // }
        // cin >> num;
        // for(int i =0;i <= 5;i++){
            
        //     cout << pow(num,i)<< endl;
        // }

        // int m;
        // cin >> m;
        // int result = m*(m+1)/2;
        // cout << result << endl;
        // int val;
        // for(int i=0;i <= m;i++)
        //     val+=i;
        // cout << val << endl;    

        //Factorial
        int factorial = 1;
        int N;
        cin >> N;
        for(int i =1 ;i< N;i++){
           
            factorial *=i;
        }
         cout << factorial << endl;
        cout << "Mani" << endl;
        return 0;
}