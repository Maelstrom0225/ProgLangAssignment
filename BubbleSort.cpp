#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void nonRecursiveBubbleSort(int numArray[], int n) {
	// Pass Throughs
	for (int i = 0; i < n - 1; i++) {
		
		// Single Pass Through
		for (int j = 0; j < (n - 1 - i); j++) {
			int tempVar;
			if (numArray[j] > numArray[j + 1]) {
				// Swap
				tempVar = numArray[j + 1];
				numArray[j + 1] = numArray[j];
				numArray[j] = tempVar;
			}
		}
	}
}

void recursiveBubbleSort(int numArray[], int n) {
	// Skip last element
	if (n == 1) {
		return;
	}

	// One Run Through of Sorting
	int elementsLeft = 0;
	for (int i = 0; i < n - 1; i++) {
		int tempVar;
		if (numArray[i] > numArray[i + 1]) {
			// Swap
			tempVar = numArray[i + 1];
			numArray[i + 1] = numArray[i];
			numArray[i] = tempVar;
			// Add to Elements Left
			elementsLeft++;
		}
	}

	// End of Array
	if (elementsLeft == 0) {
		return;
	}

	// Recursive Call for Next Run Through
	//		Goes until n == 0
	recursiveBubbleSort(numArray, n - 1);

}


int main() {
	// First numArray for nonRecursiveBubbleSort
	int numArray[9] = { 1,3,4,9,7,5,6,2,8};
	// Print numArray
	cout << "Array 1: ";
	for (int i = 0; i < 9; i++) {
		cout << numArray[i];
	}
	cout << "\n";
	
	// Second numArray for recursiveBubbleSort
	int numArray2[9] = { 1,3,4,9,7,5,6,2,8 };
	// Print numArray2
	cout << "Array 2: ";
	for (int i = 0; i < 9; i++) {
		cout << numArray2[i];
	}
	cout << "\n";
	
	// Sorting
	nonRecursiveBubbleSort(numArray, 9);
	recursiveBubbleSort(numArray2, 9);

	// nonRecursiveBubbleSort Results
	cout << "Array 1 (Non-Recursive) Sorted: ";
	for (int i = 0; i < 9; i++) {
		cout << numArray[i];
	}
	cout << "\n";
	// recursiveBubbleSort Results
	cout << "Array 2 (Recursive) Sorted: ";
	for (int i = 0; i < 9; i++) {
		cout << numArray2[i];
	}
	cout << "\n";
	// Exit
	return 0;
}

