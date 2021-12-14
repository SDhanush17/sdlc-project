PROJ_NAME = Digital_Trainer_Kit
TEST_PROJ_NAME = Test_$(PROJ_NAME)
BUILD_DIR = Build

# All source code files
SRC = src/maxterm.c\
src/minterm.c\
src/SOP.c\
src/POS.c\
src/associative.c\
src/distributive.c\
src/commutative.c\
src/absorption.c\
src/and_gate.c\
src/not_gate.c\
src/xor_gate.c\
src/half_adder.c\
src/half_subractor.c\
src/xnor.c\
src/BinToOct.c\
src/OctToBin.c\
src/BinToHex.c\
src/binary_decimal.c\
src/decimal_binary.c\
src/decimal_octal.c\
src/decimal_roman.c\
src/octal_decimal.c\
src/bcd_decimal.c\
src/hexadecimal_decimal.c\
src/decimal_bcd.c\
src/octal_binary.c\
src/bintogray.c\
src/graytobin.c\
src/operations.c\
src/parity.c\
src/jkflipflop.c\
src/srflipflop.c\
src/demorgans1.c\
src/demorgans2.c\
src/ripple.c\
src/nand.c\
src/nor.c\
src/full_adder.c\
src/encoder.c\
src/bintodec.c\
src/dectobin.c\
src/bintoxs3.c\
src/complement1.c\
src/mux4to1.c\
src/encoder4to2.c\
src/decoder2to4.c\
src/multiplication.c




# All test source files
TEST_SRC = Test_Main/test_main.c\
unity/unity.c

# All include folders with header files
INC = -Iinc\
-Iunity

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
	  IN=-lm
   endif
endif


all:$(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

coverage: ${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(TEST_SRC) $(INC) -o -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) $(IN)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)
	
cppcheck: $(SRC)
	cppcheck --enable=all $(TEST_SRC) $(SRC)
valgrind:
	valgrind $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	rmdir $(BUILD_DIR)
