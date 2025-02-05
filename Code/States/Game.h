#ifndef GAME_H
#define GAME_H

#include "../Common/Common.h"
#include "GameState.h"


/////////////////////////////////////////////////
///@brief A class with the sole function of generating new states. 
/////////////////////////////////////////////////
class Game {
    public:
    ~Game();
/////////////////////////////////////////////////
///@brief A public function to load a state
/////////////////////////////////////////////////
    void load();

    private:
/////////////////////////////////////////////////
///@brief The gameState object.
/////////////////////////////////////////////////
    GameState* gameState;
};

#endif