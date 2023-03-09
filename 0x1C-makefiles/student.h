#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    char name[50];
    int id;
    double gpa;
} Student;

void print_student_info(Student student);

#endif

