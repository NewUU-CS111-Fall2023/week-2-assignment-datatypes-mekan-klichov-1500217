/*
 * Author:
 * Date:
 * Name:
 */
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}


int matching(const std::string& sentence, const std::string& word) {
    int sentenceLength = sentence.length();
    int wordLength = word.length();

    for (int i = 0; i <= sentenceLength - wordLength; ++i) {
        bool match = true;

        for (int j = 0; j < wordLength; ++j) {
            if (sentence[i + j] != word[j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i;
        }
    }

    return -1;
}

struct Coordinate {
    int x;
    int y;
};

bool check(const Coordinate& character, const vector<Coordinate>& enemies) {
    for (const Coordinate& enemy : enemies) {
        if (enemy.x == character.x && enemy.y == character.y) {
            return true;
        }
    }
    return false;
}