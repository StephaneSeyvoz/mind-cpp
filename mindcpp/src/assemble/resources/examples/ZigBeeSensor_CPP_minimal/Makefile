#CPPFLAGS += -DNDEBUG
CFLAGS += -std=gnu99

CC=g++

SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
LIB_DIR = lib
BIN_DIR = bin

VERSION=0.1

ZIGBEESENSOR_NAME = ZIGBEESENSOR
ZIGBEESENSOR_SRCS = af.cpp  BootStrap.cpp  FlashMng.cpp  led.cpp  mainComponent.cpp  nwk.cpp  sensor.cpp  sys.cpp  temperatureCluster.cpp temperatureSensor.cpp  zigBeeStack.cpp
ZIGBEESENSOR_CPPFLAGS =  -Ilibs
ZIGBEESENSOR_CFLAGS = -Ilibs

ifeq ($(OS), Windows_NT)
	ZIGBEESENSOR_LDFLAGS = -L./libs/win32
	ZIGBEESENSOR_LIBS = ./libs/win32/libFlashMngExt.a
else
	ZIGBEESENSOR_LDFLAGS = -L./libs/linux
	ZIGBEESENSOR_LIBS = libs/linux/libFlashMngExt.a
endif

BINARIES = ZIGBEESENSOR
ARCHIVES =
LIBRARIES =

include Makefile.auto
