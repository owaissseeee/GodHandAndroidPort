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

// Function: func_002FA470
// Address: 0x2fa470 - 0x2fa4f0
void func_002FA470_0x2fa470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FA470_0x2fa470");
#endif

    switch (ctx->pc) {
        case 0x2fa498u: goto label_2fa498;
        default: break;
    }

    ctx->pc = 0x2fa470u;

    // 0x2fa470: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x2fa470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x2fa474: 0x8ca24c30  lw          $v0, 0x4C30($a1)
    ctx->pc = 0x2fa474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C30u));
    // 0x2fa478: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2fa478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fa47c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2fa47cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fa480: 0x10c30019  beq         $a2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA480u;
    {
        const bool branch_taken_0x2fa480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA480u;
        // 0x2fa484: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa480) {
            ctx->pc = 0x2FA4E8u;
            goto label_2fa4e8;
        }
    }
    ctx->pc = 0x2FA488u;
    // 0x2fa488: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2fa488u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa48c: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x2fa48cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x2fa490: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2fa490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fa494: 0x0  nop
    ctx->pc = 0x2fa494u;
    // NOP
label_2fa498:
    // 0x2fa498: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x2fa498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x2fa49c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x2fa49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2fa4a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA4A0u;
    {
        const bool branch_taken_0x2fa4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4A0u;
        // 0x2fa4a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4a0) {
            ctx->pc = 0x2FA4B0u;
            goto label_2fa4b0;
        }
    }
    ctx->pc = 0x2FA4A8u;
    // 0x2fa4a8: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x2fa4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x2fa4ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa4b0:
    // 0x2fa4b0: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2fa4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fa4b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA4B4u;
    {
        const bool branch_taken_0x2fa4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4B4u;
        // 0x2fa4b8: 0x8d234c30  lw          $v1, 0x4C30($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4b4) {
            ctx->pc = 0x2FA4D8u;
            goto label_2fa4d8;
        }
    }
    ctx->pc = 0x2FA4BCu;
    // 0x2fa4bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA4BCu;
    {
        const bool branch_taken_0x2fa4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4BCu;
        // 0x2fa4c0: 0x8ca20250  lw          $v0, 0x250($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4bc) {
            ctx->pc = 0x2FA4CCu;
            goto label_2fa4cc;
        }
    }
    ctx->pc = 0x2FA4C4u;
    // 0x2fa4c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA4C4u;
    {
        const bool branch_taken_0x2fa4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4C4u;
        // 0x2fa4c8: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4c4) {
            ctx->pc = 0x2FA4D0u;
            goto label_2fa4d0;
        }
    }
    ctx->pc = 0x2FA4CCu;
label_2fa4cc:
    // 0x2fa4cc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2fa4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2fa4d0:
    // 0x2fa4d0: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x2fa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x2fa4d4: 0x8d234c30  lw          $v1, 0x4C30($t1)
    ctx->pc = 0x2fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 19504)));
label_2fa4d8:
    // 0x2fa4d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2fa4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2fa4dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2fa4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fa4e0: 0x54c2ffed  bnel        $a2, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2FA4E0u;
    {
        const bool branch_taken_0x2fa4e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa4e0) {
            ctx->pc = 0x2FA4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4E0u;
            // 0x2fa4e4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa498;
        }
    }
    ctx->pc = 0x2FA4E8u;
label_2fa4e8:
    // 0x2fa4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA4F0u;
}
