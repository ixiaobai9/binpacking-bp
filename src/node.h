#ifndef NODE_H_B_AND_P
#define NODE_H_B_AND_P

class Node
{
public:
	double bound();
	void boundSet();

private:
	double bound_;
};

#endif