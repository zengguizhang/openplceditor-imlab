#! gmake

#
# Copyright (C) 2006 Edouard TISSERANT
# 
# This file is part of canfestival, a library implementing the canopen
# stack
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
# 

CC = i686-w64-mingw32-gcc
CXX = i686-w64-mingw32-g++
LD = i686-w64-mingw32-g++
OPT_CFLAGS = -O2
CFLAGS = $(OPT_CFLAGS)
PROG_CFLAGS = 
PREFIX = /usr/i686-w64-mingw32
TARGET = win32
CAN_DRIVER = can_tcp_win32
TIMERS_DRIVER = timers_win32
ENABLE_DLL_DRIVERS=1
CAN_DLL_CFLAGS=

INCLUDES = -I../../include -I../../include/$(TARGET) -I../../include/$(CAN_DRIVER)

OBJS =  Socket.o $(CAN_DRIVER).o

ifeq ($(ENABLE_DLL_DRIVERS),1)
#CFLAGS += -fPIC
DRIVER = libcanfestival_$(CAN_DRIVER).dll
else
DRIVER = $(OBJS)
endif

SERVER = $(CAN_DRIVER)_server

TARGET_SOFILES = $(DESTDIR)$(PREFIX)/lib/$(DRIVER)

all: driver

driver: $(DRIVER) $(SERVER).exe

$(SERVER).exe: Socket.o $(SERVER).cpp
	$(CXX) $(CFLAGS) $(PROG_CFLAGS) ${PROGDEFINES} $(INCLUDES) $^ -o $@ -lws2_32

Socket.o: Socket.cpp Socket.h
	$(CXX) $(CFLAGS) $(PROG_CFLAGS) ${PROGDEFINES} $(INCLUDES) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(PROG_CFLAGS) ${PROGDEFINES} $(INCLUDES) -o $@ -c $<

%.o: %.cpp
	$(CXX) $(CFLAGS) $(PROG_CFLAGS) ${PROGDEFINES} $(INCLUDES) -o $@ -c $<

$(DRIVER): $(OBJS)
	$(LD) $(PROG_CFLAGS) -shared -o $@ \
	-Wl,--export-all-symbols \
	-Wl,--enable-auto-import \
	-Wl,--whole-archive $^ \
	-Wl,--no-whole-archive $(CAN_DLL_CFLAGS) \
	-Wl,--exclude-libs,ALL -lws2_32
		
install: libcanfestival_$(CAN_DRIVER).so
	mkdir -p $(DESTDIR)$(PREFIX)/lib/
	cp $< $(DESTDIR)$(PREFIX)/lib/
		
uninstall:
	rm -f $(TARGET_SOFILES)

clean:
	rm -f $(OBJS) $(DRIVER) $(SERVER).exe

mrproper: clean
