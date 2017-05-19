//
// Month.hh for  in /home/soidik_d/perso/jarvis/core/calendar
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Tue Jan 24 13:58:39 2017 SOIDIKI Djamil
// Last update Thu Jan 26 00:33:09 2017 SOIDIKI Djamil
//

#ifndef		_MONTH_HH_
# define	_MONTH_HH_

#include	<iostream>
#include	<vector>
#include	"Day.hh"

namespace	core {
  namespace	calendar {

    class	Month {

    private:
      unsigned int	_id;
      unsigned int	_year;
      std::string	_name;
      std::vector<Day*>	_days;

    public:
      Month(unsigned int id, std::string name, 
	    unsigned int year, bool leap = false);
      ~Month();

      void			feed(unsigned int nbDays);
      std::vector<Day*>		getDays() const;
    };
  }
}

#endif		/* _MONTH_HH_ */
