/*
  C implementation of the Belorussian standard STB 34.101.31-2011 (Bel-T) block cipher.

  :author: Philipp Jovanovic <philipp@jovanovic.io>, 2014
  :license: CC0 1.0 Universal, see LICENSE
*/
#ifndef BELT_H
#define BELT_H

#include <stddef.h>
#include <stdint.h>

void belt_init(uint8_t *ks, const uint8_t *k, size_t klen);
void belt_encrypt(uint8_t *out, const uint8_t *in, const uint8_t *ks);
void belt_decrypt(uint8_t *out, const uint8_t *in, const uint8_t *ks);

#endif
