#ifndef COURSE_H
#define COURSE_H

#include "Time.h"
#include "Date.h"
#include <string>
#include <iostream>

//TODO: implementations of operator<<

class Course {
	
	friend std::ostream& operator<<(std::ostream&, Course&);

private:

	std::string *courseNumber;
	std::string *courseName;
	std::string *meetingDays;

	int unitCount;
	
	Date *startDate;
	Date *endDate;

	Time *startTime;
	Time *endTime;

public:
	
	Course( std::string = "Course Number Undefined",//courseNumber
			std::string = "Course Name Undefined", //courseName
			std::string = "Meeting Days Udefined", //meetingDays
			int = 0, //unitCount
			Date = Date(), //startDate
			Date = Date(), //endDate
			Time = Time(), //startTime
			Time = Time() ); //endTIme

	~Course();

	double calcDailyDuration();

	std::string getCourseNumber()const;
	Course& setCourseNumber(std::string&);

	std::string getCourseName()const;
	Course& setCourseName(std::string&);

	std::string getMeetingDays()const;
	Course& setMeetingDays(std::string&);

	int getUnitCount()const;
	Course& setUnitCount(int);

	Date getStartDate()const;
	Course& setStartDate(Date&);

	Date getEndDate()const;
	Course& setEndDate(Date&);

	Time getStartTime()const;
	Course& setStartTime(Time&);

	Time getEndTime()const;
	Course& setEndTime(Time&);

};

#endif
