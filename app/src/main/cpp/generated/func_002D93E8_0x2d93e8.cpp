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

// Function: func_002D93E8
// Address: 0x2d93e8 - 0x2d9458
void func_002D93E8_0x2d93e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D93E8_0x2d93e8");
#endif

    switch (ctx->pc) {
        case 0x2d9400u: goto label_2d9400;
        case 0x2d9418u: goto label_2d9418;
        default: break;
    }

    ctx->pc = 0x2d93e8u;

    // 0x2d93e8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d93e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93ec: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2d93ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d93f0: 0x8d270078  lw          $a3, 0x78($t1)
    ctx->pc = 0x2d93f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x2d93f4: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x2d93f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d93f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d93f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d93fc: 0x0  nop
    ctx->pc = 0x2d93fcu;
    // NOP
label_2d9400:
    // 0x2d9400: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2D9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9400u;
        // 0x2d9404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D9438u;
            goto label_2d9438;
        }
    }
    ctx->pc = 0x2D9408u;
    // 0x2d9408: 0x95220082  lhu         $v0, 0x82($t1)
    ctx->pc = 0x2d9408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 130)));
    // 0x2d940c: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D940Cu;
    {
        const bool branch_taken_0x2d940c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2d940c) {
            ctx->pc = 0x2D9410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D940Cu;
            // 0x2d9410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9438u;
            goto label_2d9438;
        }
    }
    ctx->pc = 0x2D9414u;
    // 0x2d9414: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d9414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2d9418:
    // 0x2d9418: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2d9418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d941c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D941Cu;
    {
        const bool branch_taken_0x2d941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D941Cu;
        // 0x2d9420: 0x881818  mult        $v1, $a0, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d941c) {
            ctx->pc = 0x2D9438u;
            goto label_2d9438;
        }
    }
    ctx->pc = 0x2D9424u;
    // 0x2d9424: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2d9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d9428: 0x94430082  lhu         $v1, 0x82($v0)
    ctx->pc = 0x2d9428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 130)));
    // 0x2d942c: 0x5466fffa  bnel        $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D942Cu;
    {
        const bool branch_taken_0x2d942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2d942c) {
            ctx->pc = 0x2D9430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D942Cu;
            // 0x2d9430: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9418;
        }
    }
    ctx->pc = 0x2D9434u;
    // 0x2d9434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d9434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9438:
    // 0x2d9438: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9438u;
    {
        const bool branch_taken_0x2d9438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9438u;
        // 0x2d943c: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9438) {
            ctx->pc = 0x2D944Cu;
            goto label_2d944c;
        }
    }
    ctx->pc = 0x2D9440u;
    // 0x2d9440: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d9444: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D9444u;
    {
        const bool branch_taken_0x2d9444 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9444u;
        // 0x2d9448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9444) {
            ctx->pc = 0x2D9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9400;
        }
    }
    ctx->pc = 0x2D944Cu;
label_2d944c:
    // 0x2d944c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D944Cu;
        // 0x2d9450: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9454u;
    // 0x2d9454: 0x0  nop
    ctx->pc = 0x2d9454u;
    // NOP
    ctx->pc = 0x2d9458u;
}
