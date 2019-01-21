#include<iostream>
#include<string>
using namespace std;


class person {
public:
	int pid;
	string name;
public:
	void acceptdata() {
		cin >> pid;
		cin >> name;
	}
	void display()
	{
		cout << pid << " ";
		cout << name << endl;
	}

};
class sports {
public:
	int spid;
	string sname;
};
class ug:public person{
public:
	int ugid;
	string ugname;
};
class pg : public ug,public sports{

	
};
int main()
{
	pg p[20];
	p[0].pid = 12;
	p[0].name = "Nava";
	p[1].pid = 13;
	p[1].name = "Hello";

	int k, lid, jk;
	int c = 2;
	int count = 0;
	do {
		cin >> k;
		switch (k)
		{
		case 1:
			cout << "Accepting data" << endl;
			p[c].acceptdata();
			c++;
			break;
		case 2:
			cout << "Display the data" << endl;
			for (int l = 0; l < c; l++)
			{
				p[l].display();
			}
			break;
		case 3:
			cout << "Searching the data using id" << endl;
			cin >> lid;
			
			for (int f = 0; f < c; f++)
			{
				if (p[f].pid == lid)
				{
					p[f].display();
					count++;
				}
			}
			if (count <= 0)
			{
				cout << "id not matched";
			}
			break;

		case 4:
			cout << "Deleting the data using id" << endl;
			cin >> jk;
			for (int i = 0; i < c; i++)
			{
				if (p[i].pid == jk)
				{
					for (int j = i; j < c-1;j++)
					{
						p[j] = p[j + 1];
						
				   }
					c--;
				}
				else {
					p[i].display();
				}
			}
		
			break;
		case 5:
			cout << "updating" << endl;
			int gd;
			cout << "change the data according to id";
			cin >> gd;
			int id;
			string pname;
			cout << "enter new values";
			cin >> id;
			cin >> pname;
			for (int i = 0; i < c; i++)
			{
				if (p[i].pid == gd)
				{
					p[i].pid = id;
					p[i].name = pname;
				}
			}
			break;
		
		}
	} while (k < 6);

}




