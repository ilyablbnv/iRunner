//
//  Player.hpp
//  iRunner
//
//  Created by ILLYA BALABANOV on 26/11/2016.
//  Copyright © 2016 Illya Balabanov. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

class Player {
    
private:
    int id;
    int age;
    
public:
    Player(int, int);
    void message();
};

#endif /* Player_hpp */
