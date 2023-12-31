/*
Print the pattern
Print the following pattern for the given number of rows.
Pattern for N = 5
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
4
Sample Output :
 1  2  3  4
 9 10 11 12
13 14 15 16
 5  6  7  8
*/

#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here
	int arr[n][n];
	 int ans = 1 ;
	 int up = 0 , down = n-1 ;
	int k = down ;
	 for (int i = 0 ; i < n ; i ++)
	 {
           if (i % 2 == 0) {
             k = up;
			 up++;
           } 
           else if (i % 2 != 0) {
             k= down  ;
			 down-- ;
           }

                 for (int j = 0 ; j < n ; j++)
		 {
			 arr[k][j] = ans ;
			 ans++;
		 }

	 }

	 for (int i = 0 ; i < n ; i ++)
	 {
		 for(int j = 0 ; j < n ; j++)
		 {
			 cout << arr[i][j] << " ";
		 }
		 cout << endl ;
	 }

}
