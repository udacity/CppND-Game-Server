// CmdParser.h 
// Created by Robin Rowe 2019-01-17
// License MIT open source

#ifndef CmdParser_h
#define CmdParser_h

#include <array>

class Table;

class CmdParser
{	CmdParser(const CmdParser&) = delete;
	void operator=(const CmdParser&) = delete;
	unsigned fromId;
	unsigned toId;
public:
	void Print(bool isNewline = true) const;
	bool Route(char* line);
	bool Dispatch(Table& table);	
	~CmdParser()
	{}
	CmdParser()
	:	fromId(0)
	,	toId(0)
	{}
	bool operator!() const
	{	return true;
	}
};

#endif
