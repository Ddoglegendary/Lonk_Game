#include <gbalib.h>

int main() {
    // Add code here!

    Position pos1 = {0, 70};
    Position pos2 = {120, 70};
    Position pos3 = {0, 160};
    Position pos4 = {0, 0};
    Size size1 = {50, 6};
    Color Red = createColor(255, 0, 0);

    drawFilledRectangle(Red, pos1, size1);
    drawFilledRectangle(Red, pos2, size1);
    



    Size Lonksize = {32, 32};
    Sprite Lonk = createSprite("Lonk", Lonksize);
    Position init_pos = {0, 0};
    showSprite(Lonk); 

    
  

    while (true) {
        Position spritepos1 = getPosition(Lonk);

            int vel_x = 9;
            int vel_y = 1;

        if(checkCollisionColor(Lonk, Red)){
            vel_y = 0;
        if(isButtonDown(UP)){
             vel_x = 9;
             vel_y = -20;
            
            
        }            
        }   

        if(checkCollisionPosition, Lonk, pos3){
           updatePosition(Lonk, pos4); 
        }
        

        if(isButtonDown(LEFT)){
            spritepos1.x -= 2;
            updatePosition(Lonk, spritepos1);
        }

        if(isButtonDown(RIGHT)){
            spritepos1.x += 2;
            updatePosition(Lonk, spritepos1);
        }


            spritepos1.y += vel_y;
            updatePosition(Lonk, spritepos1);
        updateScreen();

    }
}