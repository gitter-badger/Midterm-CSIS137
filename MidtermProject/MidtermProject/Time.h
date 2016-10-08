//Time Class Definition with const member functions
#ifndef TIME_H
#define TIME_H

class Time
{

	friend ostream& operator<<(ostream&, const Time&);
	friend istream& operator>>(istream&, Time&);
            
      private:
              int hour;  //0-23 (24 hour clock format)
              int minute; //0-59
	      void convertToUniversal(Time);
      
      public:
             //default constructor
             Time(int = 0, int = 0);
             
             //set functions - not const since they modify private data
             //The & return type enables cascading
             Time& setTime(int, int);
             Time& setHour(int);
             Time& setMinute(int);
             
             //get functions - (normally always declared const)
             int getHour() const;
             int getMinute() const;
             
             //print functions - (normally always declared const since they do not modify private members, merely inspect
             void printUniversal() const;
             void printStandard()const;

	     //operator overloads
	     const Time& operator-(const Time&);
};

#endif