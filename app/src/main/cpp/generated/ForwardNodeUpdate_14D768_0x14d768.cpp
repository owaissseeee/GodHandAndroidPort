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

// Function: ForwardNodeUpdate_14D768
// Address: 0x14d768 - 0x14d7d0
void ForwardNodeUpdate_14D768_0x14d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardNodeUpdate_14D768_0x14d768");
#endif

    switch (ctx->pc) {
        case 0x14d78cu: goto label_14d78c;
        case 0x14d7a0u: goto label_14d7a0;
        case 0x14d7acu: goto label_14d7ac;
        default: break;
    }

    ctx->pc = 0x14d768u;

    // 0x14d768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d76c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14d770: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14d774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d778: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14d77c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14d77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d784: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14D784u;
    SET_GPR_U32(ctx, 31, 0x14D78Cu);
    ctx->pc = 0x14D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D784u;
    // 0x14d788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14D784u, 0x14D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D78Cu;
label_14d78c:
    // 0x14d78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14d78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d790: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14D790u;
    {
        const bool branch_taken_0x14d790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d790) {
            ctx->pc = 0x14D794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D790u;
            // 0x14d794: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D7BCu;
            goto label_14d7bc;
        }
    }
    ctx->pc = 0x14D798u;
    // 0x14d798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d79c: 0x0  nop
    ctx->pc = 0x14d79cu;
    // NOP
label_14d7a0:
    // 0x14d7a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7a4: 0xc055758  jal         func_155D60
    ctx->pc = 0x14D7A4u;
    SET_GPR_U32(ctx, 31, 0x14D7ACu);
    ctx->pc = 0x14D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7A4u;
    // 0x14d7a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D60u, 0x14D7A4u, 0x14D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7ACu;
label_14d7ac:
    // 0x14d7ac: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14d7b0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D7B0u;
    {
        const bool branch_taken_0x14d7b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7B0u;
        // 0x14d7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7b0) {
            ctx->pc = 0x14D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d7a0;
        }
    }
    ctx->pc = 0x14D7B8u;
    // 0x14d7b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d7bc:
    // 0x14d7bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d7c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7C8u;
        // 0x14d7cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D7D0u;
}
