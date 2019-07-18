#include <stdio.h>
#include <string.h>
#include <cs50.h>

int key = 13 ; // hold the vakue of k we will cipher using this

// proto Type of encription method
string cipher_decipher (string msg , int _key );
// linear search
int l_search(string arr ,char target ) ;
// global alpha array
string abc = "abcdefghijklmnopqrstuvwxyz" ;


int main(int argc, string argv[])
{

    string msg = get_string("Enter_msg :  ");
    string enc_Msg = cipher_decipher (msg , key);
    printf("\n\nEncription Process  %s \n" , enc_Msg);

}

// now we need to implment the method
string cipher_decipher (string msg , int _key )
{

    int i=0 ;
    // loop on the string
    while(msg[i]!= '\0')
    {
        int p = l_search (abc , msg[i]) ;
        // check if the target are found

        if(p>0)
        {
        int val = ( p + key )  % 26  ;

        // cast to charcter
        msg[i] = abc[val] ;

        }


        i++; // icreament the index
    }

    return msg ;
}
 // linear search
int l_search(string arr ,char target )
{

    for(int i=0 ; i<26 ;i++)
    {

        if(arr[i] == target)
        {
            return i ;
        }

    }

    return -1 ;
 }