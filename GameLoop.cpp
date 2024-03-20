
#include "GameLoop.h"
GameLoop::GameLoop(){
    window = NULL;
    renderer = NULL;

}
void GameLoop::Intialize(){
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow("My Game",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,SDL_WINDOW_RESIZABLE);
    if (window){
        renderer = SDL_CreateRenderer(window,-1,0);
        if(renderer){
           std::cout << "OK renderer";
        }
        else{
            std::cout << "NOT oke renderer";
        }
    }
    else{
        std::cout << "Error Window" << std::endl;
    }
}
void GameLoop::Render(){
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

}
void GameLoop::Clean(){


}
