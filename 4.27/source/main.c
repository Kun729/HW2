#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int s1, s2,s3;
	for (s1 = 1; s1 <= 500; s1++)
	{
		for (s2 = 1; s2 <= 500; s2++)
		{
			for (s3 = 1; s3 <= 500; s3++)
			{
				if (s1*s1 + s2 * s2 == s3*s3)
				{
					printf("slide1:%3d\tslide2:%3d\t±×Ãä:%3d\n", s1, s2, s3);
				}
				else if (s1*s1 + s2 * s2 == s3 * s3)
				{
					printf("slide1:%3d\tslide2:%3d\t±×Ãä:%3d\n", s2, s1, s3);
				}	
			}
		}
	}
}