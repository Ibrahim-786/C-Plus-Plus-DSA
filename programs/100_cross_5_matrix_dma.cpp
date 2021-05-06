/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World\n";
    
    int **ptr= new(nothrow) int*[100];
    
    for(int i = 0 ; i<100; i++){
        ptr[i] = new(nothrow) int[5];
    }
   
    int x =10;
    for(int i = 0 ; i<100; i++){
           
        for(int j = 0 ; j<5; j++){   
            ptr[i][j] = x;
        }
        x++;
    } 
    
    
    
    printf("100 rows and 5 coloumns matrix \n");
        for(int i = 0 ; i<100; i++){
           
            for(int j = 0 ; j<5; j++){   
                printf("%d ",ptr[i][j]);
            }
            printf("\n");
        } 
        
    for(int i = 0 ; i<100; i++){
           
            for(int j = 0 ; j<5; j++){   
               delete  ptr[j];
            }
      
    }  
    
    
        // for(int i = 0 ; i<100; i++){
    
        //   delete  ptr[i];
        
        // }
        delete[]  ptr;
    

    return 0;
}
