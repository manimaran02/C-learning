#include <iostream>
#include <cstring>

using namespace std;


void copy_me(char des[],char src[]){
    int i = 0;
    while(src[i] != '\0'){
        des[i] = src[i];
        i++;
    }

    cout << des;
}

void toggle_Case(char ch[]){

// 1. Traverse the array

    int i =0;
    int UA = 'A';
    int la =  'a';
    int diff = la - UA;

    while(ch[i] != '\0'){

        
        //check the  ASCII value A = 65, 'a' = 97

        if(ch[i] >= UA && ch[i] <= UA+25){
            ch[i] = ch[i] + diff;
        }
        else{
            ch[i] = ch[i] - diff;
        }
        i++;
    }

    cout << ch << endl;

}


int main(){

    // char ch[100];
    // cin >> ch;

    // //ScAlEr  -->  sCaLeR
    // toggle_Case(ch);
    char src[100] = {'H','e','l','l','o'};
    char des[100];

   

    // cout << strlen(src) << endl;
    // copy_me(des,src);

    // cout << des;
    
    // cout << strcmp("mani","Mani");
    cout << (char)43 << endl;
    cout << (int)'s' - (int)'H' ;

    return 0;
}
