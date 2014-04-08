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
ZIGBEESENSOR_SRCS = af.cpp  BootStrap.cpp  FlashMng.cpp  led.cpp  mainComponent.cpp  nwk.cpp  sensor.cpp  sys.cpp  temperatureCluster.cpp  temperatureCluster.dat  temperatureSensor.cpp  zigBeeStack.cpp
ZIGBEESENSOR_CPPFLAGS =  -Ilibs
ZIGBEESENSOR_CFLAGS = -Ilibs
ZIGBEESENSOR_LDFLAGS = 
ZIGBEESENSOR_LIBS = ./libs/libFlashMngExt.a

BINARIES = ZIGBEESENSOR
ARCHIVES =
LIBRARIES =

include Makefile.auto
