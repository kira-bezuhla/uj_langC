#include <stdio.h>
#include <sys/types.h>

int main()
{
    pid_t id = fork();

    if (id < 0)
    {
        perror("fork failed");
        exit(1);
    }
    else if (id == 0)
    {//process potomny - konsument
        //read
    }
    else
    {//process macierzysty - producent
        //write
    }

    return 0;
}
