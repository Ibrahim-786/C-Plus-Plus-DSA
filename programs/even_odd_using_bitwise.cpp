/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


bool even_odd(int num){
    
    bool status = num&1;
    
    return status;
    
}

int main()
{
    cout<<"even and odd using bitwise\n";
    cout<<"please enter the number : ";
    
    int num;
    
    cin>>num;
    
    if(even_odd(num)){
        cout<<"\n the entered number is odd number";
    }
    else{
        cout<<"\n the entered number is even number";
    }
    
    

    return 0;
}
