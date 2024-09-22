# C Language support

[C standard link](https://gcc.gnu.org/onlinedocs/gcc-10.3.0/gcc/Standards.html#Standards)

## GCC 10.3

- C89/C90
  - original ANSI C standard
  - to select : `-ansi` or `std=iso9899:19090`
- C94/C95
  - amended from C89/C90
  - to select : `-std=iso9899:199409`
- C99
  - major improvement
  - to select : `-std=c11` or `-std=iso9899:2011`
- C17
  - correction of C99
  - to select : `-std=c17` or `-std=iso9899:2017`

---
if no C dialect options **default is** `-std=gnu11`