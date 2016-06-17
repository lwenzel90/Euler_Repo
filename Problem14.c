//n → n/2 (n is even)
//n → 3n + 1 (n is odd)
#include <stdio.h>

int main()
{
    long long int count = 1, i, current, max = 0, maxi = 0;
    for(i = 13; i < 1000000; i++)
    {
		count = 1;
        current = i;
        while(current != 1)
        {
            if ((current % 2) == 0)
            {
                count++;
                current /= 2;
            //    printf("%d -> ", current);
            }
            else
            {
                count++;
                current = (3 * current) + 1;
              //  printf("%d ->", current);
            }
        }
		
        if(count > max)
        {
            maxi = i;
            max = count;
           // printf("%d", max_i);
        }
//		printf("\n%lld\t%lld\t%d\n", count, maxi, i);
    }
	printf("%lld", maxi);
//	printf("%lld", maxi);
    return 0;
}