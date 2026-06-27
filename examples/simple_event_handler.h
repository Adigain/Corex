#ifndef COREX_SIMPLE_EVENT_HANDLER_H
#define COREX_SIMPLE_EVENT_HANDLER_H
#include "event_handler.h"

using namespace Corex;

class SimpleEventHandler : public EventHandler
{

protected:
    void handleOrderAdded(const OrderAdded &notification) override
    {
        std::cout << notification << std::endl;
    }
    void handleOrderDeleted(const OrderDeleted &notification) override
    {
        std::cout << notification << std::endl;
    }
    void handleOrderUpdated(const OrderUpdated &notification) override
    {
        std::cout << notification << std::endl;
    }
    void handleOrderExecuted(const ExecutedOrder &notification) override
    {
        std::cout << notification << std::endl;
    }
    void handleSymbolAdded(const SymbolAdded &notification) override
    {
        std::cout << notification << std::endl;
    }
    void handleSymbolDeleted(const SymbolDeleted &notification) override
    {
        std::cout << notification << std::endl;
    }
};
#endif // COREX_SIMPLE_EVENT_HANDLER_H
