//Aaron Lim Cong Kai
//Full time
//FTA_AaronLCK_A2P2 
//I claim all credit of this assignment submission

#include <iostream>
#include <iomanip>

using namespace std;

	const int x = 1;
	const int d = 2;
	const int n = 3;

int main()
{
	int item1, item2, item3, 
		s1, s2, s3,
		disc1, disc2, disc3;
		
	float price1, price2, price3, 
		  sum1, sum2, sum3, 
		  final1, final2, final3,
		  T1;
	int disc_10 = 10;
	int disc_20 = 20;
	int disc_30 = 30;
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "\tWelcome to ABC company" << endl;
	cout << endl;	 
	cout << "Enter item 1 price and quantity: ";
	cin >> price1 >> item1;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter item 2 price and quantity: ";
	cin >> price2 >> item2;
	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter item 3 price and quantity: ";
	cin >> price3 >> item3;
	cin.clear();
	cin.ignore(100, '\n');
	cout << endl;
	
	cout << "Summary of items' costs" << endl;
	cout << setw(24) << setfill('-') << "-" << endl;
	
	sum1 = item1 * price1;
	sum2 = item2 * price2;
	sum3 = item3 * price3;
	
	if (sum1 >= sum2 && sum1 >= sum3)
	{
		cout << "Highest cost is item 1" <<endl;
		disc1 = disc_30;
		s1 = x;
		
		if (sum2 >= sum3)
		{
			disc2 = disc_20;
			disc3 = disc_10;
			s2 = d;
			s3 = n;
			cout << "Middle  cost is item 2" << endl;
			cout << "Lowest  cost is item 3" << endl;
		}
		else
		{
			disc2 = disc_10;
			disc3 = disc_20;
			s2 = n;
			s3 = d;
			cout << "Middle  cost is item 3" << endl;
			cout << "Lowest  cost is item 2" << endl;
		}
	}
	else if (sum2 >= sum1 && sum2 >= sum3)
	{
		cout << "Highest cost is item 2" << endl;
		disc2 = disc_30;
		s2 = x;
		
		if (sum1 >= sum3)
		{
			disc1 = disc_20;
			disc3 = disc_10;
			s1 = d;
			s3 = n;
			cout << "Middle  cost is item 1" << endl;
			cout << "Lowest  cost is item 3" << endl;
		}
		else
		{
			disc3 = disc_20;
			disc1 = disc_10;
			s3 = d;
			s1 = n;
			cout << "Middle  cost is item 3" << endl;
			cout << "Lowest  cost is item 1" << endl;
		}
	}
	else
	{
		cout << "Highest cost is item 3" << endl;
		disc3 = disc_30;
		s3 = x;
		if (sum1 >= sum2)
		{
			disc1 = disc_20;
			disc2 = disc_10;
			s1 = d;
			s2 = n;
			cout << "Middle  cost is item 1" << endl;
			cout << "Lowest  cost is item 2" << endl;
		}
		else
		{
			disc2 = disc_20;
			disc1 = disc_10;
			s2 = d;
			s1 = n;
			cout << "Middle  cost is item 2" << endl;
			cout << "Lowest  cost is item 1" << endl;
		}
	}
		
	cout << setfill(' ') << " " << endl;
	
	cout << "Summary of purchase" << endl;
	cout << setw(19) << setfill('-') << "-";
	cout << setfill(' ') << " " << endl;
	
	cout << "Item"
		 << right << setw(12) << "Price"
		 << right << setw(5) << "Qty"
		 << right << setw(8) << "Cost"
		 << right << setw(8) << "Disc't"
		 << right << setw(8) << "Final"
		 << right << setw(10) << "Remark"
		 << endl;
	
	cout << setw(56) << setfill('-') << "-" << setfill(' ') << " " << endl;
	
	final1 = (double(100 - disc1))/100 * sum1;
	final2 = (double(100 - disc2))/100 * sum2;
	final3 = (double(100 - disc3))/100 * sum3;
	
	cout << "Item 1"
		 << right << setw(10) << price1
		 << right << setw(5) << item1
		 << right << setw(9) << sum1
		 << right << setw(5) << disc1 << "%"
		 << right << setw(11) << final1
		 << right << setw(8);
	switch(s1)
	{
		case 1: cout << "MAX" << endl;
				break;
		case 2: cout << "MID" << endl;
			  	break;
		case 3: cout << "MIN" << endl;
				break;
	}
	cout << "Item 2"
		 << right << setw(10) << price2
		 << right << setw(5) << item2
		 << right << setw(9) << sum2
		 << right << setw(5) << disc2 << "%"
		 << right << setw(11) << final2
		 << right << setw(8);
	switch(s2)
	{
		case 1: cout << "MAX" << endl;
		  	  	break;
		case 2: cout << "MID" << endl;
		  	  	break;
		case 3: cout << "MIN" << endl;
				break;
	}
	cout << "Item 3"
		 << right << setw(10) << price3
		 << right << setw(5) << item3
		 << right << setw(9) << sum3
		 << right << setw(5) << disc3 << "%"
		 << right << setw(11) << final3
		 << right << setw(8);
	switch(s3)
	{
		case 1: cout << "MAX" << endl;
				break;
		case 2: cout << "MID" << endl;
				break;
		case 3: cout << "MIN" << endl;
				break;
	}

	cout << setw(56) << setfill('=') << "=" << setfill(' ') << " " << endl;
	
	T1 = final1 + final2 + final3;
	cout << "Total"
		 << right << setw(42) << T1
		 << endl;
	
	cout << setw(56) << setfill('=') << "=" << endl;	
}

