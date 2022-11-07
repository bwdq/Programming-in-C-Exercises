#include <stdio.h>
#include "source.h"

/* Objective: Test that your development environment works and you can send tasks to the tmc-server.
 * Make sure that this task prints "Hello World!" and submit task to the server.*/

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main() {
    printf("The function that this program calls writes 'hello world! ', which is a typical first task written in C.\n");
    hello_world();
    return 0;
}
