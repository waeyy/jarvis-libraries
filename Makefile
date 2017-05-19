##
## Makefile for  in /home/soidik_d/perso/jarvis
## 
## Made by SOIDIKI Djamil
## Login   <soidik_d@epitech.net>
## 
## Started on  Wed Mar  2 21:03:03 2016 SOIDIKI Djamil
## Last update Wed Jan 25 23:11:22 2017 SOIDIKI Djamil
##

include			Makefile.inc

NAMESPACE	=	/
DIRS		= 	core
EXE		= 	jarvis
SRCS		=	main.cpp
OBJS		= 	$(SRCS:.cpp=.o)
OBJLIBS		= 	start core end
LIBS		= 	-L$(DIRLIBS) -lcore -ltime -lcalendar

all: 			$(EXE)

$(EXE): 		$(OBJS) $(OBJLIBS)
			$(LD) -o $(EXE) $(OBJS) $(LIBS)

start:			
			$(ECHO) $(MSG_START)

core:			force_look
			-for d in $(DIRS); do (cd $$d; $(MAKE) $(MFLAGS) ); done

end:			
			$(ECHO) $(MSG_END)

clean:
			$(ECHO) " $(KRED)$(PROJECT)$(KNRM)"
			$(ECHO) " $(SULYLW)Launch cleaning\n$(KNRM)"
			$(ECHO) " [ $(KGRN)clean$(KNRM) ] objs, libraries and temporary files:"
			-for d in $(DIRS); do (cd $$d; $(MAKE) clean ); done
			$(INFO) "\n cleaning $(SULCYN)libraries$(LCYN) in $(SOLCYN)$(NAMESPACE)libraries$(LCYN) start$(KNRM)"
			-$(RM) -f $(DIRLIBS)/*.a *~
			$(SUCCESS) "cleaning $(SUKGRN)libraries$(KGRN) in $(SOKGRN)$(NAMESPACE)libraries$(KGRN) done$(KNRM)"
			$(INFO) "\n cleaning $(SULCYN)$(PROJECT)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			-$(RM) -f $(OBJS) *~
			$(SUCCESS) "cleaning $(SUKGRN)$(PROJECT)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done$(KNRM)"
			$(ECHO) $(if $(filter $(MAKECMDGOALS), clean), "\n $(SUKGRN)Cleaning of J.A.R.V.I.S completed$(KNRM)")

fclean:			clean
			$(ECHO) " [ $(KGRN)fclean$(KNRM) ] executable files:"
			-for d in $(DIRS); do (cd $$d; $(MAKE) fclean ); done
			$(INFO) "\n cleaning executable $(SULCYN)$(EXE)$(LCYN) in $(SOLCYN)$(NAMESPACE)$(LCYN) start$(KNRM)"
			-$(RM) -f $(EXE)
			$(SUCCESS) "cleaning executable $(SUKGRN)$(EXE)$(KGRN) in $(SOKGRN)$(NAMESPACE)$(KGRN) done\n$(KNRM)"
			$(ECHO) " $(SUKGRN)Cleaning of J.A.R.V.I.S completed$(KNRM)"
			$(ECHO) $(if $(filter $(MAKECMDGOALS), re), "")

force_look :
			true

re:			fclean all

norm:			re
			-for d in $(DIRS); do (cd $$d; $(MAKE) norm ); done
			$(RM) -f $(OBJS)
