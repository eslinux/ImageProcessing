#Build
Chinh lai 

-I/home/linuxpc/Downloads/face_recognition/lib-source/dlib/x86/install/include
-L/home/linuxpc/Downloads/face_recognition/lib-source/dlib/x86/install/lib64

trong Makefile cho dung.
Type: "make" to build

#Run
export LD_LIBRARY_PATH=/home/linuxpc/Downloads/face_recognition/lib-source/dlib/x86/install/lib64/
dnn_face_recognition_ex ./face-test.png
