/**
 * Contains structs and prototype functions for modifying the game world.
 *
 * @author Joel Denke      	mail@happyness.se
 * @author Marcus Isaksson	marcus.is@telia.com
 * @date   12 april 2012
 */

#ifndef _STRUCTURE_H
#define _STRUCTURE_H

#define MIN_PLAYERS 2
#define NO_TEAMS    2
#define NO_PLAYERS  6
#define NO_OBJECTS  100
#define GRAVITY     0.25
#define FRICTION    0.025

typedef enum {sPlayer, sObject, sCoordinate, sAction, sMessage} sType;
typedef enum {left, right, up, down} movement;

/**
 * Structure for a "box" in the world.
 * 
 */
typedef struct {
	int x, y, width, height;
} box;

/**
 * Structure for a player in the world.
 * 
 */
typedef struct {
	int id, no, team, dx, dy, mass;
	box box;
} player;

/**
 * An object. The world contains a number of blocks which is objects.
 */
typedef struct {
	int id, movable;
	box box;
} object;

/**
 * A world contains maximum 6 players and is built of blocks.
 * Each block is an object.
 * 
 */
typedef struct {
	player players[NO_PLAYERS];
	object objects[NO_OBJECTS];
	int noOfObjects;
} world;

#endif