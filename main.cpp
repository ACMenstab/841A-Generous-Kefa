#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int n,k;
    char input_char; /* Read string char by char */

    /* Initialize the values of the table */
    int chars_occurences[26] = {0};
    
    cin>>n>>k;
    
    /* Count occurences of each char */
 for(int i = 0; i < n; i++){
          cin>>input_char;

          /* ASCII of char - ASCII of 'a' gives back a number between  0 and 25 */
          chars_occurences[(input_char-'a')]++;
    }
    
    /* Check the occurence of each char */
    for(int i = 0; i < 26; i++){
          if(chars_occurences[i] > k){
                cout<<"NO";
                return 0;
          }
    }
    
    cout<<"YES";
    return 0;
}

