# Name of the project
PROJ_NAME = SMART_HOME



# All source code files
SRC =mainProject.c\
src/topicfunctions.c

# All test source files
TEST_SRC = src/topicfunctions.c\
test/smarthome.c\
unity/unity.c

# All include folders with header files


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS 
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
   IN=
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
	  
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
INC = -Iinc\
-Iunity\
# Makefile will not run target command if the name with file already exists. To override, use .PHONY

build_test:
	gcc $(TEST_SRC) $(INC) $(INCLUDE_LIBS) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run_test: build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

analyze: test memcheck staticcheck coverage sanitize_check

staticcheck:
	cppcheck --enable=all -iunity .

memcheck:
	valgrind ./$(TEST_OUTPUT)

sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))