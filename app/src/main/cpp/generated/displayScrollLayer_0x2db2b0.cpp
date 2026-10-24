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

// Function: displayScrollLayer
// Address: 0x2db2b0 - 0x2db318
void displayScrollLayer_0x2db2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("displayScrollLayer_0x2db2b0");
#endif

    switch (ctx->pc) {
        case 0x2db2d8u: goto label_2db2d8;
        default: break;
    }

    ctx->pc = 0x2db2b0u;

    // 0x2db2b0: 0x3c080075  lui         $t0, 0x75
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)117 << 16));
    // 0x2db2b4: 0x8d024c38  lw          $v0, 0x4C38($t0)
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db2b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db2bc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db2c0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB2C0u;
    {
        const bool branch_taken_0x2db2c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db2c0) {
            ctx->pc = 0x2DB310u;
            goto label_2db310;
        }
    }
    ctx->pc = 0x2DB2C8u;
    // 0x2db2c8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2db2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2db2cc: 0x34e7fffd  ori         $a3, $a3, 0xFFFD
    ctx->pc = 0x2db2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65533);
    // 0x2db2d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2db2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2db2d4: 0x0  nop
    ctx->pc = 0x2db2d4u;
    // NOP
label_2db2d8:
    // 0x2db2d8: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x2db2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
    // 0x2db2dc: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB2DCu;
    {
        const bool branch_taken_0x2db2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db2dc) {
            ctx->pc = 0x2DB2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB2DCu;
            // 0x2db2e0: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB300u;
            goto label_2db300;
        }
    }
    ctx->pc = 0x2DB2E4u;
    // 0x2db2e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB2E4u;
    {
        const bool branch_taken_0x2db2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E4u;
        // 0x2db2e8: 0x8c620250  lw          $v0, 0x250($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e4) {
            ctx->pc = 0x2DB2F4u;
            goto label_2db2f4;
        }
    }
    ctx->pc = 0x2DB2ECu;
    // 0x2db2ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB2ECu;
    {
        const bool branch_taken_0x2db2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2ECu;
        // 0x2db2f0: 0x471024  and         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2ec) {
            ctx->pc = 0x2DB2F8u;
            goto label_2db2f8;
        }
    }
    ctx->pc = 0x2DB2F4u;
label_2db2f4:
    // 0x2db2f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2db2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2db2f8:
    // 0x2db2f8: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x2db2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x2db2fc: 0x8d034c38  lw          $v1, 0x4C38($t0)
    ctx->pc = 0x2db2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
label_2db300:
    // 0x2db300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2db300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2db304: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db308: 0x54c2fff3  bnel        $a2, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DB308u;
    {
        const bool branch_taken_0x2db308 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db308) {
            ctx->pc = 0x2DB30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB308u;
            // 0x2db30c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db2d8;
        }
    }
    ctx->pc = 0x2DB310u;
label_2db310:
    // 0x2db310: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB318u;
}
