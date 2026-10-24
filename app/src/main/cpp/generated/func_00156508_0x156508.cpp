#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00156508
// Address: 0x156508 - 0x156550
void func_00156508_0x156508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00156508_0x156508");
#endif

    ctx->pc = 0x156508u;

    // 0x156508: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x156508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15650c: 0x23b80  sll         $a3, $v0, 14
    ctx->pc = 0x15650cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x156510: 0x3c041f80  lui         $a0, 0x1F80
    ctx->pc = 0x156510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8064 << 16));
    // 0x156514: 0x3c052800  lui         $a1, 0x2800
    ctx->pc = 0x156514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10240 << 16));
    // 0x156518: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x156518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x15651c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x15651cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x156520: 0x852020  add         $a0, $a0, $a1
    ctx->pc = 0x156520u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x156524: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x156524u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x156528: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x15652c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x156530: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x156530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x156534: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x156534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x156538: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x156538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x15653c: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x15653cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x156540: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x156540u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156544: 0x3e00008  jr          $ra
    ctx->pc = 0x156544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15654Cu;
    // 0x15654c: 0x0  nop
    ctx->pc = 0x15654cu;
    // NOP
    ctx->pc = 0x156550u;
}
