 #include <stdlib.h>
 #include <stdio.h>
 #include <unistd.h>
 #include "graphics/structure.h"
 
 int isCollision(box a, box b)
 {
	 int x1_1 = a.x, x1_2 = a.x + a.width;
	 int x2_1 = b.x, x2_2 = b.x + b.width;
	 int y1_1 = a.y, y1_2 = a.y + a.height;
	 int y2_1 = b.y, y2_2 = b.y + b.height;
	 
	 return (x1_2 >= x2_1 && x2_2 >= x1_1) && (y1_2 >= y2_1 && y2_2 >= y1_1);
 }
 
 int calculateLengthToMove(player * player, movement direction)
 {
	 switch (direction) {
		 case left  :
		 case right :
			 return player->dx;
			 break;
		 case up :
			 return player->dy - player->dy*GRAVITY;
			 break;
		 case down :
			 return player->dy + player->dy*GRAVITY;
			 break;
	 }
 }