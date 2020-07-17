int sumOfRange(int n1)
{
	int res;
	if(n1==1)
	{
		return (1);
	}
	else
	{
		res = n1 + sumOfRange(n1-1);
	}
	return (res);
}
