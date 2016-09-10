#ifndef _Grade_H_
#define _Grade_H_

class Grade
{
private:
	int math;
	int chinese;
	int physics;
public:
	Grade():math(0),chinese(0),physics(0)
	{
		
	}
	bool get(void);
    bool set(int t,int score);

    //void free();
};

#endif