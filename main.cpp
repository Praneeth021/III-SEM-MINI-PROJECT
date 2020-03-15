#include <iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;
class student
{
	public:
	int id;
	char name[20];
	int age;
	char gender;
	float gpa;
	char branch[10],college[50];
	char emailid[20];
	long long phoneno;
	char com[30];
	int aptitude;
	int technical;
	int total;
	student()
	{
		id=0;
		aptitude=0;
		technical=0;
		total=0;
	}
	int getid();
	void readdata();
	void display();
	void write();
	void companychoice();
	void aptitudetest();
	void technicaltest();
	void totaltest();
};
int student::getid()
{
	return ++id;
}
void student::readdata()
{
    fstream file("studentdata.txt",ios::in|ios::out|ios::app);
    file.seekg(0,ios::beg);
  	file.read((char*)this,sizeof(student));
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"\nEnter age : ";
    cin>>age;
    cout<<"Gender :\n\t1.Male\n\t2.Female\n\t3.Others\nEnter your choice : ";
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
			gender='M';
			break;
        case 2:
			gender='F';
			break;
        case 3:
			gender='O';
			break;
    }
    cout<<"Select Branch: ";
    int k;
    cout<<"\t1.CSE\n\t2.IT\n\t3.ECE\n\t4.EEE\n\t5.MECH\n\t6.OTHERS\nEnter your choice:";
    cin>>k;
    switch(k)
    {
        case 1:
			strcpy(branch,"CSE");
			break;
        case 2:
			strcpy(branch,"IT");
			break;
        case 3:
			strcpy(branch,"ECE");
			break;
        case 4:
			strcpy(branch,"EEE");
			break;
        case 5:
			strcpy(branch,"MECH");
			break;
        case 6:
			strcpy(branch,"OTHERS");
			break;
    }
    cout<<"\nEnter GPA : ";
    cin>>gpa;
    cout<<"\nEnter College : ";
    cin>>college;
    cout<<"\nEnter Email ID : ";
    cin>>emailid;
    cout<<"\nEnter Phone number : ";
    cin>>phoneno;
    companychoice();
    write();
}
void student::write()
{
	fstream file("studentdata.txt",ios::in|ios::out|ios::app);
	file.write((char *)(this),sizeof(student));
}
void student::companychoice()
{
    int i;
    cout<<"\nList of companies you can apply :"<<endl;
    cout<<"\n\t1.Microsoft (Criteria is GPA > 8)\n\t2.JP  Morgan Chase (Criteria is GPA > 8)\n\t3.Deliote  (Criteria is GPA > 7)\n\t4.Google (Criteria is GPA > 7.5)\n\t5.Amazon  (Criteria is GPA > 7)\n ";
    cout<<"\nSelect the company you want to apply : ";
    cin>>i;
    if(i==1)
    {

        if(this->gpa>8.0)
        {
            cout<<"Are you ready for ROUND 1: APTITUDE TEST"<<endl;
            cout<<"yes(y) or no(n):"<<endl;
            char a;
            cin>>a;
            system("CLS");
            cout<<"\n\n\t\t\t\tMICROSOFT ROUND 1:APTITUDE TEST\n";
            if(a=='y'||a=='Y')
            {
                cout<<"\nQUESTION 1: The differnece of two numbers is 1365.On dividing the larger number by the smaller,we get 6 as the quotient and the 15 as reaminder.What is the smaller number ?"<<endl;
                cout<<"option 1:240\toption 2: 270\toption 3:295\toption 4:360\n";
                int  s;
                cout<<"ANS : ";
                cin>>s;
                if(s==2)
                {
                    aptitude++;
                }
                cout<<"\nQUESTION 2: If the number 517 * 324 is completely divisible by 3, then the smallest whole number in the place of * will be:"<<endl;
                cout<<"option 1:0\toption 2: 1\toption 3:2\toption 4:None of these\n";
                cout<<"ANS : ";
                cin>>s;
                if(s==3)
                {
                    aptitude++;
                }
                cout<<"\nQUESTION 3: Two ships are sailing in the sea on the two sides of a lighthouse. The angle of elevation of the top of the lighthouse is observed from the ships are 30° and 45° respectively. If the lighthouse is 100 m high, the distance between the two ships is:"<<endl;
                cout<<"option 1:244\toption 2: 170\toption 3:273\toption 4:360\n";
                cout<<"ANS : ";
                cin>>s;
                if(s==3)
                {
                    aptitude++;
                }
                cout<<"\nQUESTION 4: Find the missing number in the below series:\n  112,139,166,?,220,247\n";
                cout<<"option 1:192\toption 2:193\toption 3:200\toption 4:199\n";
                cout<<"ANS : ";
                cin>>s;
                if(s==2)
                {
                	aptitude++;
				}
				cout<<"\nQUESTION 5: The average of 14 numbers is zero. Of them,at the most how many greater than zero?\n";
				cout<<"option 1:2\toption 2:6\toption 3:13\tloption 4:14\n";
				cout<<"ANS : ";
				cin>>s;
				if(s==3)
				{
					aptitude++;
				}
            }
            if(aptitude>3)
            {
            	int s;
            	system("CLS");
            	cout<<"\nAre you ready for ROUND 2: TECHNICAL TEST\n";
            	cout<<"yes(y) or no(n):"<<endl;
            	cin>>a;
            	system("CLS");
            	cout<<"\n\t\t\tMICROSOFT ROUND 2: TECHNICAL TEST\n";
            	if(a=='y'||a=='Y')
            	{
            		cout<<"QUESTION 1: 	You can use C++ as a procedural, as well as an object-oriented, language\n";
            		cout<<"Option 1:YES\tOption 2:NO\n";
            		cin>>s;
            		if(s==1)
            		{
            			technical++;
					}
					cout<<"QUESTION 2: A constructor can be virtual.\n";
					cout<<"Option 1:YES\tOption 2:NO\n";
					cin>>s;
					if(s==2)
					{
						technical++;
					}
					cout<<"QUESTION 3: Operators sizeof and ?:\n";
					cout<<"Option 1: Both can be overloaded\nOption 2: Both cannot be overloaded\nOption 3:Only sizeof can be overloaded\nOption 4: Only ?: can be overloaded\n";
					cin>>s;
					if(s==2)
					{
						technical++;
					}
					cout<<"QUESTION 4: Which feature of the OOPS gives the concept of reusability?\n";
					cout<<"Option 1:Abstraction\nOption 2:Inheritance\nOption 3:Encapsulation\nOption 4:None of the above.\n";
					cin>>s;
					if(s==2)
					{
						technical++;
					}
					cout<<"QUESTION 5: What is the size of ‘int’? \n";
					cout<<"Option 1:2\nOption 2:4\nOption 3:6\nOption 4:Compiler dependent\n";
					cin>>s;
					if(s==4)
					{
						technical++;
					}
				}
			}
			total=aptitude+technical;
			strcpy(com,"microsoft");
			cout<<"Your details are sent to Microsoft comapny"<<endl;
            fstream file("microsoft.txt",ios::in|ios::out|ios::app);
            file.write((char *)this,sizeof(student));

        }

    }
	if(i==2)
    {
    	if(this->gpa>8.0)
        {
            cout<<"Are you ready for ROUND 1: APTITUDE TEST"<<endl;
            cout<<"yes(y) or no(n):"<<endl;
            char a;
            cin>>a;
            if(a=='y'||a=='Y')
            {
            	int s;
             	cout<<"QUESTION 1: If a - b = 3 and a^2 + b^2 = 29, find the value of ab.\n";
             	cout<<"Option 1:10\nOption 2:12\nOption 3:18\nOption 4:20\n";
             	cin>>s;
             	if(s==1)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 2: Today is Monday. After 61 days, it will be:\n";
             	cout<<"Option 1:Wednesday\nOption 2:Saturday\nOption 3:Tuesday\nOption 4:Thursday\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 3:Which of the following is not a leap year?\n";
             	cout<<"Option 1:700\nOption 2:800\nOption 3:1200\nOption 4:2000\n";
             	cin>>s;
             	if(s==1)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 4:What is the probability of getting a sum 9 from two throws of a dice?\n";
             	cout<<"Option 1: 1/6\nOption 2: 1/8\nOption 3: 1/12\nOption 4: 1/9\n";
             	cin>>s;
             	if(s==4)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 5:Find the odd man out.\n3, 5, 11, 14, 17, 21\n";
             	cout<<"Option 1: 5\nOption 2:11\nOption 3:14\nOption 4:21\n";
             	cin>>s;
             	if(s==3)
             	{
             		aptitude++;
				}
       		}
       		if(aptitude>3)
       		{
       			cout<<"\nAre you ready for ROUND 2: TECHNICAL TEST\n";
            	cout<<"yes(y) or no(n):"<<endl;
            	cin>>a;
            	if(a=='y'||a=='Y')
            	{
            		int s;
            		cout<<"QUESTION 1: Choose the invalid identifier from the below\n";
            		cout<<"Option 1:Int\nOption 2:bool\nOption 3:DOUBLE\nOption 4: __0__\n";
            		cin>>s;
            		if(s==2)
            		{
            			technical++;
					}
					cout<<"QUESTION 2:  What is a generic class?\n";
            		cout<<"Option 1:Function template\nOption 2:Class template\nOption 3:Inherited class\nOption 4:None of the above.\n";
            		cin>>s;
            		if(s==2)
            		{
            			technical++;
					}
					cout<<"QUESTION 3: Which one of the following is an application of Stack Data Structure?\n";
            		cout<<"Option 1:	Managing function calls\nOption 2:	The stock span problem\nOption 3:	Arithmetic expression evaluation\nOption 4:	All of the above\n";
            		cin>>s;
            		if(s==4)
            		{
            			technical++;
					}
					cout<<"QUESTION 4: To evaluate an expression without any embedded function calls:\n";
            		cout<<"Option 1:	One stack is enough\nOption 2:	Two stacks are needed\nOption 3:	As many stacks as the height of the expression tree are needed\nOption 4:	A Turing machine is needed in the general case\n";
            		cin>>s;
            		if(s==1)
            		{
            			technical++;
					}
					cout<<"QUESTION 5: Overloaded functions are required to\n";
            		cout<<"Option 1:have the same return type\nOption 2:have the same number of parameters\nOption 3:perform the same basic functions\nOption 4:None of the above\n";
            		cin>>s;
            		if(s==4)
            		{
            			technical++;
					}
				}
			}
    	}
    				total=aptitude+technical;
    				strcpy(com,"jpmc");

        cout<<"Your details are sent to JP Morgan Chase comapny"<<endl;
    	fstream file("jpmc.txt",ios::in|ios::out|ios::app);
        file.write((char *)this,sizeof(student));
    }
    if(i==3)
    {
    	if(this->gpa>7.0)
        {
            cout<<"Are you ready for ROUND 1: APTITUDE TEST"<<endl;
            cout<<"yes(y) or no(n):"<<endl;
            char a;
            cin>>a;
            if(a=='y'||a=='Y')
            {
                int s;
				cout<<"QUESTION 1: Three unbiased coins are tossed. What is the probability of getting at most two heads?\n";
         		cout<<"Option 1:	3/4\nOption 2:	1/4\nOption 3:	3/8\nOption 4:	7/8\n";
             	cin>>s;
             	if(s==4)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 2: 	How many natural numbers are there between 23 and 100 which are exactly divisible by 6 ?\n";
         		cout<<"Option 1:8\nOption 2: 11\nOption 3:12\nOption 4:13\n";
             	cin>>s;
             	if(s==4)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 3: A is two years older than B who is twice as old as C. If the total of the ages of A, B and C be 27, then how old is B?\n";
         		cout<<"Option 1:7\nOption 2:10\nOption 3:21\nOption 4:9\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 4: The cost price of 20 articles is the same as the selling price of x articles. If the profit is 25%, then the value of x is:\n";
         		cout<<"Option 1:15\nOption 2:18\nOption 3:16\nOption 4:25\n";
             	cin>>s;
             	if(s==3)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 5: If a quarter kg of potato costs 60 paise, how many paise will 200 gm cost?\n";
         		cout<<"Option 1:48 paise\nOption 2:54 paise\nOption 3:56 paise\nOption 4:72 paise\n";
             	cin>>s;
             	if(s==1)
             	{
             		aptitude++;
				}
			}
				if(aptitude>2)
       			{
       				cout<<"\nAre you ready for ROUND 2: TECHNICAL TEST\n";
            		cout<<"yes(y) or no(n):"<<endl;
            		cin>>a;
            		if(a=='y'||a=='Y')
            		{
            		    int s;
            			cout<<"QUESTION 1:You mark the beginning of a function's block of code with the _____\n";
            			cout<<"Option 1:#\nOption 2:^\nOption 3:*\nOption 4:{\n";
            			cin>>s;
            			if(s==4)
            			{
            				technical++;
						}
						cout<<"QUESTION 2:To use either an input or output file, the program must include the _____ header file\n";
            			cout<<"Option 1:filestream.h\nOption 2:fstream.h\nOption 3:instream.h\nOption 4:iostream.h\n";
            			cin>>s;
            			if(s==2)
            			{
            				technical++;
						}
						cout<<"QUESTION 3:A widget is to the blueprint for a widget as an object is to\n";
            			cout<<"Option 1:a class	\nOption 2:a member function\nOption 3:an operator\nOption 4:a data item\n";
            			cin>>s;
            			if(s==1)
            			{
            				technical++;
						}
						cout<<"QUESTION 4:The generic type in a template function\n";
            			cout<<"Option 1:must be T\nOption 2:can be T\nOption 3:cannot be T for functions you create, but may be for C++'s built-in functions\nOption 4:	cannot be T\n";
            			cin>>s;
            			if(s==2)
            			{
            				technical++;
						}
						cout<<"QUESTION 5:A function that is called automatically each time an object is destroyed is a\n";
            			cout<<"Option 1:destroyer\nOption 2:constructor\nOption 3:destructor	\nOption 4:	terminator\n";
            			cin>>s;
            			if(s==3)
            			{
            				technical++;
						}
					}
				}
		}
					total=aptitude+technical;
					strcpy(com,"deloite");

   		cout<<"Your details are sent to Deloite comapny"<<endl;
    	fstream file("deloite.txt",ios::in|ios::out|ios::app);
        file.write((char *)this,sizeof(student));
    }
    if(i==4)
    {
    	if(this->gpa>7.5)
        {
            int s;
            cout<<"Are you ready for ROUND 1: APTITUDE TEST"<<endl;
            cout<<"yes(y) or no(n):"<<endl;
            char a;
            cin>>a;
            if(a=='y'||a=='Y')
            {
				cout<<"QUESTION 1: A wheel that has 6 cogs is meshed with a larger wheel of 14 cogs. When the smaller wheel has made 21 revolutions, then the number of revolutions mad by the larger wheel is:\n";
         		cout<<"Option 1:4\nOption 2:9\nOption 3:12\nOption 4:49\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 2:	A and B invest in a business in the ratio 3 : 2. If 5% of the total profit goes to charity and A's share is Rs. 855, the total profit is: \n";
         		cout<<"Option 1:Rs. 1425\nOption 2:Rs. 1500\nOption 3:Rs. 1537.50\nOption 4:Rs. 1576\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 3: 	What decimal of an hour is a second ?\n";
         		cout<<"Option 1: .0025\nOption 2: .0256\nOption 3: .00027\nOption 4: .000126\n";
             	cin>>s;
             	if(s==3)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 4: \n";
         		cout<<"Option 1:\nOption 2:\nOption 3:\nOption 4:\n";
             	cin>>s;
             	if(s==1)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 5: 	In a 100 m race, A can give B 10 m and C 28 m. In the same race B can give C:\n";
         		cout<<"Option 1: 18 m\nOption 2: 20 m\nOption 3: 27 m\nOption 4: 9 m\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
			}
				if(aptitude>2)
       			{
       				cout<<"\nAre you ready for ROUND 2: TECHNICAL TEST\n";
            		cout<<"yes(y) or no(n):"<<endl;
            		cin>>a;
            		if(a=='y'||a=='Y')
            		{
            			cout<<"QUESTION 1: Which of the following assigns the number 5 to the area variable?\n";
            			cout<<"Option 1: area 1 = 5\nOption 2: 	area == 5\nOption 3:	area-->5\nOption 4: area = 5\n";
            			cin>>s;
            			if(s==4)
            			{
            				technical++;
						}
						cout<<"QUESTION 2: 	A base class may also be called a\n";
            			cout<<"Option 1: child class\nOption 2: subclass\nOption 3: derived class\nOption 4: parent class\n";
            			cin>>s;
            			if(s==4)
            			{
            				technical++;
						}
						cout<<"QUESTION 3: 	The _____ mode tells C++ to open a file for input\n";
            			cout<<"Option 1: add::ios\nOption 2: in::file\nOption 3: ios::app\nOption 4: ios::in\n";
            			cin>>s;
            			if(s==4)
            			{
            				technical++;
						}
						cout<<"QUESTION 4: 	Using the wardrobe structure within the ShopList structure is an example of a good programming principle, known as _____\n";
            			cout<<"Option 1: reusability\nOption 2: polymorphism\nOption 3: redundancy\nOption 4: 	recursion\n";
            			cin>>s;
            			if(s==1)
            			{
            				technical++;
						}
						cout<<"QUESTION 5:	The #ifndef directive tests to see whether ________\n";
            			cout<<"Option 1: a class has been defined\nOption 2: a variable has been given a value\nOption 3: a class has no variable definitions\nOption 4: any objects of the class have been instantiated\n";
            			cin>>s;
            			if(s==1)
            			{
            				technical++;
						}
					}
				}
			}
						total=aptitude+technical;
						strcpy(com,"google");

        cout<<"Your details are sent to Google comapny"<<endl;
        fstream file("google.txt",ios::in|ios::out|ios::app);
        file.write((char *)this,sizeof(student));
    }
    if(i==5)
    {
    	if(this->gpa>7.0)
        {
            int s;
            cout<<"Are you ready for ROUND 1: APTITUDE TEST"<<endl;
            cout<<"yes(y) or no(n):"<<endl;
            char a;
            cin>>a;
            if(a=='y'||a=='Y')
            {
				cout<<"QUESTION 1: 	In a 500 m race, the ratio of the speeds of two contestants A and B is 3 : 4. A has a start of 140 m. Then, A wins by:\n";
         		cout<<"Option 1: 60 m\nOption 2: 40 m\nOption 3: 20 m\nOption 4: 10 m\n";
             	cin>>s;
             	if(s==3)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 2: 	If one-third of one-fourth of a number is 15, then three-tenth of that number is:\n";
         		cout<<"Option 1:35\nOption 2:36\nOption 3:45\nOption 4:54\n";
             	cin>>s;
             	if(s==4)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 3: 	Three times the first of three consecutive odd integers is 3 more than twice the third. The third integer is:\n";
         		cout<<"Option 1: 9\nOption 2: 11\nOption 3: 13\nOption 4: 15\n";
             	cin>>s;
             	if(s==4)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 4: 	Sakshi can do a piece of work in 20 days. Tanya is 25% more efficient than Sakshi. The number of days taken by Tanya to do the same piece of work is:\n";
         		cout<<"Option 1: 15\nOption 2:16\nOption 3: 18\nOption 4: 25\n";
             	cin>>s;
             	if(s==2)
             	{
             		aptitude++;
				}
				cout<<"QUESTION 5: The percentage increase in the area of a rectangle, if each of its sides is increased by 20% is:\n";
         		cout<<"Option 1: 40%\nOption 2: 42%\nOption 3: 44%\nOption 4: 46%\n";
             	cin>>s;
             	if(s==3)
             	{
             		aptitude++;
				}
			}
				if(aptitude>2)
       			{
       				cout<<"\nAre you ready for ROUND 2: TECHNICAL TEST\n";
            		cout<<"yes(y) or no(n):"<<endl;
            		cin>>a;
            		if(a=='y'||a=='Y')
            		{
            			cout<<"QUESTION 1: The rules of a programming language are called its _____\n";
            			cout<<"Option 1: code\nOption 2: guidelines\nOption 3: 	syntax	\nOption 4:	procedures\n";
            			cin>>s;
            			if(s==3)
            			{
            				technical++;
						}
						cout<<"QUESTION 2:	An array element is accessed using\n";
            			cout<<"Option 1:a first-in-first-out approach\nOption 2:the dot operator\nOption 3:a member name\nOption 4:an index number\n";
            			cin>>s;
            			if(s==4)
            			{
            				technical++;
						}
						cout<<"QUESTION 3: 	Which of the following stream manipulators advances the cursor to the next line on the computer screen?\n";
            			cout<<"Option 1: endl	\nOption 2:	adin\nOption 3:	lineadv\nOption 4:	edlin\n";
            			cin>>s;
            			if(s==1)
            			{
            				technical++;
						}
						cout<<"QUESTION 4:The time and memory involved in calling a function represent the function's _____\n";
            			cout<<"Option 1:prototype\nOption 2:overhead	\nOption 3:cost\nOption 4:burden\n";
            			cin>>s;
            			if(s==2)
            			{
            				technical++;
						}
						cout<<"QUESTION 5:The string HELLO WORLD needs\n";
            			cout<<"Option 1:11 bytes\nOption 2:12 bytes\nOption 3:10 Bytes\nOption 4:None of the above\n";
            			cin>>s;
            			if(s==1)
            			{
            				technical++;
						}
					}
				}
			}
						total=aptitude+technical;
						strcpy(com,"amazon");

        cout<<"Your details are sent to Amazon comapny"<<endl;
        fstream file("amazon.txt",ios::in|ios::out|ios::app);
        file.write((char *)this,sizeof(student));
    }
}
void student::display()
{
    cout<<"YOUR INFORMATION :"<<endl<<endl;
    cout<<"\tNAME      : "<<this->name<<endl;
    cout<<"\tAGE       : "<<this->age<<endl;
    cout<<"\tGENDER    : "<<this->gender<<endl;
    cout<<"\tBRANCH    : "<<this->branch<<endl;
    cout<<"\tCOLLEGE   : "<<this->college<<endl;
    cout<<"\tCGPA      : "<<this->gpa<<endl;
    cout<<"\tEMAIL ID  : "<<this->emailid<<endl;
    cout<<"\tAptitude  : "<<this->aptitude<<endl;
    cout<<"\tTechnical : "<<this->technical<<endl;
    cout<<"\tTOTAL     : "<<this->total<<endl;
}

int main()
{
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"***********************************************************************************************************************"<<endl<<endl<<endl;
	cout<<"\t\t\t\t\tPLACEMENT RECRUITMENT SYSTEM"<<endl;
	cout<<"\n\n***********************************************************************************************************************"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"\n\n\t\t\t\t\t   WELCOME TO LOGIN PAGE\t\t\t\n\n";
	cout<<"\n\n\n";
	cout<<"1.ADMIN"<<endl<<"2.STUDENT"<<endl;
	int a;
	cout<<"Enter your choice :\t";
	cin>>a;
	system("CLS");
	char d,z;
	int key=0;
	string b,c,e,h,i,j;
	char g[30];
	char sm[30];
	char sj[30];
	char sd[30];char sg[30];char sa[30];
	if(a==1)
	{

	    do{

            char ni[30];
			system("CLS");
			cout<<"\t\t\t\t\tWELCOME TO ADMIN LOGIN PAGE"<<endl;
			cout<<"Enter Username :\t";
			cin>>b;
			fstream fi("admin.txt",ios::in|ios::out|ios::app);
			fi.seekg(0,ios::beg);
			while(!fi.eof())
			{
				getline(fi,c);
				if(c==b)
				{
					cout<<"Enter Password:\t";
					d=getch();
					i="";
					while(d!='$')
					{
						i.push_back(d);
						cout<<"*";
						d=getch();
					}
					i.push_back(d);
					getline(fi,e);
					if(i==e)
					{
					    key=1;
					    z='n';
						cout<<"\nLogin succesfull"<<endl;

                        if(b=="microsoft")
                        {
                            system("cls");
                            cout<<"\t\t\tMICROSOFTS HOMEPAGE\n\n";
                            student s;
                            fstream file("microsoft.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                            int i;
                            vector<int> A;
                            file.read((char *)&s,sizeof(student));
                            while(!file.eof())
                            {

                                s.display();
                                cout<<"\n\n";
                                i=s.total;
                                A.push_back(i);
                                file.read((char *)&s,sizeof(student));
                            }
                            sort(A.begin(),A.end());
                            i=A.back();
                            file.close();
                            fstream fi("microsoft.txt",ios::in|ios::out|ios::app);
                            fi.seekg(0,ios::beg);
                            fi.read((char *)&s,sizeof(student));
                            while(!fi.eof())
                            {
                                    if(s.total==i)
                                    {
                                        strcpy(ni,s.name);
										cout<<s.name<<"  is selected for the company"<<endl;
    		                        }
									fi.read((char *)&s,sizeof(student));
                            }
                            fi.close();
                            fstream f("sm.txt",ios::in|ios::out);
                            f<<ni;
                        }
                        if(b=="jpmc")
                        {
                            char ni[30];
                            system("cls");
                            cout<<"\t\t\tJP MORGAN CHASE HOMEPAGE\n\n";
                            student s;
                            fstream file("jpmc.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                            int i;
                            vector<int> A;
                            file.read((char *)&s,sizeof(student));
                            while(!file.eof())
                            {
                                s.display();
                                cout<<"\n\n";
                                i=s.total;
                                A.push_back(i);
								file.read((char *)&s,sizeof(student));
                            }
                            sort(A.begin(),A.end());
                             i=A.back();
                            file.close();
                            fstream fi("jpmc.txt",ios::in|ios::out|ios::app);
                            fi.seekg(0,ios::beg);
                            fi.read((char *)&s,sizeof(student));
                            while(!fi.eof())
                            {
                                    if(s.total==i)
                                    {
										cout<<s.name<<"  is selected for the company"<<endl;
    		                        }
									fi.read((char *)&s,sizeof(student));
									fi.close();
                                    fstream f("sj.txt",ios::in|ios::out);
                                    f<<ni;
                            }
                        }
                        if(b=="deliote")
                        {
                            char ni[30];
                            system("cls");
                            cout<<"\t\tDELIOTE HOMEPAGE\n\n";
                            student s;
                            fstream file("deliote.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                            int i;
                            vector<int> A;
                            file.read((char *)&s,sizeof(student));
                            while(!file.eof())
                            {

                                s.display();
                                cout<<"\n\n";
                                i=s.total;
                                A.push_back(i);
                                file.read((char *)&s,sizeof(student));
                            }
                            sort(A.begin(),A.end());
                             i=A.back();
                            file.close();
                            fstream fi("deloite.txt",ios::in|ios::out|ios::app);
                            fi.seekg(0,ios::beg);
                            fi.read((char *)&s,sizeof(student));
                            while(!fi.eof())
                            {
                                    if(s.total==i)
                                    {
										cout<<s.name<<"  is selected for the company"<<endl;
    		                        }
									fi.read((char *)&s,sizeof(student));
									fi.close();
                                    fstream f("sd.txt",ios::in|ios::out);
                                    f<<ni;
                            }
                        }
                        if(b=="google")
                        {
                            char ni[30];
                            system("cls");
                            cout<<"\t\tGOOGLE HOMEPAGE\n\n";
                            student s;
                            fstream file("google.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                            int i;
                            vector<int> A;
                            file.read((char *)&s,sizeof(student));
                            while(!file.eof())
                            {

                                s.display();
                                cout<<"\n\n";
                                i=s.total;
                                A.push_back(i);
                                file.read((char *)&s,sizeof(student));
                            }
                            sort(A.begin(),A.end());
                             i=A.back();
                            file.close();
                            fstream fi("google.txt",ios::in|ios::out|ios::app);
                            fi.seekg(0,ios::beg);
                            fi.read((char *)&s,sizeof(student));
                            while(!fi.eof())
                            {
                                    if(s.total==i)
                                    {
										cout<<s.name<<"  is selected for the company"<<endl;
    		                        }
									fi.read((char *)&s,sizeof(student));
									fi.close();
                                    fstream f("sg.txt",ios::in|ios::out);
                                    f<<ni;
                            }



                        }
                        if(b=="amazon")
                        {
                            char ni[30];
                            system("cls");
                            cout<<"\t\tAMAZON HOMEPAGE\n\n";
                            student s;
                            fstream file("amazon.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                           int i;

                                vector<int> A;
                                file.read((char *)&s,sizeof(student));
                            while(!file.eof())
                            {

                                s.display();
                                cout<<"\n\n";
                                i=s.total;

                                A.push_back(i);
                                file.read((char *)&s,sizeof(student));


                            }
                            sort(A.begin(),A.end());
                             i=A.back();
                             cout<<i<<endl;
                            file.close();
                            fstream fi("amazon.txt",ios::in|ios::out|ios::app);
                            fi.seekg(0,ios::beg);
                            fi.read((char *)&s,sizeof(student));
                            while(!fi.eof())
                            {
                                    if(s.total==i)
                                    {

										cout<<s.name<<"  is selected for the company"<<endl;
    		                        }
									fi.read((char *)&s,sizeof(student));
									fi.close();
                                    fstream f("sa.txt",ios::in|ios::out);
                                    f<<ni;
                            }



                        }
					}
					if(key)
	                {
    	                break;
        	        }
				}
			}
			if(!key)
      	    {
            	cout<<"\nInvalid password\nWant to try again yes(y) or no(n)\n";
                cin>>z;
			}
		}while(z=='y'||z=='Y');
        if(z=='n')
        {
            exit(0);
        }
	}
	else if(a==2)
	{
		system("CLS");
		cout<<"\n\n\n\t\t\t\t\tWELCOME TO STUDENT PAGE\n\n";
		cout<<"\n1.Sign up\n2.Login\n";
		cout<<"Enter an option : ";
		int o;
		cin>>o;
		if(o==1)
		{
		    do{
			system("CLS");
			key=0;
			cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tWELCOME TO STUDENT SIGNUP PAGE\n";
			fstream file("student.txt",ios::in|ios::out|ios::app);
			cout<<"\n\nEnter Username: ";
			char z[40];string x,y;
			cin>>z;
			file<<z<<endl;
			cout<<"Enter Password: ";
			d=getch();
			i="";
			while(d!='$')
			{
				i.push_back(d);
				cout<<"*";
				d=getch();
			}
			i.push_back(d);
			cout<<"\nConfirm Password: ";
			char ds=getch();
			y="";
			while(ds!='$')
			{
				y.push_back(ds);
				cout<<"*";
				ds=getch();
			}
			y.push_back(ds);
			if(i==y)
			{
				file<<y<<endl;
				cout<<"\nAlready exists!!\n";
				student s;
							fstream file("studentdata.txt",ios::in|ios::out|ios::app);
                            file.seekg(0,ios::beg);
                            file.read((char*)&s,sizeof(student));int x=0;
                            while(!file.eof())
                            {

                                if(strcmp(s.name,z)==0)

                                {

                                    x++;
                            	}
                           	 file.read((char*)&s,sizeof(student));
                            }
                            if(x==0)
                            {
                            	system("CLS");
                            	key=1;
                            	cout<<"\t\t\t\t\tWELCOME TO STUDENT SIGNUP PAGE\n";
                             	student s;
                            	s.readdata();
							}
							if(key)
                            {
                                break;
                            }
                            if(!key)
                            {
                                cout<<"Want to try again yes (y) or no(n)"<<endl;
                                cin>>z;
                            }
			}
			}while(z=='y'||z=='Y');


		}
		else if(o==2)
		{
		    char pr[40];
			do{

				system("CLS");
				cout<<"\t\t\t\t\tWELCOME TO STUDENT LOGIN PAGE"<<endl;
				key=0;
				string s2,s3,s;
				cout<<"Enter Username : ";
				cin>>pr;
				fstream f("student.txt");
				f.seekg(0,ios::beg);
				while(!f.eof())
				{
					getline(f,s2);
					if(s2==pr)
					{
						cout<<"Enter Password :";
						char dk=getch();
						string ik="";
						while(dk!='$')
						{
							ik.push_back(dk);
							cout<<"*";
							dk=getch();
						}
						ik.push_back(dk);
						getline(f,s3);
						if(s3==ik)
						{
						    char ni[30];
						    char name[30];
						    char comp[50];
							key=1;
							cout<<"\n\nLogin succesfull!!";
							system("cls");
							student s;
							fstream file("studentdata.txt",ios::in|ios::out);
							file.seekg(0,ios::beg);
							file.read((char*)&s,sizeof(s));
							while(!file.eof())
                            {
                                if(strcmp(s.name,pr)==0)
                                {
                                    strcpy(name,s.name);
                                    strcpy(comp,s.com);

                                }
                                file.read((char*)&s,sizeof(s));
                            }
                            file.close();
                            if(strcmp(comp,"microsoft")==0)
                            {

                                student k;
                                fstream f("microsoft.txt",ios::in|ios::out);
                                f.seekg(0,ios::beg);
                                f.read((char*)&k,sizeof(k));
                                while(!f.eof())
                                {
                                    if(strcmp(k.name,pr)==0)
                                    {
                                        k.display();
                                    }
                                    f.read((char*)&k,sizeof(k));
                                }
                                f.close();
                                fstream fi("sm.txt",ios::in|ios::out);
                                fi>>ni;
                                if(strcmp(ni,pr)==0)
                                {
                                    cout<<"YOU ARE SELECTED FOR MICROSOFT COMPANY"<<endl;

                                }
                                else
                                {
                                    cout<<"YOU ARE NOT SELECTED"<<endl;
                                }
                            }
                            if(strcmp(comp,"jpmc")==0)
                            {

                                student k;
                                fstream f("jpmc.txt",ios::in|ios::out);
                                f.seekg(0,ios::beg);
                                f.read((char*)&k,sizeof(k));
                                while(!f.eof())
                                {
                                    if(strcmp(k.name,pr)==0)
                                    {
                                        k.display();
                                    }
                                    f.read((char*)&k,sizeof(k));
                                }
                                f.close();
                                fstream fi("sj.txt",ios::in|ios::out);
                                fi>>ni;
                                if(strcmp(ni,pr)==0)
                                {
                                    cout<<"YOU ARE SELECTED FOR MICROSOFT COMPANY"<<endl;

                                }
                                else
                                {
                                    cout<<"YOU ARE NOT SELECTED"<<endl;
                                }
                            }
                            if(strcmp(comp,"deloite")==0)
                            {

                                student k;
                                fstream f("deloite.txt",ios::in|ios::out);
                                f.seekg(0,ios::beg);
                                f.read((char*)&k,sizeof(k));
                                while(!f.eof())
                                {
                                    if(strcmp(k.name,pr)==0)
                                    {
                                        k.display();
                                    }
                                    f.read((char*)&k,sizeof(k));
                                }
                                f.close();
                                fstream fi("sd.txt",ios::in|ios::out);
                                fi>>ni;
                                if(strcmp(ni,pr)==0)
                                {
                                    cout<<"YOU ARE SELECTED FOR MICROSOFT COMPANY"<<endl;

                                }
                                else
                                {
                                    cout<<"YOU ARE NOT SELECTED"<<endl;
                                }
                            }
                            if(strcmp(comp,"google")==0)
                            {

                                student k;
                                fstream f("google.txt",ios::in|ios::out);
                                f.seekg(0,ios::beg);
                                f.read((char*)&k,sizeof(k));
                                while(!f.eof())
                                {
                                    if(strcmp(k.name,pr)==0)
                                    {
                                        k.display();
                                    }
                                    f.read((char*)&k,sizeof(k));
                                }
                                f.close();
                                fstream fi("sg.txt",ios::in|ios::out);
                                fi>>ni;
                                if(strcmp(ni,pr)==0)
                                {
                                    cout<<"YOU ARE SELECTED FOR MICROSOFT COMPANY"<<endl;

                                }
                                else
                                {
                                    cout<<"YOU ARE NOT SELECTED"<<endl;
                                }
                            }
                            if(strcmp(comp,"amazon")==0)
                            {

                                student k;
                                fstream f("amazon.txt",ios::in|ios::out);
                                f.seekg(0,ios::beg);
                                f.read((char*)&k,sizeof(k));
                                while(!f.eof())
                                {
                                    if(strcmp(k.name,pr)==0)
                                    {
                                        k.display();
                                    }
                                    f.read((char*)&k,sizeof(k));
                                }
                                f.close();
                                fstream fi("sa.txt",ios::in|ios::out);
                                fi>>ni;
                                if(strcmp(ni,pr)==0)
                                {
                                    cout<<"YOU ARE SELECTED FOR MICROSOFT COMPANY"<<endl;

                                }
                                else
                                {
                                    cout<<"YOU ARE NOT SELECTED"<<endl;
                                }
                            }











						}
						if(key)
						{
							break;
						}
					}
				}
				if(!key)
				{
					cout<<"\n\nInvalid password\nWant to try again yes(y) or no(n)\n";
					cin>>z;
				}
			}while(z=='y'||z=='Y');
			if(z=='n')
			{
				exit(0);
			}
		}

	}
}

