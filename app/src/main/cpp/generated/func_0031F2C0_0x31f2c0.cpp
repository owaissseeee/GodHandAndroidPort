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

// Function: func_0031F2C0
// Address: 0x31f2c0 - 0x31f310
void func_0031F2C0_0x31f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F2C0_0x31f2c0");
#endif

    switch (ctx->pc) {
        case 0x31f2e4u: goto label_31f2e4;
        case 0x31f2fcu: goto label_31f2fc;
        default: break;
    }

    ctx->pc = 0x31f2c0u;

    // 0x31f2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f2c4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31f2c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f2cc: 0x8c626648  lw          $v0, 0x6648($v1)
    ctx->pc = 0x31f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786648u));
    // 0x31f2d0: 0x24706648  addiu       $s0, $v1, 0x6648
    ctx->pc = 0x31f2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26184));
    // 0x31f2d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F2D4u;
    {
        const bool branch_taken_0x31f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F2D4u;
        // 0x31f2d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2d4) {
            ctx->pc = 0x31F2FCu;
            goto label_31f2fc;
        }
    }
    ctx->pc = 0x31F2DCu;
    // 0x31f2dc: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x31F2DCu;
    SET_GPR_U32(ctx, 31, 0x31F2E4u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x31F2DCu, 0x31F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F2E4u;
label_31f2e4:
    // 0x31f2e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f2e8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31f2ec: 0x24a51078  addiu       $a1, $a1, 0x1078
    ctx->pc = 0x31f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4216));
    // 0x31f2f0: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x31f2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x31f2f4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31F2F4u;
    SET_GPR_U32(ctx, 31, 0x31F2FCu);
    ctx->pc = 0x31F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F2F4u;
    // 0x31f2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31F2F4u, 0x31F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F2FCu;
label_31f2fc:
    // 0x31f2fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f308: 0x3e00008  jr          $ra
    ctx->pc = 0x31F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F308u;
        // 0x31f30c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F310u;
}
