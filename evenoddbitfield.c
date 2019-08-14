//WAP to input a number and check it to be even odd without using any arithmetic, relational, logical or bitwise operator
struct num
{
	unsigned n:1;	
};
main(){
	int no; struct num x;
	printf("Enter a number : ");
	scanf("%d",&no);
	x.n=no;
	if(x.n)
		printf("%d is odd",no);
	else
		printf("%d is even",no);
}
