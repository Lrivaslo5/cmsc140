/*
 * Class: CMSC140 CRN 25369
 * Instructor: Dr.Grigory
 * Homework 3
 * Computer/Platform/Compiler:
 * Description: A simple C++ program to calculate the average of homework assignments
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luis Rivas Lopez

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string student_name;
	int syllabus_quiz_score, chapter_1_score, chapter_2_score, classwork_1_score, classwork_2_score ;
	int total_score;
	double average_score;

	cout << "Enter the Student's name: ";
	getline(cin, student_name);
	cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
	cin >> syllabus_quiz_score;
	cout << "Enter Chapter 1 Quiz ranging from 0 to 100 : ";
	cin >> chapter_1_score;
	cout << "Enter Chapter 2 Quiz ranging from 0 to 100 : ";
	cin >> chapter_2_score;
	cout << "Enter Programming Classwork1 ranging from 0 to 100 :";
	cin >> classwork_1_score;
	cout << "Enter Programming Classwork2 ranging from 0 to 100 : ";
	cin >> classwork_2_score;

	total_score = syllabus_quiz_score + chapter_1_score + chapter_2_score + classwork_1_score + classwork_2_score;
	average_score = total_score / 5.0;

	cout <<student_name<< " Final Score :" << total_score<< " Average Score :"<<average_score ;
	
	return 0;
}