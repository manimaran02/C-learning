#include <iostream>
using namespace std;

const int ZEN_MODE = 1;
const int NORMAL_MODE = 0;
const int EXIT_MODE = -1;


int factorial(int x){
    int fact = 1 ;
    for(int i =1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}

int zeros_end(int N){
      int val = N;
    int zeros;
    while(N > 0){
        zeros  += N/5;
        N = N/5;
    }
    return zeros;
}



int zen(){
    string s;
    cin >> s;
    if(s == "normal"){
        return NORMAL_MODE;
    }
    else if(s == "exit"){
        return EXIT_MODE;
    }
    int x;    
    x = stoi(s);
    string str;
    cin >> str;
    if(str == "+"){
        int y;
        cin >> y;
        cout << (x+y) << endl;
    }
    else if(str == "-"){
        int y;
        cin >> y;
        cout << (x-y) << endl;
    }
    else if(str == "*"){
        int y;
        cin >> y;
        cout << (x*y) << endl;
    }
    else if(str == "/"){
        int y;
        cin >> y;
        cout << (x/y) << endl;
    }
    else if(str == "!"){
       cout << factorial(x) << endl; 
    }
    else if(str == "!!"){
        cout  << zeros_end(x) << endl; 
    }
    return ZEN_MODE;
    
}


int normal(){
while(true){
    cout <<"\t1. Add two numbers :" <<endl;
    cout <<"\t2. Subtract two numbers :"<< endl;
    cout <<"\t3. Multiply two numbers :" <<endl;
    cout <<"\t4. Divide two numbers :"<< endl;
    cout <<"\t5. Factorial of a numbers :" <<endl;
    cout <<"\t6. Numbers of zero at end of factorial :"<< endl;
    cout <<"\t7  Enter zen mode :"<< endl;
    cout <<"\t8. Anything else to exit :"<< endl;
    
    cout << "Enter the Choices : ";
    int choices;
    cin >> choices;

    if(choices >=1 && choices <= 4){
        cout << " Enter two numbers "<< endl;
        int x,y;
        cin >> x >> y; 
   
   if(choices == 1){
        cout << x << " + " << y << " = " << (x+y) << endl;
    }
   else if(choices == 2){
        cout << x << " - " << y << " = " << (x-y) << endl;
    }
    else if(choices == 3){
        cout << x << " * " << y << " = " << (x*y) << endl;
    }
    else if(choices == 4){
        cout << x << " / " << y << " = " << (x/y) << endl;
    }
    }
else if(choices == 5){
    cout << "Enter the numbers : ";
    int x;
    cin >> x;
    
    cout << x << "!" << " = " << factorial(x) << endl; 
}

else if(choices == 6){
    cout << "Enter the numbers :";
    int N;
    cin >> N;
  
    cout << N << "!! =" << zeros_end(N) << endl; 

}
else if(choices == 7){
    return 1;
}
else{
    return EXIT_MODE;
}

}

return NORMAL_MODE;

}


int main(){

int mode = NORMAL_MODE;
while(true){
if(mode == NORMAL_MODE)
  mode = normal();
else if(mode == ZEN_MODE)
   mode =  zen(); 
else if(mode == EXIT_MODE)
    break;      
}

cout << "Thanks for using calculator ^_^"<<endl;
 


} 


