#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5
#define MAX_PROCESS_NAME 30
typedef struct {
    int id;
    char name[MAX_PROCESS_NAME];
} Process;

extern Process processes[MAX_PROCESSES];
extern int processcount;

int createnewprocess(const char *name);
int stopprocess(int id);
void listprocesses(void);



#endif