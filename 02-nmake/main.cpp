#include <stdio.h>

void CompilerVersion();

int main()
{
	printf("Hello, World !!\n");
	CompilerVersion();
#ifdef _DEBUG
	printf("Debug Mode\n");
#else
	printf("Release Mode\n");
#endif
#ifdef XMODE
	printf("XMODE is %d\n", XMODE);
#else
	printf("XMODE is not defined\n");
#endif
	return 0;
}


