#include "types.h"
#include "user.h"

int main(){
    int p1[2],p2[2];
    char buf[] = {'Z'};
    long length = sizeof(buf);
    pipe(p1);
    pipe(p2);
    if(fork() == 0){
        close(p1[1]);
        close(p2[0]);
	read(p1[0], buf, length);
	printf(1,"%d: received ping\n", getpid());
	write(p2[1], buf, length);
        exit();
    }
       close(p1[0]);
       close(p2[1]);
 	write(p1[1], buf, length);
	read(p2[0], buf, length);
	printf(1,"%d: received pong\n", getpid());
        wait();
	exit();
}

