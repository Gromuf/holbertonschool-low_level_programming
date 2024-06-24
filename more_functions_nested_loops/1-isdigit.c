#include "main.h"

int _isdigit(int c)
{
	if ('0' + c >= '0' && '0' + c <= '9')
		return (1);
	else
		return (0);
}
