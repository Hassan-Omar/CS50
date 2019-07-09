
# include <stdio.h>
# include <cs50.h>

int main(void) 
{
    
    for(int i=0; i<10 ; i++)
        {
            int score = get_int("score 1: ") ; 
            printf("score %i" , score) ;
        }
}