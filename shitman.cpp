#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

struct Deck {
    int deck[52];
    
    Deck() {
        for(int i = 0; i < 52; i++) {
            deck[i] = i % 13;
        }
    }
    
    void blanda() {
        shuffle(begin(this->deck), end(this->deck), mt19937{random_device{}()});
    }


};

int main() {
    
    Deck deck1;
    deck1.blanda();
    
    for(int i = 0; i < 52; i++) {
        cout << deck1.deck[i] << " ";
    }
    cout << endl;

    return 0;
}
