#include<stdio.h>
#include<stdlib.h>



void noti()  // for notification if biiker has fallen
{
	// here code for message to be sent to contacts that the biker has fallen
		cout<<"Biker has fallen";
}

int main()
{
    int counter=10000000000;
    int angle;  //variables to take values of speed and position of the bike
    
    
    /*idhar apne ko speed vale code ko copy karna hai jisse wo counter ko define kar paye and hence countdown run kare taki wo baar baar
    check karega values of the speed*/
/    while(counter!=0)
    {
    	if(angle<=30)
			break;
			
        counter--;
        sleep(5);
    }
    
    sleep(5);  //wait for 5 secs
    if(angle<=30)   //then check again if bike's angle is still below 30 degrees
    	return noti();
    
    
	return 0;
}
