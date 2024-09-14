#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Create a jagged array (array of pointers)
    int** jaggedArray = new int*[rows];
    
    // Create an array to store the number of columns for each row
    int* colsArray = new int[rows];

    for (int i = 0; i < rows; i++) {
        int cols;
        cout << "Enter the number of columns for row " << i + 1 << ": ";
        cin >> cols;

        jaggedArray[i] = new int[cols];
        colsArray[i] = cols;  // Store the number of columns for the current row

        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> jaggedArray[i][j];
        }
    }

    // Print the jagged array
    cout << "Jagged array contents:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colsArray[i]; j++) {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;
    delete[] colsArray;

    return 0;
}
