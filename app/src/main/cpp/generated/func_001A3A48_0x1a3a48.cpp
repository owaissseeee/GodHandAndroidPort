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

// Function: func_001A3A48
// Address: 0x1a3a48 - 0x1a3a98
void func_001A3A48_0x1a3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3A48_0x1a3a48");
#endif

    switch (ctx->pc) {
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a84u: goto label_1a3a84;
        default: break;
    }

    ctx->pc = 0x1a3a48u;

    // 0x1a3a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3a4c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a3a50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3a54: 0x8c625f38  lw          $v0, 0x5F38($v1)
    ctx->pc = 0x1a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F38u));
    // 0x1a3a58: 0x24705f38  addiu       $s0, $v1, 0x5F38
    ctx->pc = 0x1a3a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24376));
    // 0x1a3a5c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3A5Cu;
    {
        const bool branch_taken_0x1a3a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A5Cu;
        // 0x1a3a60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a5c) {
            ctx->pc = 0x1A3A84u;
            goto label_1a3a84;
        }
    }
    ctx->pc = 0x1A3A64u;
    // 0x1a3a64: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A3A64u;
    SET_GPR_U32(ctx, 31, 0x1A3A6Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A3A64u, 0x1A3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A6Cu;
label_1a3a6c:
    // 0x1a3a6c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a3a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a3a70: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a3a70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a3a74: 0x24a57038  addiu       $a1, $a1, 0x7038
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28728));
    // 0x1a3a78: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a3a7c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A3A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3A84u);
    ctx->pc = 0x1A3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A7Cu;
    // 0x1a3a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A3A7Cu, 0x1A3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A84u;
label_1a3a84:
    // 0x1a3a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3a8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A90u;
        // 0x1a3a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3A98u;
}
