//
// Day.hh for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Tue Jan 24 14:13:41 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:52:22 2017 SOIDIKI Djamil
//

#ifndef		_DAY_HH_
# define	_DAY_HH_

#include	<iostream>

namespace	core {
  namespace	calendar {

    class	Day {

    private:
      unsigned int	_id;
      std::string	_name;
      unsigned int	_month;
      std::string	_nameMonth;
      unsigned int	_year;

    public:
      Day(unsigned int id, unsigned int month, 
	  std::string nameMonth, unsigned int year);
      ~Day();

      unsigned int	getDayOfTheWeek(unsigned int year, unsigned int month, 
					unsigned int day);
      
      unsigned int	getId() const;
      std::string	getName() const;
      unsigned int	getMonth() const;
      std::string	getNameMonth() const;      
      unsigned int	getYear() const;
      void		print();
    };

    std::ostream&	operator<<(std::ostream& flux, const Day& p_day);
  }
}

#endif		/* _DAY_HH_ */
