#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>

int main() {
pid_t child_id;
 //fork
    child_id=fork();

    //membuat time
    char Time[50];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char dir[50]={"/home/fasijardiq/prak2sisop/soal2/"};
    sprintf(Time,"%d-%02d-%02d_%02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

    if(child_id<0)
        exit(EXIT_FAILURE); //jika gagal membuat proses baru
    if(child_id==0){
        //child
        sleep(30);
        char *argv[] = {"mkdir", "-p", strcat(dir,Time), NULL};
        execv("/bin/mkdir", argv);
  }else{}
}

