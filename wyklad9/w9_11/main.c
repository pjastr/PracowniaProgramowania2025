#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    wchar_t buffer[20]="g�";
    wscanf(L"%s",buffer);
    wprintf(L"%s",buffer);
    return 0;
}
