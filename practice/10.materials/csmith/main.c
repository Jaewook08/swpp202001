# 1 "main.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 362 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "main.c" 2
# 10 "main.c"
# 1 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h" 1
# 40 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 1 3 4
# 630 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 631 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 696 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 697 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 2 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 1 3 4
# 246 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/Availability.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4




void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3 4
char *strtok_r(char *__str, const char *__sep, char **__lasts);
# 116 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3 4
int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3 4
char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4


typedef int64_t register_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/types.h" 2 3 4



typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/types.h" 2 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_rsize_t.h" 2 3 4
typedef __darwin_size_t rsize_t;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4


errno_t memset_s(void *__s, rsize_t __smax, int __c, rsize_t __n) __attribute__((availability(macosx,introduced=10.9)));







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4


void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))
__attribute__((availability(tvos,introduced=10.0.1))) __attribute__((availability(watchos,introduced=3.1)))
int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_common.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_strings.h" 2 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/strings.h" 2 3 4
# 181 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 190 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_string.h" 1 3 4
# 191 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/string.h" 2 3 4
# 41 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h" 2
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/float.h" 1 3 4
# 45 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/float.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/float.h" 1 3 4
# 46 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/float.h" 2 3 4
# 42 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern int __math_errhandling(void);
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 174 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= 2.2250738585072014e-308;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 308 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 551 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern float __inff(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `(float)INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern double __inf(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern long double __infl(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="use `(long double)INFINITY` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
extern float __nan(void)
__attribute__((availability(macos,introduced=10.0,deprecated=10.14,message="use `NAN` instead"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 586 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __exp10(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 603 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __cospi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __sinpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __sinpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __tanpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __tanpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
# 634 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double j1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double jn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double yn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double scalb(double, double);
extern int signgam;
# 740 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/math.h" 3 4
extern long int rinttol(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="lrint"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern long int roundtol(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="lround"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double drem(double, double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="remainder"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern int finite(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="Use `isfinite((double)x)` instead."))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double gamma(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,replacement="tgamma"))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));

extern double significand(double)
__attribute__((availability(macos,introduced=10.0,deprecated=10.9,message="Use `2*frexp( )` or `scalbn(x, -ilogb(x))` instead."))) __attribute__((availability(ios,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
# 43 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h" 2


# 1 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 1
# 51 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h"
# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/limits.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h" 1 3 4





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 1 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/_limits.h" 1 3 4
# 41 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 2 3 4
# 7 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/limits.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/limits.h" 2 3 4
# 52 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 2



# 1 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/stdint.h" 1 3 4
# 63 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdint.h" 2 3 4
# 64 "/Library/Developer/CommandLineTools/usr/lib/clang/11.0.0/include/stdint.h" 2 3 4
# 56 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 2



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/assert.h" 3 4
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) __attribute__((__disable_tail_calls__));
# 60 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 2
# 89 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h"
# 1 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/platform_generic.h" 1
# 39 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/platform_generic.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 1 3 4
# 39 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));






int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) __attribute__((availability(tvos,introduced=10.0))) __attribute__((availability(watchos,introduced=3.0)));
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _Nullable _close)(void *);
 int (* _Nullable _read) (void *, char *, int);
 fpos_t (* _Nullable _seek) (void *, fpos_t, int);
 int (* _Nullable _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3 4


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 142 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((__availability__(swift, unavailable, message="Use snprintf instead.")));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);

__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((__availability__(swift, unavailable, message="Use vsnprintf instead.")));
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 1 3 4
# 26 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 3 4
char *ctermid(char *);
# 206 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
int pclose(FILE *) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));



FILE *popen(const char *, const char *) __asm("_" "popen" ) __attribute__((__availability__(swift, unavailable, message="Use posix_spawn APIs or NSTask instead.")));
# 249 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 260 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 286 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);


__attribute__((__availability__(swift, unavailable, message="Use mkstemp(3) instead.")))

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );
# 324 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 325 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 352 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
FILE *open_memstream(char **__bufp, size_t *__sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (* _Nullable)(void *, char *, int),
                 int (* _Nullable)(void *, const char *, int),
                 fpos_t (* _Nullable)(void *, fpos_t, int),
                 int (* _Nullable)(void *));
# 407 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 408 "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h" 2 3 4
# 40 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/platform_generic.h" 2


static void
platform_main_begin(void)
{

}

static void
platform_main_end(uint32_t crc, int flag)
{





 printf ("checksum = %X\n", crc);
# 120 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/platform_generic.h"
}
# 90 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 2
# 100 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h"
# 1 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/safe_math.h" 1
# 13 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/safe_math.h"
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{

  return






    -si;
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 + si2);
}

static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 - si2);
}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}

static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -128) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -128) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (127 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (127 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{

  return






    -si;
}

static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    (si1 - si2);
}

static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -32768) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{

  return

    ((si2 == 0) || ((si1 == -32768) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (32767 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (32767 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{

  return


    (si==(-2147483647 -1)) ?
    ((si)) :


    -si;
}

static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > (2147483647 -si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647 -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~2147483647)))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > (2147483647 / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647 -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647 -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (2147483647 / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647 -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-2147483647 -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (2147483647 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (2147483647 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static int64_t
(safe_unary_minus_func_int64_t_s)(int64_t si )
{

  return


    (si==(-9223372036854775807LL -1)) ?
    ((si)) :


    -si;
}

static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1>0) && (si2>0) && (si1 > (9223372036854775807LL -si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807LL -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~9223372036854775807LL)))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int64_t
(safe_mul_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return


    (((si1 > 0) && (si2 > 0) && (si1 > (9223372036854775807LL / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807LL -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807LL -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < (9223372036854775807LL / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int64_t
(safe_div_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{

  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int64_t
(safe_lshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > (9223372036854775807LL >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int64_t
(safe_lshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > (9223372036854775807LL >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_s)(int64_t left, int right )
{

  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int64_t
(safe_rshift_func_int64_t_s_u)(int64_t left, unsigned int right )
{

  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{

  return -ui;
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 + ui2;
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 - ui2;
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (255 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (255 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{

  return -ui;
}

static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 + ui2;
}

static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ui1 - ui2;
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (65535 >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (65535 >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{

  return -ui;
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ui1 - ui2;
}

static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (4294967295U >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (4294967295U >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{

  return -ui;
}

static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 + ui2;
}

static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ui1 - ui2;
}

static uint64_t
(safe_mul_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}

static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint64_t
(safe_div_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{

  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static uint64_t
(safe_lshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > (18446744073709551615ULL >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static uint64_t
(safe_lshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    ((((unsigned int)right) >= 32) || (left > (18446744073709551615ULL >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_s)(uint64_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint64_t
(safe_rshift_func_uint64_t_u_u)(uint64_t left, unsigned int right )
{

  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}
# 953 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/safe_math.h"
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 + sf2);
}

static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{

  return

    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :

    (sf1 - sf2);
}

static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{

  return


    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?



    (sf1) :

    (sf1 * sf2);
}

static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{

  return


    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?



    (sf1) :

    (sf1 / sf2);
}




static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 + sf2);
}

static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{

  return

    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :

    (sf1 - sf2);
}

static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{

  return


    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?



    (sf1) :

    (sf1 * sf2);
}

static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{

  return


    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?



    (sf1) :

    (sf1 / sf2);
}
# 1193 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/safe_math.h"
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{

  return

    ((sf1 <= (-2147483647 -1)) || (sf1 >= 2147483647)) ?
    (2147483647) :

    ((int32_t)(sf1));
}
# 101 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/random_inc.h" 2
# 46 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h" 2

static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
# 96 "/usr/local/Cellar/csmith/2.3.0/include/csmith-2.3.0/csmith.h"
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}

static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}



static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
# 11 "main.c" 2


static long __undefined;






static int8_t func_1(void);
static uint64_t func_3(int32_t p_4, uint64_t p_5, const uint32_t p_6);
static uint8_t func_11(uint8_t p_12, uint64_t * p_13, uint32_t p_14, int32_t p_15, uint64_t * p_16);
static uint8_t func_17(uint64_t p_18, uint8_t p_19, uint64_t * p_20, const int16_t p_21, uint16_t p_22);
static const uint8_t func_27(int8_t p_28, int8_t p_29, int16_t p_30, uint32_t p_31, uint8_t * p_32);
static int8_t func_37(int16_t p_38, uint8_t * p_39);
static int32_t * func_46(int32_t * p_47, uint64_t * p_48, const uint16_t p_49);
static uint64_t * func_52(const int16_t p_53, int32_t p_54, uint16_t p_55);
static uint32_t func_58(int32_t p_59, int32_t * p_60, uint8_t * p_61, int8_t p_62);
static uint8_t * func_63(uint8_t * p_64, uint64_t * p_65);





static int8_t func_1(void)
{
    uint32_t l_2 = 0xE8588D0DL;
    uint64_t l_8 = 0UL;
    uint64_t *l_7 = &l_8;
    int32_t l_2329 = 0x4DF6071DL;
    int32_t *l_2328 = &l_2329;
    uint64_t l_2330 = 0UL;
    (*l_2328) &= (((((((0x8AB6L >= 3L) > l_2) & func_3(l_2, ((*l_7) = l_2), l_2)) != (safe_sub_func_int64_t_s_s(0x418459B3AB6A4BE8LL, 0x454B443598B103E1LL))) >= l_2) <= l_2) , 0xD6F96F31L);
    return l_2330;
}




static uint64_t func_3(int32_t p_4, uint64_t p_5, const uint32_t p_6)
{
    int32_t l_24 = 1L;
    int32_t *l_23 = &l_24;
    uint8_t l_26 = 0x2FL;
    uint8_t *l_25 = &l_26;
    uint32_t l_33 = 0xAE8B0121L;
    uint64_t l_677 = 0x4B1A8AF38D5EEC06LL;
    uint64_t *l_676 = &l_677;
    int32_t l_681 = 0xA778BBE7L;
    int32_t l_682 = (-7L);
    int32_t l_683 = 0L;
    int32_t l_685 = 1L;
    int32_t l_686[10][8][1] = {{{6L},{0x21830AF0L},{8L},{0x95A056B9L},{8L},{0x21830AF0L},{6L},{7L}},{{0x5F8CB1DDL},{6L},{(-1L)},{(-9L)},{0x95A056B9L},{1L},{(-8L)},{6L}},{{0xFD6E08EEL},{0xFD6E08EEL},{6L},{(-8L)},{1L},{0x95A056B9L},{(-9L)},{(-1L)}},{{6L},{0x5F8CB1DDL},{7L},{6L},{0x21830AF0L},{8L},{0x95A056B9L},{8L}},{{0x21830AF0L},{6L},{7L},{0x5F8CB1DDL},{6L},{(-1L)},{(-9L)},{0x95A056B9L}},{{1L},{(-8L)},{6L},{0xFD6E08EEL},{0xFD6E08EEL},{6L},{0x1D54F8F9L},{9L}},{{0x28E958B3L},{0x2B11879AL},{0x95A056B9L},{2L},{1L},{0L},{2L},{6L}},{{0xBE53A322L},{0x28E958B3L},{0xBE53A322L},{6L},{2L},{0L},{1L},{2L}},{{0x95A056B9L},{0x2B11879AL},{0x28E958B3L},{9L},{0x1D54F8F9L},{2L},{(-5L)},{(-5L)}},{{2L},{0x1D54F8F9L},{9L},{0x28E958B3L},{0x2B11879AL},{0x95A056B9L},{2L},{1L}}};
    uint32_t l_687 = 0xD8353AAAL;
    int16_t l_691 = 0L;
    uint16_t l_732 = 0UL;
    int8_t l_763 = 6L;
    int8_t *l_762 = &l_763;
    int8_t * const *l_761 = &l_762;
    uint64_t l_839 = 1UL;
    uint16_t l_908 = 4UL;
    int16_t l_968[7] = {(-1L),(-6L),(-6L),(-1L),(-6L),(-6L),(-1L)};
    uint64_t l_981 = 4UL;
    uint64_t *l_1011 = &l_981;
    uint32_t *l_1056[10] = {&l_687,&l_687,&l_687,&l_687,&l_687,&l_687,&l_687,&l_687,&l_687,&l_687};
    uint32_t **l_1055 = &l_1056[7];
    const int32_t *l_1077 = (void*)0;
    const int32_t **l_1076 = &l_1077;
    const int32_t ***l_1075[1][7][2] = {{{&l_1076,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_1076},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t **l_1116 = &l_23;
    int32_t ***l_1115 = &l_1116;
    int32_t ****l_1114 = &l_1115;
    int32_t *****l_1113 = &l_1114;
    const uint32_t l_1123 = 0x3E0BFA00L;
    const uint32_t l_1124 = 0UL;
    const uint32_t l_1125 = 1UL;
    const uint32_t l_1126 = 0xFB256972L;
    const uint32_t l_1127[3] = {7UL,7UL,7UL};
    const uint32_t l_1128 = 0xEDABE3E3L;
    const uint32_t l_1129 = 18446744073709551613UL;
    const uint32_t l_1130 = 18446744073709551615UL;
    const uint32_t l_1131 = 0UL;
    const uint32_t l_1132 = 18446744073709551615UL;
    const uint32_t l_1133[8] = {18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL,9UL,18446744073709551615UL,18446744073709551615UL,9UL};
    const uint32_t l_1134 = 0xB9F845FFL;
    const uint32_t l_1135 = 18446744073709551609UL;
    const uint32_t l_1136[9][1] = {{0x4FA40BC6L},{18446744073709551610UL},{0x4FA40BC6L},{18446744073709551610UL},{0x4FA40BC6L},{18446744073709551610UL},{0x4FA40BC6L},{18446744073709551610UL},{0x4FA40BC6L}};
    const uint32_t l_1137 = 0xBB377B1EL;
    const uint32_t l_1138[6][1][10] = {{{0x984244E1L,1UL,18446744073709551615UL,0xAC15D95CL,0xE1636A1EL,1UL,0x00FD62DCL,1UL,0xE1636A1EL,0xAC15D95CL}},{{0xB56BC46DL,0xF6479F76L,0xB56BC46DL,0xAC15D95CL,0x00FD62DCL,5UL,18446744073709551615UL,1UL,2UL,1UL}},{{0xB56BC46DL,1UL,2UL,1UL,2UL,1UL,0xB56BC46DL,1UL,0x984244E1L,0xF6479F76L}},{{0x984244E1L,1UL,0xB56BC46DL,1UL,2UL,1UL,2UL,1UL,0xB56BC46DL,1UL}},{{2UL,1UL,18446744073709551615UL,5UL,0x00FD62DCL,0xAC15D95CL,0xB56BC46DL,0xF6479F76L,0xB56BC46DL,0xAC15D95CL}},{{0xE1636A1EL,1UL,0x00FD62DCL,1UL,0xE1636A1EL,0xAC15D95CL,18446744073709551615UL,1UL,0x984244E1L,5UL}}};
    const uint32_t l_1139[9] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
    const uint32_t l_1140 = 0xFACB7962L;
    const uint32_t l_1141 = 6UL;
    const uint32_t l_1142 = 0xE3746DF2L;
    const uint32_t l_1143 = 7UL;
    const uint32_t l_1144[7] = {18446744073709551609UL,0x556E48EEL,0x556E48EEL,18446744073709551609UL,0x556E48EEL,0x556E48EEL,18446744073709551609UL};
    const uint32_t l_1145 = 18446744073709551615UL;
    const uint32_t l_1146 = 18446744073709551608UL;
    const uint32_t l_1147 = 18446744073709551611UL;
    const uint32_t l_1148 = 1UL;
    const uint32_t l_1149 = 0xCC02B65FL;
    const uint32_t l_1150 = 0xCDBFB23BL;
    const uint32_t l_1151 = 0xD443E6A2L;
    const uint32_t l_1152 = 0xE5F23249L;
    const uint32_t l_1153 = 0x2654EC66L;
    const uint32_t l_1154 = 0x12C3EB6BL;
    const uint32_t l_1155 = 8UL;
    const uint32_t l_1156 = 0x2FC7BE57L;
    const uint32_t l_1157[10] = {18446744073709551613UL,0x1C653D85L,18446744073709551613UL,18446744073709551613UL,0x1C653D85L,18446744073709551613UL,18446744073709551613UL,0x1C653D85L,18446744073709551613UL,18446744073709551613UL};
    const uint32_t l_1158 = 0UL;
    const uint32_t l_1159[8] = {0xB71B71F9L,0xB71B71F9L,18446744073709551615UL,0xB71B71F9L,0xB71B71F9L,18446744073709551615UL,0xB71B71F9L,0xB71B71F9L};
    const uint32_t l_1160 = 0UL;
    const uint32_t l_1161 = 1UL;
    const uint32_t * const l_1122[5][7][3] = {{{&l_1142,(void*)0,(void*)0},{&l_1142,&l_1145,(void*)0},{&l_1149,&l_1155,&l_1134},{(void*)0,(void*)0,&l_1154},{&l_1151,&l_1160,&l_1146},{(void*)0,(void*)0,(void*)0},{&l_1133[5],&l_1149,(void*)0}},{{&l_1136[0][0],&l_1154,&l_1146},{&l_1146,&l_1126,(void*)0},{&l_1123,&l_1144[0],&l_1141},{&l_1146,(void*)0,(void*)0},{&l_1136[0][0],(void*)0,&l_1125},{&l_1133[5],(void*)0,(void*)0},{(void*)0,(void*)0,&l_1136[0][0]}},{{&l_1151,&l_1144[0],&l_1153},{(void*)0,&l_1126,&l_1136[0][0]},{(void*)0,&l_1154,(void*)0},{&l_1148,&l_1149,&l_1125},{&l_1148,(void*)0,(void*)0},{(void*)0,&l_1160,&l_1141},{(void*)0,&l_1137,(void*)0}},{{&l_1151,&l_1160,&l_1146},{(void*)0,(void*)0,(void*)0},{&l_1133[5],&l_1149,(void*)0},{&l_1136[0][0],&l_1154,&l_1146},{&l_1146,&l_1126,(void*)0},{&l_1123,&l_1144[0],&l_1141},{&l_1146,(void*)0,(void*)0}},{{&l_1136[0][0],(void*)0,&l_1125},{&l_1133[5],(void*)0,(void*)0},{(void*)0,(void*)0,&l_1136[0][0]},{&l_1151,&l_1144[0],&l_1153},{(void*)0,&l_1126,&l_1136[0][0]},{(void*)0,&l_1154,(void*)0},{&l_1148,&l_1149,&l_1125}}};
    const uint32_t * const *l_1121 = &l_1122[1][3][1];
    uint32_t **l_1162 = &l_1056[7];
    uint32_t ****l_1186 = (void*)0;
    const int16_t l_1261 = (-7L);
    int16_t l_1317 = (-8L);
    int32_t *l_1407 = &l_682;
    int32_t ***** const l_1411 = (void*)0;
    uint32_t *l_1416 = &l_33;
    int32_t *l_1417 = &l_685;
    int64_t ** const *l_1418 = (void*)0;
    uint64_t *l_1425[2][4] = {{&l_677,&l_839,&l_677,&l_677},{&l_839,&l_839,&l_839,&l_839}};
    int8_t **l_1433[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t ***l_1432 = &l_1433[2];
    int8_t ****l_1431 = &l_1432;
    uint32_t l_1494 = 0UL;
    int32_t l_1504 = 0x90C437DEL;
    uint16_t l_1548 = 1UL;
    uint8_t l_1602 = 0x5AL;
    int64_t l_1625 = 0xF1C07C202EC2EAE0LL;
    int16_t l_1627 = 0x4B15L;
    int32_t l_1628 = 0xD5BC4828L;
    uint32_t l_1677 = 1UL;
    uint64_t l_1694 = 3UL;
    int16_t ***l_1779 = (void*)0;
    const int32_t l_1801 = 1L;
    const int16_t l_1891 = 0x9D4BL;
    int16_t *l_1998 = &l_1317;
    int16_t **l_1997 = &l_1998;
    int16_t ***l_1996[5];
    uint32_t *l_2025[9][8] = {{(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677},{(void*)0,(void*)0,&l_1677,(void*)0,(void*)0,&l_1677,(void*)0,(void*)0},{&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0},{(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677},{(void*)0,(void*)0,&l_1677,(void*)0,(void*)0,&l_1677,(void*)0,(void*)0},{&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0},{(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677},{(void*)0,(void*)0,&l_1677,(void*)0,(void*)0,&l_1677,(void*)0,(void*)0},{&l_1677,(void*)0,&l_1677,&l_1677,(void*)0,&l_1677,&l_1677,(void*)0}};
    int8_t *l_2091 = &l_763;
    int16_t l_2135 = (-1L);
    uint16_t l_2144[6][10] = {{0x16A1L,0xA359L,0x0004L,0xF17AL,0xF17AL,0x0004L,0xA359L,0x16A1L,0x16A1L,0xA359L},{0x16A1L,0xF17AL,0xA359L,0xA359L,0xF17AL,0x16A1L,0x0004L,0x0004L,0x16A1L,0xF17AL},{0xF17AL,0xA359L,0xA359L,0xF17AL,0x16A1L,0x0004L,0x0004L,0x16A1L,0xF17AL,0xA359L},{0xF17AL,0xF17AL,0x0004L,0xA359L,0x16A1L,0x16A1L,0xA359L,0x0004L,0xF17AL,0xF17AL},{0x16A1L,0xA359L,0x0004L,0xF17AL,0xF17AL,0x0004L,0xA359L,0x16A1L,0x16A1L,0xA359L},{0x16A1L,0xF17AL,0xA359L,0xA359L,0xF17AL,0x16A1L,0x0004L,0x0004L,0x16A1L,0xF17AL}};
    int32_t l_2164 = 0xB92A4C5DL;
    uint8_t **l_2182 = &l_25;
    uint8_t ***l_2181[10] = {&l_2182,&l_2182,&l_2182,&l_2182,&l_2182,&l_2182,&l_2182,&l_2182,&l_2182,&l_2182};
    const uint32_t l_2229[4][3][5] = {{{0xFDD04590L,1UL,0xFDD04590L,0xFDD04590L,1UL},{1UL,0xFDD04590L,0xFDD04590L,1UL,0xFDD04590L},{1UL,1UL,1UL,1UL,1UL}},{{0xFDD04590L,1UL,0xFDD04590L,0xFDD04590L,1UL},{1UL,0xFDD04590L,0xFDD04590L,1UL,0xFDD04590L},{1UL,1UL,1UL,1UL,1UL}},{{0xFDD04590L,1UL,0xFDD04590L,0xFDD04590L,1UL},{1UL,0xFDD04590L,0xFDD04590L,1UL,0xFDD04590L},{1UL,1UL,1UL,1UL,1UL}},{{0xFDD04590L,1UL,0xFDD04590L,0xFDD04590L,1UL},{1UL,0xFDD04590L,0xFDD04590L,1UL,0xFDD04590L},{1UL,1UL,1UL,1UL,1UL}}};
    int32_t l_2242 = (-6L);
    uint32_t l_2248 = 0x99174BE7L;
    uint8_t l_2277 = 254UL;
    int64_t l_2309 = (-8L);
    uint64_t *l_2318 = (void*)0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1996[i] = &l_1997;
    if ((safe_rshift_func_uint8_t_u_u(func_11(((*l_25) = func_17(p_6, ((*l_25) = (((*l_23) = 0x9FA8BC07L) , 7UL)), ((func_27(l_33, p_6, (p_5 , (l_33 , ((+l_33) > (safe_lshift_func_int8_t_s_s(func_37(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_33 == p_4), 15)), p_6)) || 1UL), l_25), l_33))))), p_5, l_25) ^ 0x6FL) , &p_5), p_6, p_6)), l_676, p_5, p_5, &l_677), 2)))
    {
        int32_t l_680 = 0x89501936L;
        int32_t *l_679[7];
        int8_t l_684 = 0x9AL;
        uint64_t *l_711 = (void*)0;
        uint32_t l_733[9][8] = {{0x9928A36FL,1UL,1UL,0x9928A36FL,4294967295UL,0UL,4294967295UL,0x9928A36FL},{1UL,4294967295UL,1UL,0xF521F927L,0xEF996F11L,0xEF996F11L,0xF521F927L,1UL},{4294967295UL,4294967295UL,0xEF996F11L,0UL,0xA19EDDD2L,0UL,0xEF996F11L,4294967295UL},{4294967295UL,1UL,0xF521F927L,0xEF996F11L,0xEF996F11L,0xF521F927L,1UL,4294967295UL},{1UL,0x9928A36FL,4294967295UL,0UL,4294967295UL,0x9928A36FL,1UL,1UL},{0x9928A36FL,0UL,0xF521F927L,0xF521F927L,0UL,0x9928A36FL,0xEF996F11L,0x9928A36FL},{0UL,0x9928A36FL,0xEF996F11L,0x9928A36FL,0UL,0xF521F927L,0xF521F927L,0UL},{0x9928A36FL,1UL,1UL,0x9928A36FL,4294967295UL,0UL,4294967295UL,0x9928A36FL},{1UL,4294967295UL,1UL,0xF521F927L,0xEF996F11L,0xEF996F11L,0xF521F927L,1UL}};
        int32_t *l_737 = &l_24;
        int16_t l_744 = (-1L);
        uint32_t l_745 = 1UL;
        int8_t ** const l_767 = &l_762;
        int8_t ** const *l_766 = &l_767;
        uint32_t l_783 = 6UL;
        int32_t l_904 = 1L;
        const int32_t l_920[8] = {0x508BAF3CL,0x508BAF3CL,0x508BAF3CL,0x508BAF3CL,0x508BAF3CL,0x508BAF3CL,0x508BAF3CL,0x508BAF3CL};
        const int32_t *l_919[8][9] = {{&l_920[6],&l_920[6],&l_920[3],&l_920[1],&l_920[1],&l_920[3],&l_920[6],&l_920[6],&l_920[6]},{&l_920[6],&l_920[5],&l_920[6],&l_920[4],&l_920[6],&l_920[1],&l_920[0],&l_920[1],&l_920[6]},{&l_920[6],&l_920[6],&l_920[6],&l_920[6],&l_920[6],&l_920[1],&l_920[6],&l_920[6],&l_920[6]},{&l_920[6],&l_920[6],&l_920[0],&l_920[5],&l_920[1],&l_920[5],&l_920[0],&l_920[6],&l_920[6]},{&l_920[6],&l_920[6],&l_920[6],&l_920[1],&l_920[6],&l_920[6],&l_920[6],&l_920[6],&l_920[6]},{&l_920[6],&l_920[1],&l_920[0],&l_920[1],&l_920[6],&l_920[4],&l_920[6],&l_920[5],&l_920[6]},{&l_920[6],&l_920[6],&l_920[6],&l_920[3],&l_920[1],&l_920[1],&l_920[3],&l_920[6],&l_920[6]},{&l_920[6],(void*)0,&l_920[6],&l_920[6],&l_920[0],&l_920[4],(void*)0,&l_920[6],(void*)0}};
        const int32_t **l_918[3];
        const int32_t ***l_917 = &l_918[0];
        int32_t **l_940 = &l_23;
        int32_t ***l_939 = &l_940;
        int32_t *l_986 = &l_681;
        uint64_t *l_1002[2][6] = {{(void*)0,&l_677,&l_677,(void*)0,&l_677,&l_677},{(void*)0,&l_677,&l_677,(void*)0,&l_677,&l_677}};
        int16_t *l_1024[7] = {&l_968[4],&l_968[4],&l_968[4],&l_968[4],&l_968[4],&l_968[4],&l_968[4]};
        int16_t **l_1023 = &l_1024[5];
        uint32_t *l_1054 = &l_687;
        uint32_t **l_1053 = &l_1054;
        uint32_t ***l_1108 = &l_1053;
        const uint32_t * const *l_1118 = (void*)0;
        uint8_t *l_1166 = (void*)0;
        int32_t *****l_1206 = (void*)0;
        uint32_t ***** const l_1253 = (void*)0;
        int8_t l_1258 = 1L;
        int64_t l_1266 = 6L;
        int64_t *l_1265 = &l_1266;
        int64_t **l_1264[5][5] = {{&l_1265,&l_1265,&l_1265,&l_1265,&l_1265},{&l_1265,&l_1265,&l_1265,&l_1265,&l_1265},{&l_1265,(void*)0,&l_1265,(void*)0,&l_1265},{&l_1265,(void*)0,&l_1265,&l_1265,&l_1265},{&l_1265,&l_1265,&l_1265,&l_1265,&l_1265}};
        int32_t l_1280 = 1L;
        int8_t ** const **l_1365[8] = {&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766};
        int i, j;
        for (i = 0; i < 7; i++)
            l_679[i] = &l_680;
        for (i = 0; i < 3; i++)
            l_918[i] = &l_919[5][7];
        l_683 = (l_682 |= (l_681 ^= p_6));
        --l_687;
        if ((~l_691))
        {
            uint32_t *l_692 = &l_33;
            const int32_t l_697 = 0x607B13E5L;
            int8_t *l_700 = &l_684;
            int32_t l_741[3][1];
            uint16_t *l_752 = &l_732;
            int32_t * const *l_797 = &l_23;
            uint32_t l_825 = 0xD65FEB72L;
            uint64_t l_853 = 0x737C4A2140DD98A0LL;
            const int32_t *l_916 = &l_24;
            const int32_t **l_915 = &l_916;
            const int32_t ***l_914 = &l_915;
            int32_t l_962 = 0x610E95A1L;
            uint32_t *l_964 = (void*)0;
            uint32_t * const * const l_963 = &l_964;
            int32_t *l_985[5][5][5] = {{{&l_686[2][1][0],&l_686[6][0][0],&l_686[2][1][0],&l_741[0][0],&l_741[2][0]},{&l_686[3][1][0],&l_962,&l_962,&l_741[0][0],&l_683},{&l_686[9][3][0],(void*)0,&l_680,&l_686[8][7][0],&l_686[2][1][0]},{&l_686[1][0][0],&l_683,&l_962,&l_683,&l_686[1][0][0]},{(void*)0,&l_962,&l_686[2][1][0],&l_962,&l_686[8][7][0]}},{{(void*)0,&l_680,(void*)0,&l_681,(void*)0},{&l_682,&l_686[2][1][0],&l_686[8][7][0],&l_962,&l_686[8][7][0]},{&l_681,&l_681,&l_962,(void*)0,&l_686[1][0][0]},{&l_686[8][7][0],(void*)0,&l_686[2][1][0],&l_680,&l_686[2][1][0]},{&l_962,(void*)0,(void*)0,(void*)0,&l_683}},{{&l_683,(void*)0,(void*)0,&l_683,&l_741[2][0]},{&l_680,&l_681,&l_741[0][0],&l_686[1][0][0],&l_686[1][0][0]},{&l_686[2][1][0],&l_741[2][0],&l_680,&l_962,&l_686[2][1][0]},{&l_683,&l_741[0][0],&l_962,&l_962,&l_741[0][0]},{&l_741[0][0],&l_683,(void*)0,&l_686[2][1][0],(void*)0}},{{(void*)0,&l_681,&l_962,(void*)0,(void*)0},{&l_683,&l_686[9][3][0],(void*)0,&l_686[2][1][0],&l_686[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_680,&l_962},{&l_741[0][0],(void*)0,&l_962,&l_683,&l_686[8][7][0]},{&l_683,(void*)0,&l_686[1][0][0],&l_962,(void*)0}},{{&l_686[2][1][0],&l_686[8][7][0],&l_962,&l_686[8][7][0],&l_686[2][1][0]},{&l_741[0][0],(void*)0,(void*)0,&l_681,&l_962},{&l_686[2][1][0],(void*)0,(void*)0,&l_682,&l_680},{&l_741[0][0],(void*)0,&l_962,(void*)0,&l_962},{&l_682,&l_682,(void*)0,(void*)0,&l_686[2][1][0]}}};
            uint16_t l_994 = 65533UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_741[i][j] = 0L;
            }
            if (((((((*l_692) ^= 0x63FE480AL) & p_4) & ((safe_mod_func_int8_t_s_s((-1L), (safe_div_func_uint8_t_u_u(l_697, (safe_mul_func_int8_t_s_s(((*l_700) = ((&l_691 != &l_691) , p_6)), ((safe_mod_func_int16_t_s_s((p_4 & (safe_sub_func_uint8_t_u_u(p_5, l_26))), 0x0649L)) > p_5))))))) , l_697)) , p_6) > (-3L)))
            {
                uint64_t *l_714[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_723 = 0x57C252EFL;
                int64_t l_735 = (-1L);
                uint16_t *l_738 = &l_732;
                uint16_t l_740 = 0UL;
                uint16_t *l_739 = &l_740;
                int32_t l_742 = 0xA077EC45L;
                int32_t l_743[2][2] = {{0xA1F9B842L,0xA1F9B842L},{0xA1F9B842L,0xA1F9B842L}};
                int i, j;
                for (l_33 = 14; (l_33 != 58); ++l_33)
                {
                    uint64_t *l_709 = &l_677;
                    int32_t l_734 = 1L;
                    for (p_5 = 0; (p_5 == 15); p_5 = safe_add_func_int8_t_s_s(p_5, 9))
                    {
                        int32_t **l_710 = &l_23;
                        const int32_t *l_716[7][7][4] = {{{&l_697,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697}},{{&l_697,(void*)0,&l_697,(void*)0},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,(void*)0,&l_697,&l_697}},{{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,(void*)0},{&l_697,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697}},{{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,(void*)0,&l_697,(void*)0},{&l_697,&l_697,&l_697,&l_697}},{{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{(void*)0,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697}},{{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697}},{{(void*)0,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,(void*)0,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697},{&l_697,&l_697,&l_697,&l_697}}};
                        const int32_t **l_715 = &l_716[4][0][2];
                        int32_t **l_717 = &l_679[3];
                        int i, j, k;
                        (*l_717) = ((*l_715) = func_46(func_46(((*l_710) = func_46(&l_24, l_709, (p_4 && (&p_5 == &l_677)))), l_711, (p_6 && (safe_div_func_uint8_t_u_u(l_697, 0x78L)))), l_714[2], p_5));
                        (*l_717) = &l_680;
                        (**l_717) = (((!0xFA8AB4B40AC62C82LL) < p_5) && 255UL);
                    }
                    if (p_5)
                        continue;
                    if ((l_734 = (safe_sub_func_int32_t_s_s((l_679[2] == (void*)0), ((((safe_rshift_func_uint16_t_u_u((((0xC737EB4EL | (((((*l_25) = ((0x75F15681L > ((((((l_723 = 18446744073709551615UL) , 1UL) , (0L ^ (((*l_709) = ((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0x1714L, ((safe_div_func_int64_t_s_s((p_6 , 0x6C886F5BB3F7AF39LL), 0x44B71688288D55E0LL)) , l_697))) != 1UL), p_5)), p_4)) != l_686[2][1][0])) >= p_6))) , l_732) , 0x2653L) & p_6)) < l_733[0][0])) != 1UL) || p_4) ^ l_734)) == p_5) ^ 0xD961L), 6)) , p_6) & 0x99D5L) , p_5)))))
                    {
                        return l_723;
                    }
                    else
                    {
                        l_735 = l_734;
                    }
                }
                l_741[0][0] = (+(&p_4 == (((((*l_739) ^= ((*l_738) &= (4294967295UL <= (p_6 & ((l_691 , func_46(&p_4, &l_677, l_697)) != (l_737 = l_692)))))) | p_6) , l_740) , (void*)0)));
                --l_745;
                for (l_33 = 0; (l_33 <= 6); l_33 += 1)
                {
                    int8_t l_754 = 0xD5L;
                    int8_t *l_753 = &l_754;
                    int8_t **l_760 = &l_753;
                    int8_t ***l_759 = &l_760;
                    int8_t ** const l_769 = (void*)0;
                    int8_t ** const *l_768[9] = {&l_767,&l_769,&l_767,&l_767,&l_769,&l_767,&l_767,&l_769,&l_767};
                    int32_t l_770[3][3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_770[i][j] = (-1L);
                    }
                    l_770[1][1] = (l_723 ^= ((safe_add_func_uint8_t_u_u((0x60D3L & (((*l_753) = ((*l_700) |= ((void*)0 != l_752))) != (safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((((*l_759) = &l_700) != l_761), p_6)) <= (1L < (safe_mod_func_int16_t_s_s(((((&l_761 != (l_768[6] = l_766)) , p_6) && p_4) <= 5L), p_6)))), 0x3EFFL)))), p_4)) || l_743[1][0]));
                }
            }
            else
            {
                int64_t l_771 = 0L;
                int32_t l_772 = (-1L);
                int32_t l_773 = (-9L);
                int32_t l_774 = 0x860FF59AL;
                int32_t l_775 = 0xFA191B7DL;
                int32_t l_776 = 0xEA408CCFL;
                int32_t l_777 = (-8L);
                int32_t l_778 = (-1L);
                int32_t l_779 = 6L;
                int32_t l_780 = 2L;
                int32_t l_781 = 1L;
                int32_t l_782[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_782[i] = 0x9834AF06L;
                l_783--;
            }
            if (l_697)
            {
                int64_t l_800 = 0x12A61A10A4CC85F3LL;
                int8_t ** const l_828[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int32_t l_829 = 1L;
                int32_t l_837 = 0x9D847EBFL;
                int32_t l_838 = (-6L);
                int32_t l_842 = 0xF7DC30C1L;
                int32_t l_843 = 0x37E784D6L;
                int32_t l_844 = 0L;
                int32_t l_845 = 0L;
                int32_t l_846 = 3L;
                int32_t l_847 = 0xEB06853AL;
                int32_t l_848 = 5L;
                int32_t l_849 = 0xC32F2981L;
                int32_t l_850 = 0xE89D5F31L;
                int32_t l_851 = 0x118B1AFAL;
                int32_t l_852[5][8][4] = {{{9L,1L,(-10L),0xC3DD831AL},{9L,0L,0xE7E4F8E1L,1L},{0x798BD9CEL,0xC3DD831AL,0x798BD9CEL,0xB1502F42L},{0xDA45A04CL,0xC3DD831AL,(-10L),1L},{0x028FD714L,0L,(-1L),0xC3DD831AL},{0x798BD9CEL,1L,(-1L),0xB1502F42L},{0x028FD714L,0xEE5D6715L,(-10L),0xEE5D6715L},{0xDA45A04CL,0L,0x798BD9CEL,0xEE5D6715L}},{{0x798BD9CEL,0xEE5D6715L,0xE7E4F8E1L,0xB1502F42L},{9L,1L,(-10L),0xC3DD831AL},{9L,0L,0xE7E4F8E1L,1L},{0x798BD9CEL,0xC3DD831AL,0x798BD9CEL,0xB1502F42L},{0xDA45A04CL,0xC3DD831AL,(-10L),1L},{0x028FD714L,0L,(-1L),0xC3DD831AL},{0x798BD9CEL,1L,(-1L),0xB1502F42L},{0x028FD714L,0xEE5D6715L,(-10L),0xEE5D6715L}},{{0xDA45A04CL,0L,0x798BD9CEL,0xEE5D6715L},{0x798BD9CEL,0xEE5D6715L,0xE7E4F8E1L,0xB1502F42L},{9L,1L,(-10L),0xC3DD831AL},{9L,0L,0xE7E4F8E1L,1L},{0x798BD9CEL,0xC3DD831AL,0x798BD9CEL,0xB1502F42L},{0xDA45A04CL,0xC3DD831AL,(-10L),1L},{0x028FD714L,0L,(-1L),0L},{0x204800B8L,0x262D226AL,(-10L),3L}},{{(-1L),0xB1502F42L,9L,0xB1502F42L},{0xE7E4F8E1L,0x1ADEB872L,0x204800B8L,0xB1502F42L},{0x204800B8L,0xB1502F42L,(-1L),3L},{0x798BD9CEL,0x262D226AL,9L,0L},{0x798BD9CEL,0x1ADEB872L,(-1L),0x262D226AL},{0x204800B8L,0L,0x204800B8L,3L},{0xE7E4F8E1L,0L,9L,0x262D226AL},{(-1L),0x1ADEB872L,(-10L),0L}},{{0x204800B8L,0x262D226AL,(-10L),3L},{(-1L),0xB1502F42L,9L,0xB1502F42L},{0xE7E4F8E1L,0x1ADEB872L,0x204800B8L,0xB1502F42L},{0x204800B8L,0xB1502F42L,(-1L),3L},{0x798BD9CEL,0x262D226AL,9L,0L},{0x798BD9CEL,0x1ADEB872L,(-1L),0x262D226AL},{0x204800B8L,0L,0x204800B8L,3L},{0xE7E4F8E1L,0L,9L,0x262D226AL}}};
                uint8_t *l_892[8][1];
                int32_t *l_984 = &l_850;
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_892[i][j] = &l_26;
                }
                if (l_683)
                {
                    int8_t l_799 = 0xA8L;
                    for (l_763 = 0; (l_763 == (-13)); l_763--)
                    {
                        int16_t *l_788 = &l_744;
                        l_681 = (((*l_788) ^= p_6) & ((safe_rshift_func_uint16_t_u_u(p_6, 0)) && (l_33 != 6L)));
                    }
                    for (l_687 = 0; (l_687 > 47); l_687++)
                    {
                        int32_t ** const l_798 = &l_737;
                        int32_t l_801 = 0x8C94B136L;
                        int8_t **l_827 = (void*)0;
                        int8_t ***l_826 = &l_827;
                        int16_t l_830 = 0x8906L;
                        l_801 = (safe_rshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((0x9F57179A1BE4B54FLL || (((p_4 , l_797) == l_798) <= 0UL)), (l_799 , l_800))), 7));
                        if (l_697)
                            continue;
                        l_830 &= (l_829 = ((safe_sub_func_int16_t_s_s((((0xD3L | ((!(((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s((l_711 == ((p_4 || (safe_mod_func_uint8_t_u_u(0xB2L, (safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((((safe_mod_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(1UL, (+3L))) <= (((((((p_6 >= (safe_rshift_func_int8_t_s_s((((0x9832L ^ (l_825 & p_6)) , l_826) != &l_827), 6))) , p_6) || l_799) , p_5) < l_741[1][0]) , (*l_766)) != l_828[1][1])) , 0xE9L), l_697)), l_799)) == l_801) != 0xFF53AA3D393B377ELL) ^ l_799), 0xD7L)) > l_677) & p_4) == l_799), l_681)), 0x38L))))) , &l_677)))), l_825)) ^ p_4) , p_5)) | p_4)) & l_800) < 0xB161A37C2C2B20A3LL), 0x754BL)) & p_5));
                    }
                }
                else
                {
                    int16_t l_835 = 0x7F87L;
                    int32_t l_836[6][3] = {{(-6L),(-6L),(-6L)},{0x9DA41130L,0x9DA41130L,0x9DA41130L},{(-6L),(-6L),(-6L)},{0x9DA41130L,0x9DA41130L,0x9DA41130L},{(-6L),(-6L),(-6L)},{0x9DA41130L,0x9DA41130L,0x9DA41130L}};
                    int i, j;
                    for (l_680 = 0; l_680 < 3; l_680 += 1)
                    {
                        for (l_800 = 0; l_800 < 1; l_800 += 1)
                        {
                            l_741[l_680][l_800] = 0xD2805C6FL;
                        }
                    }
                    l_686[5][7][0] = 0xC18C27F1L;
                    for (l_682 = 0; (l_682 < 5); l_682 = safe_add_func_uint16_t_u_u(l_682, 1))
                    {
                        int64_t l_833 = 0x134CC79A386F2469LL;
                        int32_t l_834 = 0xBE70BF05L;
                        l_834 = (l_833 |= l_800);
                    }
                    ++l_839;
                }
                l_853++;
                for (l_680 = (-11); (l_680 > 3); l_680 = safe_add_func_int32_t_s_s(l_680, 1))
                {
                    uint32_t *l_866 = &l_687;
                    int32_t l_881 = 0x9103649FL;
                    int32_t l_897 = 0x1C14850FL;
                    l_741[0][0] |= ((safe_div_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(p_4, p_6)) < (l_851 = ((l_685 = (-1L)) , ((safe_div_func_uint16_t_u_u(((p_5 == 252UL) | ((*l_692) |= (((safe_rshift_func_int16_t_s_s(p_5, 5)) ^ 0x7352L) , (l_682 == ((p_4 != (-2L)) >= 0UL))))), l_825)) == (-1L))))) , (-1L)), p_5)) ^ p_4);
                    l_685 = (((*l_866)++) , p_4);
                    for (l_800 = 7; (l_800 >= 0); l_800 -= 1)
                    {
                        int32_t *l_869[10] = {&l_741[0][0],&l_845,&l_845,&l_741[0][0],&l_683,&l_741[0][0],&l_845,&l_845,&l_741[0][0],&l_683};
                        int32_t **l_870 = (void*)0;
                        int32_t **l_871 = &l_679[4];
                        uint8_t *l_893 = &l_26;
                        int16_t *l_894 = &l_744;
                        uint16_t l_896 = 65526UL;
                        uint16_t *l_895[7][8][4] = {{{&l_896,&l_896,(void*)0,(void*)0},{&l_896,&l_896,&l_896,(void*)0},{&l_896,(void*)0,(void*)0,&l_896},{&l_896,&l_896,(void*)0,(void*)0},{&l_896,&l_896,&l_896,&l_896},{(void*)0,&l_896,&l_896,&l_896},{&l_896,(void*)0,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896}},{{&l_896,&l_896,&l_896,&l_896},{(void*)0,(void*)0,&l_896,&l_896},{&l_896,&l_896,(void*)0,&l_896},{&l_896,(void*)0,(void*)0,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,(void*)0,(void*)0},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896}},{{&l_896,&l_896,(void*)0,&l_896},{&l_896,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896},{(void*)0,&l_896,&l_896,&l_896},{&l_896,(void*)0,(void*)0,&l_896},{&l_896,&l_896,&l_896,&l_896},{(void*)0,(void*)0,&l_896,&l_896},{&l_896,&l_896,&l_896,(void*)0}},{{(void*)0,&l_896,&l_896,&l_896},{(void*)0,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896},{(void*)0,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896}},{{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896},{(void*)0,&l_896,(void*)0,&l_896}},{{(void*)0,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,(void*)0},{&l_896,&l_896,&l_896,&l_896},{(void*)0,&l_896,(void*)0,&l_896},{(void*)0,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,(void*)0,&l_896,&l_896}},{{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896},{(void*)0,(void*)0,&l_896,&l_896},{&l_896,&l_896,&l_896,&l_896}}};
                        int i, j, k;
                        (*l_871) = (l_869[3] = &l_680);
                        if (l_733[l_800][l_800])
                            break;
                        l_897 |= ((l_741[2][0] = (l_683 = (safe_sub_func_uint64_t_u_u((+((*l_752) ^= l_686[0][6][0])), (l_691 == ((1L > (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((l_881 , (**l_871)) <= (((((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_6, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_6, ((*l_894) &= (l_892[2][0] == l_893)))), 4)), l_881)))), p_6)) , l_881) > 0L) || 0UL) != l_852[1][1][1])) <= l_825), 255UL)) < 0xA9EEL), (-10L))), 5))) != p_6)))))) == l_829);
                        l_908 ^= (((p_4 == ((0x9A7D652DE85955B4LL > (((safe_lshift_func_uint16_t_u_s(((p_4 <= l_897) > p_4), (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_904 = l_697), p_6)), ((~((((((**l_871) & (safe_div_func_int8_t_s_s(((**l_767) = l_881), 0x85L))) | p_6) & 0x0977L) | p_6) | 9UL)) & l_851))))) || p_5) < l_842)) , p_6)) || p_5) != p_4);
                    }
                }
                for (l_851 = 0; (l_851 > 12); l_851 = safe_add_func_uint64_t_u_u(l_851, 7))
                {
                    uint64_t l_913 = 0x7D3493FC7ED3BDB2LL;
                    int64_t *l_923 = (void*)0;
                    int64_t *l_924 = (void*)0;
                    int64_t *l_925 = &l_800;
                    int32_t ****l_941 = &l_939;
                    int32_t l_967 = 0L;
                    l_685 = (((l_913 , (((l_917 = l_914) == (void*)0) != (safe_mod_func_int64_t_s_s(((*l_925) &= p_6), (safe_mul_func_int8_t_s_s(p_6, p_5)))))) <= ((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_5, (safe_lshift_func_int16_t_s_u((0x3CL >= (((~((*l_25) = 0xD7L)) , l_741[2][0]) & p_5)), 14)))), p_6)), 0x00C7L)), 0xD03E75EDE45FE884LL)) <= l_681)) & p_4);
                    l_850 |= (((*l_941) = l_939) == &l_797);
                    for (l_837 = (-24); (l_837 >= (-8)); ++l_837)
                    {
                        int16_t *l_965 = (void*)0;
                        int16_t *l_966[9] = {&l_744,&l_691,&l_691,&l_744,&l_691,&l_691,&l_744,&l_691,&l_691};
                        int32_t l_982 = 0x2D4DE997L;
                        int32_t **l_983[3][3][3] = {{{(void*)0,&l_679[4],&l_679[4]},{&l_679[0],(void*)0,&l_679[0]},{(void*)0,(void*)0,&l_679[4]}},{{&l_679[4],(void*)0,&l_679[4]},{(void*)0,&l_679[4],&l_679[4]},{&l_679[0],(void*)0,&l_679[0]}},{{(void*)0,(void*)0,&l_679[4]},{&l_679[4],(void*)0,&l_679[4]},{(void*)0,&l_679[4],&l_679[4]}}};
                        int i, j, k;
                        l_962 = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((+p_6), ((*l_700) = (safe_mul_func_int8_t_s_s(((**l_761) = ((safe_add_func_int16_t_s_s((l_967 = (l_852[1][1][1] = ((((((safe_mul_func_int8_t_s_s(((+l_24) > 0x0CD6F3E5FD22C764LL), 0L)) | (((safe_sub_func_uint16_t_u_u(l_741[0][0], p_4)) == ((safe_mul_func_int16_t_s_s(((l_962 || l_850) && 65535UL), l_683)) != l_33)) || 0UL)) , p_5) , (void*)0) == l_963) ^ p_4))), l_741[0][0])) && 18446744073709551610UL)), (-6L)))))), 0x0CL)), l_968[1]));
                        l_986 = (l_985[1][4][0] = (l_679[4] = (l_984 = func_46(&l_24, &l_853, (safe_rshift_func_int16_t_s_s(((-1L) < (safe_rshift_func_int8_t_s_s(p_5, (safe_rshift_func_uint16_t_u_u(0xC333L, (safe_rshift_func_uint8_t_u_s(((l_741[0][0] | ((p_5 != (((((*l_25)++) ^ (((l_967 = p_4) | (((p_6 != l_981) , p_4) || 0xB60D36F5L)) && 0UL)) , p_4) , p_4)) | l_982)) < l_838), 5))))))), p_5))))));
                        l_683 &= 0x0DA1742FL;
                    }
                }
            }
            else
            {
                for (l_33 = (-8); (l_33 <= 30); l_33++)
                {
                    uint64_t l_989 = 18446744073709551606UL;
                    l_989--;
                    for (l_683 = 0; (l_683 < (-22)); l_683--)
                    {
                        if (l_981)
                            break;
                    }
                }
                (*l_986) = l_839;
                return p_4;
            }
            --l_994;
            for (l_981 = 0; (l_981 == 42); l_981 = safe_add_func_uint32_t_u_u(l_981, 9))
            {
                uint32_t l_999[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_999[i] = 0x4A764429L;
                return l_999[1];
            }
        }
        else
        {
            uint64_t **l_1000 = (void*)0;
            uint64_t **l_1001 = &l_711;
            uint16_t *l_1003 = &l_908;
            int32_t **l_1004 = &l_679[4];
            int32_t l_1005 = 6L;
            int32_t l_1006 = 0xA67712CBL;
            int32_t *l_1010 = (void*)0;
            int16_t **l_1025 = &l_1024[5];
            int64_t l_1041[9][7] = {{0L,0x2B9504FF749C914ALL,(-5L),(-1L),(-5L),0x2B9504FF749C914ALL,0L},{0x58C38DF09A996EC1LL,3L,0L,0xA41C715D83C45BFDLL,(-1L),0x0B7406D70430CB20LL,0L},{(-1L),0L,(-2L),(-2L),0L,(-1L),0x58C38DF09A996EC1LL},{0x2B9504FF749C914ALL,(-2L),0L,0x58C38DF09A996EC1LL,0x2B9504FF749C914ALL,0L,0L},{(-2L),0x2B9504FF749C914ALL,4L,0x2B9504FF749C914ALL,(-2L),0L,0x58C38DF09A996EC1LL},{0xA41C715D83C45BFDLL,0L,0L,0x0B7406D70430CB20LL,(-2L),0x58C38DF09A996EC1LL,(-2L)},{(-1L),0x1B2AADA3260ED5C2LL,0x1B2AADA3260ED5C2LL,(-1L),0x2B9504FF749C914ALL,0x0B7406D70430CB20LL,0xA41C715D83C45BFDLL},{0xA41C715D83C45BFDLL,0x0B7406D70430CB20LL,0x2B9504FF749C914ALL,(-1L),0x1B2AADA3260ED5C2LL,0x1B2AADA3260ED5C2LL,(-1L)},{(-2L),0x58C38DF09A996EC1LL,(-2L),0x0B7406D70430CB20LL,0L,0L,0xA41C715D83C45BFDLL}};
            int64_t *l_1040 = &l_1041[2][6];
            uint32_t ***l_1110[1][3];
            int32_t *****l_1117 = &l_1114;
            uint32_t ***l_1119 = (void*)0;
            uint32_t ***l_1120 = (void*)0;
            uint8_t **l_1165[4][9][7] = {{{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0}},{{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25}},{{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0}},{{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0},{&l_25,&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0},{&l_25,&l_25,&l_25,&l_25,&l_25,&l_25,&l_25},{&l_25,(void*)0,(void*)0,&l_25,&l_25,(void*)0,(void*)0},{(void*)0,&l_25,(void*)0,&l_25,(void*)0,&l_25,(void*)0}}};
            const uint32_t **l_1189 = (void*)0;
            const uint32_t ***l_1188 = &l_1189;
            const uint32_t ****l_1187 = &l_1188;
            uint32_t ****l_1191 = &l_1108;
            uint32_t *****l_1190 = &l_1191;
            uint8_t l_1300 = 1UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1110[i][j] = &l_1055;
            }
            if ((&l_682 == ((*l_1004) = func_46(func_46(&l_24, ((*l_1001) = &l_839), l_683), l_1002[0][5], ((*l_1003) = l_981)))))
            {
                uint64_t l_1007 = 1UL;
                int32_t *l_1022 = (void*)0;
                l_1007--;
                l_1022 = func_46((l_23 = func_46(l_1010, l_1011, (**l_1004))), func_52((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_1003) = (p_4 || l_1007)), 4)), (safe_mod_func_uint8_t_u_u((p_4 | ((((((((safe_lshift_func_int16_t_s_s(l_839, (safe_mod_func_uint64_t_u_u((((*l_25) = p_5) >= (-6L)), 7L)))) & 0L) >= (**l_1004)) , &l_762) == &l_762) , p_5) , 2L) || 0x4511A4A7L)), 0xBFL)))), (**l_1004), p_6), l_685);
                l_1025 = l_1023;
                for (l_1006 = 4; (l_1006 >= 0); l_1006 -= 1)
                {
                    int64_t *l_1039 = (void*)0;
                    int i;
                    (*l_986) = (*l_986);
                    if (p_6)
                        break;
                    for (l_744 = 5; (l_744 >= 0); l_744 -= 1)
                    {
                        int32_t l_1042 = 0x35B21470L;
                        int i;
                        l_1042 = (((!(safe_div_func_int32_t_s_s((*l_986), (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(65533UL, (safe_rshift_func_int16_t_s_u((**l_1004), 9)))), (**l_1004)))))) == (((safe_lshift_func_int8_t_s_u(((***l_766) = (p_6 | ((l_1039 == l_1040) ^ ((l_1005 = (((l_1042 ^ ((0x199BL != p_6) & p_5)) , p_6) ^ p_4)) > (**l_1004))))), 5)) <= 0UL) , (**l_1004))) && 0L);
                    }
                }
            }
            else
            {
                int32_t ***l_1057 = &l_940;
                int32_t ****l_1058 = &l_939;
                int32_t * const ***l_1059 = (void*)0;
                int32_t ***l_1061 = &l_940;
                int32_t ****l_1060 = &l_1061;
                int8_t l_1072 = (-4L);
                int32_t l_1112 = 0L;
                for (l_685 = 0; (l_685 == (-1)); --l_685)
                {
                    uint8_t l_1047 = 1UL;
                    int32_t l_1048 = 0x026271ECL;
                    l_1048 = (safe_mul_func_int8_t_s_s((**l_1004), (0x9BC7L || ((l_1047 = (0L || l_681)) | (-9L)))));
                }
                if ((((p_4 != ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((l_1053 != l_1055), l_968[1])), 4)) ^ ((l_908 , l_1057) == ((*l_1060) = ((*l_1058) = l_1057))))) , ((p_6 , ((safe_div_func_uint32_t_u_u((p_4 , l_968[1]), p_4)) == p_6)) | l_33)) && l_839))
                {
                    int8_t l_1066[8] = {0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL};
                    int i;
                    for (l_682 = (-29); (l_682 > (-15)); l_682 = safe_add_func_uint64_t_u_u(l_682, 2))
                    {
                        uint16_t l_1067 = 0x4F17L;
                        if (p_5)
                            break;
                        --l_1067;
                    }
                    (**l_1004) ^= 0L;
                    for (p_5 = 23; (p_5 != 35); ++p_5)
                    {
                        int32_t ** const *l_1079 = &l_1004;
                        int32_t ** const **l_1078 = &l_1079;
                        (**l_1004) = (l_1072 <= (safe_rshift_func_uint8_t_u_s(p_4, 3)));
                        (*l_1078) = l_1075[0][3][0];
                        if (p_4)
                            break;
                    }
                }
                else
                {
                    uint32_t ***l_1089 = &l_1055;
                    uint16_t l_1092 = 0x96FCL;
                    const int16_t * const l_1094[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    const int16_t * const * const l_1093 = &l_1094[2];
                    uint32_t ****l_1107 = (void*)0;
                    int32_t ***l_1111 = &l_940;
                    int i;
                    if ((**l_1004))
                    {
                        const int16_t *l_1096 = &l_968[1];
                        const int16_t **l_1095 = &l_1096;
                        int32_t l_1097 = 0x9179A79DL;
                        l_686[2][1][0] &= ((+(safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(p_6, 8)) | (((*l_23) = (safe_mul_func_uint16_t_u_u(((((*l_986) , &l_1053) == l_1089) , (0UL == 0x8178EC1FL)), (safe_lshift_func_int16_t_s_u(((l_1092 , l_1093) == l_1095), l_1097))))) , p_6)), p_6)), l_1097))) ^ p_6);
                    }
                    else
                    {
                        const uint64_t l_1098 = 0xEB3120EE03F92789LL;
                        (*l_986) = (l_1098 < p_5);
                    }
                    l_1112 ^= (~((+(safe_mod_func_uint16_t_u_u((l_1092 , (0UL ^ (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_6 | ((l_1108 = (void*)0) != ((&p_6 != ((!(*l_986)) , (void*)0)) , l_1110[0][1]))), (l_683 = ((*l_1060) == l_1111)))), p_5)))), p_6))) & (**l_1004)));
                }
                l_1117 = l_1113;
            }
            (**l_1004) &= (((l_1121 = l_1118) == (l_1055 = l_1162)) , p_5);
            (*l_1004) = func_46(func_46(&p_4, ((*l_1001) = func_52((safe_lshift_func_int16_t_s_s((l_685 = ((*l_986) ^= ((**l_1023) &= (((**l_1004) , ((**l_1004) , (((0xE4L == p_6) , func_63((l_1166 = &l_26), ((*l_1001) = func_52((((*l_1040) = (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((p_5 >= (**l_1004)), (safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(((***l_766) = p_4), 0x28L)) , 0UL), p_4)) , p_6), 4L)))), (**l_1004))), p_6))) , p_4), p_6, p_4)))) != (*l_761)))) <= 18446744073709551611UL)))), (**l_1004))), p_6, p_6)), p_4), &l_981, (**l_1004));
            if (((safe_add_func_int64_t_s_s(((+((((safe_add_func_int16_t_s_s(p_4, (((safe_add_func_int16_t_s_s((8L > (&l_26 != (l_1166 = l_1166))), (((((*l_25) = (((l_1186 == ((*l_1190) = l_1187)) <= p_4) , ((safe_rshift_func_uint16_t_u_u((p_5 == (((*l_1040) = (((void*)0 != &l_1108) ^ p_6)) || (**l_1004))), p_5)) ^ 0xD017F85AL))) , (*l_766)) == (*l_766)) & 0x55L))) < p_4) != (**l_1004)))) || p_5) , (void*)0) != (void*)0)) , p_6), 0UL)) , p_4))
            {
                int8_t l_1209[8] = {0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L};
                int32_t *l_1214[4][3] = {{(void*)0,&l_904,&l_904},{&l_904,&l_24,&l_24},{(void*)0,&l_24,(void*)0},{&l_24,&l_904,&l_24}};
                int32_t l_1237[2];
                int32_t l_1250 = 5L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1237[i] = 0x9BD88F58L;
                for (l_682 = 0; (l_682 <= 18); l_682++)
                {
                    for (l_904 = (-22); (l_904 < 12); l_904 = safe_add_func_int64_t_s_s(l_904, 4))
                    {
                        return p_5;
                    }
                    for (l_33 = 0; l_33 < 9; l_33 += 1)
                    {
                        for (l_981 = 0; l_981 < 7; l_981 += 1)
                        {
                            l_1041[l_33][l_981] = 0x64708F377E97CF54LL;
                        }
                    }
                    if ((safe_add_func_uint8_t_u_u(249UL, ((*l_1166) = (safe_rshift_func_int16_t_s_s(((((*l_1003) &= (0xB654B751L & p_4)) || (((p_4 | (safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((l_1206 == (void*)0), ((safe_lshift_func_int16_t_s_s((p_5 && l_1209[5]), 10)) >= (l_1209[5] >= p_5)))), 1))) , p_5) | 0x75371C75370ED050LL)) == (**l_1004)), 4))))))
                    {
                        uint32_t ****l_1211 = &l_1110[0][1];
                        uint32_t *l_1218 = &l_783;
                        int32_t l_1221 = 0xAB724084L;
                        (**l_1004) = (!((*l_762) = (p_4 , (l_1211 != ((*l_1190) = l_1211)))));
                        l_1221 = (0x6DECB097L > ((p_5 == (safe_mod_func_uint16_t_u_u(0x26ACL, (((((-1L) & ((**l_1025) ^= (((***l_1114) = l_1214[1][2]) != ((safe_mul_func_int16_t_s_s(0x76A8L, ((0x91B1C7B6BEC249B4LL ^ (safe_unary_minus_func_uint16_t_u(65535UL))) == (((*l_1218)--) != (l_1221 ^ 3L))))) , &p_4)))) , (void*)0) != (*l_1113)) , p_4)))) & 0x9F44L));
                        return p_4;
                    }
                    else
                    {
                        return l_1209[1];
                    }
                }
                for (l_1005 = 0; (l_1005 == 12); l_1005 = safe_add_func_uint64_t_u_u(l_1005, 7))
                {
                    const int32_t * const *l_1226 = &l_1077;
                    const int32_t * const **l_1225[8] = {&l_1226,(void*)0,&l_1226,(void*)0,&l_1226,(void*)0,&l_1226,(void*)0};
                    const int32_t * const ***l_1224 = &l_1225[7];
                    int i;
                    (*l_1224) = &l_1004;
                    for (l_685 = (-12); (l_685 != 6); l_685 = safe_add_func_uint8_t_u_u(l_685, 9))
                    {
                        l_1250 |= (safe_mul_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((4294967289UL == (l_1237[1] ^= (safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_5, 0x09BCC700L)), 5)))), (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((**l_1004) , ((safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_4, p_6)) == (safe_lshift_func_uint8_t_u_u(((void*)0 != &l_1075[0][3][0]), 7))), (safe_mul_func_int8_t_s_s(0x87L, p_5)))) < (-3L))), p_4)), 0x2110L)))) | (**l_1004)) , 0xE0A0L), p_4));
                        return p_6;
                    }
                    (**l_1004) = 0xF44B3444L;
                }
                return p_4;
            }
            else
            {
                uint32_t l_1270 = 4294967295UL;
                uint32_t **l_1276 = &l_1056[7];
                uint64_t **l_1282 = (void*)0;
                int8_t *l_1295 = &l_763;
                int32_t l_1298 = (-6L);
                int32_t l_1299 = (-5L);
                int16_t *l_1374 = (void*)0;
                uint32_t l_1397 = 0xEDABC2BEL;
                (*l_986) = p_5;
                if ((((safe_mul_func_uint16_t_u_u(((*l_986) , (&l_1186 == l_1253)), (((0x91L >= ((((safe_mod_func_uint64_t_u_u(((((((void*)0 != (*l_1190)) < ((safe_mul_func_int16_t_s_s(((**l_1004) , l_1258), (safe_lshift_func_uint8_t_u_u((((0x1938DC71L ^ p_4) >= p_4) || 1UL), p_6)))) , 0xA7D7L)) , (**l_1004)) < 1L) , 0xADD534307BF62AE1LL), (**l_1004))) ^ 9L) , p_4) , (**l_1004))) < 0x08E25A6F99C144FALL) , l_1261))) ^ 0x203F11DD6AB5762BLL) ^ p_6))
                {
                    int16_t l_1268 = 0xC014L;
                    uint32_t **l_1275 = (void*)0;
                    int32_t l_1281 = 0x6BF83809L;
                    for (l_24 = 0; (l_24 <= (-4)); l_24--)
                    {
                        int64_t ***l_1267 = &l_1264[3][3];
                        int32_t l_1269[10][3] = {{0xA57EE12EL,0xAD6F09A0L,0xAD6F09A0L},{0xAD6F09A0L,0x56D7A1DDL,0x66DA37C9L},{0xA57EE12EL,0x56D7A1DDL,0xA57EE12EL},{0x45B73DD8L,0xAD6F09A0L,0x66DA37C9L},{0x45B73DD8L,0x45B73DD8L,0xAD6F09A0L},{0xA57EE12EL,0xAD6F09A0L,0xAD6F09A0L},{0xAD6F09A0L,0x56D7A1DDL,0x66DA37C9L},{0xA57EE12EL,0x56D7A1DDL,0xA57EE12EL},{0x45B73DD8L,0xAD6F09A0L,0x66DA37C9L},{0x45B73DD8L,0x45B73DD8L,0xAD6F09A0L}};
                        int i, j;
                        (*l_1267) = l_1264[3][4];
                        l_1269[3][1] = l_1268;
                        l_686[4][7][0] = l_1270;
                    }
                    for (l_908 = 0; (l_908 <= 0); l_908 += 1)
                    {
                        int32_t *l_1277 = &l_904;
                        uint16_t *l_1279 = (void*)0;
                        int32_t l_1283 = (-5L);
                        uint32_t *l_1296 = &l_733[4][1];
                        uint32_t *l_1297 = &l_33;
                    }
                }
                else
                {
                    int32_t l_1303 = 0L;
                    for (p_5 = 0; (p_5 <= 6); p_5 += 1)
                    {
                        int i;
                        if (l_968[p_5])
                            break;
                        return l_1303;
                    }
                    (*l_986) = ((safe_mod_func_uint64_t_u_u((l_1303 = 18446744073709551615UL), (safe_lshift_func_uint16_t_u_u((!(*l_986)), 6)))) <= (safe_lshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((*l_1003) = ((((-1L) | (**l_1004)) >= ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_4, (p_4 || p_4))), 0UL)) <= ((((*l_1265) = ((void*)0 != (**l_1117))) , l_1317) && p_6))) , p_4)), p_4)) | p_4) > p_4), (**l_1004))));
                    if (((((safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((void*)0 == &p_4), (0x23B406D3L ^ ((*l_986) ^= (l_1299 >= (safe_unary_minus_func_int16_t_s((((l_1298 <= (safe_unary_minus_func_int16_t_s(l_1299))) & ((l_1303 , (((((((-10L) && ((((((safe_lshift_func_uint8_t_u_s(((*l_1166) = l_1270), 7)) != p_4) && p_5) , p_6) , p_4) || l_1303)) >= p_4) ^ 0x19L) >= 7L) <= 0x85L) | p_6)) ^ (**l_1004))) < p_5)))))))) || l_1299), p_4)) , p_6) != l_1298) ^ l_1303))
                    {
                        int32_t *l_1326 = &l_682;
                        (*l_1076) = l_1326;
                    }
                    else
                    {
                        (*l_986) |= 0xC822EF05L;
                        return l_1299;
                    }
                }
                for (l_908 = 0; (l_908 <= 32); ++l_908)
                {
                    uint64_t l_1343 = 0x7830ACE3DAD81E65LL;
                    int64_t ***l_1377 = &l_1264[4][1];
                    uint16_t *l_1378 = &l_732;
                    int32_t * const **l_1383[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1383[i] = (void*)0;
                    for (l_680 = (-5); (l_680 < 13); ++l_680)
                    {
                        uint64_t l_1337 = 18446744073709551615UL;
                        uint32_t l_1338 = 1UL;
                        uint16_t *l_1349 = &l_732;
                        int32_t l_1352[5][4][6] = {{{0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L},{0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L,0x4EF22F20L},{0L,0L,0x9D4A6AA4L,2L,0x4EF22F20L,0x9D4A6AA4L},{0x4EF22F20L,0L,0x85252D33L,0x85252D33L,0L,0x4EF22F20L}},{{0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L},{2L,0x4EF22F20L,0x4EF22F20L,2L,0L,2L},{2L,0L,2L,0x4EF22F20L,0x4EF22F20L,2L},{0x9D4A6AA4L,0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L}},{{0x4EF22F20L,0L,0x85252D33L,0x85252D33L,0L,0x4EF22F20L},{0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L},{2L,0x4EF22F20L,0x4EF22F20L,2L,0L,2L},{2L,0L,2L,0x4EF22F20L,0x4EF22F20L,2L}},{{0x9D4A6AA4L,0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L},{0x4EF22F20L,0L,0x85252D33L,0x85252D33L,0L,0x4EF22F20L},{0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L},{2L,0x4EF22F20L,0x4EF22F20L,2L,0L,2L}},{{2L,0L,2L,0x4EF22F20L,0x4EF22F20L,2L},{0x9D4A6AA4L,0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L},{0x4EF22F20L,0L,0x85252D33L,0x85252D33L,0L,0x4EF22F20L},{0x9D4A6AA4L,0x4EF22F20L,0x85252D33L,0x4EF22F20L,0x9D4A6AA4L,0x9D4A6AA4L}}};
                        int i, j, k;
                        (*l_986) |= (safe_add_func_uint16_t_u_u((0xDFL & (((**l_1023) = (safe_div_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((l_1337 , (0x73BAL | (p_4 != (p_6 & (l_1338 , ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0UL, l_1338)), ((p_5 == 0x59L) && p_5))) ^ (**l_1004))))))) , 0x424AL), p_6)) != 0x2A52AF9F23B8C866LL), 1UL))) != 0x4189L)), (-8L)));
                        l_1343 |= ((*l_986) &= l_1270);
                        (*l_986) ^= (((*l_737) = 0x9EB07BC7L) , (!(safe_sub_func_int64_t_s_s(p_4, (safe_add_func_uint16_t_u_u(((*l_1349) = (p_5 < p_5)), (safe_mul_func_uint16_t_u_u((p_5 != 0x7DL), ((**l_1025) = p_5)))))))));
                        l_1352[2][0][3] |= (*l_986);
                    }
                    for (l_681 = 0; (l_681 <= 0); l_681 += 1)
                    {
                        int32_t l_1355 = 0x195096DEL;
                        uint32_t *l_1364 = &l_33;
                        int i, j;
                        (**l_1004) = (p_4 , (l_1343 , (p_6 > (safe_add_func_uint8_t_u_u(((**l_1004) > (l_1355 < ((**l_1023) = ((l_1355 >= ((*l_1364) = ((((safe_lshift_func_uint8_t_u_s((--(*l_25)), 6)) >= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((p_5 , (((((l_1110[l_681][l_681] = l_1110[l_681][(l_681 + 2)]) == ((*l_1191) = &l_1162)) | p_4) && l_1298) >= 0x0CBC6E71L)) >= l_1355), (**l_1004))), (*l_986)))) < p_5) & p_5))) , p_4)))), (**l_1004))))));
                        l_1365[7] = &l_766;
                    }
                    (**l_1004) = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((**l_1004), (safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(((l_1374 = (void*)0) != (void*)0), ((*l_1378) = (safe_rshift_func_int8_t_s_u(((p_4 , &l_1040) != ((*l_1377) = &l_1265)), 4))))), (p_5 , (safe_add_func_uint32_t_u_u(p_6, (((safe_mod_func_int16_t_s_s(((void*)0 != l_1383[0]), p_4)) <= l_1298) == p_5)))))))), 0xF09A700BL));
                    l_1299 &= (safe_mul_func_int16_t_s_s(p_6, (safe_mod_func_int64_t_s_s((+(-1L)), 0x6B9518DB6EF9FBF4LL))));
                }
                (*l_986) = ((p_4 != 65526UL) <= (safe_div_func_uint64_t_u_u((p_5 = p_6), ((safe_mod_func_int16_t_s_s(p_4, (l_1299 ^= (safe_lshift_func_uint8_t_u_u(p_6, ((safe_sub_func_int16_t_s_s((l_1397 && ((*l_986) != (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint64_t_u_u(0x53247897DD0A7C3BLL, l_1270)) > l_1270) || p_4) <= 6L), 15)))), p_6)) < p_4)))))) ^ p_4))));
            }
        }
    }
    else
    {
        for (l_683 = 0; (l_683 == 29); ++l_683)
        {
            int16_t l_1404 = 9L;
            return l_1404;
        }
    }
    (*l_1417) = (safe_mul_func_uint8_t_u_u(p_4, (((((*l_1407) |= 0x986F3563L) | ((*l_1416) &= ((l_686[2][1][0] = 0x89A826EFL) , (safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((l_1411 != l_1411), ((**l_761) = (1L | (safe_mul_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((((p_6 < p_5) != p_6) , p_6), 0xBB7B1618A19BF7F8LL)) != 0x9239L), 0xB79DL))))))))))) ^ p_6) ^ p_6)));
    (*l_1407) ^= (-1L);
    if (((l_1418 == l_1418) | (safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(((*l_1011) = p_6), ((safe_rshift_func_int16_t_s_s(((p_4 , func_46((p_5 , func_46((*l_1116), l_1425[0][3], p_4)), &l_839, (*l_1417))) != &l_33), (*l_1407))) || 0x2AB2L))), (*l_1407)))))
    {
        uint64_t l_1436 = 0x91EFC0E89D02E332LL;
        int32_t l_1456 = 1L;
        uint8_t **l_1484 = &l_25;
        uint32_t ***l_1518 = &l_1162;
        uint32_t ****l_1517 = &l_1518;
        int32_t l_1552 = 0xFDC3CF38L;
        int64_t l_1579 = (-1L);
        int64_t *l_1578 = &l_1579;
        int32_t l_1591[5] = {0x107C0817L,0x107C0817L,0x107C0817L,0x107C0817L,0x107C0817L};
        int16_t l_1626 = 0x8CCDL;
        uint32_t l_1629 = 0xABE0E86CL;
        int32_t ***l_1636 = (void*)0;
        int32_t * const *l_1638[3][1];
        int32_t * const * const *l_1637 = &l_1638[1][0];
        int32_t *l_1653 = &l_24;
        uint8_t *l_1654 = &l_1602;
        uint64_t **l_1657 = &l_1425[0][3];
        uint64_t ***l_1658 = &l_1657;
        int8_t ****l_1663[4] = {&l_1432,&l_1432,&l_1432,&l_1432};
        uint64_t **l_1664 = &l_676;
        int8_t l_1674 = 0L;
        int32_t *l_1721 = &l_681;
        int64_t l_1746 = 0x7AB838C779B2311ALL;
        uint16_t *l_1766 = &l_908;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1638[i][j] = &l_1417;
        }
        for (p_5 = 26; (p_5 > 60); p_5 = safe_add_func_uint16_t_u_u(p_5, 7))
        {
            int8_t ***l_1430 = (void*)0;
            int8_t ****l_1429 = &l_1430;
            int32_t l_1440[5];
            uint16_t *l_1457 = &l_732;
            int32_t l_1465 = 6L;
            int32_t l_1470[2];
            const int64_t *l_1580 = &l_1579;
            uint8_t l_1617 = 0x12L;
            int32_t *l_1620 = (void*)0;
            int32_t *l_1621 = &l_682;
            int32_t *l_1622 = &l_686[2][1][0];
            int32_t *l_1623 = &l_686[0][3][0];
            int32_t *l_1624[8] = {&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456};
            int i;
            for (i = 0; i < 5; i++)
                l_1440[i] = 0x1D331731L;
            for (i = 0; i < 2; i++)
                l_1470[i] = 0L;
            (*l_1417) = (-1L);
            (*l_1417) = (((((~((*l_676) = (l_1429 != (l_1431 = l_1431)))) | (safe_div_func_uint8_t_u_u((++l_1436), (~1L)))) == l_1440[1]) < ((safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((void*)0 != &l_1186), 0xEB89L)), (safe_sub_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((((*l_1457) = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((~p_5), l_1456)), p_4))) ^ (*l_1407)), p_4)) >= 1UL) , 0xFFL), p_5)))), 0)) ^ l_1440[2])) & p_5);
            for (l_839 = 0; (l_839 <= 5); l_839 += 1)
            {
                int32_t *l_1458 = &l_686[2][1][0];
                int32_t l_1464[7] = {0xCAE2AE3CL,0xCAE2AE3CL,0xFD136FF2L,0xCAE2AE3CL,0xCAE2AE3CL,0xFD136FF2L,0xCAE2AE3CL};
                uint32_t l_1477[8][5] = {{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL},{8UL,0xEEF498E3L,0xC8C8BF74L,0xEEF498E3L,8UL}};
                uint32_t l_1497[7][3][8] = {{{0xCFD72FD5L,0x0967340DL,0x86C14C20L,0x0967340DL,0xCFD72FD5L,6UL,18446744073709551609UL,0x0CB99B52L},{8UL,0xE537F734L,0xAC4B4410L,0x14AA10CAL,18446744073709551611UL,0xF468F0C1L,0x4CCE2300L,0x0967340DL},{0x75C72594L,0x0CB99B52L,0xAC4B4410L,18446744073709551615UL,0xDD68A237L,0xDA7B0B59L,18446744073709551609UL,1UL}},{{0x4CCE2300L,18446744073709551615UL,8UL,0x0967340DL,8UL,18446744073709551615UL,0x4CCE2300L,1UL},{0x4DF94466L,0xF468F0C1L,0x86C14C20L,0xE537F734L,18446744073709551609UL,0x0967340DL,0xAC4B4410L,18446744073709551608UL},{0x75C72594L,0x14AA10CAL,0x4CCE2300L,0x0CB99B52L,18446744073709551609UL,6UL,0xCFD72FD5L,0x0967340DL}},{{0x4DF94466L,18446744073709551608UL,0x52235D96L,18446744073709551608UL,8UL,18446744073709551608UL,0x52235D96L,18446744073709551608UL},{0x4CCE2300L,18446744073709551608UL,0xAC4B4410L,0xDA7B0B59L,0x86C14C20L,6UL,1UL,0xE537F734L},{0xAC4B4410L,0x14AA10CAL,18446744073709551611UL,0xF468F0C1L,0x4CCE2300L,0x0967340DL,1UL,18446744073709551607UL}},{{0xCFD72FD5L,0xF468F0C1L,0xAC4B4410L,6UL,0x52235D96L,18446744073709551615UL,0x52235D96L,6UL},{0x52235D96L,18446744073709551615UL,0x52235D96L,6UL,0xAC4B4410L,0xF468F0C1L,0xCFD72FD5L,18446744073709551607UL},{1UL,0x0967340DL,0x4CCE2300L,0xF468F0C1L,18446744073709551611UL,0x14AA10CAL,0xAC4B4410L,0xE537F734L}},{{1UL,6UL,0x86C14C20L,0xDA7B0B59L,0xAC4B4410L,18446744073709551608UL,0x4CCE2300L,18446744073709551608UL},{0x52235D96L,18446744073709551608UL,8UL,18446744073709551608UL,0x52235D96L,18446744073709551608UL,0x4DF94466L,0x0967340DL},{0xCFD72FD5L,6UL,18446744073709551609UL,0x0CB99B52L,0x4CCE2300L,0x14AA10CAL,0x75C72594L,18446744073709551608UL}},{{0xAC4B4410L,0x0967340DL,18446744073709551609UL,0xE537F734L,0x86C14C20L,0xF468F0C1L,0x4DF94466L,1UL},{0x4CCE2300L,18446744073709551615UL,8UL,0x0967340DL,8UL,18446744073709551615UL,0x4CCE2300L,1UL},{0x4DF94466L,0xF468F0C1L,0x86C14C20L,0xE537F734L,18446744073709551609UL,0x0967340DL,0xAC4B4410L,18446744073709551608UL}},{{0x75C72594L,0x14AA10CAL,0x4CCE2300L,0x0CB99B52L,18446744073709551609UL,6UL,0xCFD72FD5L,0x0967340DL},{0x4DF94466L,18446744073709551608UL,0x52235D96L,18446744073709551608UL,8UL,18446744073709551608UL,0x52235D96L,18446744073709551608UL},{0x4CCE2300L,18446744073709551608UL,0xAC4B4410L,0xDA7B0B59L,0x86C14C20L,6UL,1UL,0xE537F734L}}};
                uint32_t l_1498 = 4294967289UL;
                int8_t ***l_1509 = &l_1433[2];
                int32_t l_1590 = 0xFD6CA55AL;
                int32_t l_1611 = 0x9A406584L;
                int32_t l_1612 = 9L;
                int32_t l_1614[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1614[i] = 0x41F8EBE2L;
                (*l_1076) = l_1458;
            }
            l_1629++;
        }
        (*l_1407) &= ((***l_1637) = (l_1626 , (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((l_1636 != l_1637), 0)), 10)) , (((p_4 ^ ((++(**l_1484)) || ((**l_761) |= (safe_mul_func_uint8_t_u_u(((*l_1654) = (((((*l_1653) = (safe_lshift_func_uint8_t_u_u(((void*)0 != (**l_1113)), ((**l_1484) = (safe_mod_func_int8_t_s_s(((((safe_sub_func_int64_t_s_s((((safe_add_func_int16_t_s_s(((0L | (p_6 , (safe_mul_func_uint16_t_u_u((p_6 && 0x9C0543C2L), p_6)))) > 0UL), p_6)) > 0x578AL) <= 0xB525L), p_4)) && p_6) && (*l_1417)) < p_5), p_6)))))) , &p_6) == (***l_1517)) >= 0x0203C09CL)), p_5))))) || p_4) == p_5)) , p_4)));
        if ((safe_div_func_uint8_t_u_u(((((((*l_1658) = l_1657) == ((((((*l_1407) , (((((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((void*)0 == &l_1432), ((void*)0 != &l_1602))), p_4)) , &l_1432) == l_1663[0]) , 0x66DBD86DL) >= p_6)) < 0x797817471BF513C7LL) || p_5) >= 0x4EE957A041593056LL) , l_1664)) != p_4) ^ 1UL) <= p_4), p_6)))
        {
            int32_t l_1668 = 0xA2E63FA1L;
            int32_t l_1669 = 0xED8FE2D3L;
            int32_t l_1670[5][9][5] = {{{8L,0L,0xD8D5B14CL,0x706A4888L,0xA85CBA24L},{0xDE4B6672L,0xB5CDDED8L,(-1L),1L,8L},{0xD8D5B14CL,0x0D99C6FBL,0x0D99C6FBL,0xD8D5B14CL,9L},{0xB3FF1AE9L,0L,0L,1L,7L},{0x133B1E61L,0L,0xF994A488L,0xD3969FC9L,(-1L)},{0L,0x2C6476D1L,0x19B5DC52L,1L,1L},{0L,6L,(-3L),0xD8D5B14CL,0x3A0F553AL},{0xEB620EFBL,0xDF2897A9L,3L,1L,(-2L)},{(-1L),0L,0xED7451ABL,0x706A4888L,(-1L)}},{{0x8A60B0A4L,0L,0xF70CF56AL,0x5A6E1487L,0xD8D5B14CL},{1L,0x213C8128L,0xF994A488L,6L,0x3A0F553AL},{0L,7L,0x213C8128L,0x3A0F553AL,6L},{8L,1L,0x6410521CL,0x8A60B0A4L,0xA21BCEA9L},{8L,3L,1L,0xD3969FC9L,0L},{0L,(-1L),0L,0L,0xF3F49819L},{1L,1L,0L,0x6D80EC9DL,(-10L)},{0x8A60B0A4L,0xF70CF56AL,6L,0xB3FF1AE9L,0x81ECA834L},{0x1F4E1C17L,0xD3969FC9L,5L,1L,1L}},{{1L,0x0A85C0A8L,1L,0x5454F71DL,0L},{6L,0x0D99C6FBL,9L,0L,8L},{7L,0x34F11630L,0xB5CDDED8L,0x364D9FF8L,6L},{(-1L),0L,9L,8L,0L},{0x6410521CL,(-1L),1L,5L,0xDF2897A9L},{0xF3F49819L,0x133B1E61L,5L,(-1L),9L},{1L,0L,6L,0xEB620EFBL,1L},{0L,0xB5CDDED8L,0L,(-1L),0xB3FF1AE9L},{0x6AE8985CL,(-10L),0L,0xDF2897A9L,0xD0DFAF46L}},{{0x5A6E1487L,0x5454F71DL,1L,0x34F11630L,1L},{0x34F11630L,0L,0x6410521CL,0x986B8379L,1L},{5L,0xD8D5B14CL,0x213C8128L,0x1F4E1C17L,0xD0DFAF46L},{0x6D80EC9DL,0x1F4E1C17L,0xF994A488L,0x0A85C0A8L,0xB3FF1AE9L},{0xB5CDDED8L,0xD0DFAF46L,0xF70CF56AL,0x706A4888L,1L},{0xCD01B18CL,8L,0x8A60B0A4L,(-1L),9L},{0L,(-1L),0xDF2897A9L,0x2C6476D1L,0xDF2897A9L},{1L,1L,0xCD01B18CL,0L,0L},{0xEB620EFBL,0xCD01B18CL,0xED7451ABL,0x494401B6L,6L}},{{0x2C6476D1L,6L,0x706A4888L,0x6AE8985CL,8L},{0xF994A488L,0xCD01B18CL,0x2C6476D1L,0xA21BCEA9L,0L},{0L,1L,(-2L),0L,1L},{8L,(-1L),0x0A85C0A8L,1L,0x81ECA834L},{0x706A4888L,8L,0xF3F49819L,0L,(-10L)},{(-1L),0xD0DFAF46L,(-1L),1L,0xF3F49819L},{0L,0x1F4E1C17L,0x0D99C6FBL,0L,0L},{1L,0xD8D5B14CL,0L,0xF994A488L,0xA21BCEA9L},{0L,0L,0L,0xF994A488L,6L}}};
            int32_t l_1717 = 0x116DB950L;
            uint8_t ***l_1718 = &l_1484;
            const int32_t l_1719 = (-1L);
            int32_t *l_1720[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1720[i] = &l_682;
            for (l_681 = 0; (l_681 >= (-18)); l_681 = safe_sub_func_int64_t_s_s(l_681, 3))
            {
                int32_t l_1667[3];
                int32_t l_1671 = (-1L);
                int32_t l_1672 = 1L;
                int32_t l_1673 = 0x6EDB72DBL;
                int32_t l_1675 = (-9L);
                int32_t l_1676 = (-3L);
                uint64_t *l_1680 = &l_1436;
                int32_t **l_1695 = &l_1407;
                int i;
                for (i = 0; i < 3; i++)
                    l_1667[i] = 0x063DA737L;
                l_1677--;
                (*l_1407) = 0L;
                (***l_1637) = (*l_1407);
                (*l_1076) = ((*l_1695) = func_46(&l_1668, l_1680, (l_1676 = (l_1671 ^= ((p_5 = (((!(~l_1675)) > (&l_1680 != ((*l_1658) = (*l_1658)))) , (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((~((safe_add_func_uint16_t_u_u(p_5, ((((((safe_sub_func_int16_t_s_s((&l_1186 == (void*)0), ((safe_mod_func_uint16_t_u_u(((l_1672 > p_6) , 65535UL), l_1669)) || 0x646FL))) ^ l_1676) | l_1668) ^ p_4) , p_5) , l_1669))) ^ 7L)) ^ p_4), (*l_1407))), l_1694)))) ^ 1L)))));
            }
            l_1670[1][0][1] |= ((safe_add_func_uint64_t_u_u((p_4 , l_1669), (((((((((((((safe_sub_func_uint16_t_u_u(0UL, ((safe_unary_minus_func_uint16_t_u((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((*l_1416)--), (safe_sub_func_int64_t_s_s(((((*l_1718) = ((0L <= ((safe_add_func_uint32_t_u_u((&l_1657 == (void*)0), ((safe_mul_func_uint16_t_u_u((p_6 >= (safe_mod_func_uint64_t_u_u(((safe_div_func_int32_t_s_s(7L, 1L)) != (*l_1417)), 0x699DE3DEC693A786LL))), 0xAFF1L)) , l_1717))) , 0x86L)) , (void*)0)) == &l_25) && p_4), p_6)))), l_1717)))) < 0x0D9CL))) > p_6) & p_5) || p_5) != p_6) , 0xACCF9041FA9F361BLL) | (-3L)) , l_1719) < 0xF50B82D5C42CE921LL) < p_6) , 1UL) || p_6) < 248UL))) >= 0x1B1D5FAEL);
            l_1721 = (l_1720[2] = &l_1717);
        }
        else
        {
            int32_t l_1740 = 6L;
            int32_t l_1743 = 0xE53FC5E5L;
            int16_t *l_1744 = (void*)0;
            int16_t *l_1745[2][5][4] = {{{&l_968[1],&l_968[0],&l_968[1],&l_968[1]},{&l_968[0],&l_968[0],&l_1317,&l_968[0]},{&l_968[0],&l_968[1],&l_968[1],&l_968[1]},{&l_1317,&l_968[1],&l_1317,&l_1317},{&l_968[1],&l_968[1],&l_968[0],&l_968[1]}},{{&l_968[1],&l_1317,&l_1317,&l_968[1]},{&l_1317,&l_968[1],&l_1317,&l_1317},{&l_968[1],&l_968[1],&l_968[0],&l_968[1]},{&l_968[1],&l_1317,&l_1317,&l_968[1]},{&l_1317,&l_968[1],&l_1317,&l_1317}}};
            int32_t l_1747 = 1L;
            int32_t l_1748 = (-4L);
            uint32_t l_1749 = 0x6A271572L;
            uint8_t l_1752 = 0xC4L;
            int i, j, k;
            l_1747 &= (((p_5 == (safe_sub_func_int64_t_s_s(((!(safe_mod_func_int16_t_s_s(((*l_1721) = ((safe_mul_func_uint16_t_u_u(((*l_1721) & p_4), (l_1743 = ((*l_1407) >= ((((((((***l_1637) = p_5) || (((!(safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((((((safe_div_func_uint64_t_u_u(l_1740, (safe_add_func_uint16_t_u_u((l_1740 > l_1743), 0x2E76L)))) >= p_5) | 3L) <= p_4) || 65532UL) , 0xC6A6L) | 0x1FF6L), l_1740)), 4)), 0))) , 0xDA8EBDA06F15BDFELL) >= p_6)) , l_1743) ^ p_6) , p_6) != 0xDAD3L) | 3L))))) && (-10L))), p_5))) > p_5), l_1746))) || p_5) != 0xCBL);
            l_1749++;
            l_1752--;
        }
        for (l_1694 = 0; (l_1694 <= 3); l_1694 += 1)
        {
            int32_t l_1763 = 8L;
            const uint16_t l_1769 = 0UL;
            const uint16_t *l_1768 = &l_1769;
            const uint16_t **l_1767[4][8][8] = {{{(void*)0,(void*)0,(void*)0,&l_1768,&l_1768,(void*)0,(void*)0,&l_1768},{(void*)0,&l_1768,&l_1768,(void*)0,&l_1768,(void*)0,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768,&l_1768},{(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768},{&l_1768,&l_1768,(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768}},{{&l_1768,&l_1768,(void*)0,&l_1768,&l_1768,(void*)0,&l_1768,(void*)0},{(void*)0,&l_1768,&l_1768,&l_1768,(void*)0,(void*)0,&l_1768,&l_1768},{&l_1768,(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768},{(void*)0,&l_1768,(void*)0,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768},{(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{(void*)0,(void*)0,(void*)0,&l_1768,&l_1768,(void*)0,(void*)0,&l_1768}},{{(void*)0,&l_1768,&l_1768,(void*)0,&l_1768,(void*)0,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768,&l_1768},{(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768},{&l_1768,(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,(void*)0},{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768},{&l_1768,(void*)0,&l_1768,(void*)0,&l_1768,&l_1768,&l_1768,&l_1768}},{{&l_1768,(void*)0,&l_1768,(void*)0,&l_1768,&l_1768,(void*)0,&l_1768},{(void*)0,&l_1768,&l_1768,&l_1768,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,(void*)0,&l_1768},{(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,(void*)0,&l_1768},{&l_1768,&l_1768,&l_1768,(void*)0,(void*)0,(void*)0,(void*)0,&l_1768},{&l_1768,&l_1768,&l_1768,&l_1768,(void*)0,&l_1768,&l_1768,(void*)0},{&l_1768,(void*)0,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,(void*)0}}};
            uint16_t *l_1771 = (void*)0;
            uint16_t **l_1770 = &l_1771;
            int16_t *l_1776 = (void*)0;
            int16_t *l_1777 = &l_1317;
            int16_t *l_1778 = &l_691;
            int16_t **l_1781 = &l_1776;
            int16_t *** const l_1780 = &l_1781;
            uint32_t *l_1782 = &l_1677;
            int32_t l_1783 = 0x39659C4AL;
            uint16_t l_1800 = 1UL;
            int8_t ***l_1814 = &l_1433[2];
            int32_t ****l_1817 = &l_1636;
            uint8_t l_1822[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1822[i] = 0xF7L;
            (***l_1113) = &l_1653;
            l_1783 &= (((l_1763 = ((***l_1637) = (p_4 != (((((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((~(((*l_762) &= (safe_lshift_func_uint8_t_u_s((~p_6), ((0x0CBDL > (&l_1653 == &l_1653)) , l_1763)))) > ((((((safe_sub_func_uint64_t_u_u((((l_1766 == ((*l_1770) = l_1766)) != ((*l_1778) = (((safe_add_func_uint64_t_u_u((((*l_1777) = (safe_rshift_func_uint16_t_u_u(0x9DDAL, 6))) != 0xADDEL), p_6)) < 0x44FFC7FFL) <= (-6L)))) | (***l_1637)), p_6)) , l_1779) == l_1780) <= p_5) , p_4) | 0xF44F1F3AL))), p_4)) ^ p_6), 3)) && p_4) & 0xA137L) , l_1782) == (**l_1518))))) ^ (-3L)) <= p_5);
            if ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((((safe_mod_func_int64_t_s_s(((((**l_761) = (-5L)) , (p_5 = ((~((*l_1654) ^= (((*l_1777) = p_5) <= ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s((safe_mul_func_uint16_t_u_u((p_4 || ((*l_25) &= ((~4294967294UL) <= (255UL < ((***l_1637) = (0x53L | (((1L > 1L) ^ ((!p_6) < l_1800)) | p_5))))))), l_1783)))), l_1801)) || l_1769), 6)) ^ l_1783)))) != 0x84B3L))) <= p_6), l_1800)) ^ 0x20EBL) || (-1L)) && l_1783), 5)) == l_1763), p_4)))
            {
                int8_t l_1802[1][5][6] = {{{1L,0x78L,(-9L),0x78L,1L,1L},{0xF7L,0x19L,1L,8L,0x78L,0xB8L},{0xB8L,7L,0x19L,0x19L,7L,0xB8L},{8L,0xBBL,1L,1L,0xB8L,1L},{7L,0xF7L,(-9L),0xB8L,(-9L),0xF7L}}};
                int i, j, k;
                return l_1802[0][0][5];
            }
            else
            {
                uint16_t l_1804 = 65532UL;
                int32_t l_1805[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                int i;
                l_1805[0] = (safe_unary_minus_func_int64_t_s(l_1804));
            }
            (*l_1417) = (((safe_mod_func_int64_t_s_s((safe_add_func_uint8_t_u_u(p_4, (safe_div_func_uint16_t_u_u((l_1814 == (void*)0), 0xA40AL)))), ((safe_div_func_uint64_t_u_u(((((*l_1817) = &l_1638[1][0]) == &l_1076) <= (&l_1432 != l_1663[1])), ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_1822[1], 0x1AL)), p_6)) , l_1783))) & p_5))) != p_4) == 0L);
        }
    }
    else
    {
        uint32_t l_1831 = 0x4182A56EL;
        int32_t l_1850 = 1L;
        int32_t l_1851[7] = {0xDA2EAC6DL,0xA2C0AD40L,0xDA2EAC6DL,0xDA2EAC6DL,0xA2C0AD40L,0xDA2EAC6DL,0xDA2EAC6DL};
        int16_t l_1852 = 1L;
        uint32_t ***l_1903 = (void*)0;
        int32_t * const **l_1930 = (void*)0;
        int32_t * const ***l_1929[9][10] = {{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930,&l_1930}};
        int32_t **l_1934 = &l_1417;
        uint32_t l_1962 = 0x4664FB67L;
        int32_t l_1999 = (-6L);
        int64_t l_2008 = 0xF7E02FB2A852E090LL;
        uint64_t *l_2090 = &l_839;
        const uint32_t *l_2100 = &l_1125;
        const uint32_t **l_2099[1][3][3] = {{{&l_2100,&l_2100,&l_2100},{&l_2100,&l_2100,&l_2100},{&l_2100,&l_2100,&l_2100}}};
        int16_t l_2158 = 0L;
        int16_t l_2163 = 1L;
        int32_t l_2165[10] = {(-9L),(-9L),4L,(-9L),(-9L),4L,(-9L),(-9L),4L,(-9L)};
        uint8_t ***l_2183 = &l_2182;
        uint64_t **l_2203 = &l_676;
        uint64_t ***l_2202 = &l_2203;
        const uint32_t ***l_2222 = &l_2099[0][2][2];
        const uint32_t ****l_2221 = &l_2222;
        const uint32_t *****l_2220 = &l_2221;
        int8_t **l_2230 = &l_762;
        int16_t ***l_2231[5][1];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_2231[i][j] = &l_1997;
        }
        for (l_685 = 0; (l_685 == 25); ++l_685)
        {
            int32_t l_1825 = 1L;
            int32_t *l_1826 = &l_681;
            int32_t *l_1827 = &l_681;
            int32_t *l_1828 = &l_682;
            int32_t *l_1829 = &l_683;
            int32_t *l_1830[9] = {&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0],&l_686[4][1][0]};
            int i;
            l_1831++;
            (*l_1076) = (void*)0;
        }
        for (l_981 = 19; (l_981 == 44); l_981 = safe_add_func_uint32_t_u_u(l_981, 3))
        {
            int32_t *l_1836 = &l_686[9][0][0];
            int32_t *l_1837 = (void*)0;
            int32_t *l_1838 = &l_682;
            int32_t *l_1839 = &l_1504;
            int32_t l_1840 = (-1L);
            int32_t *l_1841 = &l_683;
            int32_t l_1842[5][3][10] = {{{0x0240187CL,0xE2C8AD08L,(-1L),0xE2C8AD08L,0x0240187CL,0xBE2CEDFDL,0x6DC2A444L,0L,0x114188B4L,0xCDC85571L},{0xBE2CEDFDL,0x6DC2A444L,0L,0x114188B4L,0xCDC85571L,0xE68A0665L,3L,3L,0xE68A0665L,0xCDC85571L},{(-1L),0x114188B4L,0x114188B4L,(-1L),0x0240187CL,0xBC027989L,(-6L),0xBE2CEDFDL,0x89147E24L,0x6DC2A444L}},{{(-8L),0x0240187CL,0x76FC162CL,0xE68A0665L,0x89147E24L,(-6L),0x114188B4L,(-6L),0x89147E24L,0xE68A0665L},{0x6DC2A444L,(-8L),0x6DC2A444L,(-1L),3L,0x97178F88L,0x89147E24L,0xFB0F747DL,0xE68A0665L,0x0A60D1B2L},{0x0A60D1B2L,0x97178F88L,0x0240187CL,0x114188B4L,0xFB0F747DL,0xCDC85571L,0xCDC85571L,0xFB0F747DL,0x114188B4L,0x0240187CL}},{{0x76FC162CL,0x76FC162CL,0x6DC2A444L,0xE2C8AD08L,0xE68A0665L,(-8L),0L,(-6L),0xFB0F747DL,0xBC027989L},{0xCDC85571L,0x89147E24L,0x76FC162CL,0xBE2CEDFDL,0L,3L,0L,0xBE2CEDFDL,0x76FC162CL,0x89147E24L},{0xFB0F747DL,0x76FC162CL,0x114188B4L,0x0A60D1B2L,0xBC027989L,(-1L),0xCDC85571L,3L,0xE2C8AD08L,(-6L)}},{{0xE2C8AD08L,0x97178F88L,0L,0x89147E24L,(-1L),(-1L),0x89147E24L,0L,0x97178F88L,0xE2C8AD08L},{0xFB0F747DL,(-8L),(-1L),0L,0x76FC162CL,3L,0x114188B4L,0x97178F88L,0xBE2CEDFDL,1L},{0xCDC85571L,0x0240187CL,(-6L),(-8L),0x76FC162CL,(-8L),(-6L),0x0240187CL,0xCDC85571L,0xE2C8AD08L}},{{0x76FC162CL,0x114188B4L,(-1L),0xE68A0665L,0x6DC2A444L,1L,0x89147E24L,0x114188B4L,(-8L),(-8L)},{(-1L),0xFB0F747DL,0xBE2CEDFDL,0xE68A0665L,0xE68A0665L,0xBE2CEDFDL,0xFB0F747DL,(-1L),1L,(-6L)},{0xFB0F747DL,0x114188B4L,0x0240187CL,0x97178F88L,0x0A60D1B2L,(-8L),0xBC027989L,0xE68A0665L,0L,0xE68A0665L}}};
            int32_t *l_1843 = &l_681;
            int32_t *l_1844 = &l_1504;
            int32_t *l_1845 = &l_1842[0][1][7];
            int32_t *l_1846 = &l_686[2][1][0];
            int32_t *l_1847 = &l_686[2][0][0];
            int32_t *l_1848 = &l_683;
            int32_t *l_1849[6] = {&l_686[2][1][0],&l_686[2][1][0],&l_686[2][1][0],&l_686[2][1][0],&l_686[2][1][0],&l_686[2][1][0]};
            uint64_t l_1853 = 0x7C916F81D566DA05LL;
            int16_t *l_1956 = (void*)0;
            int16_t ***l_1969 = (void*)0;
            int8_t l_2005[9][3][2] = {{{(-1L),0xB6L},{0xF1L,0xF1L},{1L,0xF1L}},{{0xF1L,0xB6L},{(-1L),0xB9L},{1L,(-1L)}},{{0xB9L,0xB6L},{0xB9L,(-1L)},{1L,0xB9L}},{{(-1L),0xB6L},{0xF1L,0xF1L},{1L,0xF1L}},{{0xF1L,0xB6L},{(-1L),0xB9L},{1L,(-1L)}},{{0xB9L,0xB6L},{0xB9L,(-1L)},{1L,0xB9L}},{{(-1L),0xB6L},{0xF1L,0xF1L},{1L,0xF1L}},{{0xF1L,0xB6L},{(-1L),0xB9L},{1L,(-1L)}},{{0xB9L,0xB6L},{0xB9L,(-1L)},{1L,0xB9L}}};
            uint16_t l_2057[1][7][8] = {{{0xB297L,1UL,1UL,0xB297L,65535UL,0xBB8EL,65535UL,0xB297L},{1UL,65535UL,1UL,2UL,0xA7AAL,0xA7AAL,2UL,1UL},{65535UL,65535UL,0xA7AAL,0xBB8EL,0UL,0xBB8EL,0xA7AAL,65535UL},{65535UL,1UL,2UL,0xA7AAL,0xA7AAL,2UL,1UL,65535UL},{1UL,0xB297L,65535UL,0xBB8EL,65535UL,0xB297L,1UL,1UL},{0xB297L,0xBB8EL,2UL,2UL,0xBB8EL,0xB297L,0xA7AAL,0xB297L},{0xBB8EL,0xB297L,0xA7AAL,0xB297L,0xBB8EL,2UL,2UL,0xBB8EL}}};
            uint32_t **l_2068[1];
            int64_t *l_2145 = &l_1625;
            uint64_t l_2157 = 0UL;
            uint32_t l_2166 = 9UL;
            int32_t **** const *l_2254 = &l_1114;
            uint16_t l_2311[10][10] = {{0x4BE4L,0x4BE4L,0UL,4UL,65535UL,0UL,65535UL,4UL,0UL,0x4BE4L},{65535UL,3UL,0UL,65535UL,0x2329L,0x2329L,65535UL,0UL,3UL,65535UL},{0UL,0x4BE4L,3UL,0x2329L,0x4BE4L,0x2329L,3UL,0x4BE4L,0UL,0UL},{65535UL,4UL,0UL,0x4BE4L,0x4BE4L,0UL,4UL,65535UL,0UL,65535UL},{0x4BE4L,3UL,0x2329L,0x4BE4L,0x2329L,3UL,0x4BE4L,1UL,1UL,0UL},{1UL,0x2329L,65535UL,65535UL,0x2329L,1UL,0UL,0x2329L,0UL,1UL},{3UL,0x2329L,0x4BE4L,0x2329L,3UL,0x4BE4L,0UL,0UL,0x4BE4L,3UL},{3UL,0UL,0UL,3UL,65535UL,1UL,3UL,1UL,65535UL,3UL},{1UL,3UL,1UL,65535UL,3UL,0UL,0UL,3UL,65535UL,1UL},{0UL,0UL,0x4BE4L,3UL,0x2329L,0x4BE4L,0x2329L,3UL,0x4BE4L,0UL}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_2068[i] = &l_2025[1][5];
            l_1853--;
        }
    }
    return p_5;
}




static uint8_t func_11(uint8_t p_12, uint64_t * p_13, uint32_t p_14, int32_t p_15, uint64_t * p_16)
{
    uint32_t l_678 = 0xD6448F29L;
    return l_678;
}




static uint8_t func_17(uint64_t p_18, uint8_t p_19, uint64_t * p_20, const int16_t p_21, uint16_t p_22)
{
    int16_t l_670 = (-6L);
    int32_t l_672[4][5][7] = {{{0L,0x5F5DDF4CL,0xB1D41148L,0L,(-1L),0xED752170L,0xBC2B373FL},{0xB4D0BA3EL,0x5FDEAF76L,0xDCB49407L,0xA4BE1A7FL,0xF3A9A6E1L,(-1L),(-1L)},{0x5F5DDF4CL,0x587553D1L,0xB1D41148L,1L,(-1L),0L,0xF214649FL},{0xB4D0BA3EL,0L,0xFD7E7EF5L,(-1L),0L,(-1L),0xFD7E7EF5L},{0L,0L,0xBC2B373FL,1L,0xB11ABD7EL,0xED752170L,0x3C4B38C0L}},{{3L,0L,0x1D032D41L,0xA4BE1A7FL,8L,0xD7EEB3C6L,0xFD7E7EF5L},{(-9L),0x587553D1L,1L,0L,0xB11ABD7EL,0L,0xF214649FL},{0L,0x5FDEAF76L,0x1D032D41L,1L,0L,0xA4BE1A7FL,(-1L)},{(-9L),0x5F5DDF4CL,0xBC2B373FL,0L,(-1L),0L,0xBC2B373FL},{3L,3L,0xFD7E7EF5L,1L,0xF3A9A6E1L,0xD7EEB3C6L,4L}},{{0L,0x5F5DDF4CL,0xB1D41148L,0L,(-1L),0xED752170L,0xBC2B373FL},{0xB4D0BA3EL,0x5FDEAF76L,0xDCB49407L,0xA4BE1A7FL,0xF3A9A6E1L,(-1L),(-1L)},{0x5F5DDF4CL,0x587553D1L,0xB1D41148L,1L,(-1L),0L,0xF214649FL},{0xB4D0BA3EL,0L,0xFD7E7EF5L,(-1L),0L,(-1L),0xFD7E7EF5L},{0L,0L,0xBC2B373FL,1L,0xB11ABD7EL,0xED752170L,0x3C4B38C0L}},{{3L,0L,0x1D032D41L,0xA4BE1A7FL,8L,0xD7EEB3C6L,0xFD7E7EF5L},{(-9L),0x587553D1L,1L,0L,0xB11ABD7EL,0L,0xF214649FL},{0L,0x5FDEAF76L,0x1D032D41L,1L,0L,0xA4BE1A7FL,(-1L)},{(-9L),0x5F5DDF4CL,0xBC2B373FL,0L,(-1L),0L,0xBC2B373FL},{3L,3L,0xFD7E7EF5L,1L,0xF3A9A6E1L,4L,0L}}};
    int32_t *l_671[5][3][2] = {{{(void*)0,&l_672[2][1][6]},{&l_672[0][3][4],(void*)0},{&l_672[2][1][6],&l_672[0][3][3]}},{{&l_672[3][2][1],&l_672[2][1][6]},{&l_672[1][3][6],(void*)0},{(void*)0,(void*)0}},{{&l_672[3][2][1],(void*)0},{(void*)0,(void*)0},{&l_672[3][2][1],(void*)0}},{{(void*)0,(void*)0},{&l_672[1][3][6],&l_672[2][1][6]},{&l_672[3][2][1],&l_672[0][3][3]}},{{&l_672[2][1][6],(void*)0},{&l_672[0][3][4],&l_672[2][1][6]},{(void*)0,&l_672[1][3][6]}}};
    uint16_t l_673 = 1UL;
    int i, j, k;
    l_673++;
    return p_18;
}




static const uint8_t func_27(int8_t p_28, int8_t p_29, int16_t p_30, uint32_t p_31, uint8_t * p_32)
{
    int32_t l_624 = 7L;
    int32_t *l_623 = &l_624;
    int32_t l_630 = 0x2A1BE9BBL;
    int32_t *l_629 = &l_630;
    int16_t l_635[1];
    int32_t l_637 = 0xB04CBA07L;
    int32_t *l_636[5][2] = {{(void*)0,&l_637},{&l_637,&l_637},{&l_637,&l_637},{&l_637,&l_637},{(void*)0,(void*)0}};
    int16_t l_638 = 0x937DL;
    uint16_t l_640 = 0x539AL;
    uint16_t *l_639 = &l_640;
    int16_t l_641 = 0x2586L;
    int32_t l_642 = 0x34798A01L;
    uint64_t l_643 = 0UL;
    uint16_t *l_644[6];
    uint16_t l_645 = 65535UL;
    int32_t **l_646 = &l_629;
    uint64_t l_656 = 18446744073709551615UL;
    uint32_t l_669 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_635[i] = (-7L);
    for (i = 0; i < 6; i++)
        l_644[i] = (void*)0;
    (*l_646) = func_46(l_623, func_52((safe_rshift_func_uint16_t_u_u(p_29, 8)), ((*l_629) = (safe_sub_func_uint16_t_u_u(p_30, 1UL))), (l_645 = ((safe_div_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((1L ^ 0x4677L), ((l_641 = (l_624 < ((*l_639) ^= ((((l_635[0] > (((l_638 |= (p_29 != p_30)) >= 0x229F405AL) >= p_29)) & p_28) && p_31) != p_29)))) , p_28))) < l_642) & p_29), l_643)) & 0x3928848FL))), p_30);
    for (p_31 = (-24); (p_31 > 6); p_31++)
    {
        uint16_t l_652 = 0xC395L;
        int16_t *l_653 = &l_641;
        uint8_t l_667[5] = {246UL,246UL,246UL,246UL,246UL};
        uint8_t *l_666 = &l_667[1];
        int64_t l_668[2];
        int i;
        for (i = 0; i < 2; i++)
            l_668[i] = 0x44193D2D73534236LL;
        (*l_646) = ((+(safe_sub_func_uint8_t_u_u(((*l_629) , l_652), (((*l_653) &= 9L) , (safe_rshift_func_uint16_t_u_u((*l_629), (l_656 && (safe_add_func_int16_t_s_s((0x7528DCFABE639FDFLL >= ((((safe_rshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((~p_28), 0x3D03L)) , (((safe_div_func_uint16_t_u_u(65535UL, (**l_646))) , 0xD5843549L) , p_32)) != l_666), p_30)) == 1UL) != l_668[0]) , 18446744073709551612UL)), 65528UL))))))))) , (*l_646));
    }
    l_669 |= ((*l_629) = p_31);
    return p_29;
}




static int8_t func_37(int16_t p_38, uint8_t * p_39)
{
    int32_t l_51 = 0xA6D786FFL;
    int32_t *l_50 = &l_51;
    uint8_t l_67 = 7UL;
    uint8_t *l_66[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t *l_68 = (void*)0;
    uint64_t l_70[5][6];
    uint64_t *l_69 = &l_70[1][1];
    int32_t l_597[3];
    int32_t *l_596 = &l_597[2];
    int32_t l_622 = 0x87DEFF20L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
            l_70[i][j] = 18446744073709551615UL;
    }
    for (i = 0; i < 3; i++)
        l_597[i] = (-1L);
    for (p_38 = 21; (p_38 > 12); p_38 = safe_sub_func_int16_t_s_s(p_38, 6))
    {
        int32_t l_57 = 0x3046AA1DL;
        int32_t * const l_56 = &l_57;
        int32_t *l_594 = &l_57;
        int32_t **l_593[4][3][9] = {{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594},{&l_594,(void*)0,&l_594,&l_594,(void*)0,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594}},{{&l_594,&l_594,&l_594,&l_594,(void*)0,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,(void*)0,&l_594,&l_594,(void*)0,&l_594}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594},{&l_594,(void*)0,&l_594,&l_594,(void*)0,&l_594,&l_594,&l_594,&l_594}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,(void*)0,&l_594,&l_594,&l_594,&l_594},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,&l_594}}};
        int32_t **l_595 = &l_594;
        int32_t **l_614 = &l_50;
        int32_t l_618[4][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
        int32_t * const l_617[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t * const *l_616 = &l_617[1];
        int32_t * const **l_615 = &l_616;
        uint64_t l_621 = 7UL;
        int i, j, k;
        l_596 = ((*l_595) = func_46(l_50, func_52(((void*)0 == l_56), ((func_58(l_51, &l_57, (p_38 , func_63(l_66[1], (l_69 = l_68))), p_38) , l_70[1][3]) , l_70[3][5]), l_70[4][5]), p_38));
        l_622 ^= (0xF46DAA479AA4BBDDLL || (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_38, (*l_594))), ((l_597[2] = (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((-1L) || (3L == (l_614 != ((*l_615) = l_614)))), (safe_mul_func_uint16_t_u_u(p_38, (*l_596))))) , (*l_596)), 3))) & (*l_596)))), p_38)) == (*l_56)), (-1L))), l_621)));
        if ((*l_594))
            break;
    }
    return p_38;
}




static int32_t * func_46(int32_t * p_47, uint64_t * p_48, const uint16_t p_49)
{
    int32_t l_581 = 1L;
    int32_t *l_580 = &l_581;
    int32_t *l_582 = (void*)0;
    int32_t *l_583 = &l_581;
    int32_t *l_584 = &l_581;
    int32_t *l_585[5];
    uint16_t l_586 = 0x9F0CL;
    int i;
    for (i = 0; i < 5; i++)
        l_585[i] = (void*)0;
    --l_586;
    (*l_583) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_49, 4)), 1));
    return p_47;
}




static uint64_t * func_52(const int16_t p_53, int32_t p_54, uint16_t p_55)
{
    int16_t l_152[3][7][8] = {{{0xAC2EL,0xDDA4L,0L,0x18FDL,0x1AE8L,0x18FDL,0L,0xDDA4L},{0x59CCL,0x948EL,0xAC2EL,0x5435L,0x721EL,6L,0xE268L,1L},{0xAC2EL,(-1L),0x1AE8L,0x948EL,0xE268L,0xDDA4L,0xE268L,0x948EL},{0x9326L,0x948EL,0x9326L,6L,0L,(-3L),0x0AAEL,0x948EL},{0L,(-3L),0x0AAEL,0x948EL,0x721EL,1L,0L,1L},{0L,0x18FDL,0x1AE8L,0x18FDL,0L,0xDDA4L,0xAC2EL,(-1L)},{0x9326L,0x18FDL,0x721EL,6L,0xE268L,1L,0x0AAEL,0x18FDL}},{{0xAC2EL,(-3L),0x721EL,(-1L),0x721EL,(-3L),0xAC2EL,1L},{0xE268L,0x948EL,0x1AE8L,(-1L),0xAC2EL,0xDDA4L,0L,0x18FDL},{0x9326L,(-1L),0x0AAEL,6L,0xAC2EL,6L,0x0AAEL,(-1L)},{0xE268L,(-3L),0x9326L,0x18FDL,0x721EL,6L,0xE268L,1L},{0xAC2EL,(-1L),0x1AE8L,0x948EL,0xE268L,0xDDA4L,0xE268L,0x948EL},{0x9326L,0x948EL,0x9326L,6L,0L,(-3L),0x0AAEL,0x948EL},{0L,(-3L),0x0AAEL,0x948EL,0x721EL,1L,0L,1L}},{{0L,0x18FDL,0x1AE8L,0x18FDL,0L,0xDDA4L,0xAC2EL,(-1L)},{0x9326L,0x18FDL,0x721EL,6L,0xE268L,1L,0x0AAEL,0x18FDL},{0xAC2EL,(-3L),0x721EL,(-1L),0x721EL,(-3L),0xAC2EL,1L},{0xE268L,0x948EL,0x1AE8L,(-1L),0xAC2EL,0xDDA4L,0L,0x18FDL},{0x9326L,(-1L),0x0AAEL,6L,0xAC2EL,6L,0x0AAEL,(-1L)},{0xE268L,(-3L),0x9326L,0x18FDL,0x721EL,6L,0xE268L,1L},{0xAC2EL,(-1L),0x1AE8L,0x948EL,0xE268L,0xDDA4L,0xE268L,0x948EL}}};
    int32_t l_154 = 0x9786083EL;
    int32_t * const l_153[2][4][3] = {{{&l_154,&l_154,&l_154},{&l_154,(void*)0,&l_154},{&l_154,&l_154,&l_154},{&l_154,(void*)0,&l_154}},{{&l_154,&l_154,&l_154},{&l_154,(void*)0,&l_154},{&l_154,&l_154,&l_154},{&l_154,(void*)0,&l_154}}};
    int32_t *l_197 = (void*)0;
    uint8_t l_215[9][4] = {{0xB3L,0UL,247UL,0x0EL},{0x93L,0xBBL,0x99L,247UL},{247UL,0xBBL,0x36L,246UL},{250UL,0x8CL,250UL,0xFFL},{255UL,247UL,0x99L,0xBBL},{0xB3L,255UL,0xFFL,247UL},{246UL,252UL,0xFFL,0x93L},{0xB3L,0x99L,0x99L,0xB3L},{255UL,246UL,250UL,0x36L}};
    uint64_t l_233 = 7UL;
    uint64_t *l_232 = &l_233;
    uint64_t **l_231 = &l_232;
    uint32_t l_243 = 0xA55A67DAL;
    uint32_t *l_242 = &l_243;
    uint32_t l_251[6][5][8] = {{{0x8FD80D04L,5UL,3UL,0x7FAAF371L,1UL,4294967293UL,1UL,0xBC7C0F98L},{4294967293UL,0x0D352A7FL,0x9B55ACEFL,0xACA0825CL,0x9B55ACEFL,0x0D352A7FL,4294967293UL,0UL},{0xBC7C0F98L,0x8FD80D04L,0x0C6E348DL,1UL,1UL,0x7750FABAL,3UL,4294967291UL},{0UL,3UL,1UL,4294967293UL,1UL,0UL,0xACA0825CL,0xACA0825CL},{0xBC7C0F98L,0x9B55ACEFL,4294967291UL,4294967291UL,0x9B55ACEFL,0xBC7C0F98L,0xDD0085E5L,0UL}},{{4294967293UL,0x0C6E348DL,0UL,0x0D352A7FL,1UL,0x261CC5E2L,0x7750FABAL,1UL},{0x8FD80D04L,1UL,0xDD0085E5L,0x0D352A7FL,4294967291UL,0UL,5UL,0UL},{0UL,4294967291UL,0x7FAAF371L,4294967291UL,0UL,3UL,1UL,0xACA0825CL},{1UL,0UL,0x261CC5E2L,4294967293UL,0xACA0825CL,0x0C6E348DL,0xBC7C0F98L,4294967291UL},{0x7FAAF371L,0xDD0085E5L,0x261CC5E2L,1UL,0UL,1UL,1UL,0UL}},{{0xACA0825CL,0x7FAAF371L,0x7FAAF371L,0xACA0825CL,0x0D352A7FL,1UL,5UL,0xBC7C0F98L},{1UL,0x261CC5E2L,0xDD0085E5L,0x7FAAF371L,1UL,0x9B55ACEFL,0x7750FABAL,4294967293UL},{4294967293UL,0x261CC5E2L,0UL,1UL,0xDD0085E5L,1UL,0xDD0085E5L,1UL},{4294967291UL,0x7FAAF371L,4294967291UL,0UL,3UL,1UL,0xACA0825CL,0xDD0085E5L},{0x0D352A7FL,0xDD0085E5L,1UL,0x8FD80D04L,0x7FAAF371L,0x0C6E348DL,3UL,0x261CC5E2L}},{{0x0D352A7FL,0UL,0x0C6E348DL,4294967293UL,3UL,3UL,4294967293UL,0x0C6E348DL},{4294967291UL,4294967291UL,0x9B55ACEFL,0xBC7C0F98L,0xDD0085E5L,0UL,1UL,5UL},{4294967293UL,1UL,3UL,0UL,1UL,0x261CC5E2L,0x7FAAF371L,5UL},{1UL,0x0C6E348DL,0x8FD80D04L,0xBC7C0F98L,0x0D352A7FL,0xBC7C0F98L,0x8FD80D04L,0x0C6E348DL},{0xACA0825CL,0x9B55ACEFL,0x0D352A7FL,4294967293UL,0UL,0UL,0x0C6E348DL,0x261CC5E2L}},{{0x7FAAF371L,3UL,5UL,0x8FD80D04L,0xACA0825CL,0x7750FABAL,3UL,0xBC7C0F98L},{0x8FD80D04L,0UL,0x7FAAF371L,0UL,0UL,0x7FAAF371L,0UL,0x8FD80D04L},{0UL,0x7FAAF371L,0UL,0x8FD80D04L,0UL,0x261CC5E2L,0x417AC62BL,1UL},{0UL,4294967293UL,0x9B55ACEFL,0x417AC62BL,0x8FD80D04L,0x261CC5E2L,0xACA0825CL,4294967291UL},{0x261CC5E2L,0x7FAAF371L,5UL,0x7750FABAL,5UL,0x7FAAF371L,0x261CC5E2L,1UL}},{{4294967291UL,0UL,3UL,1UL,0xACA0825CL,0xDD0085E5L,0x9B55ACEFL,0UL},{0x0C6E348DL,0x9B55ACEFL,1UL,1UL,0xACA0825CL,0UL,0x7750FABAL,0x7750FABAL},{4294967291UL,5UL,0UL,0UL,5UL,4294967291UL,0xBC7C0F98L,0x0C6E348DL},{0x261CC5E2L,3UL,0x0C6E348DL,0x7FAAF371L,0x8FD80D04L,1UL,0xDD0085E5L,0x0D352A7FL},{0UL,1UL,0xBC7C0F98L,0x7FAAF371L,0UL,0x0C6E348DL,4294967293UL,0x0C6E348DL}}};
    uint32_t *l_250 = &l_251[1][1][4];
    uint8_t l_252[6][9][4] = {{{248UL,0UL,1UL,254UL},{9UL,0x02L,1UL,1UL},{0x4AL,1UL,0x35L,1UL},{0xD7L,0x87L,0x87L,0xD7L},{0x99L,0xE3L,0xEBL,255UL},{0x87L,0UL,255UL,0xC6L},{0x02L,9UL,0xA9L,0xC6L},{0x4AL,0UL,0x51L,255UL},{0UL,0xE3L,1UL,0xD7L}},{{0x9EL,0x87L,0xC6L,1UL},{0xE3L,1UL,255UL,1UL},{0x99L,0x02L,248UL,254UL},{1UL,0UL,1UL,0xA9L},{0xD7L,255UL,0xA9L,0x35L},{0x9EL,248UL,1UL,255UL},{255UL,5UL,1UL,1UL},{0x9EL,0x99L,0xA9L,1UL},{0xD7L,1UL,1UL,0xE3L}},{{1UL,0xE3L,248UL,0UL},{0x99L,248UL,255UL,0xA9L},{0xE3L,0UL,0xC6L,0xC6L},{0x9EL,0x9EL,1UL,254UL},{0UL,5UL,0x51L,0xE3L},{0x4AL,0x87L,0xA9L,0x51L},{0x02L,0x87L,255UL,0xE3L},{0x87L,5UL,0xEBL,254UL},{0x99L,0x9EL,0x87L,0xC6L}},{{0xD7L,0UL,0x35L,0xA9L},{0x4AL,248UL,1UL,0UL},{0xA9L,1UL,0UL,1UL},{0UL,9UL,0x1AL,0UL},{0x87L,255UL,0UL,1UL},{254UL,0x99L,0xBFL,0x35L},{254UL,0UL,0UL,1UL},{0x87L,0x35L,0x1AL,0x51L},{0UL,255UL,0UL,0xA6L}},{{0xA9L,0x87L,0x4AL,1UL},{0xBFL,9UL,1UL,0x4AL},{255UL,0UL,0UL,255UL},{255UL,1UL,0x91L,0x35L},{0UL,255UL,0UL,0x1AL},{0x87L,0xA9L,0x51L,0x1AL},{0xBFL,255UL,0xEBL,0x35L},{0xC6L,1UL,0x4AL,255UL},{255UL,0UL,0x1AL,0x4AL}},{{1UL,9UL,0UL,1UL},{255UL,0x87L,0UL,0xA6L},{254UL,255UL,254UL,0x51L},{255UL,0x35L,0x51L,1UL},{255UL,0UL,0UL,0x35L},{0x35L,0x99L,0UL,1UL},{255UL,255UL,0x51L,0UL},{255UL,9UL,254UL,1UL},{254UL,1UL,0UL,0xC6L}}};
    int64_t l_253 = 6L;
    uint16_t l_254 = 0xF462L;
    int64_t l_263 = (-1L);
    uint8_t l_264[8][3] = {{0xDCL,0xDCL,0xDCL},{0x1DL,0x1DL,0x1DL},{0xDCL,0xDCL,0xDCL},{0x1DL,0x1DL,0x1DL},{0xDCL,0xDCL,0xDCL},{0x1DL,0x1DL,0x1DL},{0xDCL,0xDCL,0xDCL},{0x1DL,0x1DL,0x1DL}};
    const uint32_t l_332 = 0x07D3F3A4L;
    int64_t l_356 = 0x36789D0943BD1DEDLL;
    int32_t *l_389[1];
    int32_t **l_409 = &l_389[0];
    int32_t **l_418 = &l_389[0];
    int32_t ***l_417[8] = {&l_418,(void*)0,&l_418,&l_418,(void*)0,&l_418,&l_418,(void*)0};
    int32_t ****l_416 = &l_417[0];
    int32_t l_423[7];
    uint32_t l_442 = 0xD77180E2L;
    int32_t l_477 = 0x1E3107FBL;
    uint32_t ***l_557 = (void*)0;
    uint64_t *l_569[3][7][6] = {{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,(void*)0,&l_233,&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,(void*)0,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,(void*)0,&l_233,&l_233,&l_233,(void*)0}},{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,(void*)0,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233},{&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233},{&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233}}};
    uint64_t *l_570[8][4] = {{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233}};
    uint64_t *l_571 = &l_233;
    uint64_t *l_572 = &l_233;
    uint64_t *l_573 = &l_233;
    uint64_t *l_574 = &l_233;
    uint64_t *l_575 = &l_233;
    uint64_t *l_576 = &l_233;
    uint64_t *l_577 = &l_233;
    uint64_t *l_578[4][7] = {{&l_233,(void*)0,&l_233,(void*)0,&l_233,(void*)0,&l_233},{&l_233,&l_233,(void*)0,(void*)0,&l_233,&l_233,(void*)0},{&l_233,(void*)0,&l_233,(void*)0,&l_233,(void*)0,&l_233},{&l_233,(void*)0,(void*)0,&l_233,&l_233,(void*)0,(void*)0}};
    uint64_t *l_579 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_389[i] = &l_154;
    for (i = 0; i < 7; i++)
        l_423[i] = 1L;
    for (p_54 = 0; (p_54 <= 2); p_54 += 1)
    {
        int32_t *l_162 = (void*)0;
        int32_t l_176 = (-10L);
        int32_t l_218 = 0x29FB94FDL;
        int32_t l_219 = (-6L);
        int32_t l_220[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
        int i;
        if (p_55)
            break;
        for (p_55 = 0; (p_55 <= 2); p_55 += 1)
        {
            int32_t *l_156 = (void*)0;
            int32_t **l_155[2][2][9] = {{{&l_156,&l_156,&l_156,&l_156,(void*)0,&l_156,&l_156,&l_156,&l_156},{&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156}},{{&l_156,(void*)0,&l_156,&l_156,(void*)0,&l_156,(void*)0,&l_156,&l_156},{&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156,&l_156}}};
            int32_t **l_157 = (void*)0;
            int32_t **l_158 = &l_156;
            int16_t l_235[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_235[i] = (-8L);
            (*l_158) = l_153[1][0][2];
            for (l_154 = 2; (l_154 >= 0); l_154 -= 1)
            {
                int32_t l_159 = (-6L);
                int32_t *l_178 = &l_176;
                int32_t l_201 = (-1L);
                int32_t l_206 = 0x2A5CAD6FL;
                int32_t l_208 = 1L;
                int32_t l_210 = 0x884AE361L;
                int32_t l_213[5][7] = {{0x15DD58F1L,0x4DF0E4EAL,2L,1L,2L,0x4DF0E4EAL,0x15DD58F1L},{0x20ED249FL,(-5L),1L,0x335178E2L,1L,(-5L),0x20ED249FL},{0x15DD58F1L,0x4DF0E4EAL,2L,1L,2L,0x4DF0E4EAL,1L},{0x335178E2L,0x20ED249FL,0x2CDD3E71L,8L,0x2CDD3E71L,0x20ED249FL,0x335178E2L},{1L,0x15DD58F1L,0x557C3E86L,(-3L),0x557C3E86L,0x15DD58F1L,1L}};
                uint64_t l_229 = 1UL;
                uint64_t *l_228 = &l_229;
                uint64_t **l_227 = &l_228;
                uint64_t ***l_230 = &l_227;
                uint16_t l_236 = 1UL;
                int i, j;
            }
        }
    }
    l_252[2][0][2] ^= ((+p_53) , ((((*l_250) = (((safe_mod_func_uint8_t_u_u(((((*l_242) = (&l_231 != &l_231)) >= (p_55 == (safe_rshift_func_int16_t_s_u((p_54 , ((safe_mod_func_uint8_t_u_u(0xE3L, ((safe_rshift_func_uint16_t_u_u((p_53 , (0x51L < 0xBFL)), 0)) | 8L))) < p_54)), p_55)))) | 0x55EAF381L), 247UL)) || p_53) | p_53)) && p_53) > 0x27D9B145L));
    --l_254;
    for (p_55 = 0; (p_55 <= 3); p_55 += 1)
    {
        int32_t *l_257[1][6] = {{&l_154,&l_154,&l_154,&l_154,&l_154,&l_154}};
        uint64_t *l_287 = &l_233;
        uint64_t *l_292 = (void*)0;
        int32_t **l_388[9][5][4] = {{{&l_257[0][2],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][1],&l_257[0][0],&l_257[0][2]},{&l_257[0][2],&l_257[0][1],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][2],&l_257[0][1],&l_257[0][2]}},{{&l_257[0][2],&l_257[0][2],&l_257[0][4],&l_257[0][1]},{&l_257[0][5],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{(void*)0,&l_257[0][3],&l_257[0][2],&l_257[0][2]},{&l_257[0][5],&l_257[0][4],&l_257[0][4],&l_257[0][5]},{&l_257[0][2],(void*)0,&l_257[0][1],&l_257[0][2]}},{{&l_257[0][1],&l_257[0][2],&l_257[0][2],&l_257[0][3]},{&l_257[0][2],&l_257[0][2],&l_257[0][0],&l_257[0][3]},{&l_257[0][1],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{&l_257[0][2],(void*)0,&l_257[0][2],&l_257[0][5]},{&l_257[0][2],&l_257[0][4],&l_257[0][1],&l_257[0][2]}},{{&l_257[0][2],&l_257[0][3],&l_257[0][2],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][1],&l_257[0][1]},{&l_257[0][2],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][1],&l_257[0][0],&l_257[0][2]}},{{&l_257[0][2],&l_257[0][1],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][2],&l_257[0][1],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][4],&l_257[0][1]},{&l_257[0][5],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{(void*)0,&l_257[0][3],&l_257[0][2],&l_257[0][2]}},{{&l_257[0][5],&l_257[0][4],&l_257[0][4],&l_257[0][5]},{&l_257[0][2],(void*)0,&l_257[0][1],&l_257[0][2]},{&l_257[0][1],&l_257[0][2],&l_257[0][2],&l_257[0][3]},{&l_257[0][2],&l_257[0][2],&l_257[0][0],&l_257[0][3]},{&l_257[0][1],&l_257[0][2],&l_257[0][2],&l_257[0][2]}},{{&l_257[0][2],(void*)0,&l_257[0][2],&l_257[0][5]},{&l_257[0][2],&l_257[0][4],&l_257[0][1],&l_257[0][2]},{&l_257[0][2],&l_257[0][3],&l_257[0][2],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][1],&l_257[0][1]},{&l_257[0][2],&l_257[0][2],&l_257[0][2],&l_257[0][2]}},{{&l_257[0][2],&l_257[0][2],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][1],&l_257[0][0],&l_257[0][2]},{&l_257[0][2],&l_257[0][1],&l_257[0][2],(void*)0},{&l_257[0][1],&l_257[0][2],&l_257[0][1],&l_257[0][2]},{&l_257[0][2],&l_257[0][2],&l_257[0][4],&l_257[0][1]}},{{&l_257[0][5],&l_257[0][2],&l_257[0][2],&l_257[0][2]},{(void*)0,&l_257[0][3],&l_257[0][2],&l_257[0][2]},{&l_257[0][5],&l_257[0][0],&l_257[0][0],&l_257[0][2]},{&l_257[0][4],&l_257[0][5],&l_257[0][5],&l_257[0][2]},{&l_257[0][5],&l_257[0][2],&l_257[0][2],&l_257[0][2]}}};
        uint32_t l_424[2];
        uint16_t *l_455 = &l_254;
        const int32_t *l_472 = (void*)0;
        const int32_t **l_471 = &l_472;
        const int32_t ***l_470 = &l_471;
        const int32_t ****l_469[1];
        uint32_t *l_503 = (void*)0;
        uint32_t **l_502 = &l_503;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_424[i] = 18446744073709551615UL;
        for (i = 0; i < 1; i++)
            l_469[i] = &l_470;
        for (p_54 = 0; (p_54 <= 3); p_54 += 1)
        {
            int16_t l_260 = 4L;
            int32_t l_261 = 0xFE80CA30L;
            uint64_t *l_286 = &l_233;
            int32_t * const *l_295 = &l_257[0][0];
            int32_t *l_334 = &l_154;
            int64_t l_359 = 1L;
            uint64_t *l_387[7];
            int i;
            for (i = 0; i < 7; i++)
                l_387[i] = &l_233;
            l_257[0][2] = &l_154;
            for (l_253 = 3; (l_253 >= 0); l_253 -= 1)
            {
                int32_t l_259[8] = {0xA60A501BL,0L,0xA60A501BL,0xA60A501BL,0L,0xA60A501BL,0xA60A501BL,0L};
                int32_t *l_258 = &l_259[5];
                int32_t l_262 = 0xD4250EAFL;
                uint64_t *l_288[9][5] = {{&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,(void*)0,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,(void*)0,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233}};
                uint64_t *l_291[4] = {&l_233,&l_233,&l_233,&l_233};
                int32_t * const *l_293 = &l_257[0][2];
                int16_t l_331 = 0xD744L;
                int i, j, k;
                if ((l_260 = (l_257[0][2] == l_258)))
                {
                    l_264[6][1]++;
                }
                else
                {
                    const int32_t *l_268 = &l_261;
                    const int32_t **l_267 = &l_268;
                    int i, j;
                    (*l_267) = &p_54;
                    if (l_215[l_253][l_253])
                        continue;
                }
                l_262 ^= l_251[p_54][(p_55 + 1)][(l_253 + 4)];
                for (l_243 = 0; (l_243 <= 4); l_243 += 1)
                {
                    uint64_t l_269 = 9UL;
                    int8_t l_278 = (-4L);
                    int8_t *l_277 = &l_278;
                    uint32_t *l_283 = (void*)0;
                    uint32_t l_285 = 0xA90A6C38L;
                    uint32_t *l_284 = &l_285;
                    uint64_t *l_290[10] = {&l_269,&l_269,&l_233,&l_269,&l_269,&l_269,&l_269,&l_233,&l_269,&l_269};
                    int32_t l_305 = 0L;
                    int32_t l_306 = 1L;
                    uint8_t *l_311 = &l_252[2][0][2];
                    int64_t *l_328[9][3] = {{&l_253,&l_253,&l_253},{&l_263,&l_263,&l_263},{(void*)0,&l_253,(void*)0},{&l_263,&l_263,&l_263},{&l_253,&l_253,&l_253},{&l_263,&l_263,&l_263},{(void*)0,&l_253,(void*)0},{&l_263,&l_263,&l_263},{&l_253,&l_253,&l_253}};
                    uint64_t l_329[4][3] = {{18446744073709551615UL,18446744073709551615UL,0x10A693D1BC77AE55LL},{0x511FBB4A379538BALL,0x511FBB4A379538BALL,1UL},{18446744073709551615UL,18446744073709551615UL,0x10A693D1BC77AE55LL},{0x511FBB4A379538BALL,0x511FBB4A379538BALL,1UL}};
                    uint8_t *l_330 = &l_264[7][0];
                    int32_t **l_333[4][2][1] = {{{&l_257[0][2]},{&l_257[0][2]}},{{&l_257[0][2]},{&l_257[0][2]}},{{&l_257[0][2]},{&l_257[0][2]}},{{&l_257[0][2]},{&l_257[0][2]}}};
                    int i, j, k;
                    l_269 |= (p_54 <= 4L);
                    if ((safe_mod_func_int8_t_s_s((!((l_269 == ((p_53 < (safe_rshift_func_uint8_t_u_s((l_215[(p_55 + 2)][l_253] = (safe_mul_func_int8_t_s_s(((*l_277) ^= 0x7AL), ((safe_add_func_int8_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((p_54 != (((((((((((*l_284) |= l_269) , l_269) | (&l_269 != ((*l_231) = (*l_231)))) , p_54) , l_261) >= p_54) || (-1L)) > 0x8C63L) == 0x7A72L) >= p_55)), l_269)))) & 6UL)))), 5))) != p_55)) <= 1UL)), (-1L))))
                    {
                        uint64_t *l_289 = &l_233;
                        return l_292;
                    }
                    else
                    {
                        int32_t * const **l_294[9][10][2] = {{{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293}},{{&l_293,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,(void*)0}},{{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,(void*)0},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,&l_293}},{{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{&l_293,(void*)0}},{{&l_293,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{(void*)0,&l_293},{(void*)0,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{&l_293,(void*)0}},{{&l_293,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{&l_293,(void*)0},{&l_293,(void*)0},{&l_293,(void*)0},{&l_293,&l_293},{(void*)0,(void*)0},{&l_293,&l_293}},{{&l_293,&l_293},{&l_293,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{(void*)0,(void*)0},{(void*)0,&l_293},{(void*)0,&l_293},{&l_293,(void*)0},{&l_293,&l_293}},{{&l_293,(void*)0},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,(void*)0},{(void*)0,(void*)0},{&l_293,(void*)0},{(void*)0,(void*)0},{&l_293,&l_293},{&l_293,&l_293},{(void*)0,(void*)0}},{{&l_293,&l_293},{&l_293,(void*)0},{&l_293,&l_293},{(void*)0,&l_293},{(void*)0,(void*)0},{(void*)0,&l_293},{&l_293,&l_293},{(void*)0,&l_293},{&l_293,&l_293},{&l_293,&l_293}}};
                        uint64_t *l_296 = &l_233;
                        uint32_t * const l_297 = &l_243;
                        uint16_t *l_298 = (void*)0;
                        uint16_t *l_299 = &l_254;
                        int32_t l_304 = 0x3A858D1DL;
                        int i, j, k;
                        l_295 = (p_55 , l_293);
                        l_293 = l_293;
                        l_261 = (l_306 &= (l_305 = ((**l_295) = ((((l_250 = l_283) != (((l_215[(p_55 + 2)][l_253] , l_296) != l_291[2]) , l_297)) , ((((*l_299) |= (**l_293)) < ((safe_add_func_uint64_t_u_u(l_304, 0xF5157D9F7E151388LL)) | ((l_269 | p_53) > (**l_293)))) >= (**l_293))) >= p_55))));
                    }
                    l_306 = (safe_mod_func_uint8_t_u_u((l_215[(p_54 + 4)][p_55] = (l_215[(p_55 + 2)][l_253] < p_54)), (((p_54 < p_55) != ((safe_lshift_func_uint16_t_u_u(p_53, 3)) & ((*l_311)++))) , (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(1L, (((0x53A076BC2BE7EA8BLL != ((l_262 = (p_55 >= (((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((*l_330) = ((((*l_311) |= ((safe_div_func_int64_t_s_s(((**l_295) |= (-8L)), 0x12030E46948929C2LL)) , p_53)) ^ p_54) , l_329[1][1])), l_331)), p_53)) , p_54), l_260)) | p_53) , (**l_293)))) & 0xA04FEC6CL)) , l_306) < 0x21L))), l_332)), 0x43L)))));
                    l_334 = (*l_295);
                }
            }
            for (l_254 = 0; (l_254 <= 4); l_254 += 1)
            {
                int16_t l_335 = 0L;
                int32_t l_345 = 1L;
                int32_t l_346[5][2] = {{(-1L),0L},{0xAA696D36L,0L},{(-1L),0xAA696D36L},{0x28005FB6L,0x28005FB6L},{0x28005FB6L,0xAA696D36L}};
                uint16_t l_348 = 0x6FA5L;
                uint16_t *l_347 = &l_348;
                uint16_t l_360 = 65534UL;
                uint64_t *l_386 = &l_233;
                int i, j;
                l_335 = (p_55 | (0x4836L <= p_53));
                if (p_55)
                    continue;
                if ((((!l_335) > (safe_rshift_func_int8_t_s_u((0x7097L ^ ((p_53 | (3L != l_335)) < ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((*l_334), 4)), 0)) < (safe_add_func_int64_t_s_s(((++(*l_347)) <= p_53), ((+(safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((-1L) == p_55) && (-10L)) | (**l_295)), 255UL)), 0x9F26L))) != l_356)))) >= (*l_334)) >= 0x4744EDD424D9CA0DLL))), 6))) & 0x48L))
                {
                    int8_t l_357 = (-1L);
                    int32_t l_358 = 0x9531F5AFL;
                    l_360++;
                }
                else
                {
                    int32_t l_369 = 1L;
                    int32_t *l_368[5] = {&l_369,&l_369,&l_369,&l_369,&l_369};
                    const int32_t *l_384 = &l_346[4][0];
                    const int32_t **l_383 = &l_384;
                    const int32_t ***l_382 = &l_383;
                    const int32_t ****l_381 = &l_382;
                    uint64_t *l_385[5][6][8] = {{{&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0,(void*)0,(void*)0},{&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0},{&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,(void*)0},{&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233}},{{&l_233,(void*)0,&l_233,&l_233,&l_233,(void*)0,&l_233,(void*)0},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,(void*)0,(void*)0,&l_233,(void*)0,(void*)0,&l_233,&l_233},{&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233}},{{&l_233,(void*)0,&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,(void*)0,&l_233,&l_233,(void*)0,(void*)0,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233}},{{&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,(void*)0,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233,&l_233},{(void*)0,&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233,&l_233},{&l_233,&l_233,&l_233,(void*)0,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,(void*)0,&l_233,(void*)0,&l_233,(void*)0,&l_233}}};
                    int i, j, k;
                    l_261 = (~(safe_lshift_func_uint16_t_u_s(((((**l_295) = (safe_lshift_func_int16_t_s_u(1L, 8))) , (((l_369 >= (safe_sub_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(0xDF826D19L, ((l_369 & ((((safe_mul_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(0x85L, (safe_mod_func_int32_t_s_s(l_369, ((~(l_348 || 18446744073709551611UL)) ^ (**l_295)))))) && p_54), p_53)) , &l_231) == &l_231) , p_55)) || p_54))) , p_55), p_55))) > (**l_295)) || l_369)) , (*l_334)), 13)));
                    (*l_381) = &l_295;
                    return l_292;
                }
            }
        }
        l_389[0] = &p_54;
        for (l_154 = 3; (l_154 >= 0); l_154 -= 1)
        {
            uint16_t l_391 = 0x0213L;
            uint32_t *l_399 = (void*)0;
            uint32_t **l_398 = &l_399;
            const int32_t l_403 = 0xDF84AB66L;
            const int32_t l_404 = 0L;
            const int32_t l_405 = 0x301B47ABL;
            const int32_t l_406[5][10][5] = {{{6L,(-6L),2L,0x8F62102EL,(-9L)},{0x02E337E6L,0xDB858BAAL,0xEF27B225L,0xEA1EE3A1L,0L},{8L,1L,(-9L),0x1D2D3058L,1L},{0x7D08B4D5L,1L,0xFD10F9ADL,(-1L),0x6749C93BL},{(-1L),0x6F3A4997L,(-5L),(-1L),0xD8CCECD2L},{0xEFCC0B94L,1L,9L,0x1D2D3058L,6L},{0x5E0C45A7L,0x7F1A3CB6L,(-1L),(-9L),0L},{4L,0x3E45CE6DL,0x6749C93BL,0xBFC53D65L,0x7476F2C0L},{0xF21F62B2L,1L,1L,0x7D08B4D5L,0xADFD4A19L},{0xE4F20E64L,0x694DFB4AL,0x78EB3669L,0xC5072233L,(-3L)}},{{0xAFD7154DL,0x7436F2B0L,0xE4F20E64L,(-1L),0xD6F075B9L},{0xA4926C14L,0xEA1EE3A1L,0x36A33717L,0x0D112361L,0xE28395C1L},{0L,0xD903A9DCL,0x7F1A3CB6L,0x7F1A3CB6L,0xD903A9DCL},{4L,0xEFCC0B94L,0xD903A9DCL,(-3L),0L},{0xE28395C1L,0xB746EEE3L,1L,0xA4926C14L,0xE0C69DDCL},{0xA1A34622L,0xB7E87AEBL,(-1L),6L,0x7D08B4D5L},{0xE28395C1L,0x04736130L,0x50657BC5L,1L,0x5442C60AL},{4L,0L,(-1L),0x33EEFDE2L,4L},{0L,9L,0xACE61038L,0x45E6CEF5L,0xBFC53D65L},{0xA4926C14L,0xF21F62B2L,0x171A5F12L,1L,0L}},{{0xAFD7154DL,1L,(-5L),0x45A544FDL,0x78EB3669L},{0xE4F20E64L,(-8L),1L,0x5442C60AL,1L},{0xF21F62B2L,(-3L),0L,0x8F62102EL,0x8975EC5DL},{4L,0L,6L,0x78EB3669L,0x02E337E6L},{0x5E0C45A7L,0x45E6CEF5L,0xA4926C14L,0x7476F2C0L,0x694DFB4AL},{0xEFCC0B94L,0xACE61038L,0L,0x5A409303L,0x06413749L},{(-1L),0L,0L,0x69C54395L,(-9L)},{0x7D08B4D5L,(-9L),0xA4926C14L,4L,1L},{0xACBB774BL,0x75E1828FL,6L,0xACE61038L,0xDB858BAAL},{0x7F1A3CB6L,(-1L),0L,0x04736130L,(-6L)}},{{0x45E6CEF5L,0x33EEFDE2L,1L,8L,0xBE4DDF50L},{6L,0xC4176133L,(-5L),0x8975EC5DL,0L},{0x0D112361L,4L,0x171A5F12L,4L,0x9AF3D454L},{0xDF7DD08CL,0L,0xACE61038L,2L,0x6F3A4997L},{1L,0xD8CCECD2L,(-1L),0xD8CCECD2L,1L},{0xD8CCECD2L,6L,0x50657BC5L,0L,0xACF8389DL},{0x3E45CE6DL,0x4751B99CL,(-1L),0x02E337E6L,0x8F62102EL},{(-8L),0xE28395C1L,1L,6L,0xACF8389DL},{(-9L),0x02E337E6L,0xD903A9DCL,0x36A33717L,1L},{0xACF8389DL,0xEF27B225L,0x7F1A3CB6L,0x24010F6DL,0x6F3A4997L}},{{0x9D866347L,0x171A5F12L,0x36A33717L,0xE4F20E64L,0L},{0xE315460CL,0x6F3A4997L,(-5L),0xE28395C1L,0xD6F075B9L},{0xEF27B225L,0xBFC53D65L,0x694DFB4AL,0x12A29278L,8L},{1L,0x1D2D3058L,0x6BAA5C3DL,0x9AF3D454L,0x24010F6DL},{0xB7E87AEBL,0L,0L,0x1D2D3058L,0L},{0xAFD7154DL,0xC8353DF9L,4L,0x6BAA5C3DL,0x7476F2C0L},{(-1L),0x7476F2C0L,0x50657BC5L,9L,1L},{(-5L),0xDF7DD08CL,1L,0xADFD4A19L,0x6F3A4997L},{(-3L),0xDF7DD08CL,0x5E0C45A7L,0x8F62102EL,1L},{8L,0x7476F2C0L,1L,0x04736130L,0x7F1A3CB6L}}};
            const int32_t l_407 = (-4L);
            const int32_t * const l_402[6][10] = {{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403},{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403},{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403},{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403},{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403},{&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403,&l_404,&l_406[2][7][0],&l_404,&l_403,&l_403}};
            const int32_t * const *l_401 = &l_402[4][7];
            const int32_t * const **l_400 = &l_401;
            int32_t ***l_408[3][6] = {{&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0]},{&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0]},{&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0],&l_388[5][0][3],&l_388[8][3][0]}};
            int8_t l_411 = 0x96L;
            int8_t *l_410 = &l_411;
            int32_t ****l_413 = &l_408[1][2];
            int32_t *****l_412 = &l_413;
            int32_t ****l_415 = &l_408[1][2];
            int32_t *****l_414[5][10][5] = {{{&l_415,(void*)0,&l_415,&l_415,&l_415},{&l_415,(void*)0,&l_415,&l_415,(void*)0},{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,&l_415,(void*)0,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,(void*)0},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,(void*)0,&l_415,&l_415,(void*)0}},{{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,&l_415,(void*)0,&l_415},{&l_415,&l_415,&l_415,(void*)0,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,(void*)0},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415}},{{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,(void*)0},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,(void*)0}},{{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,(void*)0},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,(void*)0},{&l_415,&l_415,(void*)0,&l_415,&l_415}},{{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415},{(void*)0,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,&l_415,&l_415,&l_415},{(void*)0,&l_415,&l_415,&l_415,&l_415}}};
            int8_t l_443 = 0x37L;
            int64_t l_468 = 1L;
            uint32_t l_473 = 4294967295UL;
            int64_t l_533 = (-1L);
            int i, j, k;
            for (p_54 = 0; p_54 < 8; p_54 += 1)
            {
                for (l_233 = 0; l_233 < 3; l_233 += 1)
                {
                    l_264[p_54][l_233] = 255UL;
                }
            }
            p_54 = (0x94B1L | (!(65535UL > l_391)));
            p_54 = ((safe_rshift_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_398) = l_257[0][2]) == l_257[0][2]), 14)), l_391)) >= ((p_55 < ((*l_410) |= (((*l_400) = &l_257[0][4]) != (l_409 = &l_389[0])))) >= (p_55 != (((*l_412) = (void*)0) != (l_416 = ((p_54 , 0xA652L) , (void*)0)))))), p_53)) , 0L);
            for (l_254 = 0; (l_254 <= 4); l_254 += 1)
            {
                int16_t l_419[6][5] = {{5L,0xF5F4L,5L,0x3F67L,0xF6A1L},{0x3706L,5L,0xF5F4L,5L,0x3F67L},{0x3706L,5L,0xD60AL,0x3F67L,0xD60AL},{0xD60AL,0xD60AL,0xF5F4L,0x3F67L,0L},{5L,0x3706L,0x3706L,5L,0xD60AL},{5L,0x3F67L,0xF6A1L,0xF6A1L,0x3F67L}};
                int32_t l_420 = 0x5C6A99E3L;
                int32_t l_421 = 0xAE2613E5L;
                int32_t l_422[8][3][10] = {{{0xE8261AC7L,1L,0x9E6AD4B8L,0x5EC1C26CL,0x5C56880BL,0x117B1E12L,0L,0L,0L,(-3L)},{(-6L),0xB7FD7344L,6L,(-1L),0x90646ABBL,0xC5A099A4L,0x7A5823A4L,0xB7FD7344L,0x63FCD7C2L,(-9L)},{0x051AA074L,0xAE912BDFL,0x4F9B0CB9L,9L,0xFE78F3A8L,0L,0xE8261AC7L,0xBB51565FL,0x83C476CCL,(-6L)}},{{0x2D997F56L,0x117B1E12L,0L,(-1L),0xFF544AEDL,(-1L),0x051AA074L,0x631EB8E8L,0xAB6FA7B9L,0xF885C560L},{0L,0xFE78F3A8L,0L,(-1L),0x5C4F4C39L,0xC5522A0EL,0x63FCD7C2L,0x2D997F56L,3L,0L},{0L,0xE8261AC7L,9L,0xF885C560L,0xAE912BDFL,9L,0xBB094067L,(-1L),0x1BC9BDA5L,0x1E7F5864L}},{{1L,0L,(-9L),0x70A496BDL,6L,0xAB6FA7B9L,(-3L),0x47518C3EL,0x117B1E12L,0xAE912BDFL},{0x85B44C6BL,(-3L),0x117B1E12L,6L,6L,0L,0xC0815ECDL,0L,0x47518C3EL,0x913BBDA3L},{(-10L),0x5AF346B2L,9L,0x1E7F5864L,0xBB51565FL,3L,(-3L),0xBB094067L,0x4F9B0CB9L,0xBB094067L}},{{0xA23FD643L,0x63FCD7C2L,0x173D39B7L,0xE8261AC7L,0x173D39B7L,0x63FCD7C2L,0xA23FD643L,0x631EB8E8L,0x913BBDA3L,(-3L)},{0x631EB8E8L,0x70A496BDL,(-1L),3L,0xEA5B9771L,0x85B44C6BL,0x3796FB46L,(-8L),0xA3648D43L,0x631EB8E8L},{(-1L),0x70A496BDL,0x4F9B0CB9L,(-3L),0x2D997F56L,1L,0xA23FD643L,(-3L),0L,0x5C4F4C39L}},{{0x5C4F4C39L,0x63FCD7C2L,0x7A5823A4L,1L,(-7L),(-1L),(-3L),0L,0x173D39B7L,(-3L)},{(-9L),0x5AF346B2L,(-1L),0x9E6AD4B8L,0x5AF346B2L,0x117B1E12L,0xC0815ECDL,0x62965D94L,3L,0x7849A6F4L},{0L,(-3L),0x13344068L,0xFE78F3A8L,0x90646ABBL,0x6E2CFDE6L,(-3L),0x32FBE5DDL,(-1L),0xE8261AC7L}},{{9L,0L,0x913BBDA3L,9L,(-1L),(-7L),0xBB094067L,0xC5A099A4L,0xC0815ECDL,(-1L)},{(-9L),0xE8261AC7L,0L,0xCD7BF47FL,6L,0x9E6AD4B8L,0x63FCD7C2L,0L,0x3380BABCL,0x338A9E00L},{0x9E6AD4B8L,0x63FCD7C2L,(-1L),(-6L),(-1L),6L,0xC0815ECDL,(-1L),0xE8261AC7L,(-7L)}},{{0x47518C3EL,0x6E2CFDE6L,0xCAF8AD1BL,0x85B44C6BL,0xBBABF514L,5L,0xC5A099A4L,0x0ED6A21BL,(-1L),(-9L)},{0x672B9D6EL,0x5C56880BL,5L,(-3L),0x9E6AD4B8L,0x3380BABCL,0x30714826L,(-7L),0x6E2CFDE6L,0x338A9E00L},{0x3796FB46L,0xFF544AEDL,0xBB51565FL,0x9E6AD4B8L,(-1L),(-3L),0x47518C3EL,0x47518C3EL,(-3L),(-1L)}},{{0x117B1E12L,5L,5L,0x117B1E12L,0x1C079181L,(-10L),0x7A5823A4L,0L,(-3L),0L},{0xB40688EAL,0xC0815ECDL,(-1L),5L,0x6CB96ADCL,0x83C476CCL,5L,0x7A5823A4L,(-3L),0x74DA7E0BL},{0L,0x7849A6F4L,0L,0x117B1E12L,3L,0x1E7F5864L,(-7L),0x63FCD7C2L,(-3L),0L}}};
                int32_t *l_427 = &l_421;
                uint32_t **l_501 = &l_399;
                int8_t **l_543 = &l_410;
                uint8_t l_568[8][9] = {{247UL,0xFEL,0x29L,249UL,0xFEL,0x4AL,2UL,0x4AL,0xFEL},{247UL,0x23L,0x23L,247UL,1UL,0xFEL,0xA1L,0x4AL,0x23L},{0xA1L,1UL,0x75L,0x55L,0x05L,0xFEL,2UL,1UL,1UL},{0xF5L,0x4AL,1UL,0x55L,1UL,0x4AL,0xF5L,0x23L,0x4AL},{0x55L,0x4AL,0x75L,247UL,0xFEL,0x29L,249UL,0xFEL,0x4AL},{0xF5L,1UL,0x23L,249UL,0x75L,0x75L,249UL,0x23L,1UL},{0xA1L,0x23L,0x29L,2UL,0x75L,0x29L,0xF5L,1UL,0x23L},{247UL,0xFEL,0x29L,249UL,0xFEL,0x4AL,2UL,0x4AL,0xFEL}};
                int i, j, k;
                if (p_53)
                    break;
                l_424[1]--;
                for (l_233 = 0; (l_233 <= 4); l_233 += 1)
                {
                    uint32_t l_430 = 1UL;
                    uint32_t *l_444[7] = {&l_430,&l_430,&l_430,&l_430,&l_430,&l_430,&l_430};
                    int32_t l_445 = 4L;
                    uint8_t *l_446[9] = {&l_252[5][1][0],&l_215[5][2],&l_252[5][1][0],&l_252[5][1][0],&l_215[5][2],&l_252[5][1][0],&l_252[5][1][0],&l_215[5][2],&l_252[5][1][0]};
                    int32_t l_447 = 0xE8688488L;
                    int64_t *l_458 = &l_263;
                    uint16_t *l_461 = &l_391;
                    int i, j, k;
                    l_427 = ((*l_409) = &p_54);
                    l_430 = (safe_mod_func_uint16_t_u_u(0xFB10L, 0xC0E0L));
                    p_54 = (safe_rshift_func_uint8_t_u_s(((p_55 >= l_430) || ((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((((!(safe_mod_func_int16_t_s_s(9L, p_54))) , (8UL == p_54)) , (p_54 | (((l_447 = (safe_add_func_uint16_t_u_u(((l_445 &= ((*l_242) |= ((p_53 , (l_251[(p_55 + 1)][l_233][l_254] = ((((l_442 |= p_54) , 1L) > 0x92AC536DL) , l_443))) >= 1UL))) | p_55), l_430))) , p_54) , 0L))), 0xB43AL)) || p_55), 1)) != p_54)), (**l_409)));
                    l_445 ^= ((((*l_242) = (safe_sub_func_uint64_t_u_u(((p_54 = (safe_div_func_uint64_t_u_u((65526UL <= ((+(p_55 && (((p_54 > ((((void*)0 == l_455) | p_53) == ((*l_461) = ((safe_mod_func_int64_t_s_s(((*l_458) ^= p_54), p_54)) > (((safe_sub_func_uint64_t_u_u(0xA2A95BB7B62FB341LL, p_55)) , (**l_418)) || 0xC7L))))) <= 0xFB3DFDEE746B6756LL) > p_54))) && p_54)), p_54))) < p_55), p_55))) & 4UL) < p_53);
                }
                if ((((safe_rshift_func_int8_t_s_u(0x89L, 2)) , ((((*l_410) &= (p_54 < (safe_lshift_func_uint8_t_u_u((((p_55 ^ ((((safe_add_func_int32_t_s_s(l_468, p_55)) , l_469[0]) == &l_470) <= (((p_54 >= (*l_427)) > p_55) | p_55))) || 1UL) <= p_53), 2)))) , 0x3B28L) , l_473)) ^ p_54))
                {
                    int64_t l_476 = 0xE5293A0FC3BDAF81LL;
                    uint16_t *l_485 = &l_391;
                    int32_t **l_508[6][9][4] = {{{&l_389[0],(void*)0,&l_427,&l_257[0][2]},{&l_389[0],&l_389[0],&l_427,&l_389[0]},{&l_257[0][1],&l_389[0],&l_389[0],&l_389[0]},{(void*)0,&l_257[0][1],(void*)0,&l_389[0]},{&l_389[0],&l_389[0],&l_427,&l_427},{&l_389[0],(void*)0,&l_389[0],&l_389[0]},{&l_389[0],&l_257[0][2],&l_427,&l_427},{&l_389[0],&l_389[0],&l_389[0],&l_257[0][5]},{(void*)0,&l_389[0],&l_389[0],&l_427}},{{&l_257[0][3],&l_257[0][1],&l_389[0],&l_389[0]},{&l_257[0][1],&l_257[0][1],&l_389[0],&l_427},{&l_257[0][1],&l_389[0],(void*)0,&l_257[0][5]},{&l_427,&l_389[0],(void*)0,&l_257[0][5]},{&l_257[0][2],&l_389[0],&l_257[0][2],&l_257[0][1]},{&l_389[0],&l_257[0][2],&l_427,(void*)0},{(void*)0,&l_427,&l_389[0],&l_427},{&l_389[0],(void*)0,&l_389[0],&l_389[0]},{&l_389[0],&l_389[0],&l_257[0][2],&l_389[0]}},{{(void*)0,&l_389[0],&l_257[0][5],&l_389[0]},{&l_389[0],&l_257[0][2],&l_257[0][2],(void*)0},{&l_257[0][2],(void*)0,&l_389[0],&l_257[0][2]},{&l_427,&l_389[0],&l_427,(void*)0},{&l_257[0][5],&l_389[0],&l_389[0],&l_427},{&l_389[0],&l_257[0][2],&l_389[0],&l_389[0]},{&l_257[0][3],(void*)0,&l_389[0],(void*)0},{&l_389[0],&l_389[0],&l_389[0],&l_257[0][1]},{&l_257[0][1],(void*)0,&l_427,&l_389[0]}},{{&l_257[0][5],&l_257[0][2],&l_257[0][5],&l_389[0]},{(void*)0,(void*)0,(void*)0,&l_257[0][1]},{&l_427,&l_389[0],&l_427,(void*)0},{&l_427,&l_389[0],&l_427,&l_427},{&l_427,&l_389[0],(void*)0,&l_257[0][2]},{(void*)0,&l_257[0][2],&l_257[0][5],&l_389[0]},{&l_257[0][5],&l_389[0],&l_427,&l_257[0][5]},{&l_257[0][1],&l_389[0],&l_389[0],&l_257[0][1]},{&l_389[0],&l_389[0],&l_389[0],&l_389[0]}},{{&l_257[0][3],&l_389[0],&l_389[0],&l_389[0]},{&l_389[0],&l_257[0][5],&l_389[0],&l_389[0]},{&l_257[0][5],&l_389[0],&l_427,&l_389[0]},{&l_427,&l_257[0][1],&l_389[0],&l_257[0][5]},{&l_257[0][2],&l_257[0][1],&l_257[0][2],&l_389[0]},{&l_389[0],&l_257[0][2],&l_257[0][5],&l_389[0]},{(void*)0,&l_389[0],&l_257[0][2],&l_427},{&l_389[0],&l_389[0],&l_389[0],&l_427},{&l_389[0],&l_389[0],&l_389[0],&l_389[0]}},{{(void*)0,&l_427,&l_427,&l_389[0]},{&l_389[0],&l_257[0][1],&l_257[0][2],&l_389[0]},{&l_257[0][2],(void*)0,(void*)0,&l_257[0][2]},{&l_427,&l_427,(void*)0,(void*)0},{&l_257[0][1],&l_257[0][2],&l_389[0],&l_389[0]},{&l_257[0][1],&l_257[0][2],&l_389[0],&l_389[0]},{&l_257[0][3],&l_257[0][2],&l_389[0],(void*)0},{(void*)0,&l_427,&l_389[0],&l_257[0][2]},{&l_389[0],(void*)0,&l_257[0][5],&l_389[0]}}};
                    int32_t l_537[4][6][1] = {{{0L},{0x58687765L},{0x79B1CED3L},{0x58687765L},{0L},{0x58687765L}},{{0x79B1CED3L},{0x58687765L},{0L},{0x58687765L},{0x79B1CED3L},{0x58687765L}},{{0L},{0x58687765L},{0x79B1CED3L},{0x58687765L},{0L},{0x58687765L}},{{0x79B1CED3L},{0x58687765L},{0L},{0x58687765L},{0x79B1CED3L},{0x58687765L}}};
                    int i, j, k;
                    if ((p_54 = ((((l_476 , p_54) < ((((l_477 == (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s(p_54)) || (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_485) = ((void*)0 == l_287)), (safe_div_func_int8_t_s_s((p_53 ^ (safe_mul_func_uint8_t_u_u((((*l_427) >= ((*l_287) = ((safe_sub_func_int64_t_s_s((p_55 < p_53), l_476)) <= l_476))) || (*l_427)), p_54))), 0xC4L)))), 0x5BB8L)) | 0xF942A84AB3B4D95FLL) || p_53)), 4))) || (*l_427)) , 4294967295UL) & 0xB6F11A60L)) & 0L) & p_53)))
                    {
                        uint32_t l_507 = 0UL;
                        uint32_t * const l_506 = &l_507;
                        uint32_t * const *l_505[6];
                        uint32_t * const **l_504 = &l_505[3];
                        int16_t *l_509[3][3] = {{&l_152[2][4][0],&l_419[0][0],&l_152[2][4][0]},{&l_152[1][1][2],&l_152[1][1][2],&l_152[1][1][2]},{&l_152[2][4][0],&l_419[0][0],&l_152[2][4][0]}};
                        int32_t l_510 = 0x16F0D3EAL;
                        uint64_t *l_534 = (void*)0;
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_505[i] = &l_506;
                        l_422[7][2][2] ^= ((safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(p_55, (safe_add_func_int64_t_s_s(((~0x24570B76L) != ((*l_427) >= ((((((l_510 = (((*l_506) = ((((*l_242) ^= (*l_427)) == 5UL) != (((0L <= (l_501 != ((*l_504) = l_502))) ^ ((((*l_470) != l_508[1][1][2]) | 1L) || p_53)) != p_55))) , p_55)) , (*l_427)) ^ p_55) , (*l_427)) , p_53) ^ p_55))), 0x69EEDF23FC86DAB5LL)))), (-1L))) , l_510);
                        l_533 &= ((0x0924L >= (safe_lshift_func_uint8_t_u_u(p_55, (safe_add_func_uint8_t_u_u(254UL, (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((0x1465L == (safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(0x63L, ((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0x19D5L, (safe_lshift_func_uint8_t_u_s((l_510 | ((*l_485) = (*l_427))), 1)))), 65528UL)) , p_53))), 4UL)) , (*l_427)) <= p_54), p_53))), 65526UL)), 18446744073709551615UL)), (**l_409))) , p_54) | 0x588C1339L)))))) & p_53);
                        return l_534;
                    }
                    else
                    {
                        uint16_t l_535[4][4] = {{0x01C0L,0x6F8EL,65531UL,0x6F8EL},{0x9DDAL,5UL,0x2BD2L,65531UL},{0x6F8EL,5UL,5UL,0x6F8EL},{5UL,0x6F8EL,0x9DDAL,0x01C0L}};
                        int32_t l_536 = 0L;
                        uint8_t l_538 = 5UL;
                        int i, j;
                        l_427 = &p_54;
                        l_535[1][2] |= p_54;
                        ++l_538;
                    }
                }
                else
                {
                    uint8_t l_548 = 0x62L;
                    for (l_442 = 0; (l_442 >= 50); l_442++)
                    {
                        const int8_t *l_546 = (void*)0;
                        const int8_t **l_545 = &l_546;
                        const int8_t ***l_544[1];
                        int8_t ***l_547 = &l_543;
                        uint8_t l_556 = 0UL;
                        int64_t *l_564[2][8] = {{&l_263,&l_263,&l_253,&l_253,&l_263,&l_263,&l_253,&l_253},{&l_263,&l_263,&l_253,&l_253,&l_263,&l_263,&l_253,&l_253}};
                        int32_t l_565 = 1L;
                        uint64_t l_567 = 1UL;
                        uint64_t *l_566 = &l_567;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_544[i] = &l_545;
                        p_54 = (*l_427);
                        (*l_547) = l_543;
                        l_548++;
                        l_568[5][5] = ((((*l_566) |= (+((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((l_556 , 0x607EL), ((l_556 , l_557) == (p_54 , &l_501)))), (l_556 > ((((--(*l_287)) >= (l_565 = (((safe_add_func_int64_t_s_s((p_53 == p_55), 0x38971F73798F15B5LL)) <= l_556) > p_54))) & 1L) >= 0x05FEL)))) < p_53))) , l_565) || 0x565CB262160BC1BBLL);
                    }
                }
            }
        }
    }
    return l_579;
}




static uint32_t func_58(int32_t p_59, int32_t * p_60, uint8_t * p_61, int8_t p_62)
{
    uint16_t l_80 = 1UL;
    int32_t l_86 = 1L;
    int32_t l_87 = 0x40870E26L;
    int32_t l_88 = 0xDE5E333AL;
    int32_t l_89 = 1L;
    int32_t l_90 = (-1L);
    int32_t l_91 = (-1L);
    int32_t l_92 = 1L;
    int32_t l_93 = 0x865626A2L;
    int32_t l_94 = 5L;
    int32_t l_95 = 0xA1AA0697L;
    int32_t l_96 = 0x61BC9EF2L;
    int32_t l_97 = 0xA0FEE19AL;
    int32_t l_98 = 0x010E3964L;
    int32_t l_99 = 3L;
    int32_t l_100[5][5] = {{1L,0x2CCAF28FL,0L,0L,0x2CCAF28FL},{1L,0x2CCAF28FL,0L,0L,0x2CCAF28FL},{1L,0x2CCAF28FL,0L,0L,0x2CCAF28FL},{1L,0x2CCAF28FL,0L,0L,0x2CCAF28FL},{1L,0x2CCAF28FL,0L,0L,0x2CCAF28FL}};
    int32_t **l_104 = (void*)0;
    int32_t *l_105[1][3][4] = {{{&l_100[0][3],(void*)0,&l_100[4][3],&l_100[4][3]},{&l_95,&l_95,&l_100[0][3],&l_100[4][3]},{&l_96,(void*)0,&l_96,&l_100[0][3]}}};
    uint16_t *l_120 = (void*)0;
    uint16_t *l_121 = &l_80;
    int32_t l_122 = 0x41DCAF16L;
    uint64_t l_124 = 0xF8BD7A0FECAD7D98LL;
    uint64_t *l_123[9][1];
    uint64_t *l_125 = (void*)0;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_123[i][j] = &l_124;
    }
    if (l_80)
    {
        int32_t l_82 = 2L;
        int32_t *l_81 = &l_82;
        int32_t **l_83[1];
        int i;
        for (i = 0; i < 1; i++)
            l_83[i] = &l_81;
        p_60 = l_81;
    }
    else
    {
        int32_t l_85 = 0xB2C9D536L;
        int32_t *l_84[6][1] = {{&l_85},{&l_85},{&l_85},{&l_85},{&l_85},{&l_85}};
        uint32_t l_101[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_101[i] = 4294967292UL;
        (*p_60) = (*p_60);
        l_101[1]++;
    }
    l_105[0][1][0] = (void*)0;
    if (((p_59 , (safe_lshift_func_uint8_t_u_u((~7L), 1))) & (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((0x2074L || (safe_sub_func_uint16_t_u_u(((&p_60 == (l_104 = &p_60)) , p_62), (((((*l_121) = (safe_mul_func_uint8_t_u_u((!(safe_div_func_int8_t_s_s(p_59, p_62))), p_59))) != l_122) , l_123[5][0]) != l_125)))), 5)) >= p_59), p_59))))
    {
        int64_t l_129 = 0L;
        int32_t l_134 = 7L;
        int32_t *l_133 = &l_134;
        int32_t **l_132 = &l_133;
        int32_t l_135 = 0x7933BFEBL;
        int32_t l_136 = 0x3A3A19F5L;
        l_136 |= ((l_135 = (((safe_mod_func_int16_t_s_s((~p_62), (l_129 | p_62))) > (((p_62 , ((l_129 , (safe_mod_func_int8_t_s_s(p_59, (l_129 || ((((((*l_132) = l_105[0][1][0]) != l_105[0][0][1]) , l_129) , p_62) != 7L))))) <= (-1L))) , 0xA7DDB56CL) != p_59)) , p_62)) > p_59);
    }
    else
    {
        uint16_t l_137 = 0x4500L;
        int32_t l_141[10] = {0x71B381EAL,6L,0x71B381EAL,0x71B381EAL,6L,0x71B381EAL,0x71B381EAL,6L,0x71B381EAL,0x71B381EAL};
        const int32_t * const l_140 = &l_141[1];
        const uint64_t *l_142[1];
        uint64_t **l_143 = &l_123[5][0];
        uint32_t l_146 = 0xD16BD07DL;
        uint32_t *l_145 = &l_146;
        int32_t l_147 = 5L;
        int i;
        for (i = 0; i < 1; i++)
            l_142[i] = &l_124;
        l_137--;
        l_147 &= ((l_140 != (void*)0) | ((((((l_142[0] = l_142[0]) != ((*l_143) = (void*)0)) , ((*l_145) ^= (((+3L) , &p_59) != &p_59))) | (((((l_141[1] >= (l_141[4] | 0UL)) <= 0x4082L) >= 0x94C73A16L) < 0xC773C3FA5341DB1ELL) ^ (-9L))) , 0UL) >= 0x878830C378F7CF68LL));
        for (l_97 = 0; (l_97 == (-11)); --l_97)
        {
            int32_t *l_150 = &l_98;
            int32_t **l_151[10] = {&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150,&l_150};
            int i;
            p_60 = l_150;
        }
    }
    return p_62;
}




static uint8_t * func_63(uint8_t * p_64, uint64_t * p_65)
{
    int32_t l_72 = 0x131B3B33L;
    int32_t *l_71 = &l_72;
    int32_t *l_73 = (void*)0;
    int32_t *l_74 = &l_72;
    int32_t *l_75[9] = {&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72};
    uint16_t l_76[6];
    uint8_t *l_79[4];
    int i;
    for (i = 0; i < 6; i++)
        l_76[i] = 0UL;
    for (i = 0; i < 4; i++)
        l_79[i] = (void*)0;
    ++l_76[4];
    return l_79[2];
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
