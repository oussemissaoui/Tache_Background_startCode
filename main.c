#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>



int main(){
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
        
    // Initialize SDL_mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 4096);

    // Initialize SDL_ttf
    TTF_Init();

    SDL_Surface *screen = NULL;
    screen = SDL_SetVideoMode(1920, 1080, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

    int quitter = 0;
    SDL_Event event;


    while (quitter == 0) {

        //afficher 

        SDL_Flip(screen);

        //gestion des evenements
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    quitter = 1;
                break;
                
                
                default:
                    
                break;
            }
        }

        //update de l'affichage

        
    }
   
    
    // Clean up
    TTF_Quit();
    Mix_CloseAudio();
    SDL_Quit();

    return 0;


}