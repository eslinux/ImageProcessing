# Straight forward Makefile to compile all examples in a row

INCDIR=
LIBS=



# new add
CFLAGS = $(shell pkg-config --cflags opencv) -Wall -g 

LDFLAGS =
					  						
LIBS+= $(shell pkg-config --libs opencv)
	
CC=g++
CXX=g++
	
	
	

COMMONSRC=
COMMONHDR=

EX1=./1-Load-Display-and-Save-an-image/ex1.cpp
EX2=./2-Capture-Video-from-Camera/ex2.cpp
EX31=./3-Basic-drawing-examples/line.cpp
EX32=./3-Basic-drawing-examples/polygon.cpp
EX33=./3-Basic-drawing-examples/rectangle.cpp
EX34=./3-Basic-drawing-examples/textImage.cpp
EX35=./3-Basic-drawing-examples/circle.cpp
EX36=./3-Basic-drawing-examples/ecllipse.cpp
EX4=./4-Convert-image/ex4.cpp
EX5=./5-Threshold-operation/ex5.cpp
EX6=./6-Applying-Bilateral-Filter/ex6.cpp
EX7=./7-2D-Convolution-Creating-new-filter/ex7.cpp
EX8=./8-Sobel-Edge-Detection/ex8.cpp
EX9=./9-Hough-Circle-Detection/ex9.cpp
EX10=./10-Histogram-Calculation/ex10.cpp
EX11=./11-Erosion-or-Dilation/ex11.cpp
EX12=./12-Bitwise/ex12.cpp
EX13=./13-Face-Detection-using-Haar-Cascade-Classifier/ex13.cpp
EX132=./13-Face-Detection-using-Haar-Cascade-Classifier/fast-face.cpp
EX133=./13-Face-Detection-using-Haar-Cascade-Classifier/webcam.cpp
EX14=./14-Mask-on-face/ex14.cpp



default: all

all: ./1-Load-Display-and-Save-an-image/ex_ex1 \
	./2-Capture-Video-from-Camera/ex_ex2 \
	./3-Basic-drawing-examples/ex_line \
	./3-Basic-drawing-examples/ex_polygon \
	./3-Basic-drawing-examples/ex_rectangle \
	./3-Basic-drawing-examples/ex_textImage \
	./3-Basic-drawing-examples/ex_circle \
	./3-Basic-drawing-examples/ex_ecllipse \
	./4-Convert-image/ex_ex4 \
	./5-Threshold-operation/ex_ex5 \
	./6-Applying-Bilateral-Filter/ex_ex6 \
	./7-2D-Convolution-Creating-new-filter/ex_ex7 \
	./8-Sobel-Edge-Detection/ex_ex8 \
	./9-Hough-Circle-Detection/ex_ex9 \
	./10-Histogram-Calculation/ex_ex10 \
	./11-Erosion-or-Dilation/ex_ex11 \
	./12-Bitwise/ex_ex12 \
	./13-Face-Detection-using-Haar-Cascade-Classifier/ex_ex13 \
	./13-Face-Detection-using-Haar-Cascade-Classifier/ex_fast-face \
	./13-Face-Detection-using-Haar-Cascade-Classifier/ex_webcam \
	./14-Mask-on-face/ex_ex14 \
	
     
clean:
	find . -name "ex_*" | xargs rm -f
	

./1-Load-Display-and-Save-an-image/ex_ex1: ${COMMONSRC} ${EX1}
	g++ ${COMMONSRC} ${EX1} -o $@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS} 
	
./2-Capture-Video-from-Camera/ex_ex2: ${COMMONSRC} ${EX2}
	g++ ${COMMONSRC} ${EX2} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_line: ${COMMONSRC}  ${EX31}
	g++ ${COMMONSRC} ${EX31} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_polygon: ${COMMONSRC} ${EX32}
	g++ ${COMMONSRC} ${EX32} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_rectangle: ${COMMONSRC} ${EX33}
	g++ ${COMMONSRC} ${EX33} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_textImage: ${COMMONSRC} ${EX34}
	g++ ${COMMONSRC} ${EX34} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_circle: ${COMMONSRC} ${EX35}
	g++ ${COMMONSRC} ${EX35} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./3-Basic-drawing-examples/ex_ecllipse: ${COMMONSRC} ${EX36}
	g++ ${COMMONSRC} ${EX36} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./4-Convert-image/ex_ex4: ${COMMONSRC} ${EX4}
	g++ ${COMMONSRC} ${EX4} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./5-Threshold-operation/ex_ex5: ${COMMONSRC} ${EX5}
	g++ ${COMMONSRC} ${EX5} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}
	
./6-Applying-Bilateral-Filter/ex_ex6: ${COMMONSRC} ${EX6}
	g++ ${COMMONSRC} ${EX6} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	
	
./7-2D-Convolution-Creating-new-filter/ex_ex7: ${COMMONSRC} ${EX7}
	g++ ${COMMONSRC} ${EX7} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./8-Sobel-Edge-Detection/ex_ex8: ${COMMONSRC} ${EX8}
	g++ ${COMMONSRC} ${EX8} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./9-Hough-Circle-Detection/ex_ex9: ${COMMONSRC} ${EX9}
	g++ ${COMMONSRC} ${EX9} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./10-Histogram-Calculation/ex_ex10: ${COMMONSRC} ${EX10}
	g++ ${COMMONSRC} ${EX10} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./11-Erosion-or-Dilation/ex_ex11: ${COMMONSRC} ${EX11}
	g++ ${COMMONSRC} ${EX11} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./12-Bitwise/ex_ex12: ${COMMONSRC} ${EX12}
	g++ ${COMMONSRC} ${EX12} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./13-Face-Detection-using-Haar-Cascade-Classifier/ex_ex13: ${COMMONSRC} ${EX13}
	g++ ${COMMONSRC} ${EX13} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./13-Face-Detection-using-Haar-Cascade-Classifier/ex_fast-face: ${COMMONSRC} ${EX132}
	g++ ${COMMONSRC} ${EX132} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./13-Face-Detection-using-Haar-Cascade-Classifier/ex_webcam: ${COMMONSRC} ${EX133}
	g++ ${COMMONSRC} ${EX133} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

./14-Mask-on-face/ex_ex14: ${COMMONSRC} ${EX14}
	g++ ${COMMONSRC} ${EX14} -o ./$@ $(CFLAGS) $(LDFLAGS) ${INCDIR} ${LIBS}	

		
	
	
	
	
	
