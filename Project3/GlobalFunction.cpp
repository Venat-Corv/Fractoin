#include "ClassDeclaration.h"

String operator+(const String& left, const String& right)
{
	String buff = left.get_size() + right.get_size() - 1;
	for (int i = 0; left[i]; i++)
		buff[i] = left[i];
	for (int i = 0; right[i]; i++)
		buff.operator[](i + left.get_size() - 1) = right.operator[](i);
	return buff;
}