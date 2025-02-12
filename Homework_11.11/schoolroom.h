#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

#define MAX_PEOPLE_IN_ROOM 50

typedef struct {
    int roomNumber;                          
    Person peopleInRoom[MAX_PEOPLE_IN_ROOM];
} SchoolRoom;

#endif
