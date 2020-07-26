#include <gb/gb.h>
#include <stdio.h>
#include "person.c"
#include "background_map.c"
#include "background_tiles.c"
#include <gb/font.h>

void main(){

    font_t min_font;

    font_init();
    min_font = font_load(font_min);
    font_set(min_font);

    //background 
    set_bkg_data(37,7,bgt);
    set_bkg_tiles(0,0,40,18, bg);

    SHOW_BKG;
    DISPLAY_ON;

    /*
    while(1){
        scroll_bkg(1,0);
        delay(100);
    }

    UINT8 sprite_index = 0;

    set_sprite_data(0,2,Person);
    set_sprite_tile(0,0);
    move_sprite(0,88,78);
    SHOW_SPRITES;

    while(1){

        // Code to switch sprites
       
        if(sprite_index == 0){
            sprite_index = 0;
        } else {
            sprite_index = 0;
        }
  
        //set_sprite_tile(0, sprite_index);

        // Code to move sprite using movement keys
      
        switch(joypad()){
            case J_LEFT:
                scroll_sprite(0,-10,0);
                break;
            case J_RIGHT:
                scroll_sprite(0,10,0);
            case J_UP:
                scroll_sprite(0,0,-10);
                break;
            case J_DOWN:
                scroll_sprite(0,0,10);
                break;
        }
        delay(100); // Delay is for so it doesnt go zooooooooming 
   
    }
    */
} 