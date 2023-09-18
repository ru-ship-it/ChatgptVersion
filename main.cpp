// Description: ChatGPT's version of the program that calculates and prints the growth rate and the estimated population after each year
// Name: Ruchel Paul
// Date: 09/15/23
//  Project 1 Computer science

#include <iostream>
using namespace std;

// Function to calculate population growth rate
double GrowthRate(double birthRate, double deathRate) {
    return birthRate - deathRate;
}

// Function to calculate estimated population for the next year
double EstimatedPopulation(double currentPopulation, double birthRate, double deathRate) {
    return currentPopulation + (birthRate * currentPopulation / 100) - (deathRate * currentPopulation / 100);
}

int main() {
    double startingPopulation, birthRate, deathRate;
    int numYears;

    // Prompt user for input
    cout << "Enter the starting population: ";
    cin >> startingPopulation;

    cout << "Enter the birth rate (as a percentage): ";
    cin >> birthRate;

    cout << "Enter the death rate (as a percentage): ";
    cin >> deathRate;

    cout << "Enter the number of years to project: ";
    cin >> numYears;

    // Check for invalid inputs
    if (birthRate < 0 || deathRate < 0 || startingPopulation < 2) {
        cout << "Invalid input. Birth rate, death rate, and population must be non-negative, and population must be at least 2." << endl;
        return 1;  // Exit with an error code
    }

    // Calculate and print the growth rate and estimated population for each year
    for (int year = 1; year <= numYears; year++) {
        double growth = GrowthRate(birthRate, deathRate);
        startingPopulation = EstimatedPopulation(startingPopulation, birthRate, deathRate);

        cout << "Year " << year << ": Growth rate = " << growth << "%, Estimated Population = " << startingPopulation << endl;
    }

    return 0;  // Exit successfully
}
