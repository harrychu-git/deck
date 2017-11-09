#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Number {ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king};
enum Suit {spade, club, diamond, heart};

struct card {
    Number number;
    Suit suit;
    
    card(Number, Suit);
};

card::card(Number n, Suit s) {
    number = n;
    suit = s;
}

void printCard(card c) {
    cout << "[Number: ";
    if(c.number == ace) cout << "A";
    else if(c.number == two) cout << "2";
    else if(c.number == three) cout << "3";
    else if(c.number == four) cout << "4";
    else if(c.number == five) cout << "5";
    else if(c.number == six) cout << "6";
    else if(c.number == seven) cout << "7";
    else if(c.number == eight) cout << "8";
    else if(c.number == nine) cout << "9";
    else if(c.number == ten) cout << "10";
    else if(c.number == jack) cout << "J";
    else if(c.number == queen) cout << "Q";
    else if(c.number == king) cout << "K";
    cout << ", Suit: ";
    if(c.suit == spade) cout << "Spade";
    else if(c.suit == club) cout << "Club";
    else if(c.suit == diamond) cout << "Diamond";
    else if(c.suit == heart) cout << "Heart";
    
    cout << "]" << endl;
}