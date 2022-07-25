#include<vector>
#include<list>
#include<queue>
#include<algorithm>
#include<string>
#include<iostream>
#include<fstream>


using namespace std;

struct MyData
{

    int num, priority;
    char status;
    char task[100]; 
};
void myReadingFunction( fstream& fin, MyData data[], int& count )
{
    count = 0;
    while( fin && !fin.eof() )
    {
        fin >> data[count].num
            >> data[count].status
            >> data[count].task
            >> data[count].priority; 
        count++;
    }
}
void myPrintingFunction( MyData data[], int count )
{
    for( int i=0; i<count; i++ )
    {
        cout << data[i].num  << " "
             << data[i].status << " "
             << data[i].task    << " "
             << data[i]. priority<< endl; 
    }
}

void menu();


int main()

{
   MyData data[100];
   int count, choice; 
   fstream fin("p3.txt");
   fin.open("p3.txt");
   if (fin.is_open())
   {
       cout<<"File opened"<<endl; 
   myReadingFunction( fin, data, count );
   myPrintingFunction( data, count );
   }
   else
   {
     cout<<"Error opening file"<<endl; 
   }
   
     

  do{
      
      menu();
      cout<<"Please enter your choice: "<<endl; 
      cin>>choice; 
      cout<<" "<<endl; 

      switch(choice)
      {
          case 1:

          break;

          case 2:

          break;

          case 3:

          break;
          
          case 4:

          break; 

          case 5:

          break; 

          default:
          cout<<"Invalid choice"<<endl; 

      }
  } while (choice != 5);





  
   return 0; 
}

void menu()
{
    cout<<"1. Display all items: "<<endl;
    cout<<"2. Dispaly selected item: "<<endl;
    cout<<"3. Mark a task as done: "<<endl;
    cout<<"4. Adjust priority of a task: "<<endl; 
    cout<<"5. Exit the program: " <<endl;
    
}
