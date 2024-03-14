#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    string name;
    string major;
};

void makeStudent(Student *student);
void printStudent(Student *head);

void makeStudent(Student *student)
{
  ifstream ifs;
  ifs.open("students.txt");
  if(!ifs)
  {
    cerr << "Error: file open error" << endl;
    exit(0);
  }
  for(int i=0; i<N; i++) {
    ifs >> (student+ i)->id >> (student+i)->name >> (student+i)->major;
  }
}

void printStudent(Student *student)
{
    for(int i=0; i<N; i++)
    {
        cout << (student+i)->id << " " << (student+i)->name << " " << (student+i)->major << endl;
    }

    cout << endl;
}