/*
  Print Matrix diagonally
Given a matrix of integers, you need to print it diagonally. Thats is, if input is a 3 x 3 matrix, then order will be -
(0, 0), (0, 1), (1, 0), (2, 0), (1, 1), (0, 2), (1, 2), (2, 1), (2, 2)
For eg. if input is -
 1  2  3
 4  5  6  
 7  8  9
Output : 1 2 4 7 5 3 6 8 9.

Input format :

Line 1 : m (No. of rows) and n (No. of columns)

Next m lines : Each row elements in different line

Output format : Print elements in specified order, separated by space

Sample Input :
4 4
 1  2   3  10
 4  5   6  11
 7  8   9  12
13 14  15  16

Sample Output :
1 2 4 7 5 3 10 6 8 13 14 9 11 12 15 16
*/

// m - number of rows
// n - number of columns

 void printInDiagonalForm(int **arr,int m,int n) {
		//Write your code here

		int row = 0 , col = 0 ;
		bool up = true;
		while(row < m && col < n){
			// If diagonal is going up
			if(up){
				while(row > 0 && col < n-1){
					cout << arr[row][col] << " ";
					row--;
					col++;
				}
					cout << arr[row][col] << " ";
					if(col == n-1)
					{
						row++;
					}
					else{
						col++ ;
					}
			}
			else{
					// if diagonal is goingdown
				while(col > 0 && row < m-1)
				{
					cout << arr[row][col] << " ";
					row++;
					col--;
				}
				cout << arr[row][col]<<" ";
				if(row == m-1)
				{
					col++;
				}
				else{
					row++;
				}
			}
			
		up = !up;
		
		}
	}
