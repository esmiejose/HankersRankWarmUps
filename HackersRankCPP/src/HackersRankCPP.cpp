//============================================================================
// Name        : HackersRankCPP.cpp
// Author      : Esmie Jose
// Version     :
// Copyright   : @EsmieJose2017 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

//challenge string - stringstream
vector<int> parseInts(string str)
{
	vector<int> integers;
	int x;
	stringstream ss(str);
	char comma;

	while(ss >> x)
	{
		integers.push_back(x);
		if(ss>>comma);
	}
	return integers;
}

//challenge 10- virtual funtions
class Person
{
    public:
	unsigned int age;
	char name[100];
	virtual void getdata() = 0;
	virtual void putdata() = 0;
};


class Student:public Person
{
private :
	static int idCount;
public:
	int marks[6];
	int  cur_id;

	Student()
	{
		cur_id = ++idCount;
	}

	void  getdata(){
		cin >>  name;
		cin >> age;
		for (int i = 0; i < 6; i++)
			cin >> marks[i];
	}
	void putdata(){
		cout <<  name << " "<< age << " ";
		int sum = 0;
		for (int i = 0; i < 6; i++)
			sum+= marks[i];
		cout << sum << " " << cur_id <<endl;
	}

};

class Professor: public Person
{
private :
	static int idCount;
public:
	int  publications;
	int  cur_id;

	Professor()
	{
		cur_id = ++idCount;
	}

	void  getdata(){
		 cin >>  name;
		 cin >> age;
		 cin >> publications;
	}

	void  putdata(){
		cout <<  name << " "<< age << " " << publications << " "<< cur_id << endl;
	}
};

int Student::idCount = 0;
int Professor::idCount = 0;

//challenge 7 - pointers
void update(int *a,int *b) {
	int sum, diff;
	sum = *a+ *b;
	if (*a > *b)
		diff = *a - *b;
	else
		diff = *b - *a;
	*a = sum;
	*b = diff;

	}
//challenge 6
int max_of_four(int a, int b, int c, int d)
{
	int max;
	if (a > b )
		max = a;
	else
		max = b;

	if (c > max)
		max = c;

	if (d > max)
		max = d;

	return max;
}

int main() {
	// Challenge 1
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	//Challenge 2
	string s;
	int n;
	cin >> s >> n;
	cout << s << " " << n << endl;

	int one, two, three;
	cin >> one >> two >> three ;
	cout << one + two + three << endl;


	//Challenge 3
		//	Int ("%d"): 32 Bit integer
		//	Long ("%ld"): 64 bit integer
		//	Char ("%c"): Character type
		//	Float ("%f"): 32 bit real value
		//	Double ("%lf"): 64 bit real value

		int i;
		long l;
		char c;
		float f;
		double d;
		scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
		printf("%d \n%ld \n%c \n%f \n%lf", i, l, c, f, d);

	//Challenge 4
		int n4;
		cin >> n4;

		if (n4==1)
			cout <<"one"<<endl;
		else if (n4==2)
			cout <<"two"<<endl;
		else if (n4==3)
			cout <<"three"<<endl;
		else if (n4==4)
			cout <<"four"<<endl;
		else if (n4==5)
			cout <<"five"<<endl;
		else if (n4==6)
			cout <<"six"<<endl;
		else if (n4==7)
			cout <<"seven"<<endl;
		else if (n4==8)
			cout <<"eight"<<endl;
		else if (n4==9)
			cout <<"nine"<<endl;
		else if (n4>9)
			cout <<"Greater than 9"<<endl;
		else
			cout<<endl;

		//Challenge 5 -loops
	    int a,b;
	    cin >> a>> b;

	    for(int n = a; n <= b; n++)
	    {

	        if (n==1)
				cout <<"one"<<endl;
			else if (n==2)
				cout <<"two"<<endl;
			else if (n==3)
				cout <<"three"<<endl;
			else if (n==4)
				cout <<"four"<<endl;
			else if (n==5)
				cout <<"five"<<endl;
			else if (n==6)
				cout <<"six"<<endl;
			else if (n==7)
				cout <<"seven"<<endl;
			else if (n==8)
				cout <<"eight"<<endl;
			else if (n==9)
				cout <<"nine"<<endl;
			else if (n>9)
	            {
	                if (n%2==0)
	                    cout <<"even"<<endl;
	                else
	                    cout <<"odd"<<endl;
	            }
			else
				cout<<endl;
	    }

	    //challenge 6 - functions
	    int a6, b6, c6, d6;
		scanf("%d %d %d %d", &a6, &b6, &c6, &d6);
		int ans = max_of_four(a6, b6, c6, d6);
		printf("%d", ans);


		//challenge 7 - pointers
		int a7, b7;
		int *pa = &a7, *pb = &b7;

		scanf("%d %d", &a7, &b7);
		update(pa, pb);
		printf("%d\n%d", a7, b7);

		//challenge 8 - array
		int N;
		int arr[1000];
		cin>> N;
		for (int i= 0; i< N; i++)
			cin >> arr[i];
		for (int i= N-1; i>=0; i--)
			cout << arr[i] << " ";

		//challenge -9 variable size array //stl-vectors


		int nn,q;
		nn=0;
		cin >> nn ;
		cin >> q;

		//vector<int> arr9[10]; //alternate
		//vector<int> arr[n]; //works on site //Variable Length Array for non POD element type
		vector<int>* arr9 = new vector<int>[nn]; //alternate
		vector <int> :: iterator j;
		int entry,k9;

		for(int i = 0; i < nn; i++)
		{
			cin >> k9;

			for (int j = 0; j < k9; j++)
			{
				cin >> entry;
				arr9[i].push_back(entry);
			}
		}
		int qi,qj;
		for (int query=0; query<q; query++)
		{
			cin >> qi >> qj;
			cout <<arr9[qi][qj]<<endl;
		}
		delete[] arr9; //alternate

		//challenge-10 virtual funtions

		int n10, val;
		cin>>n10; //The number of objects that is going to be created.
		Person *per[n10];

		for(int i = 0;i < n10;i++){

			cin>>val;
			if(val == 1){
				// If val is 1 current object is of type Professor
				per[i] = new Professor;

			}
			else per[i] = new Student; // Else the current object is of type Student

			per[i]->getdata(); // Get the data from the user.

		}

		for(int i=0;i<n10;i++)
			per[i]->putdata(); // Print the required output for each object.

		//challenge string -1
		string as,bs;
		cin >>  as;
		cin >>  bs;
		cout << as.size() << " " << bs.size() << endl;
		cout << as+bs << endl;
		char t = as[0];
		as[0] = bs[0];
		bs[0] = t;
		cout << as <<" "<< bs << endl;

		//challenge string -2- stringstream

		//Operator >> Extracts formatted data.
		//Operator << Inserts formatted data.
		//Method str() Gets the contents of underlying string device object.
		//Method str(string) Sets the contents of underlying string device object.
		//Its header file is sstream.
		//One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56").
		//stringstream ss("23,4,56");
		//char ch;
		//int a, b, c;
		//ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56


		string str2;
		cin >> str2;
		vector<int> integers = parseInts(str2); //fns above
		for(int i = 0; i < integers.size(); i++)
		{
			cout << integers[i] << "\n";
		}



	return 0;
}

class tag;
class tag
{
    public:
    std::map<std::string,tag*> mytags;
    std::map<std::string,std::string> attributes;
};

//challenge string -3- Attribute Parser
int parser(){

    int N,Q;
    cin >> N >> Q;
    std::map<std::string,tag*> tags;
    string line,x, attr,eq,val;

    stack<tag*> tagstack;
    for (int i = 0; i <= N; i++) //may be the prev line need to end one count high!
    {

        getline(std::cin, line);
        //cout << line << endl;

        stringstream ss(line);
        if (!line.empty())
        {
            ss >> x;
            //cout << x << endl;
            if ( x.find("<") == 0 )
            {
                if (!(x.find("/") == 1))
                {
                    tag* a = new tag();
                    string tagname(x.substr(1));
                    if (tagstack.empty())
                        tags[tagname] = a;
                    else
                        tagstack.top()->mytags[tagname]=a;

                    tagstack.push(a);
                    while(ss >> attr >> eq >> val){
                        if (eq.compare("=") == 0)
                            a->attributes[attr] = val;
                    }
                }
                else
                    tagstack.pop();
            }
        }
    }

    for (int i = 0; i < Q; i++) //may be the prev line need to end one count high!
    {
        stack<string> query;

        getline(std::cin, line);
        //cout << line << endl;
        std::size_t found = line.find_last_of("~");
        string val = line.substr (found+1);
        //cout << val << endl;
        line.erase(found, string::npos);
        //cout << line << endl;
        while(string::npos != line.find_last_of("."))
        {
            found =  line.find_last_of(".");
            string q(line.substr (found+1));
            query.push(q);
            line.erase(found, string::npos);
        }
        string tagname (line);
        tag* tag = tags[tagname];

        while(!query.empty())
        {
            tag = tag->mytags[query.pop()];
        }
        cout << tag->attributes[val];

    }
}
