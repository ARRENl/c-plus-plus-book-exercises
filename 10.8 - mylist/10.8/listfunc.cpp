#include "listhead.h"
List::List()
{
	top = 0;
}
int List::isfull() const
{
	if(top == MAX)
		return 1;
	else 
		return 0;
}
int List::isempty() const
{
	if(top == 0)
		return 1;
	else
		return 0;
}
int List::push(const type & m)
{
	if(top < MAX)
	{
		list[top++] = m;
		return 1;
	}
	else
		return 0;
}
int List::work(type & m)
{
	if(top > 0)
	{
		m = list[--top];
		return 1;
	}
	else
		return 0;
}