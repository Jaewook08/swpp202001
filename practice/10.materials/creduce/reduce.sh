#!/bin/bash
LLVM_DIR=/Users/juneyounglee/class/llvm-10.0-releaseassert/bin
WORKSPACE_DIR=/Users/juneyounglee/class/reduce
TEST_DIR=`pwd`
FILENAME=main

CC_GOOD=/Users/juneyounglee/class/swpp202001-compiler/sf-compiler
CC_BAD=/Users/juneyounglee/class/swpp202001-compiler-buggy/sf-compiler
INTERPRETER=/Users/juneyounglee/class/swpp202001-interpreter/sf-interpreter
C_TO_LL=/Users/juneyounglee/class/swpp202001-test/c-to-ll.sh

set -e
# 1. Convert main.c into main.ll
$C_TO_LL $TEST_DIR/$FILENAME.c $LLVM_DIR
# 2. Compile main.ll with good / bad compilers
$CC_GOOD $TEST_DIR/$FILENAME.ll -o $TEST_DIR/$FILENAME.good.s
$CC_BAD  $TEST_DIR/$FILENAME.ll -o $TEST_DIR/$FILENAME.bad.s

# 3. Run interpreters
# If it crashes the interpreter, it is an interesting input
$INTERPRETER $TEST_DIR/$FILENAME.good.s <$WORKSPACE_DIR/input.txt >$TEST_DIR/output.good.txt || exit 0
timeout 5 $INTERPRETER $TEST_DIR/$FILENAME.bad.s  <$WORKSPACE_DIR/input.txt >$TEST_DIR/output.bad.txt || exit 0

# Reverse the exit code
! diff $TEST_DIR/output.good.txt $TEST_DIR/output.bad.txt
