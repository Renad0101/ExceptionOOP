#include <iostream>
#include <windows.h>
#include<vector>
#include<string>

using namespace std;

# include "Exception.h"
# include "DataException.h"
# include "InvalidArgException.h"
# include "Userrr.h"
# include "DBase.h"
# include "Registrator.h"



class StartUp 
{
public:

	static void Start()
	{
		Database data;
		Registr twitter(data);


		User user1("Renad0101", "r98765432i", "Renad", "Imamaliyev");
		User user2("Zaur0509", "z12345678i", "Zaur", "Imamaliyev");
		User user3("Ali9810", "A2536678i", "Sahin", "Hesenzade");

		try
		{
			twitter.signUp(user1);
			twitter.signUp(user2);
			twitter.signUp(user3);

		}
		catch (exception& ex)
		{
			cout << ex.what() << endl;
		}

		cout << twitter.getDatabase().size() << endl;

		try
		{
			twitter.signIn("Renad0101", "r98765432i") ? cout << "You entered the correct Username and Password." : cout << "";

		}
		catch (exception& ex)
		{
			cout << ex.what() << endl;
		}


		for (size_t i = 0; i < twitter.getDatabase().size(); i++)
		{
			cout << twitter.getDatabase().getUsers()[i] << endl;
		}
	}

};


void main() 
{
	StartUp::Start();
}
