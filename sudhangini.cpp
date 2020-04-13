#include<iostream>
#include<fstream>
using namespace std;
fstream ff;
class lib{
	char x,y,n[20];
	int p,w;
	public:
		void get()
		{
			cin>>x;
		}
		void output()
		{
			switch(x){
				
				case 'a':
					cout<<"\t\t\tWelcome to book management\n\n\n enter\n\n a-For books details\nb-For create books details\n\n";
				
					cin>>y;
					
					switch(y){
						case 'a':
						
							cout<<"\t\t\t Details of books";
						
							cout<<"\n\nNumber of Volumes Available- BE	10,054";
                        
						     	cout<<"\n\nNumber of Titles Available- BE	3,916";
                        
						                 	cout<<"\n\n Number of Volumes Available-   MBA	2580";
                        
						                        	cout<<"\n \nNumber of Titles Available -MBA	753";
                        
						                     	cout<<"\n \n National Journals Available-  48";
                        
						                       	cout<<"\n\n CD & DVD Available-	1081";
                        
						                           	cout<<"\n\n  Project Reports-	152";
                        
						                           	cout<<"\n \n Internet Facility-	20 Systems Available with  Internet";
							break;
							case 'b':
						
								cout<<"\t\t\tWelcome to create detail";
						
								cout<<"\n\n enter the name of book:";
						
								cin>>n;
						
								ff<<"\nname of book:"<<n;
						
								cout<<"number of book of "<<n<< " :";
						
								cin>>w;
						
								ff<<"\nnumber of book of "<<n<< " :"<<w;
						
								break;
					}
					
					break;
					case 'b':
						
						cout<<"\t\t\tWelcome to book issue and return";
						
						cout<<"\n\n date of issuing the book:";
						
						cin>>w;
						
						cout<<"\nenter date student should return the book:";
						
						cin>>p;
						
						
						ff<<"\n\n date of issuing the book:"<<w;
						
						ff<<"\nenter date student should return the book:"<<p;
						
						break;
							case 'c':
						
						cout<<"\t\t\tWelcome to fine cal.";
						
						cout<<"\n\nFine of one day late submission of book is Rs.5 "	;
						
						cout<<"\n\n Enter how many days after last date student submitting the book:";
						
						cin>>p;
						
						cout<<"\nTotal penelty on student=Rs"<<p*5;
						break;
						
							case 'd':
						
						cout<<"\t\t\tWelcome to stock management of books,magazines and novels";
						
						cout<<"\n\n total number of books 20000";
						
						cout<<"\n\n total number of novels 2000";
						
						cout<<"\n\n total number of magazines 1500";
						
						cout<<"\n\n total number of comics 400";
						break;
							case 'e':
						
						cout<<"\t\t\tWecome to library staf detail\n\n\n enter\n\n a-For staff details\nb-For create staff details\n\n";
						
						cin>>y;
					
					switch(y){
						case 'a':
						
							cout<<"\t\t\t Details of staff";
						
							cout<<"\n\nName of librarian is mr.xyz";
                        
						     	cout<<"\n\nTotal number of library assistant are 25 ";
                        
						                 	cout<<"\n\n Total number guards are 20 ";
                        
						                        
							break;
							case 'b':
						
								cout<<"\t\t\tWelcome to create details of staff";
						
								cout<<"\n\n enter the name of all new staff:";
						
								cin>>n;
						
								ff<<"\nname of all new staff:"<<n;
						
								cout<<" Now total number of  staff :";
						
								cin>>w;
						
								ff<<"\n  Now total number of  staff :"<<w;
								
					}
						break;
			}
		}
	
};
int main()
{   cout<<"\t\t\t"<<"sudhangini library management system\n\n\n"<<"\n"<<"enter\n\na-For book management\nb-For book issue and return";

cout<<"\nc-For fine calculation\nd-For stock management of books,magazines and novels";

cout<<"\ne-For library staf detail \n\nPress\n";

	lib m;

	m.get();

	ff.open("library.txt",ios::out);

	m.output();
    
    
    ff.close();
	
}
