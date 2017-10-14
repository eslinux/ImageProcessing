.PHONY: all, install, clean

TARGET:=face_detection_ex

		
CSRCS+=
CPPSRCS+= ./face_detection_ex.cpp 

OBJSDIR=./build
OBJS:= $(patsubst %.cpp, $(OBJSDIR)/%.o, $(CPPSRCS))
OBJS+= $(patsubst %.c, $(OBJSDIR)/%.o, $(CSRCS))

INCDIR+= -I../install/include \
		 -I../install/include/dlib \
		 -I/home/linuxpc/Downloads/face_recognition/lib-source/dlib/x86/install/include
			
			
CFLAGS += -DDEBUG -Wall -g
LDFLAGS +=  -L/home/linuxpc/Downloads/face_recognition/lib-source/dlib/x86/install/lib64 \
			-ldlib




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
	@$(CXX) -c $< -o $@ $(CFLAGS) ${INCDIR}

install:
	cp -rf ${TARGET} /usr/local/bin
		
clean:
	rm -rf ${OBJSDIR}
	rm -rf ${TARGET}


	
