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

// Function: GetTypeDescriptorE_1A0830
// Address: 0x1a0830 - 0x1a0880
void GetTypeDescriptorE_1A0830_0x1a0830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTypeDescriptorE_1A0830_0x1a0830");
#endif

    switch (ctx->pc) {
        case 0x1a0854u: goto label_1a0854;
        case 0x1a086cu: goto label_1a086c;
        default: break;
    }

    ctx->pc = 0x1a0830u;

    // 0x1a0830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0834: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a0838: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a083c: 0x8c625ef8  lw          $v0, 0x5EF8($v1)
    ctx->pc = 0x1a083cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785EF8u));
    // 0x1a0840: 0x24705ef8  addiu       $s0, $v1, 0x5EF8
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24312));
    // 0x1a0844: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0844u;
    {
        const bool branch_taken_0x1a0844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0844u;
        // 0x1a0848: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0844) {
            ctx->pc = 0x1A086Cu;
            goto label_1a086c;
        }
    }
    ctx->pc = 0x1A084Cu;
    // 0x1a084c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x1A084Cu;
    SET_GPR_U32(ctx, 31, 0x1A0854u);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x1A084Cu, 0x1A0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0854u;
label_1a0854:
    // 0x1a0854: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a0858: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a085c: 0x24a56c50  addiu       $a1, $a1, 0x6C50
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27728));
    // 0x1a0860: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x1a0864: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A0864u;
    SET_GPR_U32(ctx, 31, 0x1A086Cu);
    ctx->pc = 0x1A0868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0864u;
    // 0x1a0868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A0864u, 0x1A086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A086Cu;
label_1a086c:
    // 0x1a086c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a086cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0878: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0878u;
        // 0x1a087c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0880u;
}
