/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


extern "C"{
    #include<stdlib.h>
}



using namespace std;



int main()
{


    cout<<"dynamic memory allocation in c/c++ \n";
    
    int *ptr;
    
    
    ptr= (int*) malloc(2*sizeof(int));
    
    printf("address of pointer before free :%lu \n", ptr);
    
    for(int i =0 ; i<2; i++)
    {
        ptr[i]= 10;
    }
    
    for(int i =0 ; i<2; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    
    free(ptr);
    printf("\n address of pointer after free :%lu \n", ptr);
    
    ptr= nullptr;
    
    printf("\n address of pointer null pointer assignment :%lu \n", ptr);
    
    ptr= (int*) calloc(10,sizeof(int));
        for(int i =0 ; i<10; i++)
    {
        ptr[i]= 50;
    }
    
    for(int i =0 ; i<10; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    free(ptr);
    printf("\n address of pointer after free :%lu \n", ptr);
    
    ptr= nullptr;
    
    printf("\n address of pointer null pointer assignment :%lu \n", ptr);
    
    ptr= (int*) realloc(ptr,20 * sizeof(int));
    

    for(int i =0 ; i<20; i++)
    {
        ptr[i]= 200;
    }
    
    for(int i =0 ; i<20; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    free(ptr);
    printf("\n address of pointer after free :%lu \n", ptr);
    
    ptr= nullptr;
    
    printf("\n address of pointer null pointer assignment :%lu \n", ptr);
    
    
    return 0;
}
