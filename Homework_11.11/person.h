
#ifndef PERSON_H
#define PERSON_H

#define NAME_LENGTH 20

typedef struct {
    char firstName[NAME_LENGTH];
    char middleName[NAME_LENGTH];
    char lastName[NAME_LENGTH];
    int birthYear;
} Person;

#endif
