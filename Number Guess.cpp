#include <iostream>
#include <cstdlib>
#include <cmath>
#include<ctime>
using namespace std;

int main() {
    int operation, randomnum, usernum, com;

    cout << "Welcome to the Word Guessing Game! Please press '1' to begin the game.\n";
    cin >> operation;

    if (operation == 1) {
    	srand(time(0)); // this would help us to get different number everytime we run the code
        randomnum = rand() % 1000;  //this would generate random numbers between 0-999

        while (true) {
            cout << "Guess the number\n";
            cin >> usernum;
             com= abs(usernum - randomnum);    

            if (usernum > randomnum) {
                if (com > 100) {
                     cout << "Your Guess is too high\n";
                } else if (com > 50) {
                    cout << "Your Guess is High\n";
                } else {
                    cout << "Your guess is highly close\n";
                }
            } else if (usernum < randomnum) {
                if (com > 100) {
                    cout << "Your Guess is too low\n";
                } else if (com > 50) {
                    cout << "Your Guess is Low\n";
                } else {
                    cout << "Your guess is lowly close\n";
                }
            } else {
                cout << "Congratulations! You guessed the correct number\n";
                break;
            }
        }
    } else {
        return 0;
    }

    return 0;
}

