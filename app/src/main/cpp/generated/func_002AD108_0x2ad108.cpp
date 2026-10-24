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

// Function: func_002AD108
// Address: 0x2ad108 - 0x2ad1b0
void func_002AD108_0x2ad108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD108_0x2ad108");
#endif

    switch (ctx->pc) {
        case 0x2ad148u: goto label_2ad148;
        default: break;
    }

    ctx->pc = 0x2ad108u;

    // 0x2ad108: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ad108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ad10c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ad10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ad110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ad110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad114: 0x8c433544  lw          $v1, 0x3544($v0)
    ctx->pc = 0x2ad114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13636)));
    // 0x2ad118: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD118u;
    {
        const bool branch_taken_0x2ad118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad118) {
            ctx->pc = 0x2AD11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD118u;
            // 0x2ad11c: 0x8c820740  lw          $v0, 0x740($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1856)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD128u;
            goto label_2ad128;
        }
    }
    ctx->pc = 0x2AD120u;
    // 0x2ad120: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD120u;
        // 0x2ad124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD128u;
label_2ad128:
    // 0x2ad128: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ad128u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad12c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad134: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AD134u;
    {
        const bool branch_taken_0x2ad134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD134u;
        // 0x2ad138: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad134) {
            ctx->pc = 0x2AD17Cu;
            goto label_2ad17c;
        }
    }
    ctx->pc = 0x2AD13Cu;
    // 0x2ad13c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2ad13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad140: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ad140u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad144: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ad144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad148:
    // 0x2ad148: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2ad148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x2ad14c: 0x544b0007  bnel        $v0, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD14Cu;
    {
        const bool branch_taken_0x2ad14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x2ad14c) {
            ctx->pc = 0x2AD150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD14Cu;
            // 0x2ad150: 0x34c60001  ori         $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD16Cu;
            goto label_2ad16c;
        }
    }
    ctx->pc = 0x2AD154u;
    // 0x2ad154: 0x80a3010c  lb          $v1, 0x10C($a1)
    ctx->pc = 0x2ad154u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x2ad158: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2ad158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad15c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2ad15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2ad160: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD160u;
    {
        const bool branch_taken_0x2ad160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD160u;
        // 0x2ad164: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad160) {
            ctx->pc = 0x2AD16Cu;
            goto label_2ad16c;
        }
    }
    ctx->pc = 0x2AD168u;
    // 0x2ad168: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x2ad168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_2ad16c:
    // 0x2ad16c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ad16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ad170: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x2ad170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2ad174: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2AD174u;
    {
        const bool branch_taken_0x2ad174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD174u;
        // 0x2ad178: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad174) {
            ctx->pc = 0x2AD148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad148;
        }
    }
    ctx->pc = 0x2AD17Cu;
label_2ad17c:
    // 0x2ad17c: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x2ad17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2ad180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ad180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad184: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD184u;
    {
        const bool branch_taken_0x2ad184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD184u;
        // 0x2ad188: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad184) {
            ctx->pc = 0x2AD1A8u;
            goto label_2ad1a8;
        }
    }
    ctx->pc = 0x2AD18Cu;
    // 0x2ad18c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x2ad18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2ad190: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ad190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ad194: 0xac820740  sw          $v0, 0x740($a0)
    ctx->pc = 0x2ad194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1856), GPR_U32(ctx, 2));
    // 0x2ad198: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ad198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ad19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1A0u;
        // 0x2ad1a4: 0xac683544  sw          $t0, 0x3544($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 13636), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD1A8u;
label_2ad1a8:
    // 0x2ad1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD1A8u;
        // 0x2ad1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD1B0u;
}
