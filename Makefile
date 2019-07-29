CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-std=c++11
LDFLAGS=
LDLIBS=

SRCS=pole.cpp msginfo.cpp poledump.cpp
OBJS=$(subst .cpp,.o,$(SRCS))
EXES=msginfo poledump

all: $(EXES)

msginfo: msginfo.o pole.o
	$(CXX) $(LDFLAGS) -o $@ $^ $(LDLIBS) 

poledump: poledump.o pole.o
	$(CXX) $(LDFLAGS) -o $@ $^ $(LDLIBS) 

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS) $(EXES)

distclean: clean
	$(RM) *~ .depend

include .depend
