// This program is to the Ministry of Health (MOH) to determine the status of a zone by calculating the number of active cases for COVID 19

#include <iostream>
#include <cstring>
using namespace std;

void dispStatus (int);
void getInput (int&, int&, int&, int&);
void dispOutput (int);
int calcAverage (int, int);

int main () {
char statename[50];
int totalcases = 0, newcases = 0, totaldeath = 0, totalrecovered = 0, activecases, totalactive = 0, highest = 0, average, numstates = 0;
char input;
char higheststate[50] = "A";

    do {
        cout << endl << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
        cout << "State name\t: ";
        cin.getline(statename, 50);

        getInput(totalcases, newcases, totaldeath, totalrecovered);
        activecases = totalcases + newcases - totaldeath - totalrecovered;
        
        if (activecases > highest) {
            highest = activecases;
            strcpy(higheststate, statename);
        }

        cout << endl << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
        cout << "Active cases\t: " << activecases << endl;
        dispOutput (activecases);

        totalactive += activecases;
        numstates += 1;

        cout << endl << "Press <ENTER> to continue...";
        cin.get();
        cin.get(input);

    } while (input == '\n');

    cin.get();
    average = calcAverage(numstates, totalactive);
    cout << "<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
    cout << "Total\t\t: " << totalactive << endl;
    cout << "Highest\t\t: " << highest << "(" << higheststate << ")" << endl;
    cout << "Average for " << numstates << " states: " << average << endl;

    return 0;
}

void dispStatus (int act) {
    if (act > 40) {
        cout << "Status\t\t: Red zone" << endl;
    }
    else if ((act > 20) && (act <= 40)) {
        cout << "Status\t\t: Orange zone" << endl;
    }
    else if ((act > 0) && (act <= 20)) {
        cout << "Status\t\t: Yellow zone" << endl;
    }
    else {
        cout << "Status\t\t: Green zone" << endl;
    }
}

void getInput (int& cases, int& news, int& death, int& recovered) {
    cout << "Total cases\t: ";
    cin >> cases;
    cout << "New cases\t: ";
    cin >> news;
    cout << "Total death\t: ";
    cin >> death;
    cout << "Total recovered : ";
    cin >> recovered;
}

void dispOutput (int active) {
    dispStatus(active);
}

int calcAverage (int number, int total) {
    return total / number;
}
