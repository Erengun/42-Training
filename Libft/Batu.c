int   isBothOddOrEven(int a, int b)
{
	if((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && a % 2 != 0))
		return (1);
	return (0);
}

void	ft_swap(num[i], int x)
{
	int temp;
	temp = num[i];
	num[i] = x;
	x = temp;
}

char* getLargestNumber (char *num) 
{
	/*5324798520
	5 Oddmax  = 9  9     
	3 Evenmax = 8  7   
	2              8    
	4              4    
	7              5   
	9              5    
	8              2 
	5              3   
	2              2 
	0              0  */
	int Oddmax;
	int Evenmax = 0;
	int OddTemp;
	int Eventemp;
	int i = 0;

	while(num[i])
	{
		if(Oddmax < num[i] && num[i] % 2 != 0)
		{
			Oddmax = num[i];
			OddTemp = num[i];
		}

		if(Oddmax < num[i] && num[i] % 2 == 0)
		{
			Evenmax = num[i];
			Eventemp = num[i]
		}
		i++;
	}
		if(num[i] < Oddmax &&  isBothOddOrEven(num[i], Oddmax))
			ft_swap(num[i], num[OddTemp]);
		if(num[i] < Evenmax &&  isBothOddOrEven(num[i], Evenmax))
			ft_swap(num[i], num[EvenTemp]);

}