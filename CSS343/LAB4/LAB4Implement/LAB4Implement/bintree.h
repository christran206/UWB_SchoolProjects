#ifndef BINTREE_H
#define BINTREE_H
#include <string>
#include <iostream>
#include <fstream>
#include "publication.h"

using namespace std;

//----------------------- class BinTree  ------------------------------------
// ADT BinTree: -- A binary search tree that contain many nodes in it. 
//              -- Each node contain a Nodedata pointer, and two pointer
//                 to the left and right branchs 
//              -- No duplicated Nodedata allow

//   The binary search tree class have the following functions
//   -- basic constructor, copy constructor, deconstructor. 
//   -- allows checking if a tree is empty, useing isEmpty
//   -- allows makeing a tree empty, usein makeEmpty
//   -- allows insert a Nodedata into a Tree
//      return false if insert fail.
//   -- allows for assignment of 2 BinTree, useing =operator
//   -- allows for comparison of 2 BinTree,  useing == or !=
//   -- allows output data useing <<, display as an inorder traversal
//   -- allows user track and retrieve sepcific data useing  retrieve 
//   -- allows Find the height of a given value in the tree. by getHeight
//   -- fills an array of NodeData* by inorder traversal of a tree.
//   -- builds a balanced BinTree from a sorted array of NodeData*
//   -- displays the tree sideways (Written by Dr.Carol)
//          
// Assumptions:  
//   -- Nodedata will provide assignment, compare and << operator 
//   -- user will handle Nodedata gentally 
//      after calling retrive, bstreeToArray and arrayToBSTree
//   -- When useing bstreeToArray and arrayToBSTree, 
//      The size of tree and array is less than 100
//   -- When useing arrayToBSTree, The root (recursively) is at (low+high)/2 
//      where low is the lowest subscript of the array range
//      and high is the highest.
//   -- For getHeight function only, you do not get to
//      know that the tree is a binary search tree.
//
//
// 
//----------------------------------------------------------------------------


class BinTree { // you add class/method comments and assumptions

	friend ostream& operator<<(ostream &, const BinTree &);

public:

	BinTree(); // constructor
	BinTree(const BinTree &); // copy constructor
	~BinTree(); // destructor, calls makeEmpty

	bool isEmpty() const; // true if tree is empty, otherwise false
	void makeEmpty(); // make the tree empty so isEmpty returns true
    void display() const;
	bool insert(Publication*); // insert a Nodedata into tree

	//Retrieve a NodeData* in the tree
	bool retrieve(const Publication &, Publication*&) const;

	// Find the height of a given value in the tree.
	int getHeight(const Publication &) const;

private:
	struct Node {
		Publication* data; // pointer to data object
		Node* left; // left subtree pointer
		Node* right; // right subtree pointer
	};

	Node* root; // root of the tree

    void inOrderDisplay(Node* current) const;
	// utility functions
    void makeEmptyHelper(Node*);//helper for makeEmpty

};

#endif