#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

// proto Type of encription method
string cipher_decipher (string msg , int _key );
// linear search
int l_search(string arr ,char target ) ;
// global alpha array
string abc = "abcdefghijklmnopqrstuvwxyz" ;

 // Function to count a string without the spaces from a given string
int count_Letters(string str)  ;

int main(int argc, string argv[])
{
    string key = argv[1];

    string msg = get_string("plaintext : ") ;
    // now we need to repeat the key
    int msg_Length = count_Letters(msg);
    int key_Length = strlen(key);


    char repeated_key[msg_Length];

    // this tell us if the message not encrypted
    bool flag =true ;
    int count =0 ;
    // loop while end of string
    for(int i=0,len=strlen(msg); i<len; i++)
    {
        // get numeric values opposite to p,k no i th
        int p = l_search( abc, msg[i] ) ;

        // check if p found or not
            if(p!=-1)
            {
                 int k = l_search( abc, key[count%key_Length] ) ;
                  //printf("i%i p%i %c k%i %c  \n",i,p,abc[p],k,key[i]);
                  if(k == -1)
                  {
                      flag = false ;
                      break ;
                  }
                // apply relation --->  c = (p+k) mod 26
                 int c = ( p+k )%26;
                 msg[i] = abc[c] ;
                count++;
            }

    } // end of looping on string

    if(flag)
        printf("Cipher Text : %s \n" , msg) ;
    else
        printf("You must enter key as a word ");

}

 // linear search return -1 if not found
int l_search(string arr ,char target )
{
    for(int i=0 ; i<26 ;i++)
        if(arr[i] == target)
            return i;

    return -1 ;
 }


// Function to count a string without the spaces from a given string
int count_Letters(string str)
{
    int out = 0;

    for (int i = 0 ,n = strlen(str) ; i<n ; i++)
        if (str[i] != ' ')
            out++ ;

    return out ;
}
