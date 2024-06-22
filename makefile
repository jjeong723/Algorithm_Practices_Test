CC=g++
#CFLAGS=  #컴파일 옵션
INPUT_CODE=test.cpp
#FUNC1_CODE=function_obj1.cpp
#FUNC2_CODE=function_obj2.cpp

MAIN_OBJ=main.o
#FUNC_OBJS=obj1.o obj2.o
TARGET=a.out

#### MAIN OUTPUT MAKE ####
##ONLY MAIN
$(TARGET) : $(MAIN_OBJ)
	$(CC) -o $(TARGET) $(MAIN_OBJ)

##MAIN+FUNCTIONS
#$(TARGET) : $(FUNC_OBJS) $(MAIN_OBJ)
#	$(CC) -o $(TARGET) $(FUNC_OBJS) $(MAIN_OBJ)


#### OBJECT OUTPOT MAKE ####
## MAIN COMPILE
$(MAIN_OBJ) : $(INPUT_CODE)
	$(CC) -o $(MAIN_OBJ) $(INPUT_CODE)

## FUNCTIONS COMPILE
#obj1 : $(FUNC1_CODE)
#	$(CC) -o obj1 $(FUNC1_CODE)
#obj2 : $(FUNC2_CODE)
#	$(CC) -o obj2 $(FUNC2_CODE)


#### MAKE CLEAN ####
clean:
	rm $(TARGET) $(MAIN_OBJ) $(FUNC_OBJS)