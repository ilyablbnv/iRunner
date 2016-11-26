//
//  Player.cpp
//  iRunner
//
//  Created by ILLYA BALABANOV on 26/11/2016.
//  Copyright © 2016 Illya Balabanov. All rights reserved.
//

#include <iostream>

using namespace std;

#include "Player.hpp"

Player::Player(int id, int age) {
    this->id = id;
    this->age = age;
};

void Player::message() {
    cout << id << " " << age << endl;
}

