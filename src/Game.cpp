//
// Created by blueoranges on 7/11/25.
//

#include "../inc/Game.h"

#include <iostream>
#include <ostream>

#include "../inc/Board.h"


// TODO:: Change player at play after a move
// TODO:: Get user move input
// TODO::

// Initialize the main loop
void Game::InitGame() {

    bool quit = false;
    Board board;

    // Main loop
    while (!quit) {
        // Switch between the different states
        switch (gameState) {
            case MainMenu:  Menu(); break;
            case MainGame:  board.printBoard();
                            board.movePiece();
                            break;
            case GameOver:  break;
            case Exit:      std::cout << "Exiting game...." << std::endl;
                            quit = true;
                            break;
            default: MainMenu;
        }
    }
}

// Menu for the game
void Game::Menu() {

     // TODO:: Use error handling
    int choice;
    bool validInput = false;
    do {
        std::cout << "Welcome to the game of Chess!" << std::endl;
        std::cout << "1. Start Game" << std::endl;
        std::cout << "2. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << std::endl;

        // Validate choice entered
        if (choice < 1 || choice > 2 || isalpha(choice)) {
            std::cout << "Invalid choice. Try again. " << std::endl;
            std::cin.clear();
        }
        else {
            validInput = true;
        }

    }while (!validInput);

    // Update the states
    if (choice == 1) {
        UpdateState(MainGame);
    }
    else if (choice == 2) {
        UpdateState(Exit);
    }
}

// Update the state of the game
void Game::UpdateState(GameState newState) {
    gameState = newState;
}
