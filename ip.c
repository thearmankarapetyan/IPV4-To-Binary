#include <stdio.h>
#include <winsock2.h>

int main(void)
{
    char* pAddr = "192.168.0.1";

    unsigned long value = inet_addr(pAddr);

    if (value == INADDR_NONE)
        printf("Invalid format of IP address");
    else
        printf("Decimal representation of %s is: %lu", pAddr, value);

    return 0;
}
