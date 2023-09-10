/*
Pangram
A word or a sentence is called a pangram if all the characters of this language appear in it at least once. You are given a string s consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. Print "YES" or "NO".
We say that the string contains a letter of the Latin alphabet, if this letter occurs in the string in either uppercase or in lowercase.

Input format :
Line 1 : n (Number of characters in string)
Line 2 : Input string s

Output format :
YES or NO

Constraints :
1 <= n <= 100

Sample Input 1 :
12
toosmallword

Sample Output 1 :
NO

Sample Input 2 :
35
TheQuickBrownFoxJumpsOverTheLazyDog

Sample Output 2 :
YES
*/

#include <iostream>
#include <string>
using namespace std ;

void ans (int n, string S)
{
    // Write your code here
    bool present[26] = {false} ;

    for(char c :S){
        if(isalpha(c) ){
            char lowercase_c = tolower(c);
            present[lowercase_c-'a'] = true ;
        }
    }

    bool isPangram = true ;

    for(int i = 0 ; i < 26 ; i++){
        if(!present[i])
        {
            isPangram = false ;
            break; 
        }
    }

    if(isPangram){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
