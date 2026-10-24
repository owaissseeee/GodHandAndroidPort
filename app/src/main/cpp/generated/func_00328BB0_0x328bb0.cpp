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

// Function: func_00328BB0
// Address: 0x328bb0 - 0x328c30
void func_00328BB0_0x328bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328BB0_0x328bb0");
#endif

    switch (ctx->pc) {
        case 0x328bd4u: goto label_328bd4;
        case 0x328be8u: goto label_328be8;
        case 0x328bfcu: goto label_328bfc;
        default: break;
    }

    ctx->pc = 0x328bb0u;

    // 0x328bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328bb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x328bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x328bb8: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x328bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x328bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328bc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328bc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x328bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x328bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x328bcc: 0xc0ca416  jal         func_329058
    ctx->pc = 0x328BCCu;
    SET_GPR_U32(ctx, 31, 0x328BD4u);
    ctx->pc = 0x328BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BCCu;
    // 0x328bd0: 0x266404c4  addiu       $a0, $s3, 0x4C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329058u, 0x328BCCu, 0x328BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BD4u;
label_328bd4:
    // 0x328bd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x328BD4u;
    {
        const bool branch_taken_0x328bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BD4u;
        // 0x328bd8: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bd4) {
            ctx->pc = 0x328C10u;
            goto label_328c10;
        }
    }
    ctx->pc = 0x328BDCu;
    // 0x328bdc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328be0: 0x245004d0  addiu       $s0, $v0, 0x4D0
    ctx->pc = 0x328be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1232));
    // 0x328be4: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x328be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_328be8:
    // 0x328be8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x328be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328bec: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x328BECu;
    {
        const bool branch_taken_0x328bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x328bec) {
            ctx->pc = 0x328BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328BECu;
            // 0x328bf0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328C00u;
            goto label_328c00;
        }
    }
    ctx->pc = 0x328BF4u;
    // 0x328bf4: 0xc0ca238  jal         func_3288E0
    ctx->pc = 0x328BF4u;
    SET_GPR_U32(ctx, 31, 0x328BFCu);
    ctx->pc = 0x328BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BF4u;
    // 0x328bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3288E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3288E0u, 0x328BF4u, 0x328BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BFCu;
label_328bfc:
    // 0x328bfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x328bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_328c00:
    // 0x328c00: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x328C00u;
    {
        const bool branch_taken_0x328c00 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x328C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C00u;
        // 0x328c04: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c00) {
            ctx->pc = 0x328BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328be8;
        }
    }
    ctx->pc = 0x328C08u;
    // 0x328c08: 0x266204c4  addiu       $v0, $s3, 0x4C4
    ctx->pc = 0x328c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1220));
    // 0x328c0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x328c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_328c10:
    // 0x328c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328c18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328c1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x328c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328c24: 0x3e00008  jr          $ra
    ctx->pc = 0x328C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C24u;
        // 0x328c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328C2Cu;
    // 0x328c2c: 0x0  nop
    ctx->pc = 0x328c2cu;
    // NOP
    ctx->pc = 0x328c30u;
}
