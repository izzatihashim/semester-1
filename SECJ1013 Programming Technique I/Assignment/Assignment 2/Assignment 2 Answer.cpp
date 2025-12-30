/*Name : NUR NAZIRAH HANIS BINTI NAZRI
Matric no : A25CS0319
Name : NURUL IZZATI LIYANA BINTI HASHIM
No Matric : A25CS0336

Date : 23/12/2025
Set : 1*/

#include <iostream>
#include <cmath>
using namespace std;

void getInput(char&, int&, double&, double&);
double calculateBMR(char, int, double, double);
void dailyCalorie(double&);


int main(){
    int age;
    double height, weight, BMR;
    char gender, choice;

    do{
        cout << "Basal Metabolic Rate (BMR) Calculator" << endl << endl;
        getInput(gender, age, height, weight);
        BMR = calculateBMR(gender, age, height, weight);

        cout << "BMR = " << BMR << " Calories/ day (using Mifflin-St Jeor Equation)" << endl << endl ;
        dailyCalorie(BMR);

        cout << "Do you want to enter other data? [Y @ N]: ";
        cin >> choice;
        choice = toupper(choice);
        cout << endl;
    } while (choice != 'N');

    cout << "Thank you :)";


    return 0;
}
 void getInput(char &GENDER, int &AGE, double &HEIGHT, double &WEIGHT){
    do{
    cout << "Age [15-80]: ";
    cin >> AGE;
    } while ((AGE < 15) || (AGE > 80));

    do{
    cout << "Gender [F @ M]: ";
    cin >> GENDER;
    GENDER = toupper(GENDER);
    } while((GENDER != 'M') && (GENDER != 'F'));

    cout << "Height (cm): ";
    cin >> HEIGHT;
    cout << "Weight (kg): ";
    cin >> WEIGHT;
    cout << endl;
 }

double calculateBMR(char GENDER, int AGE, double HEIGHT, double WEIGHT){
    double BMR;
    if(GENDER == 'M')
        BMR = (10 * WEIGHT) + (6.25 * HEIGHT) - (5 * AGE) + 5;
    else
        BMR = (10 * WEIGHT) + (6.25 * HEIGHT) - (5 * AGE) - 161;
    
    return BMR;
}

void dailyCalorie(double& BMR){
    cout << "Daily calorie needs based on activity level" << endl << endl;

    cout << "Activity Level\t\t\t\t\t\tCalorie" << endl;
    cout << "Sedentary: little or no exercise\t\t\t" << static_cast<int>(round(BMR * 1.2)) << endl;
    cout << "Exercise 1-3 times/week\t\t\t\t\t" << static_cast<int>(round(BMR * 1.375)) << endl;
    cout << "Exercise 4-5 times/week\t\t\t\t\t" << static_cast<int>(round(BMR * 1.4649)) << endl;
    cout << "Daily exercise or intense exercise 3-4 times/week\t" << static_cast<int>(round(BMR * 1.55)) << endl;
    cout << "Intense exercise 6-7 times/week\t\t\t\t" << static_cast<int>(round(BMR * 1.725)) << endl;
    cout << "Very intense exercise daily, or physical job\t\t" << static_cast<int>(round(BMR * 1.9)) << endl << endl;

    cout << "Exercise: 15-30 minutes of elevated heart rate activity." << endl;
    cout << "Intense exercise: 45-120 minutes of elevated heart rate activity." << endl;
    cout << "Very intense exercise: 2+ hours of elevated heart rate activity." << endl << endl;


}

