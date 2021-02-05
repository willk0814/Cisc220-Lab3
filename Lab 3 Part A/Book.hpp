/*
 * Book.hpp
 *
 *  Created on: Mar 17, 2019
 *      Author: lukegrippa
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>

using namespace std;

class Book{
	string fName;
	string lName;
	string aTitle;
	int *ratings;
	int pubYear;
public:
	Book();
	Book (string firstName, string lastName, string title, int PublicationYear);
	Book (string firstName, string lastName, string title, int PublicationYear, int arr[10]);
	~Book();
	double getAvgRating();
	void printRating();
	void printBookInfo();
	bool operator>(Book & b);
	//Write an operator overflow for both > and < - I believe they are going to compare
	//the book's ratings and see which book got better ratings (have to go into the book's
	//ratings and call average rating and compare each of the values)
};



#endif /* BOOK_HPP_ */
