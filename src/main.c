/*
 -------------------------------------
 File:    Main.c
 Project: Huffman Encode, Huffman Decode

 file description: - This file contains the main program and
 user interface for running your Huffman Encoder/Decoder.
 -------------------------------------
 Authors: Group 10

 Name: Muhammad Rufaid Jugoo
 Student ID: 180174860
 Email: jugo4860@mylaurier.ca

 Name: Lovette Oyewole
 Student ID: 190888960
 Email: oyew8960@mylaurier.ca

 Name: John Oyelade
 Student ID: 180284190
 Email: oyel4190@mylaurier.ca

 Name: Adepeju Olowonefa
 Student ID: 193049300
 Email: olow9300@mylaurier.ca

 Name: Esseoghene Ogbaran
 Student ID: 190267850
 Email: ogba7850@mylaurier.ca

 Version  2020-11-28
 -------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "huffman.h"

int main(int argc, char **argv) {


	if (argc != 4) {
		fprintf(stderr, "USAGE: ./huffman [encode | decode] "
				"<input file> <output file>\n");
		return 0;
	}

	if (strcmp(argv[1], "encode") == 0) { // Encode
		encode(argv[2], argv[3]);
	} else if (strcmp(argv[1], "decode") == 0) { // Decode
		decode(argv[2], argv[3]);
	} else
		fprintf(stderr, "USAGE: ./huffman [encode | decode] "
				"<input file> <output file>\n");

	return 0;
}
