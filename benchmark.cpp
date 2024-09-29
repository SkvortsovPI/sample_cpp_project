#include <benchmark/benchmark.h>
#include "include/my_add.hpp"

void bench_add(benchmark::State& state) {
    while (state.KeepRunning()) 
    {
        benchmark::DoNotOptimize(my_add(state.range(0), state.range(1)));
    }
}
BENCHMARK(bench_add)->Args({12, -3})->Args({10, 0})->Args({-5, -14});

BENCHMARK_MAIN();