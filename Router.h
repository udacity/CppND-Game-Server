// Router.h 
// Created by Robin Rowe 2019-01-17
// License MIT open source

#ifndef Router_h
#define Router_h

#include <array>
#include <sstream>

class Table;

class Router
{	Router(const Router&) = delete;
	void operator=(const Router&) = delete;
	unsigned fromId;
	unsigned toId;
	std::istringstream is;
public:
	void Print(bool isNewline = true) const;
	bool Route(char* line);
	bool Dispatch(Table& table,char* line);
	~Router()
	{}
	Router()
	:	fromId(0)
	,	toId(0)
	{}
	bool operator!() const
	{	return true;
	}
	unsigned GetToId() const
	{	return toId;
	}
};

#endif
