#include"Header.h"
#include "Functions.cpp"

int main() {

    welcomeUsers();

    Team teamA;
    teamA.players[0] = "Virat";
    teamA.players[1] = "Dhawan";
    teamA.players[2] = "Karthik";
    teamA.name = "TeamA";

    Team teamB;
    teamB.players[0] = "Rohit";
    teamB.players[1] = "Pant";
    teamB.players[2] = "KLRahul";
    teamB.name = "TeamB";

    displayPlayers(teamA.players, teamB.players);

    startInning(1, teamA.name, teamB.name);
    selectBatsmanAndBowler(teamA, teamB);
    teamA.runs = playInning();
    displayScore(teamA);

    cout << "\n*********** TeamB needs " << teamA.runs + 1 << " runs to win ***********" << endl << endl;

    startInning(2, teamB.name, teamA.name);
    selectBatsmanAndBowler(teamB, teamA);
    teamB.runs = playInning();
    displayScore(teamB);

    decideWinner(teamA.runs, teamB.runs);

    return 0;
}
