#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	int num,score,max = 0,sum = 0;
	float avg;
	srand(time(NULL));
	num = 1+rand()%10;
	cout<<"Random number :" <<num<<endl;
	for(int i=1; i<=num;i++)
	{ cout<<"Input Score"<<i<<" : ";
	  cin>>score;
	  if(score>max)
	  {  max = score;
	  }
	  sum = sum+score;
	}
	avg = sum/num;
	cout<<"Max score = "<<max<<endl;
	cout<<"Sum score = "<<max<<endl;
	cout<<"Avg. score = "<<max<<endl;
   system("pause");
   return(0);
}
