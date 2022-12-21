#include "types.h"
#include "user.h"
#include "stat.h"

int main(int argc, char *argv[])
{
    if(argc == 1){
    printf(1, "you need one more parameter!\n");
    exit();
    }
    int ticks = atoi(argv[1]);
    sleep(ticks * 100);
printf(1, "nothing happens for a little while!\n");
    exit();
}

