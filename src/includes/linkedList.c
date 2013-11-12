#include "stdlib.h"
#include "linkedList.h"

linkNode * createNode(void * data)
{
	linkNode * node = malloc(sizeof(linkNode));
	node->data      = data;
	
	return node;
}

void gotoNode(nodeList *list, int i)
{
	linkNode *node = list->end;
	int elNo       = 0;
	
	do {
		node = node->prev;
		elNo++;
	} while (node != list->end && elNo != i);
	
	list->current = node;
}

void insertAfter(linkNode *node, linkNode *newNode)
{
	newNode->next    = node->next;
	newNode->prev    = node;
	node->next->prev = newNode;
	node->next       = newNode;
}

void insertEnd(nodeList *list, linkNode *node)
 {
	if (list->end == NULL) {
		node->prev = node;
		node->next = node;
	} else {
		insertAfter(list->end, node);
	}

	list->end = node;
}

void removeNode(nodeList *list, linkNode *node)
{
	if (node->next == node) {
		list->end = NULL;
	} else {
		node->next->prev = node->prev;
		node->prev->next = node->next;
		
		if (node == list->end) {
			list->end = node->prev;
		}
	}
	
	free(node);
}
