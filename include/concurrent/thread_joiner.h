#ifndef COREX_THREAD_JOINER_H
#define COREX_THREAD_JOINER_H
#include <vector>
#include <thread>

namespace Corex::Concurrent {
/**
 * A class to clean up threads used by the thread pool.
 */
struct ThreadJoiner
{
    explicit ThreadJoiner(std::vector<std::thread> &threads_)
        : threads(threads_)
    {}

    ~ThreadJoiner()
    {
        // Join all joinable threads.
        for (auto &thread : threads)
        {
            if (thread.joinable())
                thread.join();
        }
    }

private:
    // The threads that the joiner is responsible for joining.
    std::vector<std::thread> &threads;
};
} // namespace Corex::Concurrent
#endif // COREX_THREAD_JOINER_H
