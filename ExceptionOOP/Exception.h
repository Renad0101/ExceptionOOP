#pragma once
class Exception :public exception {
protected:
	string _message;
	int _line;
	const char* _source;
	const char* _time;

public:
	Exception(const char* message = "Exception ocured!!!",const char* source = "", const char* time = "", int line = 0) noexcept
		: exception(message)
	{
		this->_source = source;
		this->_line = line;
		this->_time = time;


		_message = "Message: " + (string)exception::what()+ "\nSource: " + _source + "\nTime: " + _time + "\nLine: " + to_string(line);}


	int line() const
	{ 
		return _line;
	}

	const char* source() const
	{ 
		return _source;
	}

	const char* time() const 
	{ 
		return _time;
	}

	const char* message() const 
	{
		return exception::what(); 
	}


	const char* what() const override
	{
		return _message.c_str();;
	}

};