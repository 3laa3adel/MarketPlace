#include <iostream>
#include <cmath>
#include <string>
using namespace std;
struct buyer
{
	int id;
	string name;
	string email;
	int password;
	string deliveraddress;
	long long phonenumber;

};
struct seller
{
	int id;
	string name;
	string email;
	int password;
	long long phonenumber;

};
struct item
{
	int number;
	long long price;
	string name;
	string date;

};
struct rate
{
	int point;
	string username;
	int iduser;
};
void menue();
void login(buyer email, buyer password);
void login2(seller& email, seller& password);
void data1(buyer name, buyer deliveraddress, buyer phonenumber, buyer id);
void logindata(buyer nemail, buyer npassword);
void items(item name, item price, item number, item date);
void showitems(item name, item price, item number, item date);
void rating(rate username, rate iduser, rate point);
void Topcategory();
int main()
{
	seller Email2, Password2;
	buyer name, address, phonenumber, id;
	buyer Email, Password;
	buyer nEmail, nPassword;
	item iname, price, inum, idate;
	rate usern, idu, r;

	int choice;
	cout << "****************************************" << endl;
	cout << "1. Buyer" << endl;
	cout << "2. Seller" << endl;
	cout << "3. Quite" << endl;
	cout << "****************************************" << endl;
	cout << "Enter Your Choice" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "****************************************" << endl;
		cout << "1. Creat Account" << endl;
		cout << "2. log in" << endl;
		cout << "3. Quite" << endl;
		cout << "****************************************" << endl;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 2)
		{


			login(Email, Password);
			cout << "****************************************" << endl;
			cout << "1. Buy " << endl;
			cout << "2. Rate Us  " << endl;
			cout << "3. Quite  " << endl;
			cout << "****************************************" << endl;
			cout << "Enter Your Choice" << endl;
			cin >> choice;
			if (choice == 1)
			{

				items(iname, price, inum, idate);
				break;
			}

			if (choice == 2)
			{
				rating(usern, idu, r);
				break;
			}
			if (choice == 3)
			{
				menue();
				break;
			}

		}

		if (choice == 1)
		{
			data1(name, address, phonenumber, id);
			logindata(nEmail, nPassword);
		}
		if (choice == 3)
		{
			menue();
			break;
		}


	case 2:
		cout << "****************************************" << endl;
		cout << "1. Creat Account" << endl;
		cout << "2. log in" << endl;
		cout << "****************************************" << endl;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 2)
		{
			login2(Email2, Password2);
		}
		if (choice == 1)
		{
			data1(name, address, phonenumber, id);
			login2(Email2, Password2);

		}
		cout << ".......Market Place......." << endl;
		items(iname, price, inum, idate);

	case 3:
		cout << "Thank 's For Using System" << endl;
		cout << "....................................." << endl;
		system("pause");


	}





	return 0;
}
void menue()
{

	seller Email2, Password2;
	buyer name, address, phonenumber, id;
	buyer Email, Password;
	buyer nEmail, nPassword;
	item iname, price, inum, idate;
	rate usern, idu, r;

	int choice;
	cout << "****************************************" << endl;
	cout << "1. Buyer" << endl;
	cout << "2. Seller" << endl;
	cout << "3. Quite" << endl;
	cout << "****************************************" << endl;
	cout << "Enter Your Choice" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "****************************************" << endl;
		cout << "1. Creat Account" << endl;
		cout << "2. log in" << endl;
		cout << "3. Quite" << endl;
		cout << "****************************************" << endl;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 2)
		{


			login(Email, Password);
			cout << "****************************************" << endl;
			cout << "1. Buy " << endl;
			cout << "2. Rate Us  " << endl;
			cout << "3. Quite  " << endl;
			cout << "****************************************" << endl;
			cout << "Enter Your Choice" << endl;
			cin >> choice;
			if (choice == 1)
			{

				items(iname, price, inum, idate);
				break;
			}

			if (choice == 2)
			{
				rating(usern, idu, r);
				break;
			}
			if (choice == 3)
			{
				menue();
			}

		}
		if (choice == 1)
		{
			data1(name, address, phonenumber, id);
			logindata(nEmail, nPassword);
		}




	case 2:
		cout << "****************************************" << endl;
		cout << "1. Creat Account" << endl;
		cout << "2. log in" << endl;
		cout << "****************************************" << endl;
		cout << "Enter Your Choice" << endl;
		cin >> choice;

		if (choice == 1)
		{
			data1(name, address, phonenumber, id);
			login2(Email2, Password2);
		}
		if (choice == 2)
		{
			login2(Email2, Password2);
		}
		cout << ".......Market Place......." << endl;
		items(iname, price, inum, idate);

	case 3:
		cout << "Thank 's For Using System" << endl;
		cout << "....................................." << endl;
		system("pause");
	}
}
void login(buyer email, buyer password)
{
	buyer m;
	cout << "E-mail: " << endl;
	cin >> m.email;
	cout << "Password: " << endl;
	cin >> m.password;

	buyer m2;
	cout << "Enter your Password again:" << endl;
	cin >> m2.password;
	if (m2.password == m.password)
	{


		cout << "Your Data is correct" << endl;
	}
	else
	{

		cout << "Your Password is wrong" << endl;
		cout << "Enter your Password again:" << endl;
		cin >> m2.password;
	}
}
void data1(buyer name, buyer deliveraddress, buyer phonenumber, buyer id)
{
	buyer data;
	cout << "Name :" << endl;
	cin >> data.name;
	cout << " deliveraddress :" << endl;
	cin >> data.deliveraddress;
	cout << " Phone Number :" << endl;
	cin >> data.phonenumber;
	cout << " ID :" << endl;
	cin >> data.id;

}
void logindata(buyer nemail, buyer npassword)
{
	buyer N;
	cout << "E-mail: " << endl;
	cin >> N.email;
	cout << "Password: " << endl;
	cin >> N.password;

	buyer N2;
	cout << "Enter your E-mail again:" << endl;
	cin >> N2.email;
	cout << "Enter your Password again:" << endl;
	cin >> N2.password;
	if (N2.password == N.password && N2.email == N.email)
	{
		cout << "Your Data is correct" << endl;
	}
	else
	{

		cout << "Your Email or password is wrong" << endl;

	}

}

void login2(seller& email, seller& password)
{
	seller m;
	cout << "E-mail: " << endl;
	cin >> m.email;
	cout << "Password: " << endl;
	cin >> m.password;
	seller m2;
	cout << "Enter your Password again:" << endl;
	cin >> m2.password;
	if (m2.password == m.password)
	{


		cout << "Your Data is correct" << endl;
	}
	else
	{

		cout << "Your  Password is wrong" << endl;
		cout << "Enter your Password again:" << endl;
		cin >> m2.password;
	}

}
void items(item name, item price, item number, item date)
{
	item n, p, num, d;
	char g;
	string c = "car", b = "book", s = "shoes", P = "phone", h = "house";
	cout << "Item ( car, book , shoes , phone , house ):" << "\t";
	cin >> n.name;
	if (n.name == c)
	{
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}
	else if (n.name == b)
	{
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}
	else if (n.name == s)
	{
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}
	else if (n.name == P)
	{
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}
	else if (n.name == h)
	{
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}
	else
	{
		cout << "Enter Items Again" << endl;
		cout << "Item ( car, book , shoes , phone , house ):" << "\t";
		cin >> n.name;
		cout << endl << "Price:" << "\t";
		cin >> p.price;
		cout << endl << "Item Number:" << "\t";
		cin >> num.number;
		cout << endl << "Date:" << "\t";
		cin >> d.date;
	}

	cout << "**********************" << endl;
	cout << "Insert Sucssesfully" << endl;
	cout << "**********************" << endl;
	cout << n.name << "     " << p.price << "     " << num.number << "      " << d.date << endl;
	int choice;
	cout << "1. Add New Item" << endl;
	cout << "2. Show Top Category" << endl;
	cout << "3. Log Out" << endl;
	cin >> choice;
	if (choice == 1)
	{
		items(name, price, number, date);
	}
	if (choice == 2)
	{
		Topcategory();
		cout << n.name;

	}
	buyer email, nameb, deliveraddress, phonenumber, idb;
	buyer password;
	for (int i = 0; i < 20; i++)
	{

		if (choice == 3)
		{
			cout << "****************************************" << endl;
			cout << "1. Buyer" << endl;
			cout << "2. Seller" << endl;
			cout << "****************************************" << endl;
			cout << "Enter Your Choice" << endl;
			cin >> choice;
			if (choice == 1)
			{
				cout << "****************************************" << endl;
				cout << "1. Creat Account" << endl;
				cout << "2  Log In" << endl;
				cout << "****************************************" << endl;
				cout << "Enter Your Choice" << endl;
				cin >> choice;
				if (choice == 1)
				{

					data1(nameb, deliveraddress, phonenumber, idb);
				}
				if (choice == 2)
				{

					login(email, password);
				}
				cout << "****************************************" << endl;
				cout << "1. Search Via Item's Name  " << endl;
				cout << "2. Search Via Item's Name And Price " << endl;
				cout << "****************************************" << endl;
				cout << "Enter Your Choice" << endl;
				cin >> choice;

				if (choice == 1)
				{
					cout << "Name Of Item:" << "   ";
					cin >> n.name;
					cout << n.name << "     " << p.price << "     " << num.number << "      " << d.date << endl;
					cout << "1.Buy And Agree On Price" << endl;
					cout << "2.Buy And Don't Agree On Price" << endl;
					cout << "Enter A Choice:";
					cin >> choice;
					if (choice == 1)
					{
						cout << "..........................................." << endl;
						cout << "Done Thank You For Using Our System" << endl;
						cout << "..........................................." << endl;
						menue();
					}
					if (choice == 2)
					{
						cout << "Add A Price:";
						cin >> p.price;
						cout << "Go To The Seller" << endl;
						login(email, password);
						cout << "Did You Agree On Price (y/n): ";
						cin >> g;
						if (g == 'y')
						{
							cout << "..........................................." << endl;
							cout << "Done Thank You For Using Our System" << endl;
							cout << "..........................................." << endl;
							menue();
						}
						if (g == 'n')
						{
							cout << "..........................................." << endl;
							cout << "Sorry We Can't Reduce The Price" << endl;
							cout << "..........................................." << endl;
							menue();
						}
					}
				}
				if (choice == 2)
				{
					cout << "Name Of Item:" << "   ";
					cin >> n.name;
					cout << "Price Of Item:" << "   ";
					cin >> p.price;
					cout << "Item: " << n.name << "     " << "Price:" << p.price << "     " << "Number:" << num.number << "      " << "Date:" << d.date << endl;
				}
			}
		}
		if (choice == 2)
		{
			cout << "****************************************" << endl;
			cout << "1. Creat Account" << endl;
			cout << "2  Log In" << endl;
			cout << "****************************************" << endl;
			cout << "Enter Your Choice" << endl;
			cin >> choice;
			if (choice == 1)
			{

				data1(nameb, deliveraddress, phonenumber, idb);
			}
			if (choice == 2)
			{

				login(email, password);
			}
			cout << "****************************************" << endl;
			cout << "1. Add New Item" << endl;
			cout << "2. Show Top Category" << endl;
			cout << "3. Log Out" << endl;
			cout << "****************************************" << endl;
			cin >> choice;
			if (choice == 1)
			{
				items(name, price, number, date);
			}
		}
	}
}
void rating(rate username, rate iduser, rate point)
{
	for (int j = 0; j < 50; j++)
	{
		rate usern;
		rate idu;
		rate r;
		int X = 0;
		int choice;
		cout << "Name: ";
		cin >> usern.username;
		cout << endl;
		cout << "ID: ";
		cin >> idu.iduser;
		cout << endl;
		cout << "Enter your rate (1:5) : ";
		cin >> r.point;

		if (r.point >= 3)
		{
			X = X + 1;
			cout << "Name: " << usern.username << "    " << "iD: " << idu.iduser << "    " << "Points:" << X << endl;
			cout << ".................................." << endl;

		}
		else if (r.point < 3)
		{
			X = X;
			cout << "Name: " << usern.username << "    " << "iD: " << idu.iduser << "    " << "Points:" << X << endl;
			cout << ".................................." << endl;

		}
		cout << "****************************************" << endl;
		cout << "1. Rate Us  " << endl;
		cout << "2. Quite  " << endl;
		cout << "****************************************" << endl;
		cout << "Enter Your Choice" << endl;
		cin >> choice;
		if (choice == 1)
		{
			continue;
		}
		if (choice == 2)
		{
			menue();
		}


	}
}
void Topcategory()
{
	item n, d;
	cout << "Ente The Date Of Buying : ";
	cin >> d.date;
	cout << "The Top Category Is : " << n.name << endl;
}