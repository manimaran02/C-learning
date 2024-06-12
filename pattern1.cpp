#include <iostream>
using namespace std;




int main(){
    int N;
    cin >> N;
/*
1
12
123
1234
12345
*/

    //  for(int i = 1; i<=N;i++){
    //     for(int j = 1;j <=i;j++){
    //         cout<< j  << " ";
    //     }
    //     cout << endl;    
    // }
 
 
 /*
 12345
 1234
 123
 12
 1
 */   

    //  for(int i = 1; i<=N;i++){
    //     for(int j = 1;j <=(N-i)+1;j++){
    //         cout<< j  << " ";
    //     }
    //     cout << endl;    
    // }
        
        
        /*
        * * * * *
        *     *
        *   *
        * *
        * 
        
        */


    //   for(int i = 1; i<=N;i++){
    //     for(int j = 1;j <=(N-i)+1;j++){
    //          if(i == 1 || j == 1 || j == N-i+1){
    //             cout<< "* ";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //     }
    //     cout << endl;    
    //     }

  for(int i = 1; i<=N;i++){
        for(int j = 1;j <=N-i;j++){
            cout<< " ";
        }
        for(int k = 1; k<=i;k++){
            cout << "* ";
        }
        cout << endl;    
    }


//Binary To Decimal




  
//  for(int i = 1; i<=N*2;i++){
//         if(i<=N){
//         for(int j = 1;j <=(N-i)+1;j++){
//             cout<< j  << " ";
//         }
//         }
//         else{
//              for(int j = 1;j <=i-N;j++){
//               cout<< j  << " ";
//         }
//         }
//         cout << endl;    
//     }
    
    // int binary;
    // cin >> binary;
    // int  sum = 0;
    // int last_digit;
    // int pow_2 = 1;

    // while(binary > 0){
    //     last_digit = binary % 10;
    //     sum = sum + last_digit * pow_2;
    //     binary = binary/10;
    //     pow_2 = pow_2 * 2; 
    // }
    // cout << sum << endl;



    return 0;
}