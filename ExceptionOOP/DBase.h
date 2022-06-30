#pragma once

class Database 
{
	vector<User>users;
public:

	void appendUser(const User& user)
	{
		users.push_back(user);
	}

	User& getUserByUsername(string username)
	{
		for (size_t i = 0; i < users.size(); i++)
		{
			if (users[i].getUsername() == username)
				return users[i];
		}
	}

	void updateUser(User& PastUser, const User& RecentUser)
	{
		for (size_t i = 0; i < users.size(); i++)
		{
			if (users[i] == PastUser)
				users[i] = RecentUser;

		}
	}

	User* getUsers()
	{
		return users.data();
	}

	int size()
	{
		return users.size();
	}

	void hashUserDataById(const int& id)
	{
		for (size_t i = 0; i < users.size(); i++)
		{
			if (users[i].getID() == id)
			{
				users[i].getPassword() = to_string(stoi(users[i].getPassword()) ^ 24);
				return;
			}
		}
		throw exception("Searching User could not found!!!");
	}


};