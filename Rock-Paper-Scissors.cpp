#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string choices[3] = {"rock", "paper", "scissors"};
    
    string userChoice;
    cout << "Enter rock, paper, or scissors: ";
    cin >> userChoice;

    string compChoice = choices[rand() % 3];
    cout << "Computer chose: " << compChoice << endl;

    if (userChoice == compChoice) cout << "It's a draw!" << endl;
    else if ((userChoice == "rock" && compChoice == "scissors") ||
             (userChoice == "paper" && compChoice == "rock") ||
             (userChoice == "scissors" && compChoice == "paper"))
        cout << "You win!" << endl;
    else
        cout << "Computer wins!" << endl;

    return 0;
}
