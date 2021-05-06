/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int arr[32] = {0};
int (*decimal_to_binary(int num))[32]{
    
    int temp = num;
    
    int j = 0;
    for(int i= 31; i>=0; i--){
        arr[j] = (temp>>i)&1;
        j++;
        
    }
    
    return &arr;
}


int main()
{
    
    int num;
    cin>>num;
    int (*arr)[32]= decimal_to_binary(num);
    
    
    printf("decimal to binary : ");
    
    for(int i = 0 ; i<32; i++){
        printf("%d",(*arr)[i]);
    }
   

    return 0;
}
