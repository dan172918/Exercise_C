#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int startHour,startMinute,endHour,endMinute;
	cin>>startHour>>startMinute>>endHour>>endMinute;
	
	int differentHour,differentMinute;
	differentHour=endHour-startHour;
	differentMinute=endMinute-startMinute;
	
	if(differentMinute<0)
	{
		differentMinute+=60;
		differentHour--;
	}
	
	if(differentHour-2<0||(differentHour-2==0&&differentMinute==0))
		cout<<differentHour*60+differentMinute/30*30<<endl;
	else if(differentHour>2&&differentHour<4)
		cout<<120+(differentHour-2)*80+differentMinute/30*40<<endl;
	else
		cout<<120+160+(differentHour-4)*120+differentMinute/30*60<<endl;
}


