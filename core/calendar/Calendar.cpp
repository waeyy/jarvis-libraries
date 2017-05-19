//
// Calendar.cpp for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Tue Jan 24 14:19:19 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:38:06 2017 SOIDIKI Djamil
//

#include	"Calendar.hh"

using namespace core::calendar;

Calendar::Calendar(unsigned int year)
{
  bool	leap = this->isLeapYear(year);
  std::cout << "Initialization of calendar" << std::endl;

  this->_months.push_back(new Month(1, "Janvier", year));
  this->_months.push_back(new Month(2, "Février", year, leap));
  this->_months.push_back(new Month(3, "Mars", year));
  this->_months.push_back(new Month(4, "Avril", year));
  this->_months.push_back(new Month(5, "Mai", year));
  this->_months.push_back(new Month(6, "Juin", year));
  this->_months.push_back(new Month(7, "Juillet", year));
  this->_months.push_back(new Month(8, "Aout", year));
  this->_months.push_back(new Month(9, "Septembre", year));
  this->_months.push_back(new Month(10, "Octobre", year));
  this->_months.push_back(new Month(11, "Novembre", year));
  this->_months.push_back(new Month(12, "Decembre", year));
}

Calendar::~Calendar()
{
}

bool		Calendar::isLeapYear(unsigned int year)
{
  return   ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

std::vector<Month*>	Calendar::getMonths() const
{
  return (this->_months);
}
