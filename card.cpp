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

