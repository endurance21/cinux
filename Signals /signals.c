#include<stdio.h>
#include <signal.h>
#include<stdlib.h>
#include <unistd.h>

void handler(int num){
    printf("you pressed the cntrl + c lol , but i wont die %d" , num);
}
int main(){
    printf("%d",SIGINT);
    signal(SIGINT,handler);
    while(1){
        printf("the process id of this process is %d\n", getpid()) ;
        sleep(1);
    }
    
    return 1;

}