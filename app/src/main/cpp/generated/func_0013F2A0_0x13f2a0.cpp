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

// Function: func_0013F2A0
// Address: 0x13f2a0 - 0x13f2f8
void func_0013F2A0_0x13f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013F2A0_0x13f2a0");
#endif

    switch (ctx->pc) {
        case 0x13f2c4u: goto label_13f2c4;
        case 0x13f2dcu: goto label_13f2dc;
        default: break;
    }

    ctx->pc = 0x13f2a0u;

    // 0x13f2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f2a4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13f2a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f2ac: 0x8c625648  lw          $v0, 0x5648($v1)
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785648u));
    // 0x13f2b0: 0x24705648  addiu       $s0, $v1, 0x5648
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22088));
    // 0x13f2b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F2B4u;
    {
        const bool branch_taken_0x13f2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2B4u;
        // 0x13f2b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b4) {
            ctx->pc = 0x13F2DCu;
            goto label_13f2dc;
        }
    }
    ctx->pc = 0x13F2BCu;
    // 0x13f2bc: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13F2BCu;
    SET_GPR_U32(ctx, 31, 0x13F2C4u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13F2BCu, 0x13F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2C4u;
label_13f2c4:
    // 0x13f2c4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13f2c8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13f2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13f2cc: 0x24a5e170  addiu       $a1, $a1, -0x1E90
    ctx->pc = 0x13f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959472));
    // 0x13f2d0: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13f2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13f2d4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13F2D4u;
    SET_GPR_U32(ctx, 31, 0x13F2DCu);
    ctx->pc = 0x13F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F2D4u;
    // 0x13f2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13F2D4u, 0x13F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2DCu;
label_13f2dc:
    // 0x13f2dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f2e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2E8u;
        // 0x13f2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F2F0u;
    // 0x13f2f0: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x13f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x13f2f4: 0x0  nop
    ctx->pc = 0x13f2f4u;
    // NOP
    ctx->pc = 0x13f2f8u;
}
