#ifndef FUNCS_H
#define FUNCS_H


typedef struct
{
    char name[50];
    int registration;
    int note1;
    int note2;
} Student;

void listStudents();
void appendStudent(int register_number);


#endif