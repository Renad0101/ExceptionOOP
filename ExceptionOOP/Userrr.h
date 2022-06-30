#pragma once
class User {
	static int staticId;
	int _id;
	string _username;
	string _password;
	string _name;
	string _surname;

public:

	User(string username, string password, string name, string surname)
		
	{
		this->_name = name;
		this->_surname = surname;
		this->_username = username;
		this->_password = password;

		_id = ++staticId;
	}
	string getUsername() 
	{
		return _username;
	}

	string getPassword() 
	{ 
		return _password;
	}

	string getName() 
	{ 
		return _name; 
	}

	string getSurname() 
	{ 
		return _surname;
	}

	int getID() 
	{ 
		return _id;
	}

	friend ostream& operator<<(ostream& output, const User& u);
	bool operator==(const User& other)
	{
		if (_id == other._id && _username == other._username && _password == other._password && _name == other._name && _surname == other._surname)
			return true;
		return false;
	}
};

int User::staticId = 0;
ostream& operator<<(ostream& output, const User& u)
{
	cout << "Id: " << u._id << endl;
	cout << "Name: " << u._name << endl;
	cout << "Surname: " << u._surname << endl;
	cout << "Username: " << u._username << endl;
	cout <<"Password: " << u._password << endl;
	return output;
}