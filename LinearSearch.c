#include <stdio.h>


// linear search best case optimization
void search(int *a , int n , int val)
{
    
    int left, right;
    
    right = n-1 ;
    left = 0;
    int pos = -1;
    for(left=0; left<=right;)
    {
        
        if(a[left]==val)
        {
            pos = left;
            printf("element found : %d , pos : %d \n",a[left], pos);
            break;
        }
        if(a[right]==val)
        {
            pos = right;
            printf("element found : %d , pos : %d \n",a[right], pos);
            break;
        }
        left++;
        right--;
    }
    
    if(pos==-1)
    {
       printf(" element not found \n");   
    }
}


int main() {
	
	// best case optimization
	int a[5] = { 1,2,3,4,5};
	
	search(&a[0],5,2);
	
	return 0;
}
