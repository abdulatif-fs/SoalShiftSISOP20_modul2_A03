# SoalShiftSISOP20_modul2_A03
<soal nomor 2>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>

int main() {
pid_t child_id;
    int status;
int curl_init();
    //fork
    child_id=fork();

    //membuat time
    char Time[50];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char dir[50]={"/home/fasijardiq/prak2sisop/soal2/"};
    sprintf(Time,"%d-%02d-%02d_%02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    // membuat curl
	int f=1;
	int curl_init();
	CURL *curl;
	curl = curl_easy_init();
	curl_easy_setopt("https://piscum.photos/",(t%1000)+100,20);
 	char Timecurl[50];
	sprintf(Timecurl,"%d-%02d-%02d_%02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);

wait(&status);
    if(child_id<0)
        exit(EXIT_FAILURE); //jika gagal membuat proses baru
    if(child_id==0){
        //child
	sleep(30);
	char *argv[] = {"mkdir", "-p", strcat(dir,Time), NULL};
    	execv("/bin/mkdir", argv);
  } else{
	while ((wait(&status)) > 0);
	sleep(5);
	char *argv[] = {"curl", "-o", strcat(Time,Timecurl), NULL};
        execv("/bin/curl", argv);

	}
}
