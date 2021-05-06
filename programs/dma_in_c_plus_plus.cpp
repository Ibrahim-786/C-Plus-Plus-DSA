/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"DMA c++ \n";
    
    int size;
    printf("please enter the size of heap array: \n");
    
    scanf("%d",&size);
      int *ptr;
    
    cout<<"before dma allocation :"<<ptr<<"\n";
    ptr = new int[size];
   cout<<"after dma allocation :"<<ptr<<"\n";
    for(int i = 0; i<size; i++){
        
        ptr[i] = 2020;
    }
    
    for(int i = 0; i<size; i++){
        
        cout<<ptr[i]<<" "; 
    }
       cout<<"before delete :"<<ptr<<"\n";
    delete[] ptr;
    cout<<"after delete :"<<ptr<<"\n";
    ptr = nullptr;
    cout<<"after nullptr assignment :"<<ptr<<"\n";

    return 0;
}
