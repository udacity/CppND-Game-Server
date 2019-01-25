// BlackjackScore.h 
// Created by Robin Rowe 2019-01-25
// License MIT open source

#ifndef BlackjackScore_h
#define BlackjackScore_h

class BlackjackScore
{	BlackjackScore(const BlackjackScore&) = delete;
	void operator=(const BlackjackScore&) = delete;

public:
	void Print(bool isNewline = true) const;
	~BlackjackScore()
	{}
	BlackjackScore()
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
