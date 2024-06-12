#include <iostream>
using namespace std;

void swap1(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
   int n = 6;
    int arr1[n] = {3,2,1,7,6,5};
    int arr2[n];
    int k;
    cin >> k;
    int j = 0;
    
    for(int i =0;i<n;i++){
        cout << arr1[(i+k)%n] << " ";
    }
    
    // for(int i = n-1;i>=0;i--){
    //     arr2[j] = arr1[i];
    //     j++;
    // }

    // for(int i =0;i<n;i++){
    //     cout << arr2[i] << " ";
    // 
    // for(int i =0;i<n/2;i++){
    //     swap1(arr1[i],arr1[n-i-1]);
    // }
    //     cout <<endl;
    // for(int i = 0; i<n;i++){

    //     cout << arr1[i] << ' ';
    // }

    // Second largest
    // int max1 = -1;
    // int max2 =-1;
    // for(int i = 0;i<n;i++){
    //     if(arr1[i] > max1){
    //         max2 = max1;
    //         max1 = arr1[i];
    //     }
    //     else if(arr1[i] > max2){
    //         max2 = arr1[i];
    //     }
        
    // }
    // cout << max2;


    // Left Rotate
    
//     for(int j =0;j<12;j++){
//     int temp = arr1[0];
//     for(int i =0;i<n;i++){ 
//             arr1[i] = arr1[i+1];
//     }
//     arr1[n-1] = temp;
// }
//     for(int i =0;i<n;i++){
//         cout << arr1[i] << " ";
//     }
    return 0;
}