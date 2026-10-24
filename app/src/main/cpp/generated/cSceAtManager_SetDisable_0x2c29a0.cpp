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

// Function: cSceAtManager_SetDisable
// Address: 0x2c29a0 - 0x2c29f8
void cSceAtManager_SetDisable_0x2c29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_SetDisable_0x2c29a0");
#endif

    switch (ctx->pc) {
        case 0x2c29d0u: goto label_2c29d0;
        case 0x2c29e0u: goto label_2c29e0;
        default: break;
    }

    ctx->pc = 0x2c29a0u;

    // 0x2c29a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c29a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c29a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c29a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c29ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c29acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c29b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29B0u;
    {
        const bool branch_taken_0x2c29b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29B0u;
        // 0x2c29b4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29b0) {
            ctx->pc = 0x2C29C0u;
            goto label_2c29c0;
        }
    }
    ctx->pc = 0x2C29B8u;
    // 0x2c29b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29B8u;
    {
        const bool branch_taken_0x2c29b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c29b8) {
            ctx->pc = 0x2C29C8u;
            goto label_2c29c8;
        }
    }
    ctx->pc = 0x2C29C0u;
label_2c29c0:
    // 0x2c29c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C29C0u;
    {
        const bool branch_taken_0x2c29c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29C0u;
        // 0x2c29c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29c0) {
            ctx->pc = 0x2C29E4u;
            goto label_2c29e4;
        }
    }
    ctx->pc = 0x2C29C8u;
label_2c29c8:
    // 0x2c29c8: 0xc0b039a  jal         func_2C0E68
    ctx->pc = 0x2C29C8u;
    SET_GPR_U32(ctx, 31, 0x2C29D0u);
    ctx->pc = 0x2C29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29C8u;
    // 0x2c29cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E68u, 0x2C29C8u, 0x2C29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29D0u;
label_2c29d0:
    // 0x2c29d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C29D0u;
    {
        const bool branch_taken_0x2c29d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29D0u;
        // 0x2c29d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29d0) {
            ctx->pc = 0x2C29E0u;
            goto label_2c29e0;
        }
    }
    ctx->pc = 0x2C29D8u;
    // 0x2c29d8: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x2C29D8u;
    SET_GPR_U32(ctx, 31, 0x2C29E0u);
    ctx->pc = 0x2C29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C29D8u;
    // 0x2c29dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x2C29D8u, 0x2C29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C29E0u;
label_2c29e0:
    // 0x2c29e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c29e4:
    // 0x2c29e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c29e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c29e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c29e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c29ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C29ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29ECu;
        // 0x2c29f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C29ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C29F4u;
    // 0x2c29f4: 0x0  nop
    ctx->pc = 0x2c29f4u;
    // NOP
    ctx->pc = 0x2c29f8u;
}
