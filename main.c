#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>

#define MAX 100


int fileops(void){
    
    FILE *fp = fopen("data/fileops.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }
    
    fclose(fp);
    return 0;
}

int netops(void){
    
    FILE *fp = fopen ("data/netops.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }

    fclose(fp);
    return 0;
}

int processops(void){
    
    FILE *fp = fopen("data/processops.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }
    
    fclose(fp);
    return 0;
}

int storageops(void){
    
    FILE *fp = fopen("data/storageops.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }
    
    fclose(fp);
    return 0;
}

int sysinfo(void){
    
    FILE *fp = fopen("data/sysinfo.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }
    
    fclose(fp);
    return 0;
}

int textops(void){
    
    FILE *fp = fopen("data/textops.txt", "r");
    char BUFFER[MAX];

    if (fp == NULL){
        printf("FILE DID NOT LOAD\n");
        return 1;
    }

    while (fgets(BUFFER, sizeof(BUFFER), fp)){
        printf("%s",BUFFER);
    }
    
    fclose(fp);
    return 0;
}



int main(int argc, char *argv[]){
    (void)argc;

    char *command = basename(argv[0]);
    
    if (strcmp(command,"fileops") == 0){
        fileops();
    }
    else if (strcmp(command,"netops") == 0){
        netops();
    }
    else if (strcmp(command,"processops") == 0){
        processops();
    }
    else if (strcmp(command,"storageops") == 0){
        storageops();
    }
    else if (strcmp(command,"sysinfo") == 0){
        sysinfo();
    }
    else if (strcmp(command,"textops") == 0){
        textops();
    }
    else{
        printf("\n ENTER VALID COMMAND \n");
    }

    return 0;
}