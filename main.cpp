#include <iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<windows.h>
#include<dos.h>
#include <stdlib.h>
using namespace std;
int i,j,ch1,ch2,c=0,a,t=0,total1=0,total2=0,total3=0,w,roll_no[200],marks_t[200],rol;char z,ch,name1[30],f_name1[40];
class information

{
    public:
        void verify()
                {
                   cout<<"\n\t\tEnter University Roll No \n";
                   cin>>u_roll1;
                   cout<<"\n\t\t Verifying \n";

                }

int reg,clas,u_roll,u_roll1,c_roll,sem1[5],sem2[5],sem3[5];
float perc1=0,perc2=0,perc3=0,avg=0,avgp=0;
double phone;

char name[30],f_name[40],address[200],cource[30];

information()
{

}
                void semester1()
                            {
                                system("cls");
                                  cout<<"\n\t\t 1: Maths";
                                  cout<<"\n\t\t 2: Physics";
                                  cout<<"\n\t\t 3: Chemistry";
                                  cout<<"\n\t\t 4: Computer Science";
                                  cout<<"\n\t\t 5: EME";
                                  cout<<"\n\t\tEnter Marks In 1st Semester";
                             for(i=1;i<=5;i++)
                            {
                                cout<<"\n\t\tEnter Marks In  "<<i<<" Subject Out of 100 ";
                                cin>>sem1[i];
                                }
                            for(i=1;i<=5;i++)
                            {
                                total1+=sem1[i]; }


                            perc1=(total1*pow(5,-1));
                                   }
                void semester2()
                {
                      system("cls");
                      cout<<"\n\t\t 1: Maths";
                      cout<<"\n\t\t 2: Physics";
                      cout<<"\n\t\t 3: Chemistry";
                      cout<<"\n\t\t 4: Computer Science";
                      cout<<"\n\t\t 5: EME";
                      cout<<"\n\t\tEnter Marks In 2nd Semester";

                for(i=1;i<=5;i++)
                {
                      cout<<"\n\t\tEnter Marks In  "<<i<<" Subject Out of 100 ";
                      cin>>sem2[i];}

                for(i=1;i<=5;i++)
                {          total2+=sem2[i]; }


                       perc2=total2*pow(5,-1);

                       }
                void semester3()
                {
                     system("cls");
                      cout<<"\n\t\t 1: Maths";
                      cout<<"\n\t\t 2: Physics";
                      cout<<"\n\t\t 3: Chemistry";
                      cout<<"\n\t\t 4: Computer Science";
                      cout<<"\n\t\t 5: EME";
                      cout<<"\n\t\tEnter Marks In 3rd Semester";

                for(i=1;i<=5;i++)
                {
                    cout<<"\n\t\tEnter Marks In  "<<i<<" Subject Out of 100 ";
                    cin>>sem3[i];}

                for(i=1;i<=5;i++)
                {         total3+=sem3[i]; }

                      perc3=(total3*pow(5,-1));
                      }

            void input()
            {           cout<<"\n\t\tEnter your Name ";
                        cin>>name;
                      cout<<"\t\tEnter Registration Number  ";
                      cin>>reg;
                      cout<<"\t\tEnter your Father Name ";
                      cin>>f_name;
                      cout<<"\t\tEnter your Class ";
                      cin>>clas;
                      cout<<"\t\tEnter your Phone ";
                      cin>>phone;
                      cout<<"\t\tEnter your address ";
                      cin>>address;
                      cout<<"\t\tEnter your cource ";
                       cin>>cource;
                      cout<<"\t\tEnter University Roll ";
                       cin>>u_roll;
                      semester1();
                      semester2();
                      semester3();

                      }
            void disp()
                {
                      cout<<"\n\t\t      Name : "<<name;
                      cout<<"\n\t\tRegistration: "<<reg;
                      cout<<"\n\t\tFather Name: ";
                      cout<<f_name;
                      cout<<"\n\t\t      Phone: "<<phone;
                      cout<<"\n\t\t    address: ";
                      cout<<address;
                      cout<<"\n\t\t     cource: "<<cource;
                      cout<<"\n\t\t      class: "<<clas;
                      cout<<"\n\t\t   university .Roll: "<<u_roll;
                      cout<<"\n\t\t   Total Marks In Semester 1: "<<total1;
                      cout<<"\n\t\t   Percentage In Semester 1: "<<perc1;
                      cout<<"\n\t\t   Total Marks In Semester 2: "<<total2;
                      cout<<"\n\t\t   Percentage In Semester 2: "<<perc2;
                      cout<<"\n\t\t   Total Marks In Semester 3: "<<total3;
                      cout<<"\n\t\t   Percentage In Semester 3: "<<perc3;
                      avg=(total1+total2+total3)*pow(3,-1);
                       avgp=(avg)*pow(5,-1);
                       cout<<"\n\t\t Average Marks in 3 Semester :"<<avg;
                       cout<<"\n\t\t Average Percentage in 3 Semester :"<<avgp;}  };
int main()
{

      system("color 17");
	  system("cls");
	  information s;
	  fstream obj;
	  fstream temp;
	  fstream temp1;
char pass[5],pass1[5]={'k','u','m','a','r'}, id[20],id1[20]={'m','a','n','i','s','h'};
            for(i=0; i<80; i++)
            { 	  cout<<"\xdb";}

            cout<<"\n";

            for(i=0; i<80; i++)
            {         cout<<"\xdb";}

                  cout<<"\n";

            for(i=0; i<80; i++)
            {      	  cout<<"\xdb";}
                  cout<<"\n";

do
    {
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t            Welcome To The Project         \n   ";
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t       student Database Management System      \n   ";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\n\t\t\t        Enter Id:";
    cin>>id;
	cout<<"\t\t\t  Enter Password:";

	i=0;
        while(i<5)
            {
                pass[i]=getch();
                //cout<<"*";
                 i++;
                 }
        int v=0,q=0;
        for(i=0;i<5;i++)

                    { if(pass[i]==pass1[i]
                         )
                    {
                        v++;
                    }
                    }
for(i=0;i<6;i++)

{
    if(id[i]==id1[i])

        {q++;}
                }

if(v==5 && q==6)
{   system("cls");
        cout<<"\n";
        cout << "\n\t\t   ++++++++++   Access Granted   +++++++++++++ :";
        cout<<"\n\t\t************   Successfully Logined ****************";
        cout<<"\n";
        cout<<"\n Loading : ";


            for(i=0; i<70; i++)
            {      cout<<"\xdb";
                   Sleep(50);
                     }

            goto abcd  ;

            }
            else
                 system("cls");
                 system("color 17");

            for(i=0; i<80; i++)
            {
                    cout<<"\xdb";
                    }
                   cout<<"\n";
                   cout << "\n\t\tAccess aborted...\n";
                   cout<<"\n\t\t Wrong Password Or User Id \n";
                   cout<<"\n\t\t Press y To Try Again and n To Exit \n ";
                   cin>>z;
                   system("cls");

            }while(z!='n');
       exit(1);
{
        abcd:
                system("cls");
            system("color 57");

                   cout<<"\n";
            for(i=0; i<80; i++)
            {     cout<<"\xdb";
            Sleep(2);
                }
                  cout<<"\n\t\t\t              Welcome               ";
                  cout<<"\n\t\t\t    +++++++++++++++++++++++++++ \n   ";
                  cout<<"\n\t\t\t student Database Management System    \n   ";
                  cout<<"\n\t\t\t  +++++++++++++++++++++++++++ \n   ";

            for(i=0; i<75; i++)
            {     cout<<"\xdb";

            Sleep(10);
             }
                  cout<<"\n";
                  cout<<"\n\t\t\t+++++++++ Presented By +++++++ \n   ";
            for(i=0; i<75; i++)
            {     cout<<"\xdb";
            Sleep(10);
               }
                cout<<"\n";
                  cout<<"\n\t\t******++++++ 1:Manish Kumar   +++++****** \n   ";
                  cout<<"\n";
            for(i=0; i<75; i++)
            {     cout<<"\xdb";
            Sleep(10);
                }

                  cout<<"\n\tLETS BEGIN THE PROGRAM:";
            for(i=0; i<10; i++)
            {     cout<<".";
                  Sleep(500);
                  }
                  cout<<"\n";
            for(i=0; i<80; i++)
            {     cout<<"\xdb";
                Sleep(2);
            }
                 system("cls");
                  abcdef:
            do
            {

                                system("color 47");
                                system("cls");

                                for(i=0; i<80; i++)
                                {
                                        cout<<"\xdb";
                                        Sleep(2);
                                }

                                      cout<<"\n";

                                for(i=0; i<80; i++)
                                {
                                        cout<<"\xdb";
                                        Sleep(2);
                                 }

                                      cout<<"\n\t\t1: Add Record  ";
                                      cout<<"\n\t\t2: Display Record  ";
                                      cout<<"\n\t\t3: Update Record  ";
                                      cout<<"\n\t\t4: Delete Record  ";
                                      cout<<"\n\t\t5: Search Record  ";
                                      cout<<"\n\t\t6: Quit \n  ";

                                for(i=0; i<75; i++)
                                {
                                        cout<<"\xdb";
                                        Sleep(2);
                                 }

                                      cout<<"\n";
                                      cout<<"\n";

                                for(i=0; i<75; i++)
                                {
                                        cout<<"\xdb";
                                        Sleep(2);
                                 }
                                      cout<<"\n";
                                      cout<<"\n\t\t: Enter Your Choice:  ";
                                      cin>>ch1;

                                switch(ch1)
                                {
                                    case 1:
                                                xyz6:
                                                system("color 17");
                                            system("cls");

                                            for(i=0; i<80; i++)
                                            {     cout<<"\xdb";
                                            Sleep(2);
                                            }
                                                  cout<<"\n";
                                            for(i=0; i<80; i++)
                                            {     cout<<"\xdb";
                                            Sleep(2);
                                            }
                                      cout<<"\n";
                                      cout<<"\n\t\t******************************************************";
                                      cout<<"\n\t\t            ***************************                  ";
                                      cout<<"\n\t\t****************      ADD RECORD   *******************";
                                      cout<<"\n\t\t            ***************************                  ";
                                      cout<<"\n\t\t******************************************************";


                                      obj.open("stu1.dat",ios::out);
                                      s.input();
                                      obj.write((char *)&s,sizeof(s));
                                       cout<<"\n\t\tRECORD ADDED SUCCESSFULLY";
                                       getch();
                                     obj.close();


                                break;
                                case 2:

                                        system("color 37");
                                        system("cls");

                                        for(i=0; i<80; i++)
                                        {
                                                cout<<"\xdb";
                                                Sleep(2);
                                        }

                                              cout<<"\n";

                                        for(i=0; i<80; i++)
                                        {
                                                 cout<<"\xdb";
                                                 Sleep(2);
                                         }

                                              cout<<"\n";
                                              cout<<"\n\t\t*************************************************";
                                              cout<<"\n\t\t               ***************************                  ";
                                              cout<<"\n\t\t***************      DISPLAY RECORD     ****************";
                                              cout<<"\n\t\t              ***************************                  ";
                                              cout<<"\n\t\t*********************************************************\n";

                                        for(i=0; i<80; i++)
                                        {
                                             cout<<"\xdb";
                                             Sleep(2);
                                          }

                                              cout<<"\n";

                                        for(i=0; i<80; i++)
                                        {
                                            cout<<"\xdb";
                                            Sleep(2);
                                         }

                                        cout<<"\n";
                                        obj.open("stu1.dat",ios::in);
                                               while(obj.read((char *)&s,sizeof(s)))
                                                   {
                                                       s.disp();
                                                        getch();
                                                       }
                                            obj.clear();
                                            obj.close();
                                        abcdefghij:
                                              cout<<"\n\n Press 1:Main Menu ";
                                              cout<<"\n\n Press 2: Exit ";
                                              cout<<"\n\n Enter Your choice: ";
                                              cin>>w;

                                        switch(w)
                                        {

                                        case 1:

                                                    { goto abcdef;
                                                    break;}
                                        case 2:

                                                {
                                                    exit(1);

                                                }
                                                break;
                                        default:
                                                {     cout<<"\n\n Wrong Choice";
                                                goto abcdefghij;

                                                }
                                        }
                                              getch();
                                              obj.clear();
                                              obj.close();

                                                for(i=0; i<80; i++)
                                                {
                                                    cout<<"\xdb";
                                                    Sleep(2);
                                                 }

                                                      cout<<"\n";

                                                for(i=0; i<80; i++)
                                                {
                                                    cout<<"\xdb";
                                                    Sleep(2);
                                                }

                                                break;



                                case 3:

                                            system("color 27");

                                            system("cls");

                                            xyz1:

                                        for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                        Sleep(2);
                                         }
                                               cout<<"\n";
                                        for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                         Sleep(2);
                                         }
                                        cout<<"\n";
                                               cout<<"\n\t\t  ****************************************************";
                                               cout<<"\n\t\t            ***************************                  ";
                                               cout<<"\n\t\t***********          MODIFY RECORD       *******************";
                                               cout<<"\n\t\t              ***************************                  ";
                                               cout<<"\n\t\t******************************************************\n";
                                               for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                         Sleep(2);
                                           }
                                        cout<<"\n";
                                               cout<<"\n\t\t:Enter Type Of Modification : ";
                                               cout<<"\n\t\t1:Complete Modification:";
                                                   cout<<"\n\t\t2:Back To Menu \n ";
                                               for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                          Sleep(2);
                                            }
                                        cout<<"\n";
                                        int ch7,rlll;
                                         cin>>ch7;
                                        switch(ch7)
                                        {
                                            case 1:
                                                    {     obj.open("stu1.dat",ios::in|ios::out);
                                                          cout<<"\n\t\t Enter University Roll Number :" ;
                                                          cin>>rlll;
                                                          obj.seekg(0,ios::beg);
                                                    while(obj.read((char *)&s,sizeof(s)))
                                                    {
                                                    if(rlll==s.u_roll)
                                                         { int pos=obj.tellg()-sizeof(s);
                                                        obj.seekp(pos,ios::end);
                                                             s.input();
                                                           obj.write((char *)&s,sizeof(s));
                                                           obj.close();
                                                           cout<<"\n\t\t Modified";
                                                           cout<<"\n\t\t Moving back to modify option \n";
                                                    goto xyz1;
                                                    getch();
                                                    }
                                                     }
                                                     }
                                                getch();
                                                break;

                                         case 2:
                                                 {
                                                     goto abcdef;

                                                  }
                                                break;
                                                }
                                        getch();
                                        break;
                            case 4:

                                        system("cls");
                                        system("color 17");

                                            for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                         Sleep(2);
                                          }
                                        cout<<"\n";
                                               cout<<"\n\t\t********************************************************";
                                               cout<<"\n\t\t           ***************************                  ";
                                               cout<<"\n\t\t***********         DELETE RECORD       ****************";
                                               cout<<"\n\t\t           ***************************                  ";
                                               cout<<"\n\t\t********************************************************";
                                               for(i=0; i<80; i++)
                                        {      cout<<"\xdb";
                                           }
                                        cout<<"\n";
                                        int r,k,rec;
                                        k=0;
                                               cout<<"\n\t\t5: Enter University Roll to delete:  ";
                                               cin>>r;
                                               obj.open("stu1.dat",ios::in|ios::ate);
                                               temp.open("temp.dat",ios::out|ios::ate);
                                               rec=obj.tellp()/sizeof(s);
                                               obj.seekg(0);
                                        while(obj.read((char *)&s,sizeof(s)))
                                        {
                                            if(s.u_roll!=r)
                                        {
                                            temp.write((char *)&s,sizeof(s));
                                              k++;
                                                }
                                              }
                                              obj.clear();
                                              obj.close();
                                              temp.close();
                                              cout<<"Record Shifted "<<k;
                                              remove("stu.dat");
                                              rename("temp.dat","stu1.dat");
                                        if(k==rec)
                                        {     cout<<"\n\t\t Record Not Found";

                                        }
                                        else
                                        {     cout<<"\n\t\t Record Deleted";
                                         }
                                              getch();
                                        break;
                    case 5:


                            system("color A");
                            xyz9:
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                     Sleep(2);
                       }
                    cout<<"\n";
                          cout<<"\n\t*****************************************************";
                          cout<<"\n\t              ***************************                  ";
                          cout<<"\n\t*****************   SEARCH RECORD     ***************";
                          cout<<"\n\t              ***************************                  ";
                          cout<<"\n\t******************************************************";
                          cout<<"\n\n\t\tPLEASE CHOOSE SEARCH TYPE::";
                          cout<<"\n\n\t\t1::Search by name::";
                          cout<<"\n\n\t\t2::Search by class::";
                          cout<<"\n\n\t\t3::Search by university rollno::";
                          cout<<"\n\n\t\t4::Back to  Main Menu";
                          cout<<"\n\n\t\t::Enter your choice:: \n";
                          for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                     Sleep(2);
                      }
                    cout<<"\n";
                    char name1[20];
                          cin>>ch2;
                    switch(ch2)

                    {

                            case 1:
                          system("cls");
                    for(i=0; i<80; i++)
                    {     cout<<"\xdb";
                     Sleep(2);
                     }
                          cout<<"\n";
                    for(i=0; i<80; i++)
                    {     cout<<"\xdb";
                    Sleep(2);
                    }
                    cout<<"\n";
                           a=1;
                           cout<<"\n\nEnter name of student to search: ";cin>>name1;
                           obj.open("stu1.dat",ios::in);
                    while(obj.read((char *)&s,sizeof(s)))
                    {
                        if (strcmpi(s.name,name1)==0)
                    {      a=0;
                           s.disp();
                           getch();
                           }
                           }
                    if (a==1)
                           cout<<"\n\nRECORD NOT FOUND";
                           cout<<"\n\n";
                           getch();
                           obj.close();
                           for(i=0; i<80; i++)
                    {
                         cout<<"\xdb";
                         Sleep(2);
                         }
                           cout<<"\n";
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                           goto xyz9;
                    break;

                    case 2:system("color 17");
                           system("cls");
                    {
                        for(i=0; i<80; i++)

                    {      cout<<"\xdb";
                    Sleep(2);

                    }
                           cout<<"\n";
                    for(i=0; i<80; i++);
                    {      cout<<"\xdb"; Sleep(2);}
                    int cl;a=1;
                           cout<<"\n\nEnter class of student to search: ";cin>>cl;
                           obj.open("stu1.dat",ios::in);
                    while(obj.read((char*)&s,sizeof(s)))
                    {
                        if (s.clas==cl)
                    {
                        a=0;
                         s.disp();
                           getch();
                           }
                           }
                    if (a==1)
                           cout<<"\n\nRECORD NOT FOUND";
                           cout<<"\n\n";
                        obj.close();
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                           cout<<"\n";
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                    goto xyz9;
                    break;}
                    case 3:
                           system("cls");
                    {
                        for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                           cout<<"\n";
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                     Sleep(2);
                     }
                    int rl;
                     a=1;
                           cout<<"\n\nEnter University Roll of student to search: ";cin>>rl;
                           obj.open("stu1.dat",ios::in);
                    while(obj.read((char*)&s,sizeof(s)))
                    {
                        if (s.u_roll==rl)
                    {
                         a=0;
                         s.disp();
                    getch();
                    }
                    }
                    obj.close();
                    if (a==1)
                           cout<<"\n\nRECORD NOT FOUND";
                           cout<<"\n\n";
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                           cout<<"\n";
                    for(i=0; i<80; i++)
                    {      cout<<"\xdb";
                    Sleep(2);
                    }
                    goto xyz9;
                    break;
                    }



                    default:
                    {       cout<<"\n\n\n\t\tINVALID ENTRY!!!!\n\n\t\t";
                    for(i=0; i<80; i++)
                    {       cout<<"\xdb";
                     Sleep(2);
                     }
                        cout<<"\n";
                    for(i=0; i<80; i++)
                    {
                         cout<<"\xdb";
                         Sleep(2);
                         }
                    break;
                    }
                    }
                    break;
                    case 6:
                    system("color 17");

                    system("cls");

                    for(i=0; i<80; i++)
                    {
                        cout<<"\xdb";
                    Sleep(2);
                    }
                        cout<<"\n";
                     for(i=0; i<80; i++)
                    {
                        cout<<"\xdb";
                     Sleep(2);
                     }
                        cout<<"\n\t\t******************************************************************";
                        cout<<"\n\t\t                     ***************************                  ";
                        cout<<"\n\t\t*********************          PROGRAM QUIT       *******************";
                        cout<<"\n\t\t                     ***************************                  ";
                        cout<<"\n\t\t******************************************************************";
                    for(i=0; i<80; i++)
                    {
                        cout<<"\xdb";
                    Sleep(2);
                    }
                        cout<<"\n";
                        cout<<"\n\t\tThank You For Using This Program \n";
                    for(i=0; i<80; i++)
                    {
                        cout<<"\xdb";
                         Sleep(20);
                         }
                        exit(1);
                        break;
                        }
                        }while(ch1!=7);

}
 getch();
  return 0;
}

