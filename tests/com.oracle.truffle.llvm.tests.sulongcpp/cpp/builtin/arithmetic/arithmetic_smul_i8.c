#ifndef __clang__
#include <stdbool.h>
bool __builtin_mul_overflow(signed char, signed char, signed char *);
#endif

int main(int argc, const char **argv) {
  signed char res;

  if (__builtin_mul_overflow((signed char)0x0, (signed char)0x0, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x0, (signed char)0x7F, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x0, (signed char)0x80, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x1, (signed char)0x7F, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x1, (signed char)0x80, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x2, (signed char)0x3F, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x2, (signed char)0xC0, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x2, (signed char)0x7F, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x2, (signed char)0x80, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x0F, (signed char)0x8, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x10, (signed char)0x8, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x7F, (signed char)0x0, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x7F, (signed char)0x1, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x7F, (signed char)0x2, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x7F, (signed char)0x7F, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x7F, (signed char)0x80, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x80, (signed char)0x0, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0x80, (signed char)0x1, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x80, (signed char)0x2, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x80, (signed char)0x7F, &res)) {
    return -1;
  }

  if (!__builtin_mul_overflow((signed char)0x80, (signed char)0x80, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0xFF, (signed char)0x0, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0xFF, (signed char)0x1, &res)) {
    return -1;
  }

  if (__builtin_mul_overflow((signed char)0xFF, (signed char)0xFF, &res)) {
    return -1;
  }

  return 0;
}
