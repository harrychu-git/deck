#include "hand.cpp"
#include "deck.cpp"
#include <unistd.h>

void mPause() {
    usleep(1000000);
}

bool dealCards(unsigned bankerBet) {
    Hand player;
    Hand banker;
    Deck deck;
    deck.shuffle();
    system("clear");
    cout << "Player draws..." << endl;
    player.draw(deck.removeCard());
    player.draw(deck.removeCard());
    player.printHand();
    mPause();
    cout << "Banker draws..." << endl;
    banker.draw(deck.removeCard());
    banker.draw(deck.removeCard());
    banker.printHand();
    
    return true;
}

void baccarat() {
    int balance = 1000;
    system("clear");
    while(balance > 0) {
        unsigned bet = 0;
        cout << "Current balance: $" << balance << endl
        << "How much is your bet?" << endl << ">> ";
        cin >> bet;
        if(bet > balance) {
            system("clear");
            cout << "Not enough funds." << endl;
            continue;
        }
        unsigned bankerBet;
        cout << "Bet on player or banker? (type 0 for player, 1 for banker)" << endl << ">> ";
        cin >> bankerBet;
        if(bankerBet > 1) {
            system("clear");
            cerr << "Invalid input" << endl;
            continue;
        }
        balance -= bet;
        system("clear");
        if(dealCards(bankerBet)) {
            cout << "You win! ";
            if(bankerBet) {cout << bet * 2 * 0.95; balance += bet * 2 * 0.95;}
            else {cout << bet * 2; balance += bet * 2;}
            cout << " added to your balance." << endl;
        }
        else {
            cout << "You lose." << endl;
        }
        
        
        
        
        
    }
    cout << "Game over!" << endl;
}

int main() {
    baccarat();
}