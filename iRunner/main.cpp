//
//  main.cpp
//  iRunner
//
//  Created by ILLYA BALABANOV on 25/11/2016.
//  Copyright © 2016 Illya Balabanov. All rights reserved.
//

#include <iostream>
#include <ncurses.h>

#include "Player.hpp"

#define WORLD_WIDTH 80
#define WORLD_HEIGHT 20

int main(int argc, const char * argv[]) {

    WINDOW *runner_world;
    int offsetX, offsetY;
    
    initscr(); // prepares the terminal for curses mode, allocates memory for stdscr
    noecho(); // subverts the terminal from printing back the users key presses.
    cbreak(); // disables line buffering and feeds input directly to the program.
    
    keypad(stdscr, TRUE);
    
    printw("Endless Runner v. 1.0  -  Press x to quit...");
    
    refresh();
    
    // To position box in the middle of the terminal screen
    offsetX = (COLS - WORLD_WIDTH) / 2;
    offsetY = (LINES - WORLD_HEIGHT) / 2;
    
    runner_world = newwin(WORLD_HEIGHT, WORLD_WIDTH, offsetY, offsetX);
    
    box(runner_world, 0 , 0); // to draw borders
    
    wrefresh(runner_world);
    
    getch();
    
    // handles memory deallocation and returns the terminal to it’s former state
    delwin(runner_world);
    
    endwin();
    
    return 0;
}

