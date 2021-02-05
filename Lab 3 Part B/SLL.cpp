/*
 * SLL.cpp
 *
 *  Created on: Mar 20, 2019
 *      Author: lukegrippa
 */

#include "SLL.hpp"
#include "SNode.hpp"

SLL::SLL(){
	first = NULL;
	last = NULL;
	size = 0;
}

SLL::~SLL(){
	cout << "deleted each node in ll" << endl;
}

void SLL::printSLL(){
	SNode *tmp;
	tmp = first;
	for (int i = 0; i < size; i++){
		tmp->printNode();
		tmp = tmp -> next;
	}
	cout << endl;
}

//
void SLL::insertInOrder(int r, string c){
	if (size == 0) {
		addFirst(r, c);
	} else if ((r < first->rating) && (size != 0)) {
		addAtFront(r, c);
	} else if ((r > last->rating) && (size != 0)) {
		push(r, c);
	} else {
		SNode *tmp;
		tmp = first;
		int p = 0;
		for (int i = 0; i <= size; i++){
			if ((tmp->next->rating > r) && (p == 0)) {
				SNode *n = new SNode (r, c);
				n->next = tmp->next;
				tmp->next = n;
				p++;
			} else {
				tmp = tmp->next;
			}
		}
		size++;
	}
}

//pushes a new Node with rating r and comments c onto the end of the SLL
void SLL::push(int r, string c){
	SNode *n = new SNode(r, c);
	last->next = n;
	n -> next = NULL;
	last = n;
	size++;
}

//adds a new node made from r and c to the beginning of the list
void SLL::addAtFront(int r, string c){
	SNode *n = new SNode(r,c);
	n -> next = first;
	first = n;
	size++;
}

//adds the very first node to the made from r and c to an empty list
void SLL::addFirst(int r, string c){
	SNode *n = new SNode(r,c);
	first = n;
	last = n;
	n -> next = NULL;
	size++;
}

//removes the last node from the LL and returns the rating
int SLL::pop(){
	SNode *tmp = first;
	for (int i = 0; i < size - 2; i++){
		tmp = tmp -> next;
	}
	int x = last->rating;
	string y = last->comments;
	delete last;
	last = tmp;
	last->next = NULL;
	size--;
	return x;
}


// calculates the average rating (by traversing the list) and then returns
// the average rating.
double SLL::getAve() {
	SNode *tmp;
	tmp = first;
	double sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++){
			sum += tmp->rating;
			tmp = tmp -> next;
			count++;
		}
	double ave = sum / count;
	return ave;
}
