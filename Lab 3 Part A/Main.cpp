/* Luke Grippa, Will Koenig, and Kyle Ernst
 * Daniel Gaston
 * 3/22/19
 * This file contains functions for lab 3 part A. The functions aren't necessarily related
 * in any way other than that they are required for lab 3 part A.
 */

#include "Book.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Book findGreatestBook(Book arr[], int size);

int main(){

	//Code For Question 1:
	cout << "Problem 1:"  << endl;
	string s = "Paul";
	string t = "Blart";
	string e = "Moby Dick";
	string g = "This is the greatest book!";
	int pubYear = 2019;
	int rating[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int bestRating[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
	Book b1(s, t, e, pubYear, rating);
	Book b2(s, t, e, pubYear, rating);
	Book b3(s, t, e, pubYear, rating);
	Book b4(s, t, e, pubYear, rating);
	Book b5(s, t, g, pubYear, bestRating);
	Book fiveBooks[5];
	fiveBooks[0] = b1;
	fiveBooks[1] = b2;
	fiveBooks[2] = b3;
	fiveBooks[3] = b4;
	fiveBooks[4] = b5;
	Book greatest = findGreatestBook(fiveBooks, 5);
	greatest.printBookInfo();
	cout << " "  << endl;

	//Code From Problem 2:
	cout << "Problem 2:"  << endl;
	Book *b6 = new Book("Arthur", "Miller", "Book b6", 2019);
	b6->printBookInfo();
	cout << " "  << endl;

	//Code: From Problem 3
	cout << "Problem 3:"  << endl;
	Book *twoBooks;
	twoBooks = new Book[2];
	twoBooks[0] = b4;
	twoBooks[1] = b5;
	for (int i = 0; i < 2; i++){
		twoBooks[i].printBookInfo();
	}
	cout << " "  << endl;

}

Book findGreatestBook(Book arr[], int size) {
	Book greatest = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > greatest) {
			greatest = arr[i];
		} else {
		}
	}

	return greatest;
}
