#include <cstdio>
#include <cstdlib>
#include <unordered_set>
#include <iostream>

void reverse_str(char* str, const int len)
{
	int start = 0, end = len - 1;
	while (start < end)
	{
		std::swap(*(str + start), *(str + end));
		start++;
		end--;
	}
}

char* ___ultoa(const unsigned long value, char* str, const int radix)
{
	unsigned long whole = value;
	int i = 0;
	if(value == 0)
	{
		str[i++] = '0';
	}
	while (whole != 0)
	{
		const auto remainder = whole % radix;
		whole /= radix;
		str[i++] = remainder <= 9 ? remainder + '0' : remainder - 10 + 'a';
	}
	reverse_str(str, i);
	str[i] = '\0';

	return str;
	//printf("%s", result);
}

int main()
{
	char a[100];

	std::cout << ___ultoa(0, a, 16) << std::endl;
	return 0;
}
