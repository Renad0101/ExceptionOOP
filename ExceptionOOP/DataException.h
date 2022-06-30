#pragma once
class DBaseException : public Exception 
{

public:
	DBaseException()
	{
		throw Exception("Database Exception occured!!!", __FILE__, __FILE__, __LINE__);
	}
};

