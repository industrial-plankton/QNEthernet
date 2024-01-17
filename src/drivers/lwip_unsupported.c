// SPDX-FileCopyrightText: (c) 2021-2024 Shawn Silverman <shawn@pobox.com>
// SPDX-License-Identifier: AGPL-3.0-or-later

// lwip_unsupported.c contains the unsupported Ethernet interface implementation.
// This file is part of the QNEthernet library.

#if !defined(ARDUINO_TEENSY41)

#include "lwip_driver.h"

bool driver_is_unknown() {
  return false;
}

void driver_get_system_mac(uint8_t *mac) {
}

void driver_set_mac(uint8_t mac[ETH_HWADDR_LEN]) {
}

bool driver_has_hardware() {
  return false;
}

void driver_set_chip_select_pin(int pin) {
}

bool driver_init(const uint8_t mac[ETH_HWADDR_LEN]) {
  return false;
}

void driver_deinit() {
}

void driver_proc_input(struct netif *netif) {
}

void driver_poll(struct netif *netif) {
}

err_t driver_output(struct netif *netif, struct pbuf *p) {
  return ERR_IF;
}

int driver_link_speed() {
  return 0;
}

bool driver_link_is_full_duplex() {
  return false;
}

bool driver_link_is_crossover() {
  return false;
}

bool driver_output_frame(const uint8_t *frame, size_t len) {
  return false;
}

// --------------------------------------------------------------------------
//  MAC Address Filtering
// --------------------------------------------------------------------------

#if !QNETHERNET_ENABLE_PROMISCUOUS_MODE

bool driver_set_mac_address_allowed(const uint8_t *mac, bool allow) {
  return false;
}

#endif  // !QNETHERNET_ENABLE_PROMISCUOUS_MODE

#endif  // !ARDUINO_TEENSY41
