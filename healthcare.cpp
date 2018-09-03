#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<fstream>
using namespace std;
void menu();
void authorized();
void sleep()
{
	int i,j;
	for(i=0;i<20000;i++)
          {
          for(j=0;j<10000;j++)
          {
          	
		  }
	      }
}
void fp()
{
	system("color 8b");
	sleep();
          cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t ----------------------------------------------------------------------\n";
          sleep();
          cout<<"\t\t\t\t\t|                                                                      |\n";
          //sleep(1000);
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                                                                      |\n";
          //sleep(
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                            HEALTH CULB                               |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          //cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                            MAANAGEMENT                               |\n";
          //cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                               SYSTEM                                 |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                              2018";
          sleep();
          cout<<" - ";
          sleep();
          cout<<" 2019                            |\n";
          
          cout<<"\t\t\t\t\t|                                                                      |\n";
          sleep();
          cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t|                                                                      |\n";
          cout<<"\t\t\t\t\t ---------------------------------------------------------------------- \n";
          cout<<"\n\n\n\n\n\n\n                                                                                                     PRESENTED BY:- GOURAV SHARMA";
          getchar();
          
}
class regis
{
	char name[100];
	char e[100];
	char date[20];
	public:
		char userid[100];
		char password[100];
		void getdata()
		{
		  cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------\n";
          cout<<"\t\t\t\t\t\t\t|           Health Culb Management System                          |\n";
          cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------\n";
          cout<<"\n\n\n\t\t------------------------------------------------\n";
          cout<<"\t\t|  NAME  |  ";                             
          gets(name);                                                
          cout<<"\n\t\t--------------------------------------------------\n";
          cout<<"\t\t| Date Of Birth (DD/MM/YYYY) |  ";
          gets(date);
          cout<<"\n\t\t--------------------------------------------------\n";
          cout<<"\n\t\t| E-MAIL Address(Optional) |  ";
          gets(e);
          cout<<"\n\t\t---------------------------------------------------\n";
          //printf("%s",e);
          //int z=strlen(e);
          int n,k,l;
          n=strlen(e);
          if(e[n-1]!='m'||e[n-2]!='o'||e[n-3]!='c'||e[n-4]!='.')
          {
          k++;
          }
          if(e[n-1]!='n'||e[n-2]!='i')
          l++;
          
          if(n==0||l==0||k==0);
          else
          {
              zb:
              n=0;l=0;k=0;
              cout<<"\t\t\t\t\t WRONG E-MAIL ADDRESS";
              cout<<"\a";
              getchar();
              system("cls");
           cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------\n";
          cout<<"\t\t\t\t\t\t\t|           Health Club Management System                          |\n";
          cout<<"\t\t\t\t\t\t\t-------------------------------------------------------------------\n";    
          cout<<"\n\n\n\t\t------------------------------------------------\n";
          cout<<"\t\t|  NAME  |  ";                                    
          puts(name);
		   cout<<"\n\t\t--------------------------------------------------\n";
          cout<<"\t\t| Date Of Birth (DD/MM/YYYY) |  ";
          puts(date);                                     
          cout<<"\n\t\t--------------------------------------------------\n";
          cout<<"\n\t\t| E-MAIL Address(Optional) |  ";
          gets(e);
          cout<<"\n\t\t---------------------------------------------------\n";
           n=strlen(e);
          if(e[n-1]!='m'||e[n-2]!='o'||e[n-3]!='c'||e[n-4]!='.')
          {
          k++;
          }
          if(e[n-1]!='n'||e[n-2]!='i')
          l++;
          
          if(n==0||l==0||k==0);
          else
              goto zb;
              }
		}
		void user()
		{
			int i=0,x;
			sa:
				system("cls");
			cout<<"\n\n\t\tEnter UserName : ";
			cin>>userid;
			cout<<"\n\n\t\tEnter Password(MIN. 6 Char) : ";
			   password[i]=getch();
			   cout<<"*";
			   i++;
			  for(;;i++)
			  {
			  	password[i]=getch();
			  	cout<<"*";
			  	x=password[i];
			  	if(x==13)
			  	break;
			  }
			  password[i]='\0';
			  if(i<6)
			  {
			  	cout<<"Password Length is less than 6";
			  	getchar();
			  	goto sa;
			  
			  //cout<<password;
		}
	}
	};
		void equipments()
		{
			system("cls");
			cout<<"\n\t1.Treadmill";
			cout<<"\n\n\t2.Ellipticals";
			cout<<"\n\n\t3.Stationary Bikes";
			cout<<"\n\n\t4.Aerobics Steppers";
			cout<<"\n\n\t5.Cable Pulley Machines";
			cout<<"\n\n\t6.Weight Machines";
			cout<<"\n\n\t7.Free Weights";
			cout<<"\n\n\t8.Abdominal Crunchers";
			cout<<"\n\n\t9.Rowing Machines";
			cout<<"\n\n\t10.Exercise Balls";
			cout<<"\n\n\n\t\tPRESS 1 TO SEE MORE DETAILS ABOUT EQUIPMENTS\n";
			cout<<"\n\n\t\tPRESS 2 TO GO BACK\n";
			char e;
			int ch;
			getchar();
			cin>>e;
			if(e=='1')
			{
				system("cls");
				char c;
				ifstream f1("equipment.txt",ios::in);
				f1.get(c);
				while(!f1.eof())
				{
					cout<<c;
					f1.get(c);
				}
				getchar();
				getchar();
				authorized();
			}
			else if(e=='2')
			authorized();
		}
		void trainer()
		{
			a:
			system("cls");
			int ch;
			cout<<"\n\n\n\t1.Personal Fitness Trainer";
			cout<<"\n\n\t2.Group Fitness Instructor";
			cout<<"\n\n\t3.Specialized Fitness Instructor";
			cout<<"\n\n\t4.Trainer/Instructor Work";
			cout<<"\n\n\t5.To See Details About Trainers";
			cout<<"\n\n\t6.Return To Main menu";
			cout<<"\n\n\tEnter Your Choice : ";
			cin>>ch;
			system("cls");
			if(ch==1)
			{
				char x;
				int c;
				cout<<"\n\nPersonal fitness trainers work with an individual client or a small group. They may train in a gym or in clients' homes.\n";
				cout<<"Personal fitness trainers assess the client's level of physical fitness and help them set and reach their fitness goals.\n";
				cout<<"\nPrice : 25000/per month";
				cout<<"\n\n\t\tPress 1 To Opt For Personal Fitness Trainer\n";
				cin>>x;
				if(x=='1')
				{
					cout<<"\nYou Have Successfully Registered For Trainer";
					cout<<"\nYou Fitness Trainer is : Kamal Singh";
					cout<<"\nContact No. : 79754xxxxx";
					getchar();
					getchar();
				}
					goto a;
			}
			else if(ch==2)
			{
				char x;
				int c;
				cout<<"\n\nGroup fitness instructors organize and lead group exercise classes, which can include aerobic exercises, stretching, or muscle\n";
				cout<<" conditioning. Some classes are set to music. In these classes, instructors may select the music and choreograph an exercise sequence.\n";
				cout<<" They may lead classes that use specific exercise equipment, such as stationary bicycles.\n";
				cout<<"\nPrice : 20000/per month";
				cout<<"\n\n\t\tPress 1 To Opt For Group Fitness Instructor\n";
				cin>>x;
				c=x;
				if(x=='1')
				{
					cout<<"\nYou Have Successfully Registered For Instructor";
					cout<<"\nYou Fitness Trainer is : Deepak Rawat";
					cout<<"\nContact No. : 91345xxxxx";
					getchar();
					getchar();
				}
				 goto a;	
			}
			else if(ch==3)
			{
				char x;
				int c;
				cout<<"\n\npecialized fitness instructors teach popular conditioning methods, such as Pilates or yoga. In these classes, instructors show the\n"; 
				cout<<"different moves and positions of the particular method. They also watch students and correct those who are doing the exercises improperly.\n";
				cout<<"\nPrice : 30000/per month";
				cout<<"\n\n\t\tPress 1 To Opt For Specialized Fitness Instructor";
				cin>>x;
				c=x;
				if(x=='1')
				{
					cout<<"\nYou Have Successfully Registered For Instructor";
					cout<<"\nYou Fitness Trainer is : Piyush Pandey";
					cout<<"\nContact No. : 89536xxxxx";
					getchar();
					getchar();
				}
					goto a;
			}
			else if(ch==5)
			{
				char c1;
				cout<<"\n\n\t\tList Of Our Trainers/Instructors";
				ifstream in("trainers.txt",ios::in);
				in.get(c1);
				while(!in.eof())
				{
					cout<<c1;
					in.get(c1);
				}
				getchar();
				getchar();
			}
			else if(ch==4)
			{
				char c1;
				cout<<"\n\n\t\tWork of Trainers\n\n\n";
				ifstream in("duty.txt",ios::in);
				in.get(c1);
				while(!in.eof())
				{
					cout<<c1;
					in.get(c1);
				}
				getchar();
				getchar();
				authorized();
			}
			else if(ch==6)
			{
				authorized();
			}
			else
			{
				cout<<"\n\n\t\t\t\t\t\tWRONG CHOICE";
				getchar();
				goto a;
			}
		}
		void plan()
		{
			z:
			system("cls");
			int c;
			cout<<"\n\n\n\t\t1.Quarterly Plan";
			cout<<"\n\n\t\t2.Quarterly Plan";
			cout<<"\n\n\t\t3.Half-Yearly Plan";
			cout<<"\nEnter Your Choice : ";
			cin>>c;
			if(c==1)
			{
				system("cls");
				char x;
				int i;
				cout<<"\n\n\t\t Rs.12,500 for 3 month(s)\n";
                cout<<"It includes Gym, Cardio, Aerobics, Yoga, Zumba, Bhangra, Steam and Shower for a period of three months. Service Tax extra.\n";
                cout<<"\n\n\t\tPress 1 To Opt For Plan ";
                cout<<"\n\t\tPress 2 To Go back";
                cin>>x;
                i=x;
                if(x=='1')
                {
				 cout<<"\n\n\t\t\tYou Have Succesfully Register For This plan";
				 getchar();
				 getchar();
				 authorized();
			    }
			    else if(x=='2')
			    {
			    	goto z;
				}
				else
				{
					cout<<"\n\n\t\t\t\tWrong Choice";
					getchar();
					goto z;
				}
			}
			else if(c==2)
			{
				system("cls");
				char x;
				int i;
				cout<<"\n\n\t\t\t Rs.25,500 for 12 month(s)\n"; 
                cout<<"It includes Gym, Cardio, Aerobics, Yoga, Zumba, Bhangra, Steam and Shower for a period of one year. Service Tax extra.\n";
                cout<<"\n\n\t\tPress 1 To Opt For Plan ";
                cout<<"\n\t\tPress 2 To Go back";
                cin>>x;
                i=x;
                if(x=='1')
                {
				 cout<<"\n\n\t\t\tYou Have Succesfully Register For This plan";
				 getchar();
				 getchar();
				 authorized();
			    }
			    else if(x=='2')
			    {
			    	goto z;
				}
				else
				{
					cout<<"\n\n\t\t\t\tWrong Choice";
					getchar();
					goto z;
				}
			}
			else if(c==3)
			{
				system("cls");
				char x;
				int i;
				cout<<"\n\n\t\t\t\t18,500 for 6 month(s)\n ";
                cout<<"It includes Gym, Cardio, Aerobics, Yoga, Zumba, Bhangra, Steam and Shower for a period of six months. Service Tax extra.\n";
                cout<<"\n\n\t\tPress 1 To Opt For Plan ";
                cout<<"\n\t\tPress 2 To Go back";
                cin>>x;
                i=x;
                if(x=='1')
                {
				 cout<<"\n\n\t\t\tYou Have Succesfully Register For This plan";
				 getchar();
				 getchar();
				 authorized();
			    }
			    else if(x=='2')
			    {
			    	goto z;
				}
				else
				{
					cout<<"\n\n\t\t\t\tWrong Choice";
					getchar();
					getchar();
					goto z;
				}
			}
			else
			{
				cout<<"\n\n\n\t\t\t\tWrong Choice";
				getchar();
				getchar();
				goto z;
			}
		}
		void fitness()
		{
			system("cls");
			float h;
			float w,f;
			cout<<"\n\n\t\tEnter Your Height(in cm) : ";
			cin>>h;
			cout<<"\n\n\t\tEnter Your Weight(in Kg) : ";
			cin>>w;
		    h=(float)h/100;
			h=(float)h*h;
			f=(int)w/h;
			if(f<19)
			cout<<"\n\n\t\t\tYou Are Thin";
			else if(f>=19&&f<=24)
			cout<<"\n\n\t\t\tYou are fit";
			else if(f>24)
			cout<<"\n\n\t\t\t\tYou Are Fat";
			getchar();
			getchar();
			authorized();
		}
		void authorized()
		{
			a:
			system("cls");
			int ch;
			cout<<"\n\n\n\t1.Equipments";
			cout<<"\n\n\n\t2.Trainer";
			cout<<"\n\n\n\t3.Register for Plan";
			cout<<"\n\n\n\t4.Check Your Fitness";
			cout<<"\n\n\n\t5.Log Out";
			cout<<"\n\n\n\t\tENTER YOUR CHOICE : ";
			cin>>ch;
			if(ch==1)
			equipments();
			else if(ch==2)
			trainer();
			else if(ch==3)
			plan();
			else if(ch==4)
			fitness();
			else if(ch==5)
			menu();
			else
			{
				cout<<"\n\n\n\t\t\t\t\tWrong Choice";
				getchar();
				goto a;
			}
		}
		void login()
		{
			 cout<<"\t\t\t\t\t\t\t--------------------------------------------\n";
             cout<<"\t\t\t\t\t\t\t|                  LOG IN                   |\n";
             cout<<"\t\t\t\t\t\t\t--------------------------------------------\n";    
			regis r2,r3;
			int k;
			ifstream i("user.txt",ios::in);
			r2.user();
				i.read((char*)&r3,sizeof(r3));
		  k=0;
		   //r.user();
	while(!i.eof())
	{
		if((strcmp(r2.userid,r3.userid)==0)&&(strcmp(r2.password,r3.password)==0))
		{
			k=1;
			break;
		}
		else
		{
			i.read((char*)&r3,sizeof(r3));
		}
	}
	i.close();
	if(k==1)
	{
		authorized();
	}
	else
	{
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\tUSER Does Not Exist";
		getchar();
		getchar();
		system("cls");
		menu();
	}
		}
void regist()
{
	int i,j,k=0;
	regis r,r1;
	ifstream i1;
	i1.open("user.txt",ios::in);
	xy:
		i1.seekg(0,ios::beg);
	    i1.read((char*)&r1,sizeof(r1));
		k=0;
		r.user();
	while(!i1.eof())
	{
		if(strcmp(r.userid,r1.userid)==0)
		{
			k=1;
			break;
		}
		else
		{
			i1.read((char*)&r1,sizeof(r1));
		}
	}
	if(k==1)
	{
		cout<<"\n\n\n\t\t\t\t\t\t\t\t\tUSER ID Already Exist";
		getchar();
		getchar();
		system("cls");
		goto xy;
	}
	else
	{
		i1.close();
		cout<<"\n\n";
		getchar();
		r.getdata();
		cout<<"\n\n\t\t\t\t\t\t\t\tYou Have Successfully Registered";
		ofstream o("user.txt",ios::app);
		o.write((char*)&r,sizeof(r));
		o.close();
		system("cls");
		login();
	}
}
void about()
{
	char ch;
	system("cls");
	ifstream fin("about.txt",ios::in);
	fin.get(ch);
	while(!fin.eof())
	{
		cout<<ch;
		fin.get(ch);
	}
	getchar();
	getchar();
	menu();
}
void help()
{
	system("cls");
                        printf("\n\n\n\n\n");
                        printf("\tIf user press 1\n");
                        printf("\t*User will be forwarded to registration page than user first needs to register himself.\n");
                        printf("\t*By giving their name, date of birth and E-Mail address.\n");
                        printf("\t*After that user will get know about our health club.\n\n\n");
                        printf("\tIf user press 2\n");
                        printf("\t*User will get Have to log in through registered id .\n\n\n");
                        printf("\tIf user press 3\n");
                        printf("\t*User will get about health club.\n\n\n");
                        printf("\tIf user press 5\n");
                        printf("\t*User immidiately exit from Program");
                        getchar();
                        getchar();
                        menu();
}
void menu()
{
	system("cls");
	system("color 07");
	cout<<"\n\n\n\n\n";
	cout<<" 1.Register\n\n\n";
	cout<<" 2.Log In\n\n\n";
	cout<<" 3.About Us\n\n\n";
	cout<<" 4.Help\n\n\n";
	cout<<" 5.Exit\n\n\n";
	int ch;
	cin>>ch;
	if(ch==1)
	{
		system("cls");
		regist();
	}
	else if(ch==2)
	{system("cls");
	login();
    }
	else if(ch==3)
	{
	system("cls");	
	about();
   }  
	else if(ch==4)
	{
	system("cls");
	help();
    } 
	else if(ch==5)
	exit(1);
}
int main()
{
	fp();
	menu();
	return 0;
}
