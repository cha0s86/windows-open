#include <iostream>
#include <SDL2/SDL.h>
#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1200
#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
using namespace std;

int WinMain() {

    SDL_Window* window = SDL_CreateWindow("Title", SCREEN_WIDTH/2-WINDOW_WIDTH/2, SCREEN_HEIGHT/2-WINDOW_HEIGHT/2, 1280, 720, 0);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, 0, 0);

    SDL_Rect rect;
    rect.x = (SCREEN_WIDTH / 2);
    rect.y = (SCREEN_WIDTH / 2);
    rect.w = (SCREEN_WIDTH / 2);
    rect.h = (SCREEN_WIDTH / 2);

    SDL_Delay(5000);

    std::cout << "Hello World" << std::endl;

    return 0;
}