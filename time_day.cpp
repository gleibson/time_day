//Exercise from de Book C++ Primer Plus pag 112 number 4
//display the seconds value in days, hours, minutes and seconds 

#include <iostream>

int main()
{
	int seconds1, seconds2, days, minutes, hour;
	const int seconds_per_days = 60*60*24;
	const int seconds_per_hour = 60 * 60;
	const int seconds_per_minutes = 60;
	
	
	std::cout << "Enter the number of seconds " << std::endl;
	std::cin >> seconds1;

	days = seconds1 / seconds_per_days;
    hour = (seconds1 % seconds_per_days) / seconds_per_hour;
	minutes = (seconds1 % seconds_per_hour) / seconds_per_minutes;
	seconds2 = (seconds1 % seconds_per_minutes);


	std::cout << seconds1 << " seconds = " << days << " days, " << hour << " hours, " << minutes << " minutes and "
		      << seconds2 << " seconds." << std::endl;

		return 0;
}