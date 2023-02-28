#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Card.h"

#include <vector>

namespace blackjack {
class Deck
{
private:
    enum PUT_POS {
        BEGIN,
        END,
        POSITION,
        RANDOM
    };
public:
    Deck();

    size_t size() const;

    Card getCard();

    void putCard(Card&&, PUT_POS put_pos = BEGIN, size_t pos = 0);

    bool empty() const;

private:
    std::vector<Card> deck_;
};

} // blackjack

#endif // BLACKJACK_DECK_H
