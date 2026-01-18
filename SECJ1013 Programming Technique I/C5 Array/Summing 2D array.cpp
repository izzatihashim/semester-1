// This program shows how to sum a 2D array for the whole array, each row and each column

#include <iostream>
using namespace std;

int main () {
    // Example 1: Summing 2D array
    const int NUM_ROWS = 5;
    const int NUM_COLS = 5;
    int total = 0;
    int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
                                       {6, 1, 8, 9, 4},
                                       {4, 3, 7, 2, 9},
                                       {9, 9, 0, 3, 1},
                                       {6, 2, 7, 4, 1}};


    for (int row = 0; row < NUM_ROWS; row++) {
        for (int col = 0; col < NUM_COLS; col++)
            total += numbers[row][col];
    }
    
    cout << "The total is " << total << endl;    

    // Example 2 & 3
    const int NUM_STUDENTS = 3;
    const int NUM_SCORES = 5;
    double total;
    double average;

    double scores[NUM_STUDENTS][NUM_SCORES] = {{88, 97, 79, 86, 94},
                                               {86, 91, 78, 79, 84},
                                               {82, 73, 77, 82, 89}};

    // Example 2: Summing ROWS of 2D array - average of each student
    for (int row = 0; row < NUM_STUDENTS; row++) {
        total = 0;

        for (int col = 0; col < NUM_SCORES; col++)
            total += scores[row][col]; // the inner 

        average = total / NUM_SCORES; // start from here is outer
        cout << "Score average for student " << (row + 1) << " is " << average << endl;
    }

    // Example 3: Summing COLUMNS of 2D array - average of each test
    for (int col = 0; col < NUM_SCORES; col++) {
        total = 0;
  
        for (int row = 0; row < NUM_STUDENTS; row++)
            total += scores[row][col];

        average = total / NUM_STUDENTS;
        cout << "Class average for test " << (col + 1) << " is " << average << endl;
    }

    return 0;
}
