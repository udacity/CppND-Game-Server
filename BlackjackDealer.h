// BlackjackDealer.h 
// Created by Robin Rowe 2019-01-25
// License MIT open source

#ifndef BlackjackDealer_h
#define BlackjackDealer_h

class BlackjackDealer
{	BlackjackDealer(const BlackjackDealer&) = delete;
	void operator=(const BlackjackDealer&) = delete;

public:
	void Print(bool isNewline = true) const;
	~BlackjackDealer()
	{}
	BlackjackDealer()
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
