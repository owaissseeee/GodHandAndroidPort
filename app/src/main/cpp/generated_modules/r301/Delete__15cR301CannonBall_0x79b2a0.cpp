#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Delete__15cR301CannonBall
// Address: 0x79b2a0 - 0x79b320
void Delete__15cR301CannonBall_0x79b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Delete__15cR301CannonBall_0x79b2a0");
#endif

    switch (ctx->pc) {
        case 0x79b2d0u: goto label_79b2d0;
        default: break;
    }

    ctx->pc = 0x79b2a0u;

    // 0x79b2a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2a4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79B2A4u;
    {
        const bool branch_taken_0x79b2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2A4u;
        // 0x79b2a8: 0x3c050075  lui         $a1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2a4) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B2ACu;
    // 0x79b2ac: 0x8ca24c30  lw          $v0, 0x4C30($a1)
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19504)));
    // 0x79b2b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x79b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x79b2b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x79b2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79b2b8: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B2B8u;
    {
        const bool branch_taken_0x79b2b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x79B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B8u;
        // 0x79b2bc: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2b8) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B2C0u;
    // 0x79b2c0: 0x240903b2  addiu       $t1, $zero, 0x3B2
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
    // 0x79b2c4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x79b2c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b2cc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x79b2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_79b2d0:
    // 0x79b2d0: 0x94a202fe  lhu         $v0, 0x2FE($a1)
    ctx->pc = 0x79b2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x79b2d4: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x79B2D4u;
    {
        const bool branch_taken_0x79b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x79B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D4u;
        // 0x79b2d8: 0x8d434c30  lw          $v1, 0x4C30($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2d4) {
            ctx->pc = 0x79B308u;
            goto label_79b308;
        }
    }
    ctx->pc = 0x79B2DCu;
    // 0x79b2dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2e0: 0x54650009  bnel        $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B2E0u;
    {
        const bool branch_taken_0x79b2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x79b2e0) {
            ctx->pc = 0x79B2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2E0u;
            // 0x79b2e4: 0x8d434c30  lw          $v1, 0x4C30($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B308u;
            goto label_79b308;
        }
    }
    ctx->pc = 0x79B2E8u;
    // 0x79b2e8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x79b2ec: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x79b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x79b2f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79B2F0u;
    {
        const bool branch_taken_0x79b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b2f0) {
            ctx->pc = 0x79B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2F0u;
            // 0x79b2f4: 0xa06702f4  sb          $a3, 0x2F4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2F8u;
            goto label_79b2f8;
        }
    }
    ctx->pc = 0x79B2F8u;
label_79b2f8:
    // 0x79b2f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x79b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x79b2fc: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x79b2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x79b300: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x79b300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x79b304: 0x8d434c30  lw          $v1, 0x4C30($t2)
    ctx->pc = 0x79b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19504)));
label_79b308:
    // 0x79b308: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x79b30c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79b310: 0x54c2ffef  bnel        $a2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79B310u;
    {
        const bool branch_taken_0x79b310 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b310) {
            ctx->pc = 0x79B314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B310u;
            // 0x79b314: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2d0;
        }
    }
    ctx->pc = 0x79B318u;
label_79b318:
    // 0x79b318: 0x3e00008  jr          $ra
    ctx->pc = 0x79B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B320u;
}
} // namespace gh_r301
