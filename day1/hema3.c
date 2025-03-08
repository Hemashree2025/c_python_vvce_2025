#include <stdio.h>

int main() {
    int oxygen[3][3];  
    int i, j;
    int valid_input = 1; 
    float avg[3];  
    

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter oxygen level for Trainee %d in Round %d: ", i + 1, j + 1);
            if(scanf("%d", &oxygen[i][j]) != 1 || oxygen[i][j] < 1 || oxygen[i][j] > 100) {
                printf("INVALID INPUT\n");
                valid_input = 0;
                break;
            }
        }
        if(!valid_input) break;
    }
    if(!valid_input) return 0;

    for(i = 0; i < 3; i++) {
        avg[i] = (oxygen[i][0] + oxygen[i][1] + oxygen[i][2]) / 3.0;
        avg[i] = (int)(avg[i] + 0.5);  
    }

    float max_avg = avg[0];
    for(i = 1; i < 3; i++) {
        if(avg[i] > max_avg) {
            max_avg = avg[i];
        }
    }

    if(max_avg < 70) {
        printf("All trainees are unfit.\n");
        return 0;
    }

    for(i = 0; i < 3; i++) {
        if(avg[i] == max_avg) {
            printf("Trainee Number: %d\n", i + 1);
        }
    }

    return 0;
}
