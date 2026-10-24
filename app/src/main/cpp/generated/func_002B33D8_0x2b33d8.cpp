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

// Function: func_002B33D8
// Address: 0x2b33d8 - 0x2b3460
void func_002B33D8_0x2b33d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B33D8_0x2b33d8");
#endif

    switch (ctx->pc) {
        case 0x2b3404u: goto label_2b3404;
        case 0x2b344cu: goto label_2b344c;
        default: break;
    }

    ctx->pc = 0x2b33d8u;

    // 0x2b33d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b33dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b33dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b33e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b33e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b33e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b33e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b33e8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2b33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b33ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B33ECu;
    {
        const bool branch_taken_0x2b33ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33ECu;
        // 0x2b33f0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33ec) {
            ctx->pc = 0x2B344Cu;
            goto label_2b344c;
        }
    }
    ctx->pc = 0x2B33F4u;
    // 0x2b33f4: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2b33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b33f8: 0x8c442380  lw          $a0, 0x2380($v0)
    ctx->pc = 0x2b33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    // 0x2b33fc: 0xc0a9300  jal         func_2A4C00
    ctx->pc = 0x2B33FCu;
    SET_GPR_U32(ctx, 31, 0x2B3404u);
    ctx->pc = 0x2B3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33FCu;
    // 0x2b3400: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4C00u, 0x2B33FCu, 0x2B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3404u;
label_2b3404:
    // 0x2b3404: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b340c: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x2b340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x2b3410: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b3414: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3414u;
    {
        const bool branch_taken_0x2b3414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3414u;
        // 0x2b3418: 0x310ba  dsrl        $v0, $v1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3414) {
            ctx->pc = 0x2B3434u;
            goto label_2b3434;
        }
    }
    ctx->pc = 0x2B341Cu;
    // 0x2b341c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b341cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b3420: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3420u;
    {
        const bool branch_taken_0x2b3420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3420) {
            ctx->pc = 0x2B3424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3420u;
            // 0x2b3424: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3438u;
            goto label_2b3438;
        }
    }
    ctx->pc = 0x2B3428u;
    // 0x2b3428: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2b3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b342c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B342Cu;
    {
        const bool branch_taken_0x2b342c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b342c) {
            ctx->pc = 0x2B3444u;
            goto label_2b3444;
        }
    }
    ctx->pc = 0x2B3434u;
label_2b3434:
    // 0x2b3434: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2b3438:
    // 0x2b3438: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b3438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b343c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B343Cu;
    {
        const bool branch_taken_0x2b343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B343Cu;
        // 0x2b3440: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b343c) {
            ctx->pc = 0x2B344Cu;
            goto label_2b344c;
        }
    }
    ctx->pc = 0x2B3444u;
label_2b3444:
    // 0x2b3444: 0xc0acd18  jal         func_2B3460
    ctx->pc = 0x2B3444u;
    SET_GPR_U32(ctx, 31, 0x2B344Cu);
    ctx->pc = 0x2B3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3444u;
    // 0x2b3448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3460u, 0x2B3444u, 0x2B344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B344Cu;
label_2b344c:
    // 0x2b344c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b344cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3454: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3454u;
        // 0x2b3458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B345Cu;
    // 0x2b345c: 0x0  nop
    ctx->pc = 0x2b345cu;
    // NOP
    ctx->pc = 0x2b3460u;
}
