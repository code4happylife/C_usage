#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
        int id = fork();
        if(id==0){
                printf("Hello world from child process, its id is:%d\n",id);
        }else{
                printf("Hello world from father process, its id is:%d\n",id);
        }
        return 0;

}

/*
 *[root@centos]# gcc test_fork.c -o test_fork
[root@centos]# ./test_fork 
Hello world from father process, its id is:15508
Hello world from child process, its id is:0
 *
 *
 *
 * */
