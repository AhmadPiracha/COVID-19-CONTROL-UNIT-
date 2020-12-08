#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include <windows.h>
#include <shellapi.h>
#include"Source.h"
using namespace std;

//Registration and Log In Functions
//void signup();
//int login(int c);

//Basic Users Functions
void BasicUser();
void Medical();
void Grocery();
void DeliveryAgent();

//Grocery Store Owner Functions

void showgrocery();
void soldItem();
void AcceptAndViewOrders();
void Delivery();


void signup()
{
	system("cls");

	long long int phone;
	bool myFlag = false;
	string full_name, email, password, city, user_type, username, chec;
	char ut;	//to show user type
	ofstream basic("signup.txt", ios::app);
	ifstream check("signup.txt", ios::in);

	cout << "NOTE :: To see available User Types Press S Else Press N : ";
	cin >> ut;

	system("cls");

	if (ut == 'S' || ut == 's')
	{
		string var;
		ifstream show("showtypes.txt", ios::in);
		while (!show.eof())
		{
			getline(show, var);
			cout << var << endl;
		}
		show.close();
	}
	cin.ignore();

	cout << "Type Your User Type : ";
	getline(cin, user_type);

	cout << "Enter Your Name : ";
	getline(cin, full_name);

	cout << "Enter Your City of Residence : ";
	getline(cin, city);

	cout << "Enter Your Phone Number : ";
	cin >> phone;
	cin.ignore();

	cout << "Enter Your EMAIL Address : ";
	getline(cin, email);


	while (!myFlag)
	{
		//	string chec;
		myFlag = true;
		cout << "Enter Your User Name : ";
		getline(cin, username);

		while (!check.eof())
		{
			getline(check, chec);

			if (user_type == "Basic User" || user_type == "basic user")
			{
				if (chec == username)
				{
					myFlag = false;
					cout << "User Name is Already Taken.\nEnter Again : ";
				}
			}
		}
		check.close();
	}

	cout << "Enter Your Password : ";
	getline(cin, password);
	cin.ignore();

	if (user_type == "Basic User" || user_type == "basic user")
	{
		basic << username << "\n" << full_name << "\n" << email << "\n" << password << "\n" << phone << "\n" << city << "\n" << user_type << endl;
		basic.close();
	}
	else if (user_type == "Hospital Admin Staff" || user_type == "hospital admin staff")
	{
		basic << username << "\n" << full_name << "\n" << email << "\n" << password << "\n" << phone << "\n" << city << "\n" << user_type << endl;
		basic.close();
	}
	else if (user_type == "Grocery Store Owner" || user_type == "grocery store owner")
	{
		basic << username << "\n" << full_name << "\n" << email << "\n" << password << "\n" << phone << "\n" << city << "\n" << user_type << endl;
		basic.close();
	}
	else if (user_type == "Pharmacy Owner" || user_type == "pharmacy owner")
	{
		basic << username << "\n" << full_name << "\n" << email << "\n" << password << "\n" << phone << "\n" << city << "\n" << user_type << endl;
		basic.close();
	}
}

int login(int c)
{
	string nuser, nname, nmail, npass, nphone, ncity, ntype, fmail, fpass, mail, pass;

	cout << "Select Your User Type." << endl;
	string var;

	ifstream show("showtypes.txt");
	ifstream andar("signup.txt", ios::in);

	while (!show.eof())
	{
		getline(show, var);
		cout << var << endl;
	}

	cin >> c;
	cin.ignore();

	if (c == 1)
	{

		if (!andar.is_open())
		{
			system("cls");
			cout << "Error 404! File Not Found!!!\n";
		}

		cout << "Enter Your User Name : ";
		getline(cin, mail);
		cout << "Enter Your Password : ";
		getline(cin, pass);

		while (!andar.eof())
		{
			getline(andar, nuser);
			getline(andar, nname);
			getline(andar, nmail);
			getline(andar, npass);
			getline(andar, nphone);
			getline(andar, ncity);
			getline(andar, ntype);

			if ((nuser == mail) && (npass == pass))
			{
				cout << "Welcome!\n";
				andar.close();
				BasicUser();
				return c;

			}
		}
		cout << "LOG IN Credentials INVALID !!!\n";
	}

	else if (c == 2)
	{

		if (!andar.is_open())
		{
			system("cls");
			cout << "Error 404! File Not Found!!!\n";
		}

		cout << "Enter Your User Name : ";
		getline(cin, mail);
		cout << "Enter Your Password : ";
		getline(cin, pass);

		while (!andar.eof())
		{
			getline(andar, nuser);
			getline(andar, nname);
			getline(andar, nmail);
			getline(andar, npass);
			getline(andar, nphone);
			getline(andar, ncity);
			getline(andar, ntype);

			if ((nuser == mail) && (npass == pass))
			{
				cout << "Welcome!\n";
				andar.close();
				Medical();
				return c;

			}
		}
		cout << "LOG IN Credentials INVALID !!!\n";
	}

	else if (c == 3)
	{

		if (!andar.is_open())
		{
			system("cls");
			cout << "Error 404! File Not Found!!!\n";
		}

		cout << "Enter Your User Name : ";
		getline(cin, mail);
		cout << "Enter Your Password : ";
		getline(cin, pass);

		while (!andar.eof())
		{
			getline(andar, nuser);
			getline(andar, nname);
			getline(andar, nmail);
			getline(andar, npass);
			getline(andar, nphone);
			getline(andar, ncity);
			getline(andar, ntype);

			if ((nuser == mail) && (npass == pass))
			{
				cout << "Welcome!\n";
				andar.close();
				Grocery();
				return c;

			}
		}
		cout << "LOG IN Credentials INVALID !!!\n";
	}

	else if (c == 4)
	{

		if (!andar.is_open())
		{
			system("cls");
			cout << "Error 404! File Not Found!!!\n";
		}

		cout << "Enter Your User Name : ";
		getline(cin, mail);
		cout << "Enter Your Password : ";
		getline(cin, pass);

		while (!andar.eof())
		{
			getline(andar, nuser);
			getline(andar, nname);
			getline(andar, nmail);
			getline(andar, npass);
			getline(andar, nphone);
			getline(andar, ncity);
			getline(andar, ntype);

			if ((nuser == mail) && (npass == pass))
			{
				cout << "Welcome!\n";
				andar.close();
				DeliveryAgent();
				return c;
			}
		}
		cout << "LOG IN Credentials INVALID !!!\n";
	}

	return c;
}

void BasicUser()
{
	system("cls");
	int choice;
	srand(time(0));

	cout << "\n\n\t\t====================> WELCOME TO BASIC USER DASHBOARD <====================\n\n";

	cout << "\t\tPress 1. to Get Refreshed Stats of Your City and Country Respectively(Affected Cured Died)\n";
	cout << "\t\tPress 2. to Search a Grocery Item.\n";
	cout << "\t\tPress 3. to Search a Pharmacy Item.\n";
	cout << "\t\tPress 4. to Order a Medicine or Grocery.\n";
	cout << "\t\tPress 5. to Post a Request.\n";
	cout << "\t\tPress 6. to See Requests as Thread from Other Users\n\t\t";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		system("cls");
		int n;

		cout << "\t\tPress 1 To See OverAll Stats of Pakistan.";
		cout << "\n\t\tPress 2 To See OverAll Stats of Pakistani Reigions.";
		cout << "\n\t\tPress 3 To See International Stats of Countries.";
		cout << "\n\t\tEnter Choice : ";
		cin >> n;
		cin.ignore();


	}
	break;
	case 2:
	{
		string var, name, ser;
		int ran;
		char in;
		ifstream uthale("grocery_data.txt", ios::in);
		cout << "Press S to See Grocery Items List Else Press N to search for a Grocery Item : ";
		cin >> in;

		if (!uthale.is_open())
		{
			cout << "Data Can't Be Displayed.\n";
		}

		if (in == 'S' || in == 's')
		{
			showgrocery();
		}

		else if (in == 'N' || in == 'n')
		{
			cin.ignore();
			cout << "Enter Your Item Name : ";
			getline(cin, name);
			while (!uthale.eof())
			{
				getline(uthale, ser);
				if ((ser == name))
				{
					cout << "The Item Is Available.\n";
					uthale.close();
					return;
				}
			}
		}
	}
	break;
	case 3:
	{
		string var, name, ser, ran;
		char in;
		ifstream uthale("medicine_data.txt", ios::in);
		cout << "Press S to See Grocery Items List Else Press N to search for a Grocery Item : ";
		cin >> in;
		if (!uthale.is_open())
		{
			cout << "The File Your Looking For Cannot Be Oppened.\n";
		}
		if (in == 'S' || in == 's')
		{
			cout << "\n" << setw(40) << "ITEMS" << setw(40) << "QUANTITY\n\n";

			while (!uthale.eof())
			{
				getline(uthale, var);
				getline(uthale, ran);
				cout << setw(40) << var << setw(40) << ran << endl;
			}
		}
		else if (in == 'N' || in == 'n')
		{
			cin.ignore();
			cout << "Enter Your Item Name : ";
			getline(cin, name);
			while (!uthale.eof())
			{
				getline(uthale, ser);
				if ((ser == name))
				{
					cout << "The Item Is Available.\n";
					uthale.close();
					return;
				}
			}
		}
	}
	break;
	case 4:
	{
		char order;
		string ord, fehrist;
		int quant, count;
		ofstream hukam("orderslist.txt", ios::app);

		cout << "Type 'G' to Order a Grocery else Type 'M' to Order a Medicine : ";
		cin >> order;

		if (order == 'G' || order == 'g')
		{
			cin.ignore();
			cout << "Enter The Name of Your Product : ";
			getline(cin, ord);
			cout << "Enter Quantity of Product You Want : ";
			cin >> quant;
			cin.ignore();
			ifstream uthale("grocery_data.txt", ios::in);

			if (!uthale.is_open())
			{
				cout << "Your File Can't Be Displayed Due to Some Issues.\n";
			}

			while (!uthale.eof())
			{
				getline(uthale, fehrist);
				if ((fehrist == ord))
				{
					cout << "Congratulations! Your Order is Taken.\n";
					hukam << ord << " " << quant << endl;
					uthale.close();
					return;
				}
			}
		}
		else if (order == 'M' || order == 'm')
		{
			cin.ignore();
			cout << "Enter The Name of Your Product : ";
			getline(cin, ord);
			cout << "Enter Quantity of Product You Want : ";
			cin >> quant;
			cin.ignore();
			ifstream uthale("medicine_data.txt", ios::in);

			if (!uthale.is_open())
			{
				cout << "Your File Can't Be Displayed Due to Some Issues.\n";
			}

			while (!uthale.eof())
			{
				getline(uthale, fehrist);
				if ((fehrist == ord))
				{
					cout << "Congratulations! Your Order is Taken.\n";
					hukam << ord << "\t" << quant << endl;
					uthale.close();
					return;
				}
			}
		}
		hukam.close();
	}
	break;
	case 5:
	{
		ofstream minnat("requests.txt", ios::app);
		string request;
		int miqdaar;
		cin.ignore();

		cout << "Enter The Name Of Your Product : ";
		getline(cin, request);
		cout << "Enter The Qunatity of Your Product You Want To Order : ";
		cin >> miqdaar;

		minnat << request << "\t" << miqdaar << endl;
		minnat.close();
	}
	break;
	case 6:
	{

		ifstream read("requests.txt", ios::in);
		string data;
		if (!read.is_open())
		{
			cout << "There Are Currently No Requests From Any Other User Being Posted.\n";
		}
		cout << "\n\t\t\tHere Is The Request Thread.\n\n";
		while (!read.eof())
		{
			getline(read, data);
			cout << setw(40) << data << endl;
		}
		read.close();
	}
	break;
	default:
		system("cls");
		cout << "Wrong Character Choice\n";
		cout << "Try Again :)\n";
		BasicUser();
		break;
	}
}

void Medical()
{
	int a, cntrl, age, patient, exit;
	string name, fathername, city, status;
	long long int phone, cnic;
	system("cls");

	cout << "\t\tPress 1 to Report a New Patient.\n";
	cout << "\t\tPress 2 to Report a Cured Patient.\n";
	cout << "\t\tPress 3 to Report a Dead Patient.\n\t\t";
	cin >> a;
	cin.ignore();

	switch (a)
	{
	case 1:
	{
		system("cls");
		ofstream meds("medical_data.txt", ios::app);
		do {
			std::cout << "Enter Name of Patient : ";
			getline(cin, name);
			cout << "Enter Father Name of Patient : ";
			getline(cin, fathername);
			cout << "Enter Patients City of Residence : ";
			getline(cin, city);
			cout << "Enter Phone Number of Patient : ";
			cin >> phone;
			cout << "Enter Patients CNIC : ";
			cin >> cnic;
			cout << "Enter Patients Age : ";
			cin >> age;
			cin.ignore();
			cout << "Enter Current Status of Patient : ";
			getline(cin, status);

			meds << name << " >>" << fathername << " >>" << city << " >>" << age << " >>" << phone << " >>" << cnic << " >>" << "Newely Admitted" << endl;

			cout << "\n\nThe Data Has Been Stored Sucessfully!\n";
			cout << "Press 0 To Exit Else Press Any Other Key To Continue Entering Data : ";
			cin >> cntrl;

			cin.ignore();

		} while (cntrl != 0);
		meds.close();
	}
	break;
	case 2:
	{
		system("cls");
		ofstream meds("medical_data.txt", ios::app);
		do {
			cout << "Enter Name of Patient : ";
			getline(cin, name);
			cout << "Enter Father Name of Patient : ";
			getline(cin, fathername);
			cout << "Enter Patients City of Residence : ";
			getline(cin, city);
			cout << "Enter Phone Number of Patient : ";
			cin >> phone;
			cout << "Enter Patients CNIC : ";
			cin >> cnic;
			cout << "Enter Patients Age : ";
			cin >> age;
			cin.ignore();
			cout << "Enter Current Status of Patient : ";
			getline(cin, status);

			meds << name << " >>" << fathername << " >>" << city << " >>" << age << " >>" << phone << " >>" << cnic << " >>" << "Cured" << endl;

			cout << "\n\nThe Data Has Been Stored Sucessfully!\n";
			cout << "Press 0 To Exit Else Press Any Other Key To Continue Entering Data : ";
			cin >> cntrl;

			cin.ignore();

		} while (cntrl != 0);
		meds.close();
	}
	break;
	case 3:
	{
		system("cls");
		ofstream meds("medical_data.txt", ios::app);
		do {
			cout << "Enter Name of Patient : ";
			getline(cin, name);
			cout << "Enter Father Name of Patient : ";
			getline(cin, fathername);
			cout << "Enter Patients City of Residence : ";
			getline(cin, city);
			cout << "Enter Phone Number of Patient : ";
			cin >> phone;
			cout << "Enter Patients CNIC : ";
			cin >> cnic;
			cout << "Enter Patients Age : ";
			cin >> age;
			cin.ignore();

			meds << name << " >>" << fathername << " >>" << city << " >>" << age << " >>" << phone << " >>" << cnic << " >>" << "Dead" << endl;

			cout << "\n\nThe Data Has Been Stored Sucessfully!\n";
			cout << "Press 0 To Exit Else Press Any Other Key To Continue Entering Data : ";
			cin >> cntrl;

			cin.ignore();

		} while (cntrl != 0);
		meds.close();
	}
	break;
	default:
		system("cls");
		cout << "Wrong Character Choice\n";
		cout << "Try Again :)\n";
		Medical();
		break;
	}
}

void Grocery()
{

	int  x;

	cout << "\n\n\t\t====================> WELCOME TO GROCERY STORE OWNER DASHBOARD <====================\n\n";

	cout << "\t\tPress 1. to see Available Items.\n";
	cout << "\t\tPress 2. to Decrement Sold Items.\n";
	cout << "\t\tPress 3. to Accept and View Any Orders.\n";
	cout << "\t\tPress 4. to Assign a Delivery.\n\t\t";
	cout << "Enter Choice : ";
	cin >> x;
	cin.ignore();

	switch (x)
	{
	case 1:
	{
		cout << "\n\t\tListing Available Items With Quantity.\n";
		showgrocery();
	}
	break;
	case 2:
	{
		cout << "\n\t\tDecrement any sold item\n";
		soldItem();
	}
	break;
	case 3:
	{
		cout << "\n\t\tView and Accept Orders.\n";
		AcceptAndViewOrders();
	}
	break;
	case 4:
	{
		cout << "\n\t\tAssign Deliveries.\n";
		Delivery();
	}
	break;
	default:
		system("cls");
		cout << "Wrong Character Choice\n";
		cout << "Try Again :)\n";
		Grocery();
		break;
	}
}

void showgrocery()
{
	string aja, qua;//qua = quantity
	ifstream bartan("grocery_data.txt", ios::in);

	if (!bartan.is_open())
	{
		cout << "Data Can't Be Displayed.\n";
	}

	while (!bartan.eof())
	{
		getline(bartan, aja);
		getline(bartan, qua);

		cout << setw(40) << aja << setw(40) << qua << endl;
	}
	bartan.close();
}

void soldItem()
{
	string first_r, temp_search;
	int   second_r, temp_int;
	char cho;	//cho=choice
	ofstream kam("temp_grocery.txt", ios::app);
	ofstream kam_m("temp_medicine.txt", ios::app);
	ifstream khol("grocery_data.txt", ios::in);

	cout << "\n\t\tType G to Decreament any Grocery Item or Else Type M to Decreament any Pharmacy Item : ";
	cin >> cho;

	cin.ignore();

	cout << "\n\t\tEnter The Name OF Your Product : ";
	getline(cin, temp_search);
	cout << "\t\tEnter The Quantity You Want To Decreament : ";
	cin >> temp_int;

	cin.ignore();

	if (!khol.is_open())
	{
		system("cls");
		cout << "Error 404! Data Doesn't Exist.\n";
	}

	if (cho == 'G' || cho == 'g')
	{
		while (!khol.eof())
		{
			getline(khol, first_r);
			khol >> second_r;
			if (!khol.eof())
			{
				if ((first_r == temp_search) && (second_r > 0))
				{
					second_r = second_r - temp_int;
				}
				else
				{
					kam << first_r << endl << second_r << endl;
				}
			}
		}
		kam.close();
		khol.close();
		remove("grocery_data.txt");
		rename("temp_grocery.txt", "grocery_data.txt");
	}
	else if (cho == 'M' || cho == 'm')
	{
		while (!khol.eof())
		{
			getline(khol, first_r);
			khol >> second_r;
			if (!khol.eof())
			{
				if ((first_r == temp_search) && (second_r > 0))
				{
					second_r = second_r - temp_int;
				}
				else
				{
					kam_m << first_r << endl << second_r << endl;
				}
			}
		}
		kam.close();
		khol.close();
		remove("medicine_data.txt");
		rename("temp_medicine.txt", "medicine_data.txt");
	}
}

void AcceptAndViewOrders()
{
	ifstream open_order("orderslist.txt", ios::in);
	string open;
	char accept;

	if (!open_order.is_open())
	{
		system("cls");
		cout << "\n\t\tThere are no Current Orders.\n";
	}
	cout << "\n\t\tBelow Are The Order Which Have Been Posted.\n";
	while (!open_order.eof())
	{
		getline(open_order, open);
		cout << open << endl;
	}
	cout << "\n\t\tTo Accept These Orders Press A Else Press N to Deny These Requests.\n";
	cin >> accept;

	if (accept == 'A' || accept == 'a')
	{
		cout << "\t\tThe Orders Have Been Accepted.\n";
	}
	else if (accept == 'N' || accept == 'n')
	{
		cout << "\t\tThe Orders Have Been Denied.\n";
	}
	open_order.close();
}

void Delivery()
{
	ofstream asign("delivries.txt", ios::app);
	ifstream purani("orderslist.txt", ios::in);
	string va;
	char tap;
	if (!purani.is_open())
	{
		system("cls");
		cout << "\t\tThere Are No Current Orders To Assign.\n";
	}

	if (!asign.is_open())
	{
		cout << "\t\tThere is an Error Assigning Orders From Order Lists to Delivery File.\n";
	}
	cout << "\t\tTo Assign Delivries Kindly Tap A.\n\t\t";
	cin >> tap;
	cin.ignore();

	if (tap == 'A' || tap == 'a')
	{
		while (!purani.eof())
		{
			getline(purani, va);
			asign << va << endl;
		}
		cout << "\n\t\tThe Deliveries Has Been Assigned To Delivery Service.\n";
	}
	asign.close();
	purani.close();
}

void DeliveryAgent()
{
	int d, t;
	char ch;
	string ac_del, sec_var;
	cout << "\n\n\t\t====================> WELCOME TO DELIVERY SERVICES DASHBOARD <====================\n\n";
	cout << "\t\tPress 1. to View All Deliveries.\n";
	cout << "\t\tPress 2. to Accept Deliveries.\n";
	cout << "\t\tPress 3. to Mark an Accepted Delivery Is Done.\n";

	cin >> d;

	cin.ignore();

	switch (d)
	{
	case 1:
	{
		cout << "\t\tBelow Is The Available List of Deliveries.\n\n";
		ifstream del("delivries.txt", ios::in);
		string fir;

		if (!del.is_open())
		{
			system("cls");
			cout << "\t\tThere are No Current Delivries.\n";
		}

		while (!del.eof())
		{
			getline(del, fir);
			cout << setw(40) << fir << endl;
		}
		del.close();
	}
	break;
	case 2:
	{
		ifstream del("delivries.txt", ios::in);
		string fir;

		if (!del.is_open())
		{
			system("cls");
			cout << "\t\tThere are No Current Delivries.\n";
		}

		while (!del.eof())
		{
			getline(del, fir);
			cout << setw(40) << fir << endl;
		}
		del.close();

		cout << "\t\tType A to Accept a Delivery Else Press N to Deny a Delivery and Also Mention it's Number from The List.\n";
		cin >> ch;
		cin.ignore();

		if (ch == 'A' || ch == 'a')
		{
			cout << "\t\tThe Deliveries Has Been Accepted.\n";
		}
		else if (ch == 'N' || ch == 'n')
		{
			cout << "\t\tMention The Delivery Number Which Is Not Accepted.\n";
			cin >> t;

			cin.ignore();

			cout << "\t\tDelivery Number " << t << " Is Not Accepted.\n";
		}
		del.close();
	}
	break;
	case 3:
	{
		ofstream done("done_delivries.txt", ios::app);
		ifstream pending("delivries.txt", ios::in);
		cout << "Enter The Name + Quantity of Delivery Which is Done : ";
		getline(cin, ac_del);

		if (!pending.is_open())
		{
			system("cls");
			cout << "\t\tThere are Isssues in Opening File.\n";
		}
		while (!pending.eof())
		{
			getline(pending, sec_var);
			if (sec_var == ac_del)
			{
				continue;
			}
			else
			{
				done << sec_var << endl;
			}
		}
		done.close();
		pending.close();
		remove("delivries.txt");
		rename("done_delivries.txt", "delivries.txt");
	}
	break;
	default:
		system("cls");
		cout << "Wrong Character Choice\n";
		cout << "Try Again :)\n";
		DeliveryAgent();
		break;
	}

}

int main()
{
	char x, c = 0;
	string deluser, delname, delmail, delpass, delphone, delcity, deltype, fuser, fname;
	ofstream arrzi("file.txt", ios::app);
	ifstream fin("signup.txt", ios::in);

	cout << "\n\n\t\t====================> WELCOME TO COVID-19 CONTROL UNIT <====================\n\n";

	cout << "\t\tNOTE :: If You Have Already Signed Up Then Press L For LOG IN Else Press R to Register Yourself.\n";
	cout << "\t\tOr Press D if You Want To Delete Your Account.\n\n";
	cout << "\t\tLOG IN\n";
	cout << "\t\tREGISTRATION\n";
	cout << "\t\tDELETE\n\t\t";
	cin >> x;

	cin.ignore();

	switch (x)
	{
	case'L':case'l':
		login(c);
		break;
	case'R':case'r':
		signup();
		break;
	case 'D':case'd':
	{
		cin.ignore();
		system("cls");
		cout << "Enter The Following Details of The Account You Wanna Delete.\n";
		cout << "Enter Name : ";
		getline(cin, fname);
		cout << "User Name : ";
		getline(cin, fuser);
		while (!fin.eof())
		{
			getline(fin, deluser);
			getline(fin, delname);
			getline(fin, delmail);
			getline(fin, delpass);
			getline(fin, delphone);
			getline(fin, delcity);
			getline(fin, deltype);
			if (!fin.eof())
			{
				if ((fuser == deluser) && (fname == delname))
				{
					continue;
				}
				else
				{
					arrzi << "\n" << deluser << "\n" << delname << "\n" << delmail << "\n" << delpass << "\n" << delphone << "\n" << delcity << "\n" << deltype << endl;
				}
			}

		}
		fin.close();
		arrzi.close();
		remove("signup.txt");
		rename("file.txt", "signup.txt");
	}
	break;
	default:
		cout << "Wrong Character Choice.\nThe Program is Exiting Run Again and Enter a Valid Choice.\n";
		exit(0);
		break;
	}

	return 0;
}
