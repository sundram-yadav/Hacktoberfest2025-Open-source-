#include <stdio.h>
#include <string.h>

// Function to calculate average of 3 scores
double average_score(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

// Structure definition
struct player {
    char player_name[100];
    int jersey_number;
    double players_performance;
};

// Function to sort players by performance (descending order)
void selection_sort(struct player arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].players_performance > arr[max_idx].players_performance) {
                max_idx = j;
            }
        }
        // Swap
        struct player temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

int main() {
    int n;
    printf("ENTER HOW MANY PLAYERS' DATA YOU WANT: ");
    scanf("%d", &n);
    getchar(); // clear newline from input buffer

    struct player players[n];

    // Input player details
    for (int i = 0; i < n; i++) {
        double match1, match2, match3;

        printf("\nEnter player %d name: ", i + 1);
        fgets(players[i].player_name, sizeof(players[i].player_name), stdin);
        players[i].player_name[strcspn(players[i].player_name, "\n")] = '\0'; // remove newline

        printf("Enter jersey number: ");
        scanf("%d", &players[i].jersey_number);

        printf("Enter score in match 1: ");
        scanf("%lf", &match1);
        printf("Enter score in match 2: ");
        scanf("%lf", &match2);
        printf("Enter score in match 3: ");
        scanf("%lf", &match3);

        players[i].players_performance = average_score(match1, match2, match3);
        getchar(); // clear newline before next fgets
    }

    // Sort players by performance
    selection_sort(players, n);

    // Print sorted results
    printf(" Player Performance (High to Low):\n");
    for (int i = 0; i < n; i++) {
        printf("\nPlayer: %s\n", players[i].player_name);
        printf("Jersey Number: %d\n", players[i].jersey_number);
        printf("Average Score: %.2f\n", players[i].players_performance);
    }

    return 0;
}
