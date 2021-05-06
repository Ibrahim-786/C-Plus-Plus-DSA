/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int binary_search(int arr[6],int key, int size ){
    
    int l =0 ;
    int h = size;
    int index = -1;
    int mid;
    
    while(l<= h){
        
         mid = (l+h)/2;
        if(key == arr[mid])
        {
             index= mid;
             return index;
        }
        else if(key<arr[mid]){
            h= mid-1;
            
        }
        else{
            l= mid+1;
            
        }
            
   
    }
     return index;
    
}
void sort_inasending_order(int arr[6],int size){

    
    for(int i = 0 ; i<size; i++){
        for(int j = 0; j<size; j++)
        {
            int temp1 ;
            if(arr[i]<arr[j])
            {
                temp1= arr[i];
                arr[i]=arr[j];
                arr[j]= temp1;
            }  
        }
     }
    printf("\n printing array after sorting \n");
     
     for(int i = 0 ; i<size; i++)
        printf("%d  ", arr[i]);
          
}

int main()
{
    int arr[6]= {1,2,54,6,7,5};
     int x= sizeof(arr)/4;
     printf("\n sizeof array is %d", x);
    
     sort_inasending_order(arr,x);
     
     printf("\n printing array after sorting \n");
     
     for(int i: arr)
        printf("%d ", i);
    
    int key;
    printf("\nplease enter key \n");
    cin>>key;
    
    if(binary_search( arr,key,  x) == -1){
        printf("\nkey not found\n");
    }
    else{
        printf("\n key found at index %d", binary_search( arr,key,  x) );
    }
    
    return 0;
}
