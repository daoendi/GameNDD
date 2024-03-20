#include "GameLoop.h"

GameLoop* g = new GameLoop();

int main(int argc, char** argv){

    g -> Intialize();
    while(1){
        g -> Render();
    }
    g -> Clean();
    return 0;
}
