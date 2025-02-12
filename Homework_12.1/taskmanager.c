#include "processes.h"
#include <stdio.h>

void menu() {
    printf("\nTask Manager\n");
    printf("1. Create Process\n");
    printf("2. List Processes\n");
    printf("3. Stop Process\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
}

int main(){
    int choice;
    char name[MAX_PROCESS_NAME + 1];
    int id;

    while (1) {
        menu();
        scanf("%d", &choice);
        getchar();

        switch (choice) {
        case 1:
            printf("Enter process name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0'; 

            int new_id = createnewprocess(name);
            if (new_id == 0) {
                printf("Error: Maximum number of processes reached.\n");
            } else {
                printf("Process created with ID: %d\n", new_id);
            }
            break;

        case 2:
            if (processcount == 0) {
                printf("No running processes.\n");
            } else {
                listprocesses();
            }
            break;
            
        case 3:
            printf("Enter process ID to stop: ");
            scanf("%d", &id);
            if (stopprocess(id)) {
                printf("Process with ID %d stopped.\n", id);
            } else {
                printf("Error: No process found with ID %d.\n", id);
            }
            break;

        case 4:
            printf("Exiting Task Manager.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
}