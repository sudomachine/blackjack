#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include <cstddef>

namespace blackjack
{

class Game
{

private:
    // сброс; Discard Tray
    size_t discard_tray_;

    // набор карт; Shoe
    size_t shoe_;
};

} // blackjack

#endif // BLACKJACK_GAME_H
