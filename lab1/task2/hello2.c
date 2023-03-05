#include <stdio.h>
#include "hello-static.h"

void print_hello(void)
{
    printf("Hello world\n");
}

int main(int argc, char *argv[])
{
    print_hello();
    print_hello_static();
    return 0;
}