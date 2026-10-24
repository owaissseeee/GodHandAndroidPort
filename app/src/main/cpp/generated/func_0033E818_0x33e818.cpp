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

// Function: func_0033E818
// Address: 0x33e818 - 0x33e8a0
void func_0033E818_0x33e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E818_0x33e818");
#endif

    switch (ctx->pc) {
        case 0x33e848u: goto label_33e848;
        default: break;
    }

    ctx->pc = 0x33e818u;

    // 0x33e818: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x33e818u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x33e81c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x33e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33e820: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x33e820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x33e824: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x33e824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33e828: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33E828u;
    {
        const bool branch_taken_0x33e828 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x33E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E828u;
        // 0x33e82c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e828) {
            ctx->pc = 0x33E874u;
            goto label_33e874;
        }
    }
    ctx->pc = 0x33E830u;
    // 0x33e830: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x33e830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e834: 0x54490004  bnel        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E834u;
    {
        const bool branch_taken_0x33e834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x33e834) {
            ctx->pc = 0x33E838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E834u;
            // 0x33e838: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E848u;
            goto label_33e848;
        }
    }
    ctx->pc = 0x33E83Cu;
    // 0x33e83c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33E83Cu;
    {
        const bool branch_taken_0x33e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E83Cu;
        // 0x33e840: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e83c) {
            ctx->pc = 0x33E874u;
            goto label_33e874;
        }
    }
    ctx->pc = 0x33E844u;
    // 0x33e844: 0x0  nop
    ctx->pc = 0x33e844u;
    // NOP
label_33e848:
    // 0x33e848: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x33e848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x33e84c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33E84Cu;
    {
        const bool branch_taken_0x33e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E84Cu;
        // 0x33e850: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e84c) {
            ctx->pc = 0x33E874u;
            goto label_33e874;
        }
    }
    ctx->pc = 0x33E854u;
    // 0x33e854: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x33e854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e858: 0x0  nop
    ctx->pc = 0x33e858u;
    // NOP
    // 0x33e85c: 0x0  nop
    ctx->pc = 0x33e85cu;
    // NOP
    // 0x33e860: 0x0  nop
    ctx->pc = 0x33e860u;
    // NOP
    // 0x33e864: 0x5449fff8  bnel        $v0, $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33E864u;
    {
        const bool branch_taken_0x33e864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x33e864) {
            ctx->pc = 0x33E868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E864u;
            // 0x33e868: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e848;
        }
    }
    ctx->pc = 0x33E86Cu;
    // 0x33e86c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x33e86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x33e870: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x33e870u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_33e874:
    // 0x33e874: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x33e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x33e878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33e87c: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33E87Cu;
    {
        const bool branch_taken_0x33e87c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x33e87c) {
            ctx->pc = 0x33E880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E87Cu;
            // 0x33e880: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E890u;
            goto label_33e890;
        }
    }
    ctx->pc = 0x33E884u;
    // 0x33e884: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x33e884u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x33e888: 0x3e00008  jr          $ra
    ctx->pc = 0x33E888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E888u;
        // 0x33e88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E890u;
label_33e890:
    // 0x33e890: 0x3e00008  jr          $ra
    ctx->pc = 0x33E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E890u;
        // 0x33e894: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E898u;
    // 0x33e898: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33e89c: 0x0  nop
    ctx->pc = 0x33e89cu;
    // NOP
    ctx->pc = 0x33e8a0u;
}
