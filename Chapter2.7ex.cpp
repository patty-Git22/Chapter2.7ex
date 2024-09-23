/*
Title: Chapter 2 exercise 7 - Ocean  levels
File name: Chapter2.7.cpp
Programmer: Patrick Maloon
Date: 9/23/24

Requirements:
Write a C++ program to do the following:
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of the number of millimeters the ocean level rises per year..

*/

#include <iostream>
using namespace std;

int main()
{
	double oceanlevel = 1.5;
	double num1, num2, num3;
	num1 = 1.5 * 5;
	num2 = 1.5 * 7;
	num3 = 1.5 * 10;
	cout << "The ocean's level current level is " << oceanlevel << "mL" << endl;
	cout << "The ocean's' level will be " << num1 << "mL in 5 years" << endl;
	cout << "The ocean's level will be " << num2 << "mL in 7 years" << endl;
	cout << "The ocean's level will be " << num3 << "mL in 10 years" << endl;

	return 0;

}