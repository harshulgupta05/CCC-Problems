// use the input/output package
#include <iostream>

using namespace std;

// define the main function
int main() {
    // create all of the variables
    int numofgames, player1roll, player1score, player2roll, player2score;

    // input the number of games played
    cin >> numofgames;
    
    // define the beginning scores
    player1score = 100;
    player2score = 100;

    // loop the dice roll input for each game
    for (int i = 0; i < numofgames; i++) {
        // input the dice rolls for each player
        cin >> player1roll >> player2roll;

        // check if they are equal
        if (player1roll == player2roll) {
            //no score change
            continue;
        }
        // check if the first roll is less than the second roll
        else if (player1roll < player2roll) {
            // subtract the second roll from the first player's score
            player1score = player1score - player2roll;
        }
        // check if the second roll is less than the first roll
        else if (player2roll < player1roll) {
            // subtract the first roll from the second player's score
            player2score = player2score - player1roll;
        }
    }

    // output the final scores
    cout << player1score << endl;
    cout << player2score;

    //return int
    return 0;
}