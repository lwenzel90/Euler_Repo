#include <iostream>
#include <fstream>
#include <string>
#include "main.h"
#include <iomanip>

using namespace std;

void print2DArray(int data[][200], int row, int col) {
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 200; j++) {
			if (data[i][j] != 0) {
				cout << setw(5) << setfill('0') << data[i][j] << " ";// prints out every number with 5 digits
			}
			
		}
		cout << endl;
	}
}

int main() {
	ifstream euler;
	euler.open("euler67.txt"); 
	//finds if the file is open if not ends program 
	if (!euler) {
		cout << "could not find file" << endl;
		system("pause");
		return (1);
	}
	int data[100][200] = { 0 };
	int row = 100, col = 2;
	//fill every other spot with data from file
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if ((j % 2) == 0) {
				data[i][j] = 0;
			}
			else {
				euler >> data[i][j];
			}
		}
		if (col < 200) {
			col += 2;
		}
	}
	int sum = data[0][1], pos = 1, final1 = 0;
	final1 = sum;
	// dynamic programming approach 
	// get the second to last row and for each element find its value if it is added
	// to the adjacent number below it 
	//   1
	//  2 3   =   1   =  12
	// 9 1 1    11 4     

	print2DArray(data, row, col);
	for (int i = 98; i != 0; i--) {
		while ((data[i][pos] != 0) && (pos < 200)) {
			//line above the bottom checks the row below it for what is the 
			// highest number below it and adds that number to itself.
			if (data[i + 1][pos] >= data[i + 1][pos + 2]) {
				data[i][pos] += data[i + 1][pos];
			}
			else {
				data[i][pos] += data[i + 1][pos + 2];
			}
			pos += 2;
		}
		// Makes the current bottom row equal zero  
		for (int k = 0; k < 200; k++) {
			data[i + 1][k] = 0;
		}
		pos = 1;
		print2DArray(data, row, col);
		system("pause");
	}
	
	system("pause");
	return(0);
}