#pragma once
#include <SDL.h>
#include <iostream>
//creating a window
class GameLoop
{
    private:
        const int HEIGHT = 640;
        const int WIDTH = 880;
        SDL_Window* window;
        SDL_Renderer* renderer;
    public:
        GameLoop();
        void Intialize();
        void Event();
        void Render();
        void Clean();


};
