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

// Function: func_0031FFC0
// Address: 0x31ffc0 - 0x320010
void func_0031FFC0_0x31ffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FFC0_0x31ffc0");
#endif

    switch (ctx->pc) {
        case 0x31ffe4u: goto label_31ffe4;
        case 0x31fffcu: goto label_31fffc;
        default: break;
    }

    ctx->pc = 0x31ffc0u;

    // 0x31ffc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ffc4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31ffc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ffc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ffcc: 0x8c626698  lw          $v0, 0x6698($v1)
    ctx->pc = 0x31ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786698u));
    // 0x31ffd0: 0x24706698  addiu       $s0, $v1, 0x6698
    ctx->pc = 0x31ffd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26264));
    // 0x31ffd4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31FFD4u;
    {
        const bool branch_taken_0x31ffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFD4u;
        // 0x31ffd8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffd4) {
            ctx->pc = 0x31FFFCu;
            goto label_31fffc;
        }
    }
    ctx->pc = 0x31FFDCu;
    // 0x31ffdc: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x31FFDCu;
    SET_GPR_U32(ctx, 31, 0x31FFE4u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x31FFDCu, 0x31FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFE4u;
label_31ffe4:
    // 0x31ffe4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31ffe8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31ffec: 0x24a511e0  addiu       $a1, $a1, 0x11E0
    ctx->pc = 0x31ffecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4576));
    // 0x31fff0: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x31fff4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31FFF4u;
    SET_GPR_U32(ctx, 31, 0x31FFFCu);
    ctx->pc = 0x31FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FFF4u;
    // 0x31fff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31FFF4u, 0x31FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFFCu;
label_31fffc:
    // 0x31fffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31fffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320008: 0x3e00008  jr          $ra
    ctx->pc = 0x320008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320008u;
        // 0x32000c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320010u;
}
