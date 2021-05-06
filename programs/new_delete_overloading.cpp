/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class count{
    public:
    
    static int c;
    
    count(){
       
    }
    
    void * operator new(size_t size){
        c++;
        
        return malloc(sizeof(count)*size);
        
    }
    
    ~count()
    {
        
    }
    
        void operator delete(void *ptr){
           c--;
        
           free(ptr);
        
        }
    
    
};

int count::c =0;

int main()
{
 
 count c1,c2,c3;
 
 
 count *ptr = new count;
 
 
 cout<<count::c <<endl;
 
 delete ptr;
 
  cout<<count::c <<endl;
 return 0;
}
