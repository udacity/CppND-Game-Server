// CLASS.h 
// Created by AUTHOR DATE
// License LICENSE

#ifndef CLASS_h
#define CLASS_h

class CLASS
{	CLASS(const CLASS&) = delete;
	void operator=(const CLASS&) = delete;

public:
	~CLASS()
	{}
	CLASS()
	{}
	bool operator!() const
	{	return true;
	}
	
	void Print() const
	{}
};

#endif
