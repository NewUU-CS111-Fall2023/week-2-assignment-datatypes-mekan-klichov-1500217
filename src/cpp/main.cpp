/*
 * Author:
 * Date:
 */

#include <iostream>
#include "task_1.h"
#include <cstdlib>
#include <ctime>
#include "string"
#include "vector"
using namespace std;

int main() {
    cout << "Task 1" << endl;

    /**int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }**/

    cout << "Task 2" << endl;

    /**srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100." << endl;
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);**/

    cout << "Task 3" << endl;
    //Done in python file!

    cout << "Task 4" << endl;

    /**string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter a word: ";
    cin >> word;

    int index = matching(sentence, word);
    if (index != -1) {
        cout << "Matching substring found at index " << index << endl;
    } else {
        cout << "No match" << endl;
    }**/

    cout << "Task 5" << endl;
    int N;
    cout << "Enter the number of coordinates: ";
    cin >> N;

    vector<Coordinate> enemies;
    Coordinate character;

    for (int i = 0; i < N; ++i) {
        int x, y;
        cout << "Enter coordinates for enemy " << (i + 1) << ": ";
        cin >> x >> y;
        enemies.push_back({x, y});
    }

    while (true) {
        cout << "Enter character's coordinates: ";
        cin >> character.x >> character.y;

        if (check(character, enemies)) {
            cout << "Character died!" << endl;
            break;
        } else {
            cout << "Character survived." << endl;
        }
    }
    return 0;
}
