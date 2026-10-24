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

// Function: func_003827F0
// Address: 0x3827f0 - 0x382850
void func_003827F0_0x3827f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003827F0_0x3827f0");
#endif

    switch (ctx->pc) {
        case 0x382810u: goto label_382810;
        default: break;
    }

    ctx->pc = 0x3827f0u;

    // 0x3827f0: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x3827f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3827f4: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3827F4u;
    {
        const bool branch_taken_0x3827f4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x3827F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827F4u;
        // 0x3827f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827f4) {
            ctx->pc = 0x382844u;
            goto label_382844;
        }
    }
    ctx->pc = 0x3827FCu;
    // 0x3827fc: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3827fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x382800: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x382800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382804: 0x24a50048  addiu       $a1, $a1, 0x48
    ctx->pc = 0x382804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    // 0x382808: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x382808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38280c: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x38280cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_382810:
    // 0x382810: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382810u;
    {
        const bool branch_taken_0x382810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x382814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382810u;
        // 0x382814: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382810) {
            ctx->pc = 0x382834u;
            goto label_382834;
        }
    }
    ctx->pc = 0x382818u;
    // 0x382818: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x382818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x38281c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x38281cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x382820: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x382820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382824: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382824u;
    {
        const bool branch_taken_0x382824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x382828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382824u;
        // 0x382828: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382824) {
            ctx->pc = 0x382838u;
            goto label_382838;
        }
    }
    ctx->pc = 0x38282Cu;
    // 0x38282c: 0x3e00008  jr          $ra
    ctx->pc = 0x38282Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38282Cu;
        // 0x382830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38282Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382834u;
label_382834:
    // 0x382834: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x382834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_382838:
    // 0x382838: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x382838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x38283c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x38283Cu;
    {
        const bool branch_taken_0x38283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38283c) {
            ctx->pc = 0x382810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382810;
        }
    }
    ctx->pc = 0x382844u;
label_382844:
    // 0x382844: 0x3e00008  jr          $ra
    ctx->pc = 0x382844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382844u;
        // 0x382848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38284Cu;
    // 0x38284c: 0x0  nop
    ctx->pc = 0x38284cu;
    // NOP
    ctx->pc = 0x382850u;
}
