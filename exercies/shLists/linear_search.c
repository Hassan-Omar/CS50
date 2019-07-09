
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

//method to find number in array 
int find_num (int arr[] , int target) ; 
 
// method to print integer array 
void print_Array (int x[]);

int main(void) 
{
     // define input array not sorted 
    int input[] = {2,8,4,1,9,5,3,6,7} ;
    
    printf("My stored Data       ");
    print_Array(input) ;
    printf("\n\n\n");
    
    for (int x = 0 ; x<2;x++)
    {
        int target = get_int("Enter number to search ") ; 
    
   
    int index = find_num(input , target) ; 
    
    // after invoking the method i will check value 
    if(index == -1 )
    printf("not found \n");
    else 
    printf("found  @ %i \n" , index);
    }

    
}


//method to find number in array 
int find_num (int arr[] , int target) 
{
    for(int i=0 , n= sizeof(&arr); i<n ;i++)
    {
        if(target == arr[i])
            return i ; 
    }
    
    return -1 ;
}


// method to print integer array 
void print_Array (int x[])
{
     for(int i=0 , n=sizeof(&x) ; i<n; i++)
    {   
        printf("%i " , x[i]);
    }
}