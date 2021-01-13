#include <stdio.h>
#include <Windows.h>
void main()



{
    printf("test---\n");
    int i = 0;
    while (1)
	{			   
		printf("%d", ++i);
		getchar();
		MessageBoxA(NULL, "Ô­º¯Êý", "HookDemo", 0);

	}
}