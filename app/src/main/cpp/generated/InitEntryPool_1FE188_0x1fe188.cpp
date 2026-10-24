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

// Function: InitEntryPool_1FE188
// Address: 0x1fe188 - 0x1fe1e0
void InitEntryPool_1FE188_0x1fe188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEntryPool_1FE188_0x1fe188");
#endif

    switch (ctx->pc) {
        case 0x1fe1b0u: goto label_1fe1b0;
        case 0x1fe1b8u: goto label_1fe1b8;
        default: break;
    }

    ctx->pc = 0x1fe188u;

    // 0x1fe188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe18c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe194: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe198: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe19c: 0x26113c00  addiu       $s1, $s0, 0x3C00
    ctx->pc = 0x1fe19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 15360));
    // 0x1fe1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe1a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1ac: 0x0  nop
    ctx->pc = 0x1fe1acu;
    // NOP
label_1fe1b0:
    // 0x1fe1b0: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1FE1B0u;
    SET_GPR_U32(ctx, 31, 0x1FE1B8u);
    ctx->pc = 0x1FE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1B0u;
    // 0x1fe1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1FE1B0u, 0x1FE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1B8u;
label_1fe1b8:
    // 0x1fe1b8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1fe1bc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fe1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe1c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE1C0u;
    {
        const bool branch_taken_0x1fe1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1C0u;
        // 0x1fe1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe1c0) {
            ctx->pc = 0x1FE1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe1b0;
        }
    }
    ctx->pc = 0x1FE1C8u;
    // 0x1fe1c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe1cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe1d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1D8u;
        // 0x1fe1dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1E0u;
}
