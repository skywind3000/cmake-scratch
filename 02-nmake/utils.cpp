#include <stdio.h>

void CompilerVersion()
{
#ifdef _MSC_VER
	printf("Microsoft Visual C++\n");
	printf("Version %d\n", _MSC_VER);
#elif defined(__GNUC__)
	printf("GNU C++\n");
	printf("Version %d\n", __GNUC__);
#else
	printf("Unknown compiler\n");
#endif
}

