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

// Function: func_00182838
// Address: 0x182838 - 0x182888
void func_00182838_0x182838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00182838_0x182838");
#endif

    switch (ctx->pc) {
        case 0x18285cu: goto label_18285c;
        case 0x182874u: goto label_182874;
        default: break;
    }

    ctx->pc = 0x182838u;

    // 0x182838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18283c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x18283cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x182840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182844: 0x8c625a88  lw          $v0, 0x5A88($v1)
    ctx->pc = 0x182844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A88u));
    // 0x182848: 0x24705a88  addiu       $s0, $v1, 0x5A88
    ctx->pc = 0x182848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23176));
    // 0x18284c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18284Cu;
    {
        const bool branch_taken_0x18284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18284Cu;
        // 0x182850: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18284c) {
            ctx->pc = 0x182874u;
            goto label_182874;
        }
    }
    ctx->pc = 0x182854u;
    // 0x182854: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x182854u;
    SET_GPR_U32(ctx, 31, 0x18285Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x182854u, 0x18285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18285Cu;
label_18285c:
    // 0x18285c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x182860: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x182864: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x182864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x182868: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x18286c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x18286Cu;
    SET_GPR_U32(ctx, 31, 0x182874u);
    ctx->pc = 0x182870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18286Cu;
    // 0x182870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x18286Cu, 0x182874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182874u;
label_182874:
    // 0x182874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18287c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18287cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182880: 0x3e00008  jr          $ra
    ctx->pc = 0x182880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182880u;
        // 0x182884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182888u;
}
