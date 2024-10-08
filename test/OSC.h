// SPDX-FileCopyrightText: (c) 2021 Shawn Silverman <shawn@pobox.com>
// SPDX-License-Identifier: MIT

// OSC.h contains OSC function declarations.
// This file is part of the QNEthernet library.

#ifndef QNETHERNET_OSC_H_
#define QNETHERNET_OSC_H_

#include <Print.h>

// Print an OSC message, either a bundle or not.
void printOSC(Print &out, const uint8_t *b, int len);

#endif  // QNETHERNET_OSC_H_
