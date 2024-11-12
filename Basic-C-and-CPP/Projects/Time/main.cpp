#include <iostream>
#include "india.h"
#include "usa.h"

int main()
{
	// usa::Time t1(3,4,52);	//= new Time();
	//	india::Time t2(5,06,4); //= new Time();
	//	t1.display();
	//	t2.display();

	usa::Time *t3 = new usa::Time(15, 26, 88);
	t3->display();
	return 0;
}