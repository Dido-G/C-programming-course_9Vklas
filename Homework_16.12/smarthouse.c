#include <stdio.h>

void switch_lights(unsigned char *state, int room) {
    *state ^= (1 << (room - 1));
}

void print_state(unsigned char state) {
    printf("The light is on in rooms: ");
    int first = 1;
    for (int i = 0; i < 8; i++) {
        if (state & (1 << i)) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i + 1);
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    unsigned char state = 0;
    int choice, room;

    while (1) {
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter room number (1-8): ");
            scanf("%d", &room);
            if (room >= 1 && room <= 8) {
                switch_lights(&state, room);
            } else {
                printf("Invalid room number!\n");
            }
        } else if (choice == 2) {
            print_state(state);
        } else {
            printf("Invalid choice! Please select 1 or 2.\n");
        }

    }

    return 0;
}