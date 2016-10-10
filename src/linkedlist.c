/*
 * linkedlist.c
 *
 *  Created on: Oct 9, 2016
 *      Author: Jason
 */

#include <stdlib.h>
#include "linkedlist.h"

void ll_add(linkedlist* list, node* newNode) {
	if(list->root == NULL) {
		list->root = newNode;
		return;
	}

	node* parent = list->root;
	while(parent->next != NULL) {
		parent = parent->next;
	}
	parent->next = newNode;
}

int ll_size(linkedlist* list) {
	int size = 0;

	node* n = list->root;
	while(n != NULL) {
		size++;
		n = n->next;
	}

	return size;
}
