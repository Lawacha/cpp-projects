#include<iostream>
using namespace std;
string task[10]={""};
int count=1;
int option=-1;
int main(){
    while(option!=0)
{
    cout<<"  ============= TO DO LIST  ============="<<endl;
    cout<<"||                                       ||  \n";
    cout<<"||   Enter number for the action below:  ||"<<endl;
    cout<<"||     1. Add new task                   ||  "<<endl;
    cout<<"||     2. View tasks                     ||     "<<endl;
    cout<<"||     3. Delete task                    ||       "<<endl;
    cout<<"||     4. Terminate                      ||       "<<endl;
    cout<<"  ======================================="<<endl;

    cin>>option;

    switch(option)
    {
        case 1:
        {
            if(count>=10)
            cout<<"The list if full"<<endl;
            else
            {
                cout<<"Enter task"<<endl;
                cin>>task[count];
                count++;
            }
            break;
        }
        case 2:
        {cout<<"\n";
            for (int i = 1; i < count; i++)
            {
                cout<<"Task "<<i<<":"<<task[i]<<endl;
            }
            cout<<"\n";
    break;
        }
        case 3:
        {
            int delTask;
            cout<<"Enter the task number you want to delete:"<<endl;
            cin>>delTask;
           
            if(delTask>0&&delTask<10)
            { for(int i=delTask;i<count;i++)
            {
                task[delTask]=task[i+1];
            }count--;
            
            cout<<"Task deleted successfully"<<endl;}
            else
            cout<<"INVALID TASK NUMBER "<<endl;
            break;
        }
    case 4:
    {cout<<"Terminating program.."<<endl;
        option=0;
    break;
        
    }
     default:
    cout<<"invalid input"<<endl;
    cout<<"Please enter 1-4"<<endl;
        break;
    }
}

    return 0;

}