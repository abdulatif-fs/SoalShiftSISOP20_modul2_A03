#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>
#include<curl/curl.h>

int main() {

time_t t = time(NULL);
int f=1;
int curl_init();
CURL *curl;
curl = curl_easy_init();

while(f--){
sleep(5);
curl_easy_setopt("https://piscum.photos/",(t%1000)+100,1);
}
char dir[50]={"/home/fasijardiq/prak2sisop/soal2/"};
pid_t child_id;
    int status;

    //fork
    child_id=fork();

//membuat time
    struct tm tm = *localtime(&t);
   // char dir[50]={"/home/fasijardiq/prak2sisop/soal2/"};


 // membuat curl
     //   char curl[50]={"https://picsum.photos/"};
        char Timecurl[50];
        sprintf(Timecurl,"%d-%02d-%02d_%02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

wait(&status);
    if(child_id<0)
        exit(EXIT_FAILURE); //jika gagal membuat proses baru
    if(child_id==0){
// while ((wait(&status)) > 0);
        char *argv[] = {"lcurl", "-o", strcat(dir,Timecurl), NULL};
        execv("/bin/curl", argv);
   }else{}
}
