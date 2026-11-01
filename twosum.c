#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	*sum(int *nums, int numsSize, int target, int *returnSize)
{
	int i = 0;
	int *arr = malloc(2 * sizeof(int));
	while(i < numsSize)
	{
		int j = i + 1;
		while(j < numsSize ) 
		{
			if( nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				*returnSize = 2;
				return arr;
			}
			j++;
		}
		i++;
	}
	*returnSize = 0;
	return NULL;

}
int main()
{
	int k[] = {2,7,11,15};
	int *n = sum(k, 4, 9);
	printf("[");
         printf("%d", n[0]);
	 printf(", ");
	 printf("%d", n[1]);
	 printf("]");
	return 0;
}
