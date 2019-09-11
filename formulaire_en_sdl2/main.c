#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_ttf.h>
#include <string.h>
#define LONGUEUR_WIDTH 1024
#define LARGEUR_HEIGHT 650

void gererErreur(const char *message)
{
    SDL_Log("ERREUR: %s >%s\n",message,SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    SDL_Renderer *renderer = NULL;
    SDL_Init(SDL_INIT_VIDEO);
    window=SDL_CreateWindow("FORM",x,y,LONGUEUR_WIDTH,LARGEUR_HEIGHT,SDL_WINDOW_SHOWN | SDL_WINDOW_BORDERLESS);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    SDL_UpdateWindowSurface(window);
/*++++++++++++++++++++++++++++++++++++++++++++IMAGES++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    SDL_Surface *image1 =NULL;
    SDL_Texture *texture1 = NULL;
    //----------------FOND D'IMAGE---------------
   image1 = SDL_LoadBMP("BD/images/identificationBoss.bmp");
   if (image1==NULL){  SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);gererErreur("impossible de charger l'image1!!");}
   texture1 = SDL_CreateTextureFromSurface(renderer,image1);
   SDL_FreeSurface(image1);
   SDL_Rect rectangle1;
   if (texture1==0) {    SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);gererErreur("impossible de charger la texture1!!");}
   if(SDL_QueryTexture(texture1,NULL,NULL,&rectangle1.w,&rectangle1.h)!=0) {SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);gererErreur("impossible de charger la la texture1!!");}
   rectangle1.x = (LONGUEUR_WIDTH-rectangle1.w)/2;
   rectangle1.y = (LARGEUR_HEIGHT-rectangle1.h)/2;
   if (SDL_RenderCopy(renderer,texture1,NULL,&rectangle1)) {SDL_DestroyRenderer(renderer);SDL_DestroyWindow(window);gererErreur("impossible de charger l'affichage de l'image1!!");}
    SDL_RenderPresent(renderer);
//---------------------------text Input---------------------------------
char texte[100] = "";
SDL_StartTextInput();
//------------------------------------EVENEMENT-----------------------------
      SDL_Event event; int isRunning=1;  int i=0;  char nomUtilisateur[i]; int lenght;
    while (isRunning)
    {
        while(SDL_PollEvent(&event))
        {
            if (event.type == SDL_MOUSEMOTION)
                printf("\nX:%d et Y:%d",event.motion.x,event.motion.y);
            if (event.type == SDL_QUIT)
                    isRunning=0;
            else if (event.type == SDL_TEXTINPUT || event.type == SDL_KEYDOWN)
            {
                lenght = strlen(texte);
                system("cls");
                if (event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_BACKSPACE && lenght>0)
                {
                    texte[lenght - 1] = 0;
                    lenght--;
                }
                else if (event.type == SDL_TEXTINPUT)
                    strcat(texte,event.text.text);

//---------------------------affichage--------------------------------------
    SDL_Surface *surface= SDL_GetWindowSurface(window);
    SDL_FillRect(surface,NULL,SDL_MapRGB(surface->format,0,0,55));
    TTF_Init();
    TTF_Font *font = TTF_OpenFont("arial.ttf", 15);
    SDL_Color color = { 255, 255, 255 };
    SDL_Rect rect1;
    rect1.x=10;
    rect1.y=5;
    SDL_Surface *texte1=TTF_RenderText_Blended(font,texte,color);
     SDL_BlitSurface(texte1,NULL,surface,&rect1);
    SDL_UpdateWindowSurface(window);
    TTF_CloseFont(font);
//---------------------------fin affichage--------------------------------------
      }
        }
        SDL_UpdateWindowSurface(window);
    }
//------------------EXIT PROCESSING--------------------------------------------------------
SDL_StopTextInput();

    TTF_Quit();

    window=NULL;

    SDL_Quit();

    return 0;
}
