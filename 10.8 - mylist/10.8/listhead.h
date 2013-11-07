#ifndef LISTO_H
#define LISTO_H
typedef long type;
class List
{
private:
	static const int MAX = 10;
	int top;
	type list[MAX];
public:
	List();
	int push(const type & m);
	int work(type & m);
	int isempty() const;
	int isfull() const;
};
#endif