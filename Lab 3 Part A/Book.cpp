/*
 * Book_Functions.cpp
 *
 *  Created on: Mar 17, 2019
 *      Author: lukegrippa
 */

#include "Book.hpp"

Book::Book () {
	fName = " ";
	lName = " ";
	aTitle = " ";
	pubYear = 2019;
}

Book::Book (string firstName, string lastName, string title, int PublicationYear) {
	fName = firstName;
	lName = lastName;
	aTitle = title;
	pubYear = PublicationYear;
	ratings = new int[10];
}

Book::Book (string firstName, string lastName, string title, int PublicationYear, int arr[10]) {
	fName = firstName;
	lName = lastName;
	aTitle = title;
	pubYear = PublicationYear;
	ratings = arr;
}

Book::~Book() {
	cout << "destroying " << aTitle << endl;
}

double Book::getAvgRating() {
	int sum = 0;
	for (int i  = 0; i < 10; i ++) {
		sum += ratings[i];
	}
	double avgRating = sum / 10;
	return avgRating;

}

void Book::printRating() { //Should this print AvgRating or print the array
	if (getAvgRating() == 0){
		cout << "no ratings yet" << endl;
	}else {
		cout << "Average Rating: " << getAvgRating() << endl;
	}
}

void Book::printBookInfo() {
	cout << "Author: " << fName << " " << lName <<  ", ";
	cout << "Title: " << aTitle<<  ", ";
	cout << "Publication Year: " << pubYear << ", ";
	printRating();
}

bool Book::operator>(Book & b) { //Overload: book is greater than b.
	return (b.getAvgRating() < getAvgRating());

}
