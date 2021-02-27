
#include"CommonFunction.h"
#include"pipe.cpp"
const int SCREEN_WIDTH=1308;
const int SCREEN_HEIGH=736;

static SDL_Window* gWindow=NULL;
static SDL_Surface* gScreen=NULL;
SDL_Surface* gBackground=NULL;
SDL_Surface* gCharacter=NULL;

using namespace std;
void close(){
    SDL_DestroyWindow(gWindow);
    SDL_FreeSurface(gScreen);
    SDL_FreeSurface(gBackground);
}

//SDL_Surface* gCharacter=NULL;

bool Init(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return false;
    }
    else{
        gWindow=SDL_CreateWindow("game",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGH,SDL_WINDOW_SHOWN);
        gScreen=SDL_GetWindowSurface(gWindow);
        if(gScreen==NULL)
            return false;
        else
        return true;
        }
}

int main(int argc, char* argv[]){
    srand(time(0));
    if(Init()==false){
        cout<<"failed to initialize: "<< SDL_GetError();
    }
    else{
        gBackground=LoadImg("4622688.png",gScreen);
        gCharacter=LoadImg("151328547_3620854374657174_3351164430039052146_n.png",gScreen);

        if(gBackground==NULL||gCharacter==NULL){
            cout<<"fail to upload background: "<<SDL_GetError();
        }
        else{
        double a=(SCREEN_WIDTH-72)/6,b=(SCREEN_HEIGH-50)/2,v0=0;
        SDL_Event e;
        bool quit=false;
          list<Pipe>Obs;
          Pipe Obs_test[1000];
          for(int i=0;i<1000;i++){
            Obs_test[i].x=1308+i*(300);
            Obs_test[i].x2=Obs_test[i].x;
            Obs_test[i].y=rand()%(650-400+1)+400;
            Obs_test[i].blank=rand()%(320-150+1)+150;
            Obs_test[i].y2=Obs_test[i].y-Obs_test[i].blank-600;
            Obs_test[i].Below_column=LoadImg("pipelong.png",gScreen);
            Obs_test[i].Above_column=LoadImg("pipelong_reversed.png",gScreen);
            Obs.push_back(Obs_test[i]);
        }
        while(!quit){
            SDL_BlitSurface(gBackground,NULL,gScreen,NULL);
            ApplySurface(gCharacter,gScreen,a,b);
            while(SDL_PollEvent(&e)!=0){
                if(e.type==SDL_QUIT){
                    quit=true;
                    break;
                    }
            }
            if(e.type==SDL_MOUSEBUTTONDOWN){
               v0=-1;
               b+=v0+0.01*0.5;
            }
            else if(e.type==SDL_MOUSEBUTTONUP){
             v0+=0.015;
             b+=v0+0.005*0.5;
            }

            for(list<Pipe>::iterator i=Obs.begin();i!=Obs.end();i++)
            {
            (*i).x-=0.525;
            (*i).x2-=0.525;

            ApplySurface((*i).Below_column,gScreen,(*i).x,(*i).y);
            ApplySurface((*i).Above_column,gScreen,(*i).x2,(*i).y2);

            }

            ApplySurface(gCharacter,gScreen,a,b);
             SDL_UpdateWindowSurface(gWindow);
        }
        }
    }
    close();
    SDL_Quit();
    return 0;
}
