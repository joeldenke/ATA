/**
 * Contains structs and prototype functions for modifying the game world.
 *
 * @author Joel Denke      	mail@happyness.se
 * @author Marcus Isaksson	marcus.is@telia.com
 * @date   12 april 2012
 */

#ifndef _LIBCALC_H
#define _LIBCALC_H

/**
 * Function that test if two boxes intersects or not
 *
 * @author	Joel Denke	mail@happyness.se
 * @param 	a  		Properties of a box a
 * @param 	b 		Properties of a box b
 *
 */
int isCollision(box, box);

/**
 * Calculate friction and gravity into length in one timestep
 *
 * @author	Joel Denke	mail@happyness.se
 * @param	box       	Properties of a box
 * @param	direction 	Direction you want to go.
 */
int calculateLengthToMove(player *, movement);
#endif