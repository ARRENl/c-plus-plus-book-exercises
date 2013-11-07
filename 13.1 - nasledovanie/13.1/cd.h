#ifndef CD_H_     // завершается с ошибкой, возможно проблема в деконструкции
#define CD_H_
class Cd 
{
private: 
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	virtual Cd & operator=(const Cd & d);
};
#endif
#include <iostream>
using std::cout;
using std::endl;
Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char [strlen(s1)+1];
	strcpy(performers, s1);
	label = new char [strlen(s2)+1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
};
Cd::Cd(const Cd & d)
{
	delete [] performers;
	delete [] label;
	performers = new char[strlen(d.performers)+1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label)+1];
	strcpy(label,d.label);
	selections = d.selections;
	playtime = d.playtime;
};
Cd::Cd()
{
	performers = new char[strlen("unknown")+1];
	strcpy(performers, "unknown");
	label = new char[strlen("unknown")+1];
	strcpy(label, "unknown");
	selections = 0;
	playtime = 0;
};

void Cd::Report() const
{
	cout << "Performers: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selections: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
};
Cd & Cd::operator=(const Cd & d)
{
	if(&d == this)
		return *this;
	delete [] performers;
	delete [] label;
	performers = new char[strlen(d.performers)+1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label)+1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}