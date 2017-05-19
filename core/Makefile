##
## Makefile for  in /home/soidik_d/perso/jarvis/core
## 
## Made by SOIDIKI Djamil
## Login   <soidik_d@epitech.net>
## 
## Started on  Sun Jan 22 21:14:30 2017 SOIDIKI Djamil
## Last update Tue Jan 24 14:27:20 2017 SOIDIKI Djamil
##

include			../Makefile.inc

DIRS		=	time calendar
CFLAGS		= 	$(PRJCFLAGS) -I..
NAMESPACE	=	/core
NAME		=	core
EXE		=	lib$(NAME).a
EXE2		=	libtime.a libcalendar.a
SRCS		=	$(wildcard *.cpp)
OBJS		=	$(SRCS:.cpp=.o)
OBJLIBS		=	$(EXE2) $(EXE)
TEMP		=	*~
CXXFLAGS 	=	-Wall -Wextra -Werror -std=c++11

all:			$(OBJLIBS)

$(EXE):			$(OBJS)
			$(ECHO) $(MSG_UPDATE)
			$(ECHO) $(MSG_INSTALL)
			$(AR) $(ARFLAGS) $(EXE) $(OBJS)
			$(RANLIB) $(EXE)
			cp $(EXE) $(DIRLIBS)
			$(SUCCESS) "  [$(NAME)] is ok.$(KNRM)"

$(EXE2):		force_look
			-for d in $(DIRS); do (cd $$d; $(MAKE) $(MFLAGS) ); done

clean:
			-for d in $(DIRS); do (cd $$d; $(MAKE) clean ); done
			$(INFO) "\n cleaning $(SULCYN)$(NAME)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			-$(RM) -f $(OBJS) $(TEMP)
			$(SUCCESS) "cleaning $(SUKGRN)$(NAME)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done$(KNRM)"

fclean:			
			-for d in $(DIRS); do (cd $$d; $(MAKE) fclean ); done
			$(INFO) "\n cleaning executable $(SULCYN)$(EXE)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			-$(RM) -f $(EXE)
			$(SUCCESS) "cleaning executable $(SUKGRN)$(EXE)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done$(KNRM)"

re:			fclean all

norm:
			-for d in $(DIRS); do (cd $$d; $(MAKE) norm ); done
			$(RM) -f $(OBJS)

force_look:
			true
