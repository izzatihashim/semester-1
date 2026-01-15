#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const int ROW = 12, COL = 7, TEAM = 3;

void displayLine();
int findIndWinner(int[]);
int findTeamWinner(int[]);

ifstream inputFile("input.txt");
ofstream outputFile("output.txt");

int main()
{
    int marks[ROW][COL], totalScoreParti[ROW] = {0}, totalScoreTeam[TEAM] = {0};

    if (!inputFile)
    {
        cout << "Sorry, input file does not exist!\nPress any key to continue . . ." << endl;
        return 0;
    }

    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            inputFile >> marks[row][col];
        }
    }

    for (int row = 0; row < ROW; row++)
    {
        for (int col = 2; col < COL; col++)
        {
            totalScoreParti[row] += marks[row][col];
        }
        totalScoreTeam[marks[row][0] - 1] += totalScoreParti[row];
    }

    displayLine();

    outputFile << left << setw(8) << "Id" << setw(8) << "E1" << setw(7) << "E2" << setw(7) << "E3" << setw(7) << "E4" << setw(7) << "E5" << setw(7) << "Total" << endl;

    displayLine();

    for (int team = 1; team <= TEAM; team++)
    {
        outputFile << "TEAM " << team << endl;

        for (int row = 0; row < ROW; row++)
        {
            if (marks[row][0] == team)
            {
                outputFile << setw(9) << marks[row][1];

                for (int col = 2; col < COL; col++)
                {
                    outputFile << setw(7) << marks[row][col];
                }

                outputFile << setw(8) << totalScoreParti[row] << endl;
            }
        }

        outputFile << left << setw(44) << "TOTAL" << totalScoreTeam[team - 1] << endl;
        displayLine();
    }

    int participantWinner = findIndWinner(totalScoreParti);
    int teamWinner = findTeamWinner(totalScoreTeam);

    outputFile << "\nWinner for Individual Category: " << marks[participantWinner][1] << " (Team " << marks[participantWinner][0] << ")" << endl;
    outputFile << "Winner for Group Category: Team " << (teamWinner + 1) << " (Score = " << totalScoreTeam[teamWinner] << ")" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}

void displayLine()
{
    for (int i = 0; i < 52; i++)
    {
        outputFile << "-";
    }
    outputFile << endl;
}

int findIndWinner(int totalScoreParti[])
{
    int highest = 0;
    for (int row = 0; row < ROW; row++)
    {
        if (totalScoreParti[row] > totalScoreParti[highest])
        {
            highest = row;
        }
    }
    return highest;
}

int findTeamWinner(int totalScoreTeam[])
{
    int highest = 0;
    for (int team = 1; team < TEAM; team++)
    {
        if (totalScoreTeam[team] > totalScoreTeam[highest])
        {
            highest = team;
        }
    }
    return highest;
}
