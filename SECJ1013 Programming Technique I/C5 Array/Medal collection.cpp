// This program do various operation on an array that stores the number of medal collection for 4 countries

#include <iostream>
using namespace std;

const int COUNTRY = 4;
const int MEDAL = 3;

void input(int[][MEDAL], int);
int totalcountry3(int[][MEDAL], int);
int highestmedal(int[][MEDAL], int);
int lowestmedal(int[][MEDAL], int);
int highestgold(int[][MEDAL], int);
int totalbronze (int[][MEDAL], int);

int main () {
    int medals[COUNTRY][MEDAL];
    input(medals, COUNTRY);

    cout << "Total number of medals won by country 3: " << totalcountry3(medals, COUNTRY) << endl;
    cout << "Highest number of medals won: " << highestmedal(medals, COUNTRY) << endl;
    cout << "Lowest number of medals won: " << lowestmedal(medals, COUNTRY) << endl;
    cout << "Highest number of gold medal won: " << highestgold(medals, COUNTRY) << endl;
    cout << "Total number of bronze medal won: " << totalbronze(medals, COUNTRY) << endl;

    return 0;
}

void input(int array[][MEDAL], int country) {
    for (int row = 0; row < country; row++) {
        cout << "Country " << row + 1 << endl;
        for (int col = 0; col < MEDAL; col++) {
            cout << col + 1 << "st place medal: ";
            cin >> array[row][col];
        }
    }
}

int totalcountry3(int array[][MEDAL], int country) {
    int total = 0;
    for (int col = 0; col < MEDAL; col++) {
        total += array[2][col];
    }
    return total;
}

int highestmedal(int array[][MEDAL], int country) {
    int highest = array[0][0];
    for (int row = 0; row < country; row++) {
        for (int col = 0; col < MEDAL; col++) {
            if (array[row][col] > highest)
                highest = array[row][col];
        }
    }
    return highest;
}

int lowestmedal(int array[][MEDAL], int country) {
    int lowest = array[0][0];
    for (int row = 0; row < country; row++) {
        for (int col = 0; col < MEDAL; col++) {
            if (array[row][col] < lowest)
                lowest = array[row][col];
        }
    }
    return lowest;
}

int highestgold(int array[][MEDAL], int country) {
    int highest = array[0][0];
    for (int row = 0; row < country; row++) {
        if (array[row][0] > highest)
            highest = array[row][0];
    }
    return highest;
}

int totalbronze (int array[][MEDAL], int country) {
    int total = 0;
    for (int row = 0; row < country; row++) {
        total += array[row][2];
    }
    return total;
}
