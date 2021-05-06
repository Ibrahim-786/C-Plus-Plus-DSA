/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//pass by address or ref and pass by ref pointer
// that is int *p, int & p, int *&p


int *ptr;

void print_change(int * &ptr){
    
    for(int i = 0 ; i <5 ; i++){
        printf("%d ",ptr[i] );
    }
    
    ptr = nullptr;
    
}

int main()
{
    cout<<"Hello World\n";
    
    int arr[5] = {1,2,3,4,5};
     ptr= arr;
    
    printf("\n address of pointer before function call  %x\n",ptr);
    

    
    print_change(ptr);
    
    printf("\n address of pointer after function call  %x\n",ptr);

    return 0;
}
