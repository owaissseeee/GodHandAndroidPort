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

// Function: func_002D9D50
// Address: 0x2d9d50 - 0x2d9db8
void func_002D9D50_0x2d9d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9D50_0x2d9d50");
#endif

    ctx->pc = 0x2d9d50u;

    // 0x2d9d50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d9d54: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x2d9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x2d9d58: 0x3442a5e0  ori         $v0, $v0, 0xA5E0
    ctx->pc = 0x2d9d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42464);
    // 0x2d9d5c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2d9d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d9d60: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2d9d60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2d9d64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9D64u;
    {
        const bool branch_taken_0x2d9d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d64) {
            ctx->pc = 0x2D9D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D64u;
            // 0x2d9d68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D6Cu;
            goto label_2d9d6c;
        }
    }
    ctx->pc = 0x2D9D6Cu;
label_2d9d6c:
    // 0x2d9d6c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2d9d6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d70: 0x5012  mflo        $t2
    ctx->pc = 0x2d9d70u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x2d9d74: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x2d9d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d9d78: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2d9d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d9d7c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x2d9d7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2d9d80: 0x1012  mflo        $v0
    ctx->pc = 0x2d9d80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d9d84: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2d9d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d9d88: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2d9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d9d8c: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2d9d8cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2d9d90: 0x2812  mflo        $a1
    ctx->pc = 0x2d9d90u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2d9d94: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9D94u;
    {
        const bool branch_taken_0x2d9d94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d94) {
            ctx->pc = 0x2D9D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D94u;
            // 0x2d9d98: 0xad2a0000  sw          $t2, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D9Cu;
            goto label_2d9d9c;
        }
    }
    ctx->pc = 0x2D9D9Cu;
label_2d9d9c:
    // 0x2d9d9c: 0x54e00001  bnel        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9D9Cu;
    {
        const bool branch_taken_0x2d9d9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d9c) {
            ctx->pc = 0x2D9DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D9Cu;
            // 0x2d9da0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9DA4u;
            goto label_2d9da4;
        }
    }
    ctx->pc = 0x2D9DA4u;
label_2d9da4:
    // 0x2d9da4: 0x55000001  bnel        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9DA4u;
    {
        const bool branch_taken_0x2d9da4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9da4) {
            ctx->pc = 0x2D9DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9DA4u;
            // 0x2d9da8: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9DACu;
            goto label_2d9dac;
        }
    }
    ctx->pc = 0x2D9DACu;
label_2d9dac:
    // 0x2d9dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9DB4u;
    // 0x2d9db4: 0x0  nop
    ctx->pc = 0x2d9db4u;
    // NOP
    ctx->pc = 0x2d9db8u;
}
