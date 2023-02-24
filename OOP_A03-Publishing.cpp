#include <iostream>
 using namespace std;
 class Marketing
 {
 	private:
 		string title;
 		float price;
 	public:
 	Marketing()			//constructor
 	{
 		title="";
 		price=0.0;
 	}
 	Marketing(string title, float price)
 	{
 		this->title=title;
 		this->price=price;
 	}
 	
 	void getData()
 	{
 		cout<<"\nEnter title and price\n";
 		cin>>title>>price;
 	}
 	
 	void putData()
 	{
 		try
 		{
 			if(title.length()<3)
 				throw title;
 				
 			if(price<=0.0)
 				throw price;
 		}
 		catch(string)
 		{
 			cout<<"\nError: Title below 3 characters is not allowed";
 			title="";
 		}
 		
 		catch(float f)
 		{
 			cout<<"\nError: Price not valid: \t"<<f;
			price=0.0;
 		}	
 		cout<<"\nTitle is :"<<title;
 		cout<<"\nPrice is :"<<price;
 	}
 	
 };
 
 
 class Book: public Marketing
 {
 	private:
 		int pages;
	 public:
	 	Book():Marketing()
	 	{
	 		pages=0;
	 	}
	 	Book(string title, float price, int pages):Marketing(title,price)
	 	{
	 		this->pages=pages;
	 	}
	 	
	 void getData()
	 {
		Marketing::getData();
	 	cout<<"\nEnter no. of pages in book\n";
	 	cin>>pages;
	 }
	 
	 void putData()
	 {
	 	Marketing::putData();
	 	try
	 	{
	 		if(pages<0)
	 			throw pages;
	 	}
	 	catch(int f)
	 	{
	 		cout<<"\nError: Pages not valid: \t"<<f;
	 		pages=0;
 		}
 	
 	cout<<"\nPages are :"<<pages;
 	}
 	

 };
 
 class Cassette: public Marketing
 {
 	private:
	 	float playtime;
 	public:
 	Cassette():Marketing()
 	{
	 	playtime=0.0;
	}
	 Cassette(string title, float price, float playtime):Marketing(title,price)
	 {
	 	this->playtime=playtime;
	 }
	 
	 void getData()
	 {
	 	Marketing::getData();
	 	cout<<"\nEnter play time of cassette\n";
	 	cin>>playtime;
	 }
	 
	 void putData()
	 {
	 	Marketing::putData();
	 	try
		{
	 		if(playtime<0.0)
	 			throw playtime;
	 	}
	 	catch(float f)
	 	{
	 		cout<<"\nError: Playtime not valid: \t"<<f;
	 		playtime=0.0;
	 	}
	 	cout<<"\nPlaytime is :"<<playtime;
	 }
	 
	
 };
 
 int main()
 {
	 Book book;
	Cassette cassette;
	 cout<<"\n***************BOOK**************\n";
	 book.getData();
	 cout<<"\n***************CASSETTE**************\n";
	cassette.getData();
	 cout<<"\n***************BOOK**************\n";
	 book.putData();
	 cout<<"\n***************CASSETTE**************\n";
	 cassette.putData();
	 return 0;
 }