#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_003BFFE8_0x3bffe8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_003BFFE8_0x3bffe8");
#endif
    ctx->pc = getRegU32(ctx, 31);
    ps2_stubs::TODO_NAMED("sub_003BFFE8", rdram, ctx, runtime); 
}
