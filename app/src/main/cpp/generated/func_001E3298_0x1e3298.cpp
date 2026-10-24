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

// Function: func_001E3298
// Address: 0x1e3298 - 0x1e32e8
void func_001E3298_0x1e3298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E3298_0x1e3298");
#endif

    switch (ctx->pc) {
        case 0x1e32b8u: goto label_1e32b8;
        case 0x1e32c8u: goto label_1e32c8;
        default: break;
    }

    ctx->pc = 0x1e3298u;

    // 0x1e3298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e329c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e32a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e32a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e32a4: 0x24900400  addiu       $s0, $a0, 0x400
    ctx->pc = 0x1e32a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x1e32a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e32ac: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x1e32acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1e32b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e32b4: 0x0  nop
    ctx->pc = 0x1e32b4u;
    // NOP
label_1e32b8:
    // 0x1e32b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e32b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e32bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e32c0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E32C0u;
    SET_GPR_U32(ctx, 31, 0x1E32C8u);
    ctx->pc = 0x1E32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32C0u;
    // 0x1e32c4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E32C0u, 0x1E32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E32C8u;
label_1e32c8:
    // 0x1e32c8: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E32C8u;
    {
        const bool branch_taken_0x1e32c8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e32c8) {
            ctx->pc = 0x1E32CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E32C8u;
            // 0x1e32cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E32B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e32b8;
        }
    }
    ctx->pc = 0x1E32D0u;
    // 0x1e32d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e32d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e32d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e32d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32DCu;
        // 0x1e32e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E32E4u;
    // 0x1e32e4: 0x0  nop
    ctx->pc = 0x1e32e4u;
    // NOP
    ctx->pc = 0x1e32e8u;
}
