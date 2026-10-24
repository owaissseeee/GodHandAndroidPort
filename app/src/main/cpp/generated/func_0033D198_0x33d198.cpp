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

// Function: func_0033D198
// Address: 0x33d198 - 0x33d218
void func_0033D198_0x33d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D198_0x33d198");
#endif

    ctx->pc = 0x33d198u;

    // 0x33d198: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33d198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d19c: 0x84e20098  lh          $v0, 0x98($a3)
    ctx->pc = 0x33d19cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x33d1a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D1A0u;
    {
        const bool branch_taken_0x33d1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1A0u;
        // 0x33d1a4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1a0) {
            ctx->pc = 0x33D1C8u;
            goto label_33d1c8;
        }
    }
    ctx->pc = 0x33D1A8u;
    // 0x33d1a8: 0x80e2000f  lb          $v0, 0xF($a3)
    ctx->pc = 0x33d1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
    // 0x33d1ac: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x33d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x33d1b0: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x33d1b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33d1b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D1B4u;
    {
        const bool branch_taken_0x33d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d1b4) {
            ctx->pc = 0x33D1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D1B4u;
            // 0x33d1b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D1BCu;
            goto label_33d1bc;
        }
    }
    ctx->pc = 0x33D1BCu;
label_33d1bc:
    // 0x33d1bc: 0x1812  mflo        $v1
    ctx->pc = 0x33d1bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33d1c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33D1C0u;
    {
        const bool branch_taken_0x33d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1C0u;
        // 0x33d1c4: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1c0) {
            ctx->pc = 0x33D1FCu;
            goto label_33d1fc;
        }
    }
    ctx->pc = 0x33D1C8u;
label_33d1c8:
    // 0x33d1c8: 0x80e2000d  lb          $v0, 0xD($a3)
    ctx->pc = 0x33d1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x33d1cc: 0x80e5000e  lb          $a1, 0xE($a3)
    ctx->pc = 0x33d1ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x33d1d0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x33d1d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33d1d4: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x33d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x33d1d8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x33d1d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x33d1dc: 0xace80048  sw          $t0, 0x48($a3)
    ctx->pc = 0x33d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 8));
    // 0x33d1e0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x33d1e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x33d1e4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x33d1e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d1e8: 0x70c2001a  div1        $zero, $a2, $v0
    ctx->pc = 0x33d1e8u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x33d1ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33D1ECu;
    {
        const bool branch_taken_0x33d1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d1ec) {
            ctx->pc = 0x33D1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D1ECu;
            // 0x33d1f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D1F4u;
            goto label_33d1f4;
        }
    }
    ctx->pc = 0x33D1F4u;
label_33d1f4:
    // 0x33d1f4: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x33d1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x33d1f8: 0x70001812  mflo1       $v1
    ctx->pc = 0x33d1f8u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
label_33d1fc:
    // 0x33d1fc: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x33d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x33d200: 0xace000f4  sw          $zero, 0xF4($a3)
    ctx->pc = 0x33d200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 0));
    // 0x33d204: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x33d204u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x33d208: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x33d208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x33d20c: 0x3e00008  jr          $ra
    ctx->pc = 0x33D20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D20Cu;
        // 0x33d210: 0xace000f8  sw          $zero, 0xF8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D214u;
    // 0x33d214: 0x0  nop
    ctx->pc = 0x33d214u;
    // NOP
    ctx->pc = 0x33d218u;
}
