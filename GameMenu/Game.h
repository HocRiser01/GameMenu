//
//  Game.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <ctime>
#include <string>

class Game{
public:
    Game();
    std::string time;
    int Step;
};

class Archives{
public:
    static int gamesNum;
    static Game* games;
};

#endif /* Game_h */
