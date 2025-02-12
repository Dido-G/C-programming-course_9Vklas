
#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

#define MAX_STUDENTS 26

typedef struct {
    Person students[MAX_STUDENTS];  
    char section;                   
    int grade;                      
    Person classTeacher;            
} SchoolClass;

#endif 
