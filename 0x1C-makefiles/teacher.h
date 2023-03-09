#ifndef TEACHER_H
#define TEACHER_H

typedef struct {
    char name[50];
    int id;
    char department[50];
} Teacher;

void print_teacher_info(Teacher teacher);

#endif

