#include <cs50.h>
#include <stdio.h>
// method to select the proper coin should i use
int select_Coin (int cents);
// round is a method round to 2 digits  ;
float round_2digits(float var) ;

int main(void)
{
     bool flag = false ;
     while(!flag)
     {   float dollars = get_float("Enter cash  ");
         if(dollars > 0)
         {
             // holds the value owned
             int cents = round_2digits(dollars*100);

             int coins_Counted = 0;
             while(cents>0)
             {   // select the largest coin
                 int selected = select_Coin(cents);
                 // increase number of coins
                 coins_Counted++;
                 printf("coin no %i is %i cent \n",coins_Counted,selected);
                 // update cents
                 cents-=selected ;

             }

             printf(" Total coins %i \n",coins_Counted);
             flag=true ;
         }
         else
         {
             flag = false ;
             printf("foo \n");
         }
     }
}
// method to select the proper coin should i use
int select_Coin (int cents)
{
    // this method select  the largest coin
    if(cents >= 25)
        return 25 ;
    else if( (cents>=10) && (cents <25) )
        return 10 ;
    else if( (cents>=5) && (cents <10) )
        return 5 ;
    else return 1 ;

    return 1 ;
}

float round_2digits(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =37.6716    for rounding off value
    // then type cast to int so value is 3766
    // then divided by 100 so the value converted into 37.66
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}