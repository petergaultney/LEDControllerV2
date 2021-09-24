#pragma once

char usflag[] = {'b', 'b', 'b', 'w', 'w', 'w', 'w', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'w', 'w', 'w', 'r', 'r', 'r', 'b', 'b', 'b'};
char init_rightwing[] = {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g'};
char rightwing[] = {'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g'};
char init_leftwing[] = {'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'o', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r'};
char leftwing[] = {'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'w', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r'};
char init_nose[] = {'b', 'b', 'b', 'b'};
char init_fuse[] = {'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
char init_tail[] = {'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
char christmas[] = {'r', 'r', 'r', 'g', 'g', 'g', 'g', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'g', 'g', 'g', 'r', 'r', 'r', 'g', 'g', 'g'};


DEFINE_GRADIENT_PALETTE( orange_yellow ) {  //RGB(255,165,0) RGB(255,244,175) RGB(255,246,0)
  0,   255,165,  0,   //orange
128,   255,244,175,   //bright white-yellow
255,   255,246,  0 }; //

DEFINE_GRADIENT_PALETTE( teal_blue ) {      //RGB(0,244,216) RGB(48,130,219)
  0,     0,244,216,   //tealish
255,    48,130,219 }; //blueish

DEFINE_GRADIENT_PALETTE( blue_black ) {     //RGB(0,0,0) RGB(0,0,255)
  0,    0,0,0,
255,    0,0,255 };

DEFINE_GRADIENT_PALETTE( variometer ) {     //RGB(255,0,0) RGB(255,255,255) RGB(0,255,0)
  0,    255,0,0, //Red
118,    255,255,255, //White
138,    255,255,255, //White
255,    0,255,0 }; //Green

DEFINE_GRADIENT_PALETTE( USA ) {           //RGB(255,0,0) RGB(255,255,255) RGB(0,0,255)
  0,   255,0,  0,   //red
 25,   255,0,  0,   //red
128,   255,255,255,   //white
220,   0,0,255,   //blue
255,   0,0,255 }; //blue
