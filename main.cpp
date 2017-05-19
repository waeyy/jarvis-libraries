//
// main.cpp for  in /home/soidik_d/perso/jarvis
// 
// Made by SOIDIKI Djamil
// Login   <soidik_d@epitech.net>
// 
// Started on  Wed Mar  2 20:01:00 2016 SOIDIKI Djamil
// Last update Thu Jan 26 00:55:33 2017 SOIDIKI Djamil
//

#include	<iostream>
#include	"core/Includes.hh"

int		main()
{
  core::timestamp::Date	date;
  core::calendar::Calendar calendar(2017);

  std::cout << date << std::endl;
  std::cout << *(calendar.getMonths()[0]->getDays()[18]) << std::endl;
  return (0);
}
