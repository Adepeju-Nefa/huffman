/*
 -------------------------------------
 File:    Huffman.h

 Project: Huffman Encode, Huffman Decode

 file description: - Header file for huffman.c, contains structure
 of the huffman tree and all huffman.c related
 declarations and definitions and
 -------------------------------------
 Authors: Group 10

 Name: Adepeju Olowonefa
 Student ID: 193049300
 Email: olow9300@mylaurier.ca


 Version  2020-11-28
 -------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Huffman Node
typedef struct hNode {
	char data;
	int freq;
	struct hNode *left, *right;
} hNode;

hNode* newhNode(char data, int freq);

// Priority Queue Node
typedef struct pqNode {
	hNode *data;
	int priority;
	struct pqNode* next;
} pqNode;

pqNode* newpqNode(hNode *node);

int *getFrequencies(FILE *f);

pqNode *push(pqNode* head, hNode *node);

hNode *huffmanCombine(hNode *min1, hNode *min2);

hNode *initializeHuffmanTree(char *inputFile);

void getPath(hNode* root, char c, char *p);

void free_memory(hNode *root);

void encode(char *inputFile, char *outputFile);

void decode(char *inputFile, char *outputFile);
