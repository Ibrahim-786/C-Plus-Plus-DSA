/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int gcd_for_two_number(int x,int y){
    
    
    int l ;
    
    if(x<y){
        l =x;
    }
    else
    {
        l = y;
    }
    
    
    while(l){
        
        if(x%l==0 && y%l==0){
            break;
        }
        l--;
        
    }
     return l;
}



int main()
{
    cout<<"Hello World\n";
    
    printf("please enter two number \n");
    
    int x,y;
    cin>>x>>y;
    
    cout<<"the gcd os two number is: "<<gcd_for_two_number(x,y);
    
    
  
    return 0;
}
