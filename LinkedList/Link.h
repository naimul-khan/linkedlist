#pragma once
#ifndef LINK_H
#define LINK_H
#include <cstdlib>
#include <iostream>
using namespace std;

// create Link class, which will hold structure and methods
class Link {
	// private structures, and variables
private: 
	// node structure with type definition
	typedef struct node{
		int data; 
		node* next;
	} *nodePtr;

	// node pointers, used to move through linked list
	nodePtr head;
	nodePtr curr;
	nodePtr temp; 

	// public methods
public: 
	// constructor
	Link() {
		head = NULL; 
		curr = NULL; 
		temp = NULL;
	}

	// add node
	void addNode(int addData) {
		// create node
		nodePtr n = new node; // new node
		n->data = addData;	  // data for new node
		n->next = NULL;		  // this node points to NULL, !linked

		if (head != NULL) {
			curr = head;
			while (curr->next != NULL) {
				curr = curr->next; 
			} curr->next = n;
		}
		else {
			// if there is no list created, n should be the start of the list
			head = n;
		};
	}

	void delNode(int searchData) {
		nodePtr delThis = NULL;
		curr = head;
		if (head->data == searchData) {
			delThis = curr;
			head = curr->next;
			delete delThis; 
		}
		else {
			while (curr->data != searchData) {
				temp = curr; 
				curr = curr->next;
			} 
			delThis = curr;
			curr = curr->next;
			delete delThis;

			temp->next = curr;
		}
	}

	void printList() {
		curr = head; 
		while (curr != NULL) {
			cout << curr->data << endl;
			curr = curr->next;
		}
	}
};
#endif


