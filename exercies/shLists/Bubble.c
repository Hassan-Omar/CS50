
# include <stdio.h>
#include <stdlib.h>

// proto type for sorting method ascending order if status=0 else descending order 
void sort(int arr[] , int status) ; 
// method to copy x to y 
void assign(int x[]  , int y[]);
// swap 2 integers 
void swap(int *x , int *y );
// method to print integer array 
void print_Array (int x[]);

int main(void) 
{
    
    
    // define input array not sorted 
    int input[] = {2,8,4,1,9,5,3,6,7} ;
    printf("Original Oreder        ");
    print_Array(input) ;
    printf("\n\n\n");

    
    sort(input , 0 ); 
    // printing the array
    printf("Ascending Oreder        ");
    print_Array(input) ;
    printf("\n");
    
     
    int input2[] = {2,8,4,1,9,5,3,6,7} ;
    sort(input2 , 1 ); 
    printf("Descending Oreder        ");
    print_Array(input2) ;
    printf("\n");

    
    
}    

void sort(int arr[] , int status) 
{   
    // length of our input 
    int n = sizeof(&arr); 
    
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n-1 ; j++)
        {
            // ascending 
            if(status==0)
            {
                if( arr[i] < arr[j] )
                    swap(&arr[i] , &arr[j]);
            }
            
            else
            {
                if( arr[i] > arr[j] )
                    swap(&arr[i] , &arr[j]);
            }
            
            
        } // end of inner loop 
    } // end of outer loop 
    
    
}

// method to swap integer 
void swap(int *x , int *y )
{
    int temp = *x ; 
    *x = *y ; 
    *y = temp ; 
}
 
// method to print integer array 
void print_Array (int x[])
{
     for(int i=0 , n=sizeof(&x) ; i<n; i++)
    {   
        printf("%i " , x[i]);
    }
}