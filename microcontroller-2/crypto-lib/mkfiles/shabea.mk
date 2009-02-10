# Makefile for SHABEA
ALGO_NAME := SHABEA

# comment out the following line for removement of SHABEA from the build process
BLOCK_CIPHERS += $(ALGO_NAME)

$(ALGO_NAME)_OBJ      := shabea.o sha256-asm.o memxor.o
$(ALGO_NAME)_TEST_BIN := main-shabea-test.o debug.o uart.o hexdigit_tab.o serial-tools.o \
                         nessie_bc_test.o nessie_common.o cli.o string-extras.o performance_test.o
$(ALGO_NAME)_NESSIE_TEST      := "nessie"
$(ALGO_NAME)_PERFORMANCE_TEST := "performance"

