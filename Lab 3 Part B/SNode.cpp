/*
 * SNode.cpp
 *
 *  Created on: Mar 18, 2019
 *      Author: lukegrippa
 */

#include "SNode.hpp"

SNode::SNode() {
	rating = NULL;
	comments = " ";
	cin >> rating;
	cin >> comments;
	next = NULL;
}

SNode::SNode(int r, string c) {
	rating = r;
	comments = c;
	next = NULL;
}

SNode::~SNode() {
	cout << "removing " << rating << ", " << comments << endl;
	cout << "deleting " << rating << ", " << comments << endl;
}

void SNode::printNode() {
	cout << "Rating: " << rating << ", Comments: " << comments << endl;
}


