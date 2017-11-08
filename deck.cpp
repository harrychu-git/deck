#include <stack>
#include "card.cpp"

using namespace std;

class Deck {
    public:
        void addCard(card);
        card removeCard();
        void shuffle();
        Deck();
    private:
        stack<card> deck;
};

void Deck::addCard(card c) {
    deck.push(c);
}
card Deck::removeCard() {
    card c = deck.top;
    deck.pop();
    return c;
}
void Deck::shuffle() {
    
}
Deck::Deck() {
    deck.push(card(ace,spade));
    deck.push(card(two,spade));
    deck.push(card(three,spade));
    deck.push(card(four,spade));
    deck.push(card(five,spade));
    deck.push(card(six,spade));
    deck.push(card(seven,spade));
    deck.push(card(eight,spade));
    deck.push(card(nine,spade));
    deck.push(card(ten,spade));
    deck.push(card(jack,spade));
    deck.push(card(queen,spade));
    deck.push(card(king,spade));
    //////////////////////////////
    deck.push(card(ace,club));
    deck.push(card(two,club));
    deck.push(card(three,club));
    deck.push(card(four,club));
    deck.push(card(five,club));
    deck.push(card(six,club));
    deck.push(card(seven,club));
    deck.push(card(eight,club));
    deck.push(card(nine,club));
    deck.push(card(ten,club));
    deck.push(card(jack,club));
    deck.push(card(queen,club));
    deck.push(card(king,club));
    //////////////////////////////
    deck.push(card(ace,diamond));
    deck.push(card(two,diamond));
    deck.push(card(three,diamond));
    deck.push(card(four,diamond));
    deck.push(card(five,diamond));
    deck.push(card(six,diamond));
    deck.push(card(seven,diamond));
    deck.push(card(eight,diamond));
    deck.push(card(nine,diamond));
    deck.push(card(ten,diamond));
    deck.push(card(jack,diamond));
    deck.push(card(queen,diamond));
    deck.push(card(king,diamond));
    //////////////////////////////
    deck.push(card(ace,heart));
    deck.push(card(two,heart));
    deck.push(card(three,heart));
    deck.push(card(four,heart));
    deck.push(card(five,heart));
    deck.push(card(six,heart));
    deck.push(card(seven,heart));
    deck.push(card(eight,heart));
    deck.push(card(nine,heart));
    deck.push(card(ten,heart));
    deck.push(card(jack,heart));
    deck.push(card(queen,heart));
    deck.push(card(king,heart));
}

int main() {
    
}