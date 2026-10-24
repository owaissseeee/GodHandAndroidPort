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

// Function: MotionIsHaveParam
// Address: 0x1594a0 - 0x159510
void MotionIsHaveParam_0x1594a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionIsHaveParam_0x1594a0");
#endif

    switch (ctx->pc) {
        case 0x1594c8u: goto label_1594c8;
        default: break;
    }

    ctx->pc = 0x1594a0u;

    // 0x1594a0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1594A0u;
    {
        const bool branch_taken_0x1594a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1594a0) {
            ctx->pc = 0x1594A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594A0u;
            // 0x1594a4: 0x90820006  lbu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1594B0u;
            goto label_1594b0;
        }
    }
    ctx->pc = 0x1594A8u;
    // 0x1594a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1594A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594A8u;
        // 0x1594ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594B0u;
label_1594b0:
    // 0x1594b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1594b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1594B4u;
    {
        const bool branch_taken_0x1594b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594B4u;
        // 0x1594b8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594b4) {
            ctx->pc = 0x159504u;
            goto label_159504;
        }
    }
    ctx->pc = 0x1594BCu;
    // 0x1594bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1594bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1594c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1594c4: 0x0  nop
    ctx->pc = 0x1594c4u;
    // NOP
label_1594c8:
    // 0x1594c8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1594c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1594cc: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1594CCu;
    {
        const bool branch_taken_0x1594cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1594cc) {
            ctx->pc = 0x1594D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1594CCu;
            // 0x1594d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1594F8u;
            goto label_1594f8;
        }
    }
    ctx->pc = 0x1594D4u;
    // 0x1594d4: 0x10c80006  beq         $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1594D4u;
    {
        const bool branch_taken_0x1594d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x1594d4) {
            ctx->pc = 0x1594F0u;
            goto label_1594f0;
        }
    }
    ctx->pc = 0x1594DCu;
    // 0x1594dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1594dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1594e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1594e4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1594e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1594e8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1594E8u;
    {
        const bool branch_taken_0x1594e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1594ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594E8u;
        // 0x1594ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594e8) {
            ctx->pc = 0x1594F8u;
            goto label_1594f8;
        }
    }
    ctx->pc = 0x1594F0u;
label_1594f0:
    // 0x1594f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1594F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594F0u;
        // 0x1594f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594F8u;
label_1594f8:
    // 0x1594f8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1594f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1594fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1594FCu;
    {
        const bool branch_taken_0x1594fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594FCu;
        // 0x159500: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594fc) {
            ctx->pc = 0x1594C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1594c8;
        }
    }
    ctx->pc = 0x159504u;
label_159504:
    // 0x159504: 0x3e00008  jr          $ra
    ctx->pc = 0x159504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159504u;
        // 0x159508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15950Cu;
    // 0x15950c: 0x0  nop
    ctx->pc = 0x15950cu;
    // NOP
    ctx->pc = 0x159510u;
}
