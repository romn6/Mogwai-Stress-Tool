/*
    Stress.c will be considered as the main.c file for this code. Currently any changes to code, might need to update as main as well.
    Inside of stress.c is where we will be calling the stress code, when the user compiles any of the other code. CLI, but being that 
    we want to keep this as user friendly as possible, maybe later down the line a GUI can be created.

    But... WELCOME TO MOGWAI STRESSER the C version!!!! xD

    This project aims to create a stress tool that is light weight, its main usage will be throuhg command line, where a user selects the kind of stress
    and it runs. This inital commit was me simply adding the files to the repo, so you might see files that are still empty or commented out, as development
    runs. Hopefully this serves as a different approach in terms of stressing your machine, and see test its resillience. More to come <3! 

    Main developer: Me (romn6) <3
    
*/
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