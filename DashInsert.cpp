string DashInsert(int number)
{
	string dashedNumber;
	while (number)
	{
		int digit = number % 10;
		dashedNumber.insert(dashedNumber.begin(), (char)(48 + digit));
		if (digit % 2 == 1)
		{
			short nextDigit = number % 100 / 10;
			if (nextDigit % 2 == 1)
			{
				dashedNumber.insert(dashedNumber.begin(), '-');
			}
		}
		number /= 10;
	}
	return dashedNumber;
}
