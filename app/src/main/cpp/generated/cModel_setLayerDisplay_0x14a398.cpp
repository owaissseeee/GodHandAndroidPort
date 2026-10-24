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

// Function: cModel_setLayerDisplay
// Address: 0x14a398 - 0x14a3e8
void cModel_setLayerDisplay_0x14a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setLayerDisplay_0x14a398");
#endif

    switch (ctx->pc) {
        case 0x14a3b0u: goto label_14a3b0;
        default: break;
    }

    ctx->pc = 0x14a398u;

    // 0x14a398: 0x8c83025c  lw          $v1, 0x25C($a0)
    ctx->pc = 0x14a398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x14a39c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14A39Cu;
    {
        const bool branch_taken_0x14a39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a39c) {
            ctx->pc = 0x14A3DCu;
            goto label_14a3dc;
        }
    }
    ctx->pc = 0x14A3A4u;
    // 0x14a3a4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x14a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x14a3a8: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x14a3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x14a3ac: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x14a3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
label_14a3b0:
    // 0x14a3b0: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A3B0u;
    {
        const bool branch_taken_0x14a3b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a3b0) {
            ctx->pc = 0x14A3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A3B0u;
            // 0x14a3b4: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A3D4u;
            goto label_14a3d4;
        }
    }
    ctx->pc = 0x14A3B8u;
    // 0x14a3b8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3B8u;
    {
        const bool branch_taken_0x14a3b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3B8u;
        // 0x14a3bc: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3b8) {
            ctx->pc = 0x14A3C8u;
            goto label_14a3c8;
        }
    }
    ctx->pc = 0x14A3C0u;
    // 0x14a3c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A3C0u;
    {
        const bool branch_taken_0x14a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3C0u;
        // 0x14a3c4: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3c0) {
            ctx->pc = 0x14A3CCu;
            goto label_14a3cc;
        }
    }
    ctx->pc = 0x14A3C8u;
label_14a3c8:
    // 0x14a3c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_14a3cc:
    // 0x14a3cc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x14a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x14a3d0: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x14a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_14a3d4:
    // 0x14a3d4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14A3D4u;
    {
        const bool branch_taken_0x14a3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a3d4) {
            ctx->pc = 0x14A3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A3D4u;
            // 0x14a3d8: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a3b0;
        }
    }
    ctx->pc = 0x14A3DCu;
label_14a3dc:
    // 0x14a3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A3E4u;
    // 0x14a3e4: 0x0  nop
    ctx->pc = 0x14a3e4u;
    // NOP
    ctx->pc = 0x14a3e8u;
}
