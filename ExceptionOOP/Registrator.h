#pragma once
class Registr
{
	Database _database;
public:
	Registr(const Database& database)
	{
		_database = database;
	}

	bool signIn(string username, string password)
	{
		for (size_t i = 0; i < _database.size(); i++)
		{
			if (_database.getUsers()[i].getUsername() == username && _database.getUsers()[i].getPassword() == password)
				return true;

		}
		throw exception("Username or Password is incorrect!!!");
	}

	Database getDatabase()
	{
		return _database;
	}

	void signUp(User user) 
	{

		if (user.getUsername().length() < 5 || (user.getUsername()[0] >= 97 && user.getUsername()[0] <= 122) || user.getPassword().length() < 8 ||
			user.getName().length() < 4 || user.getSurname().length() < 5)
			throw InvalidArgException();

		for (size_t i = 0; i < _database.size(); i++)
		{
			if (_database.getUsers()[i].getUsername() == user.getUsername())
				throw DBaseException();
		}

		_database.appendUser(user);
	}
};

