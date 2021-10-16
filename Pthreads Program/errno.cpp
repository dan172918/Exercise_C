#include <iostream>
#include <stdio.h>
#include <string.h>
#include <errno.h>
 
using namespace std;
 
int main()
{
    FILE *fp;
    if ( (fp = fopen("no/such/file","r+")) == NULL )
    {
        printf("errON[%d]errMsg[%s]\n",errno,strerror(errno));
    }
}


