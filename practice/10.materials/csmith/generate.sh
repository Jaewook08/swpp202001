CSMITH_DIR=/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0

csmith --output main.c \
        --no-argc \
        --no-bitfields \
        --no-jumps \
        --no-arrays \
        --no-float \
        --no-packed-struct \
        --quiet \
        --no-structs \
        --no-unions \
        --no-volatiles \
        --no-global-variables \
        --max-expr-complexity 3 \
        --max-block-depth 2 \
        --max-block-size 2

# Preprocess header
gcc -E main.c -o main.p -I${CSMITH_DIR}
mv main.p main.c

# Add write(uint64_t)
#echo "void write(uint64_t);" >> main.c

# Convert printf(..) to a series of write() calls
# In Mac, sed -i doesn't do in-place update
sed -E 's/^[[:blank:]]+printf[[:blank:]]*\(\".*\", (.*), (.*)\)\;$/void write(uint64_t); write(\1); write(\2);/' ./main.c > main.tmp
mv main.tmp main.c
sed -E 's/^[[:blank:]]+printf[[:blank:]]*\(\".*\", (.*))\;$/void write(uint64_t); write(\1);/' ./main.c > main.tmp
mv main.tmp main.c
