
#include <stdio.h>
#include <stdlib.h>
 
//method to find number in array 
void sort (int arr[] , int status) ; 
 
// method to print integer array 
void print_Array (int x[]);

// method to swap integer 
void swap(int *x , int *y );

// method to find the smallest or largest value in array if status = 0  return the smallest else return the largest   
int find_SL (int x[] , int start , int status);

int main(void) 
{
    // define input array not sorted 
    int input[] = {2,8,4,1,9,5,3,6,7} ;
    
    
    printf("Original Oreder        ");
    print_Array(input) ;
    printf("\n\n\n");
    
    

    sort(input , 0 ); 
    // printing the array
    printf("_________________________________________________ \n     Ascending Oreder        ");
    print_Array(input) ;
    printf("\n_________________________________________________ \n");
    
    
    sort(input , 1 ); 
    // printing the array
    printf("_________________________________________________ \n     descending Oreder        ");
    print_Array(input) ;
    printf("\n_________________________________________________\n");
    
   
    
  
    
}


void sort(int arr[] , int status) 
{   
    // length of our input 
    int n = sizeof(&arr); 
    
    for(int i=0; i<n ; i++)
    {   printf("Iterition index : %i \n" ,i);
        // now we need to select the smallest or the largest 
        int sl_Index = find_SL(arr,i,status);
        if ( !( (sl_Index>n+1) || (sl_Index < 0 ) ) )
            swap(&arr[i] , &arr[sl_Index]) ; 
        print_Array(arr);
        printf("\n");

        
    
    } 
    
    
}

// method to swap integer 
void swap(int *x , int *y )
{   printf("swap %i %i   ---->  " , *x , *y);
    int temp = *x ; 
    *x = *y ; 
    *y = temp ; 
}
 
// method to print integer array 
void print_Array (int x[])
{
    int end = sizeof(&x)+1; 
     for(int i=0 ; i<end; i++)
    {   
        printf("%i " , x[i]);
    }
}

// method to find the smallest or largest value in array  
int find_SL (int x[] , int start , int status)
{   
    // define and initilize the retuened value 
    int out_value = x[start]; 
    int index ; 
    
     for(int i=start , n=sizeof(&x)+1 ; i<n; i++)
    {   
        for(int j=start; j<n; j++)
            {
                if(status == 0)
                {
                    if( (x[i] < x[j] ) && (out_value > x[i]) )
                        {
                            out_value = x[i] ; 
                            index = i ;
                            
                        } 
                }
                else 
                {
                    if( (x[i] > x[j]) && (out_value < x[i]))
                        {
                            out_value = x[i] ; 
                            index = i ; 
                            
                        }
                }
            } // end of inner loop 
    } //end of outer loop
    
    return index ; 
}








