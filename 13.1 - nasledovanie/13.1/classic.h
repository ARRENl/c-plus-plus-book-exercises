#ifndef CLASSIC_H_
#define CLASSIC_H_
#include "cd.h"
#include <iostream>
class Classic: public Cd
{
private:
	char * name;
public:
	Classic(char * s1, char * s2,char * s3, int n, double x);
	Classic(const Classic & d);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & d);
};	
#endif

Classic::Classic(char * s1, char * s2,char * s3, int n, double x) : Cd(s1, s2, n, x)
{
	name = new char[strlen(s3)+1];
	strcpy(name, s3);
}

Classic::Classic(const Classic & d) : Cd(d)
{
	delete [] name;
	name = new char[strlen(d.name)+1];
	strcpy(name, d.name);
}
Classic::Classic() : Cd()
{
	name = new char[strlen("noname")+1];
	strcpy(name, "noname");
}

void Classic::Report() const
{
	std::cout << "Main theme:" << name << std::endl;
	Cd::Report();
}
Classic & Classic::operator=(const Classic & d)
{
	if(this == &d)
		return *this;
	delete [] name;
	name = new char[strlen(d.name)+1];
	strcpy(name, d.name);
	Cd::operator=(d);
	return *this;
}
Classic::~Classic()
{
	delete [] name;
	Cd::~Cd();
}