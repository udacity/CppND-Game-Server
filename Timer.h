// Timer.h 
// Created by Robin Rowe 2019-01-20
// License MIT open source

#ifndef Timer_h
#define Timer_h

class Timer
{	Timer(const Timer&) = delete;
	void operator=(const Timer&) = delete;

public:
	void Print(bool isNewline = true) const;
	~Timer()
	{}
	Timer()
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
