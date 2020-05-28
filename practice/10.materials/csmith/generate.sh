CSMITH_DIR=/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0
csmith --output main.c \
        --no-argc \
        --no-bitfields \
        --no-jumps \
        --no-float \
        --no-packed-struct \
        --quiet \
        --no-structs \
        --no-unions \
        --no-volatiles \
        --no-global-variables

gcc -E main.c -o main.p -I${CSMITH_DIR}
mv main.p main.c
