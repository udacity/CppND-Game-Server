// BlackjackRound.h 
// Created by Robin Rowe 2019-01-25
// License MIT open source

#ifndef BlackjackRound_h
#define BlackjackRound_h

class BlackjackRound
{	BlackjackRound(const BlackjackRound&) = delete;
	void operator=(const BlackjackRound&) = delete;

public:
	void Print(bool isNewline = true) const;
	~BlackjackRound()
	{}
	BlackjackRound()
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
