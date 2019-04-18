// Exercise:
// draw four different size and color rectangles.
// avoid code duplication.

#include <SDL.h>
#include <iostream>

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// Starts up SDL and creates window
bool init();

// Frees media and shuts down SDL
void close();

// The window we'll be rendering to
SDL_Window *gWindow = nullptr;

// The window renderer
SDL_Renderer *gRenderer = nullptr;

bool init() {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError()
              << std::endl;
    return false;
  }

  // Create window
  gWindow = SDL_CreateWindow("Four rectangles", SDL_WINDOWPOS_UNDEFINED,
                             SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                             SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if (gWindow == nullptr) {
    std::cout << "Window could not be created! SDL Error: " << SDL_GetError()
              << std::endl;
    return false;
  }

  // Create renderer for window
  gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
  if (gRenderer == nullptr) {
    std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError()
              << std::endl;
    return false;
  }

  // Initialize renderer color
  SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

  return true;
}

void close() {
  // Destroy window
  SDL_DestroyRenderer(gRenderer);
  SDL_DestroyWindow(gWindow);
  gWindow = nullptr;
  gRenderer = nullptr;

  SDL_Quit();
}

int main(int argc, char *args[]) {
  // Start up SDL and create window
  if (!init()) {
    std::cout << "Failed to initialize!" << std::endl;
    close();
    return -1;
  }

  // Main loop flag
  bool quit = false;

  // Event handler
  SDL_Event e;

  // While application is running
  while (!quit) {
    // Handle events on queue
    while (SDL_PollEvent(&e) != 0) {
      // User requests quit
      if (e.type == SDL_QUIT) {
        quit = true;
      }
    }

    // Clear screen
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(gRenderer);

    //--------------------------------------------
    // This is where you can start drawing geometry
    //--------------------------------------------

    SDL_SetRenderDrawColor(gRenderer, 241 /*R*/, 169 /*G*/, 160 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 320, 0, 160, 120);
    SDL_SetRenderDrawColor(gRenderer, 241 /*R*/, 169 /*G*/, 160 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 320, 0, 320, 120);
    SDL_SetRenderDrawColor(gRenderer, 241 /*R*/, 169 /*G*/, 160 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 160, 120, 320, 120);

    SDL_SetRenderDrawColor(gRenderer, 242 /*R*/, 38 /*G*/, 19 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 370, 240, 370, 120);
    SDL_SetRenderDrawColor(gRenderer, 242 /*R*/, 38 /*G*/, 19 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 370, 240, 500, 300);
    SDL_SetRenderDrawColor(gRenderer, 242 /*R*/, 38 /*G*/, 19 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 370, 120, 500, 300);

    SDL_SetRenderDrawColor(gRenderer, 210 /*R*/, 77 /*G*/, 87 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 480, 240, 640, 240);
    SDL_SetRenderDrawColor(gRenderer, 210 /*R*/, 77 /*G*/, 87 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 480, 240, 480, 360);
    SDL_SetRenderDrawColor(gRenderer, 210 /*R*/, 77 /*G*/, 87 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 640, 240, 480, 360);

    SDL_SetRenderDrawColor(gRenderer, 246 /*R*/, 36 /*G*/, 89 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 160, 240, 50, 240);
    SDL_SetRenderDrawColor(gRenderer, 246 /*R*/, 36 /*G*/, 89 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 160, 240, 120, 360);
    SDL_SetRenderDrawColor(gRenderer, 246 /*R*/, 36 /*G*/, 89 /*B*/, 1 /*A*/);
    SDL_RenderDrawLine(gRenderer, 120, 360, 50, 240);

    // Update screen
    SDL_RenderPresent(gRenderer);
  }

  // Free resources and close SDL
  close();

  return 0;
}