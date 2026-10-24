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

// Function: func_003780B0
// Address: 0x3780b0 - 0x3780f8
void func_003780B0_0x3780b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003780B0_0x3780b0");
#endif

    ctx->pc = 0x3780b0u;

    // 0x3780b0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x3780b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3780b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3780b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3780b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3780bc: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x3780bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3780c0: 0x38430080  xori        $v1, $v0, 0x80
    ctx->pc = 0x3780c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
    // 0x3780c4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x3780c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3780c8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3780c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3780cc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3780ccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3780d0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3780d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3780d4: 0x24037f00  addiu       $v1, $zero, 0x7F00
    ctx->pc = 0x3780d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x3780d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3780D8u;
    {
        const bool branch_taken_0x3780d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780d8) {
            ctx->pc = 0x3780DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3780D8u;
            // 0x3780dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3780E0u;
            goto label_3780e0;
        }
    }
    ctx->pc = 0x3780E0u;
label_3780e0:
    // 0x3780e0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3780e0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3780e4: 0x1012  mflo        $v0
    ctx->pc = 0x3780e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3780e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3780e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3780ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3780ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3780F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780ECu;
        // 0x3780f0: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3780ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3780F4u;
    // 0x3780f4: 0x0  nop
    ctx->pc = 0x3780f4u;
    // NOP
    ctx->pc = 0x3780f8u;
}
