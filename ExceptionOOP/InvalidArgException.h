#pragma once
class InvalidArgException : public Exception
{

public:
	InvalidArgException()
	{
		throw Exception("Invalid Argument Exception occured!!!" , __FILE__, __FILE__, __LINE__);
	}
};