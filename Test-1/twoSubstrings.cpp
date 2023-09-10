/*
Two Substrings
You are given a string S. Your task is to determine if the given string S contains two non-overlapping substrings "AB" and "BA" (the substrings can go in any order). Print "YES" or "NO".
The string S contains uppercase Latin letters only.

Input format :
Line 1: String S

Output format :
YES or NO

Constraints :
1 <= n (Length of String s) <= 10^5

Sample Input 1 :
ABA
Sample Output 1 :
NO

Sample Input 2 :
BACFAB
Sample Output 2 :
YES

Sample Input 3 :
AXBYBXA
Sample Output 3 :
NO
*/

#include <stdio.h>
#include <string.h>
using namespace std ;
void twoSubstrings(char *s)
{
    // Write your code here
    int length = strlen(s);

    int found_AB = 0 , found_BA = 0 ;

    for(int i = 0 ; i < length -1 ; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
           for(int j = i+2 ; j < length -1 ; j++)
           {
               if(s[j] == 'B' && s[j+1] == 'A'){
                   cout << "YES\n";
                   return ;
               }
           }
        }
    }
     for(int i = 0 ; i < length -1 ; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'A')
        {
           for(int j = i+2 ; j < length -1 ; j++)
           {
               if(s[j] == 'A' && s[j+1] == 'B'){
                   cout << "YES\n";
                   return ;
               }
           }
        }
    }

  
        cout <<"NO\n";
}
