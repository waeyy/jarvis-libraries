//
// Calendar.hh for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Mon Jan 23 21:16:43 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:38:09 2017 SOIDIKI Djamil
//

#ifndef		_CALENDAR_HH_
# define	_CALENDAR_HH_

#include	<iostream>
#include	<vector>
#include	"Month.hh"

namespace	core {
  namespace	calendar {
    
    class	Calendar {
      
    private:
      std::vector<Month*>	_months;
      int			_currentYear;

    public:
      Calendar(unsigned int year);
      ~Calendar();

      bool	isLeapYear(unsigned int year);

      std::vector<Month*>	getMonths() const;
    };
  }
}

#endif		/* _CALENDAR_HH_ */
