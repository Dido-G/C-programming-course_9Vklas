#include "processes.h"
#include <stdio.h>
#include <string.h>

Process processes[MAX_PROCESSES];
int processcount = 0;

static int next_id = 1;

static int nextprocessid() {
    if (next_id < MAX_PROCESSES) {
        return next_id++; 
    }
    return 0; 
}

int createnewprocess(const char *name){
    if (processcount >= MAX_PROCESSES){
        return 0; //no space for new process
    }
    int id = nextprocessid();
    if (id == 0){
        return 0; //no id available
    }
    processes[processcount].id = id;
    strncpy(processes[processcount].name, name, MAX_PROCESS_NAME );
    processes[processcount].name[MAX_PROCESS_NAME - 1] = '\0'; 
    processcount++;
    return id;
}

int stopprocess(int id) {
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            for (int j = i; j < processcount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processcount--;
            return 1;
        }
    }
    return 0; 
}

void listprocesses() {
    for (int i = 0; i < processcount; i++) {
        printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
    }
}

