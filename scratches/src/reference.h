//
// Created by 蔡宜身 on 2020/12/1.
//

#ifndef DATA_STRUCTURE_REFERENCE_H
#define DATA_STRUCTURE_REFERENCE_H

void typeConvention();

void literals();

void defineVariable();

/**
 * Function with reference type param
 * @param x
 * @param y
 */
void swap(int &x, int &y);

/**
 * Default values in function
 * @param a
 * @param b
 */
int sum(int a, int b = 20);

double &setValues(int i);

#endif // DATA_STRUCTURE_REFERENCE_H
