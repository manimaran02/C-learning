#include <iostream>
using namespace std;


void electriccity_bill_v1(){
    int units;
    int bill;
    cin >> units;
    if(units <=10)
        bill = units * 1;
    else if(units <= 60)
        bill = 10 * 1 + (units - 10) * 2;
    else if(units <= 160)
        bill = 10 * 1 + 50 * 2 + (units - 60) * 2.5;
    else if(units <= 1160)
        bill = 10 * 1 + 50 * 2 + 100 * 2.5 + (units - 160) * 3;
    else
        bill = 10 * 1 + 50 * 2 + 100 * 2.5 + 1000 * 3 + (units -1160) * 5;

    cout << bill << endl;              

}


// void electriccity_bill_v2() {
//     int units;
//     cin >> units; // Input units
//     int remaining_units = units;
//     float bill_amount; // Initialize bill_amount to 0

//     if (remaining_units <= 10) {
//         bill_amount += remaining_units * 1;
//         remaining_units = 0;
//     } else {
//         bill_amount += 10 * 1;
//         remaining_units -= 10;
//     }

//     if (remaining_units <= 50) {
//         bill_amount += remaining_units * 2;
//         remaining_units = 0;
//     } else {
//         bill_amount += 50 * 2;
//         remaining_units -= 50;
//     }

//     if (remaining_units <= 100) {
//         bill_amount += remaining_units * 2.5;
//         remaining_units = 0;
//     } else {
//         bill_amount += 100 * 2.5;
//         remaining_units -= 100;
//     }

//     if (remaining_units <= 1000) {
//         bill_amount += remaining_units * 3;
//         remaining_units = 0;
//     } else {
//         bill_amount += 1000 * 3;
//         remaining_units -= 1000;
//     }

//     if (remaining_units > 0) {
//         bill_amount += remaining_units * 5;
//         remaining_units = 0;
//     }

//     cout << bill_amount << endl;
// }


void electricity_bill_v2(){
    int units;
    cin >> units; // 1000
    int remaining_units = units;
    float bill; 

    if(remaining_units <= 10){ 
        bill += remaining_units * 1;
        remaining_units = 0;
    } else{
        remaining_units -= 10; // 990
        bill += 10 * 1; //10
    }

     if(remaining_units <= 50){ 
        bill += remaining_units * 2; 
        remaining_units = 0;
    } else{
        remaining_units -= 50;  // 940
        bill += 50 * 2; // 10 + 100
    }

    if(remaining_units <= 100){ 
        bill += remaining_units * 2.5;  
        remaining_units = 0;
    } else{
        remaining_units -= 100; // 840
        bill += 100 * 2.5;  // 10 + 100 + 250 
    }

    if(remaining_units <= 1000){  // True 
        bill += remaining_units * 3;  // 10 + 100 + 250 + (840 * 3) =
        remaining_units = 0;
    } else{
        remaining_units -= 100; 
        bill += 1000 * 3; 
    }

    if(remaining_units > 0){
        bill += remaining_units * 5; 
        remaining_units = 0;
    }

    cout << bill << endl;


}


int main(){
    // electriccity_bill_v1();
    // electricity_bill_v2();
    
    int n;
    cin >> n;
    int count;
    for(int i=1;i<=n;i++){
        for(int j = i;j<=n;j++){
            cout << "Mani"<<endl;
            count++;
        }

    }
    cout << count <<endl;

    
    return 0;

}