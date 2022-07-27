//
// Created by 蔡宜身 on 2020/12/1.
//
#include "file_streams.h"

#include <fstream>
#include <iostream>

using namespace std;

void readAndWriteFile() {
  char data[100];

  // open a file in write mode
  ofstream outfile;
  outfile.open("hello.txt");
  cout << "Writing to the file" << endl;
  cout << "Enter your name: ";
  cin.getline(data, 100);
  outfile << data << endl;

  cout << "Enter you age: ";
  cin >> data;
  cin.ignore();

  // again write inputted data into the file.
  outfile << data << endl;
  outfile.close();

  // open a file to read mode
  ifstream infile;
  infile.open("hello.txt");
  cout << "Reading from the file" << endl;
  infile >> data;

  cout << data << endl;

  infile >> data;
  cout << data << endl;
  infile.close();
}
