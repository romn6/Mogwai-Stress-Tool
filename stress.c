#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/time.h>
#include "stress.h"

int main (int argc, char *argv[]) {
    

    printf(" ███▄ ▄███▓ ▒█████    ▄████  █     █░ ▄▄▄       ██▓     ██████ ▄▄▄█████▓ ██▀███  ▓█████   ██████   ██████ ▓█████  ██▀███  \n");
    printf("▓██▒▀█▀ ██▒▒██▒  ██▒ ██▒ ▀█▒▓█░ █ ░█░▒████▄    ▓██▒   ▒██    ▒ ▓  ██▒ ▓▒▓██ ▒ ██▒▓█   ▀ ▒██    ▒ ▒██    ▒ ▓█   ▀ ▓██ ▒ ██▒\n");
    printf("▓██    ▓██░▒██░  ██▒▒██░▄▄▄░▒█░ █ ░█ ▒██  ▀█▄  ▒██▒   ░ ▓██▄   ▒ ▓██░ ▒░▓██ ░▄█ ▒▒███   ░ ▓██▄   ░ ▓██▄   ▒███   ▓██ ░▄█ ▒\n");
    printf("▒██    ▒██ ▒██   ██░░▓█  ██▓░█░ █ ░█ ░██▄▄▄▄██ ░██░     ▒   ██▒░ ▓██▓ ░ ▒██▀▀█▄  ▒▓█  ▄   ▒   ██▒  ▒   ██▒▒▓█  ▄ ▒██▀▀█▄  \n");
    printf("▒██▒   ░██▒░ ████▓▒░░▒▓███▀▒░░██▒██▓  ▓█   ▓██▒░██░   ▒██████▒▒  ▒██▒ ░ ░██▓ ▒██▒░▒████▒▒██████▒▒▒██████▒▒░▒████▒░██▓ ▒██▒\n");
    printf("░ ▒░   ░  ░░ ▒░▒░▒░  ░▒   ▒ ░ ▓░▒ ▒   ▒▒   ▓▒█░░▓     ▒ ▒▓▒ ▒ ░  ▒ ░░   ░ ▒▓ ░▒▓░░░ ▒░ ░▒ ▒▓▒ ▒ ░▒ ▒▓▒ ▒ ░░░ ▒░ ░░ ▒▓ ░▒▓░\n");
    printf("░  ░      ░  ░ ▒ ▒░   ░   ░   ▒ ░ ░    ▒   ▒▒ ░ ▒ ░   ░ ░▒  ░ ░    ░      ░▒ ░ ▒░ ░ ░  ░░ ░▒  ░ ░░ ░▒  ░ ░ ░ ░  ░  ░▒ ░ ▒░\n");
    printf("░      ░   ░ ░ ░ ▒  ░ ░   ░   ░   ░    ░   ▒    ▒ ░   ░  ░  ░    ░        ░░   ░    ░   ░  ░  ░  ░  ░  ░     ░     ░░   ░ \n");
    printf("      ░       ░ ░        ░     ░          ░  ░ ░           ░              ░        ░  ░      ░        ░     ░  ░   ░     \n\n\n");
    printf("\n");

    printf("How can we stress you today, chose one below: \n");

    printf("\nOption 1: Kill your CPU\t\t");
    printf("Option 2: Kill your RAM\n\n");
    printf("Option 3: Kill Both\t\t");
    printf("Option 4: What files?\n\n");
    printf("Option 5: What network?\t\t");
    printf("Option 6 :Stress you later xD\n\n");

    int choice;
    printf("-->");
    if(scanf("%d", &choice) != 1){
        printf("First time aint it...\n");
        return -1;
    }

    switch(choice){
        case 1:
            printf("\nOption 1: Kill your CPU\t\t");
            printf("\n");
            break;
        case 2:
            printf("Option 2: Kill your RAM\n\n");
            break;
        case 3:
            printf("Option 3: Kill Both\t\t");    
            printf("\n");
            break;
        case 4:
            printf("Option 4: What files?\n\n");
            printf("\n");
            break;
        case 5:
            printf("Option 5: What network?\t\t");
            break;
        case 6:
            printf("Option 6 :Stress you later xD\n\n");
            printf("\n");
            return 0;
        default:
            printf("You want me stress all over you or not?\n");
            return 1;
        
    }
    
    return 0;
}