.PHONY: all, install, clean

TARGET:=facerec_video

#-include ./src/Face/Face.mk \
#			./src/IO/IO.mk \
#			./src/src.mk 

#using when run app: export LD_LIBRARY_PATH=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_x86_new/lib

MYLIBDIR=/home/linuxpc/Downloads/face_recognition/faiv-facereg-building/3rdparty_x86_new
			
CSRCS+= 
CPPSRCS+=   ./facerec_video.cpp

OBJSDIR=./build-x86
OBJS:= $(patsubst %.cpp, $(OBJSDIR)/%.o, $(CPPSRCS))
OBJS+= $(patsubst %.c, $(OBJSDIR)/%.o, $(CSRCS))

INCDIR+= \
		 -I$(MYLIBDIR)/include \
		 -I$(MYLIBDIR)/include/opencv2
		 
			
			
CFLAGS += -DDEBUG -Wall -g
CXXFLAGS += -DDEBUG -Wall -g -std=c++11
LDFLAGS +=  -L$(MYLIBDIR)/lib \
			-lopencv_highgui -lopencv_imgproc -lopencv_core -lopencv_objdetect -lopencv_contrib \
			-lGLESv2 -lEGL -lm -lpng -lpthread -lX11




CC:= gcc
CXX:= g++

all: ${TARGET}
${TARGET} : $(OBJS)
	@echo " [LINK] $@"
	@mkdir -p $(shell dirname $@)
	@$(CXX) $(OBJS) -o $@ $(LDFLAGS)
	
$(OBJSDIR)/%.o: %.c $(HDRS)
	@echo " [CC]   $@"
	@mkdir -p $(shell dirname $@)
	@$(CC) -c $< -o $@ $(CFLAGS) ${INCDIR}

$(OBJSDIR)/%.o: %.cpp $(HDRS)
	@echo " [CXX]  $@"
	@mkdir -p $(shell dirname $@)
	@$(CXX) -c $< -o $@ $(CXXFLAGS) ${INCDIR}

install:
	cp -rf ${TARGET} /usr/local/bin
		
clean:
	rm -rf ${OBJSDIR}
	rm -rf ${TARGET}


	
