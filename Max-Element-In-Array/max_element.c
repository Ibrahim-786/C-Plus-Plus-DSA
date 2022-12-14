 #include<stdio.h>





 struct mydata{
     int sum;
     int element_count;
     int flag;

 };

int find_max_elements(int array_count, int* array) {
    
    struct mydata data[array_count-1];
    
    for(int i=0;i<array_count-1;i++)
    {
        data[i].sum = 0;
        data[i].element_count = 1;
        data[i].flag = 0;
    }
    printf("%d\n", array_count);
    
    int target = array[0];
    printf("\n target: %d\n",target);
    
    for(int i=1;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            int temp;
            if(array[i] >array[j])
            {
                temp = array[i];
                array[i]= array[j];
                array[j] = temp;
                
            }
        }
    }
    
    int x=0;
    
    for(int i=1;i<array_count;i++)
    {
        data[x].sum+=array[i];
        for(int j=i+1;j<array_count;j++)
        {
            if(data[x].sum== target )
            {
                
                data[x].flag =1;
                data[x].element_count++;
                
                break;
            }
            
            if( data[x].sum > target)
            {
                  
                break;
            }
            
            data[x].sum+=array[j];
            
             if(data[x].sum== target )
             {
                data[x].flag =1;
                data[x].element_count++;
                 
                break;                       
             }
             
            if( data[i].sum > target)
            {
                  
                break;
               
            }
             
             data[x].element_count++;
            
            
            
            
            
        }
        x++;
        
        
    }
    
    
    printf("data\n");
    
    for(int i=0;i<array_count-1;i++)
    {
        
        printf("sum : %d no_element :%d flag : %d\n",data[i].sum,data[i].element_count,data[i].flag );
    
    
    }
    
    int max =0;
    
    for(int i=0;i<array_count-1;i++)
    {
       if((data[i].flag == 1) && (data[i].sum==target))
       {
           if(max < data[i].element_count)
           {
               max=data[i].element_count;
           }
           
       }
    }
       
    


    return max;
}




int main()
{



int max =0;
int arr[5] = {10,5,5,3,5};

max = find_max_elements(5,&arr[0]);


printf("max is : %d\n", max);


return 0;

}