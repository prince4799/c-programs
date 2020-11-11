
  // C program to sort the element using heap sort....
  
  
 #include<stdio.h>
 
 void swap(int *a, int *b)
 {
    int temp=*a;
    *a=*b;
    *b=temp;
 }

 void heapify(int *a,int n,int i)
 {
    int max=i;
    int left=2*i+1;
    int right =2*i+2;
    
    if(left<n&&a[left]>a[max])
    max=left;
    
    if(right<n&&a[right]>a[max])
    max=right;
    
    if (max!=i)
    {
        swap(&a[max],&a[i]);
        heapify(a,n,max);
    }
 }
 
 
 void heapSort(int a[],int n)
 {
     //First  we will apply heap to whole tree one by one....
     //ex:
     //   3         3          3            8
    //   / \       / \       /  \        //  \
    //   4  5  => 4   7 =>  8    7   =>  3    7
    //  /\  /\   /\  /\\  // \  / \     / \  / \
    //  8 1 7 0 8  1 5 0  4  1 5 0     4  1 5   0
     
    for(int i=(n/2)-1;i>=0;i--)
    heapify(a,n,i);
    
    //Secondly we will swap last element with the first element..and then again heapify the whole tree..
    for(int i=n-1;i>=0;i--)
    {
    swap(&a[i],&a[0]);
    heapify(a,i,0);
    }
 }
 
 int main()
 {
    int n;
     printf("Enter the no. of elements\n");
     scanf("%d",&n);
     
    int a[n];
    printf("Enter the %d elements.\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    heapSort(a,n);
    
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);
    
    return 0;
    
 }