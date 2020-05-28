#!/bin/bash
LLVM_DIR=/Users/juneyounglee/class/llvm-10.0-releaseassert/bin
WORKSPACE_DIR=/Users/juneyounglee/class/reduce
TEST_DIR=`pwd`
FILENAME=main

CC_GOOD=/Users/juneyounglee/class/swpp202001-compiler/sf-compiler
CC_BAD=/Users/juneyounglee/class/swpp202001-compiler-buggy/sf-compiler
INTERPRETER=/Users/juneyounglee/class/swpp202001-interpreter/sf-interpreter

set -e
cd /Users/juneyounglee/class/swpp202001-test
echo $TEST_DIR/$FILENAME.c
./c-to-ll.sh $TEST_DIR/$FILENAME.c $LLVM_DIR

$CC_GOOD $TEST_DIR/$FILENAME.ll -o $TEST_DIR/$FILENAME.good.s
$CC_BAD  $TEST_DIR/$FILENAME.ll -o $TEST_DIR/$FILENAME.bad.s

$INTERPRETER $TEST_DIR/$FILENAME.good.s <$WORKSPACE_DIR/input.txt >$TEST_DIR/output.good.txt
$INTERPRETER $TEST_DIR/$FILENAME.bad.s  <$WORKSPACE_DIR/input.txt >$TEST_DIR/output.bad.txt

# Reverse the exit code
! diff $TEST_DIR/output.good.txt $TEST_DIR/output.bad.txt
