//
// Created by blueoranges on 7/11/25.
//

#ifndef GAME_H
#define GAME_H



class Game {
    private:
    enum GameState {MainMenu, MainGame, Exit, GameOver};
    // Set initial game state to main menu
    GameState gameState = MainMenu;
    public:
        void InitGame();
        void Menu();
        void UpdateState(GameState);
};



#endif //GAME_H
