extern int a;
static int f(void)
{
	int b, c;
	a = b = c = 4;
	return (a + b + c);
}