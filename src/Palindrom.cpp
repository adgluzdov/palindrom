#include "palindrom.h"

bool is_palindrom(CNode* head) {
	int size = 0;
	CNode* node = head;
	while (node != 0) {
		size++;
		node = node->next;
	}
	node = head;
	CNode* mass = new CNode[size];
	for (int i=0;i<size;i++) {
		mass[i] = node->data;
		node = node->next;
	}	
	int middle = size / 2;
	for (int i=0;i<middle;i++) {
		if (mass[i].data != mass[size - 1 - i].data)
			return false;
	}
	return true;
}