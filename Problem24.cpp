#include <iostream>
#include <algorithm>

using namespace std;
/*
	step 1. Find the right most number that is smaller than the next in the array
			store its index as firstI
	step 2. Find the smallest character/ number to the right of firstI call it secondI
	step 3. Swap order[firstI] and order[secondI]
	step 4. Reverse the order of all of the numbers after the firstI

*/

int index1(int data[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		if (data[i] > data[i - 1]) {
			return (i - 1);
		}
	}

	return 1;
}

int index2(int data[], int first, int size) {
	for (int i = size - 1; i >= 0; i--) {
		int l = i;
		if (data[first] < data[i]) {
			return(i);
		}
	}
}


int main() {
	int order[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size = 10;
	int first , second;
	int j = 0;
	while (j < 999999) {
		first = index1(order, size);
		second = index2(order, first, size);
		//cout << first << " " << second << endl;
		swap(order[first], order[second]);

		// reverse array 
		int rem = (9) - first;
		
		for (int i = 0; i < rem / 2; i++) {
			int temp2 = order[first + 1 + i];
			order[first + 1 + i] = order[(size - 1) - i];
			order[(size - 1) - i] = temp2;
		}
		j++;
	}
		
		for (int i = 0; i < size; i++) {
			cout << order[i] << " ";
		}
	

	system("pause");
	return(0);
}