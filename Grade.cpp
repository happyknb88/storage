#include <stdio.h>
#include "Grade.h"

bool Grade::set(int t,int score)
{
	if (t == 1)
	{
		math = score;
	//	printf ("math = %d\n" ,math);
	}
	if ( t == 2)
	{
		chinese = score;
	//	printf ("chinese = %d\n" ,chinese);
	}
	if ( t == 3)
	{
		physics = score;
	//	printf ("physics = %d\n" ,physics);
	}
}
bool Grade::get(void)
{
	printf ("math = %d\nchinese = %d \nphysics= %d \n" ,math,chinese,physics);
}

