#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char c[101]{};

	cin >> c;
	
	int i = 0;
	int num = 0;

	while (c[i])
	{
		num++;
		switch (c[i])
		{
		case 'c':
			if (c[i + 1] == '=' || c[i + 1] == '-')
			{
				i++;
			}
			break;
		case 'd':
			if (c[i + 1] == '-')
			{
				i++;
			}
			else if (c[i + 1] == 'z' && c[i + 2] == '=')
				i += 2;
			break;
		case 'l':
			if (c[i + 1] == 'j')
			{
				i++;
			}
			break;
		case 'n':
			if (c[i + 1] == 'j')
			{
				i++;
			}
			break;
		case 's':
			if (c[i + 1] == '=')
			{
				i++;
			}
			break;
		case 'z':
			if (c[i + 1] == '=')
			{
				i++;
			}
			break;
		default:
			break;
		}

		i++;
	}

	cout << num;
}