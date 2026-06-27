#ifndef COREX_GENERATE_ORDERS_H
#define COREX_GENERATE_ORDERS_H
#include <vector>
#include <random>
#include "order.h"
using namespace Corex;
void generateOrders(std::vector<Order> &orders, uint32_t num_orders, uint32_t num_symbols);
#endif // COREX_GENERATE_ORDERS_H
