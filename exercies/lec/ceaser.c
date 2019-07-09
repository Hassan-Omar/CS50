#include <stdio.h>
#include <string.h>
#include <cs50.h>

int key = 5 ; // hold the vakue of k we will cipher using this

// proto Type of encription , decription mehod if status 0 --> encription else decription 
string cipher_decipher (string msg , int _key , int status);

int main(void)
{
    string msg = get_string("Enter_msg :") ;
    
    string enc_Msg = cipher_decipher ( msg , key ,0);
    printf("\n\nEncription %s \n",enc_Msg);
    
    printf("Decription %s \n ",cipher_decipher ( enc_Msg , key ,1));
    
}

// now we need to implment the method 
string cipher_decipher (string msg , int _key , int status)
{
    int i=0 ;
    // loop on the string 
    while(msg[i]!= '\0')
    {
        int val = 0 ;// new value of the cipher  character as a number 
        
        if(status==0)
            val = (int)msg[i] + key ;  
        else
            val = (int)msg[i] - key ; 
            
        // cast to charcter     
        msg[i] = (char)val ; 
        
        i++; // icreament the index 
    }
    
    return msg ;
}
     