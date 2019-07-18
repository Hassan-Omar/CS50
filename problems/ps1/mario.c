#include <cs50.h>
#include <stdio.h>

// proto method to draw the pyramid 
void draw(int h);

int main(void)
{     
     bool flag = false ;  // this will be true if the height +ve 
     
    // loop while the user enter a +ve height 
     while(!flag)
     {     
         // this hold the value of height of the pyramid 
         int height = get_int("Enter the height : ");
         
         if(height>0)
         {   
             // new line 
             printf("\n");
             // invoke draw to draw the pyramid 
             draw(height);
             flag = true ; 
         }
         else
         {
             flag = false ; 
         }
     
     }
    
     
}

void draw(int h)
{
    for(int i=0; i<h; i++)
    {
        for(int j=h-1; j>=0 ;j--)
        {
            if(i>=j)
                printf("#");
            else 
                printf(" ");
        }
        printf("\n");
    }
}
