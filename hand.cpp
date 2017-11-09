#include "card.cpp"

class Hand{
    public:
        void draw(card);
        card discard(int);
        void printHand();
    private:
        vector<card> hand;
};
void Hand::draw(card c) {
    hand.push_back(c);
}
card Hand::discard(int i) {
    card c = hand.at(i);
    hand.erase(hand.begin() + i);
    return c;
}
void Hand::printHand() {
    cout << "Your hand:" << endl;
    for(int i = 0; i < hand.size(); i++) {
        cout << "Card " << i << ": ";
        printCard(hand.at(i));
    }
}
