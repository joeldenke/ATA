// System headers
#include <stdio.h>
#include <stdlib.h>

// User headers
#include "includes/graphics/structure.h"
#include "includes/libcalc.h"
#include "includes/linkedList.h"

int testCollision()
{
	box a, b;
	
	a.x = 0;
	a.y = 0;
	a.width = 10;
	a.height = 10;
	
	b.x = -10;
	b.y = 10;
	b.width = 10;
	b.height = 10;
	
	if (isCollision(a, b)) {
		printf("Collision detected!\n");
		return 1;
	} else {
		printf("No collision!");
		return 2;
	}
}

int testLinkedList()
{
	nodeList *list = malloc(sizeof(nodeList*));
	insertEnd(list, createNode("test1"));
	insertEnd(list, createNode("test2"));
	insertEnd(list, createNode("test3"));
	insertEnd(list, createNode("test4"));
	
	linkNode * node = list->end;
	
	do {
		node = node->next;
		printf("Node data: %s\n", (char *)node->data);
	} while (node != list->end);
}

int main(int argc, char *argv[])
{
	testLinkedList();
	testCollision();
}