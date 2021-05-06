/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binary_to_decimal(string num){
    
    int base = 1; 
    int i;
    int decimal = 0;
    
    for( i = 0; num[i] != '\0'; i++){
        
        
    }
    i--;
    
    for(;i>=0;i--){
        
        int last = (num[i]-'0')%10;
        
        decimal= decimal+base*last;
        base= base*2;
        
    } 
    
    return decimal;
    
}

int main()
{
   string num;
   
   printf("enter only binary values \n");
   
   cin>>num;
   
   cout<<num;
   
   printf(" \n %d",binary_to_decimal(num));
    
    

    return 0;
}
