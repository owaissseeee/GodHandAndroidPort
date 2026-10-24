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

// Function: __mcmp
// Address: 0x38fde8 - 0x38fe50
void ps2___mcmp_0x38fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x38fde8");
#endif

    switch (ctx->pc) {
        case 0x38fe04u: goto label_38fe04;
        case 0x38fe28u: goto label_38fe28;
        default: break;
    }

    ctx->pc = 0x38fde8u;

    // 0x38fde8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x38fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x38fdec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x38fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38fdf0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fdf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FDF4u;
    {
        const bool branch_taken_0x38fdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDF4u;
        // 0x38fdf8: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fdf4) {
            ctx->pc = 0x38FE14u;
            goto label_38fe14;
        }
    }
    ctx->pc = 0x38FDFCu;
    // 0x38fdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x38FDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE04u;
label_38fe04:
    // 0x38fe04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fe08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38fe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE0Cu;
        // 0x38fe10: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE14u;
label_38fe14:
    // 0x38fe14: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x38fe14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x38fe18: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x38fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x38fe1c: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x38fe1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x38fe20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x38fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fe24: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x38fe24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_38fe28:
    // 0x38fe28: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x38fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x38fe2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x38fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38fe30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38fe34: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x38FE34u;
    {
        const bool branch_taken_0x38fe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x38fe34) {
            ctx->pc = 0x38FE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FE34u;
            // 0x38fe38: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FE04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fe04;
        }
    }
    ctx->pc = 0x38FE3Cu;
    // 0x38fe3c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x38fe3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x38fe40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x38FE40u;
    {
        const bool branch_taken_0x38fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE40u;
        // 0x38fe44: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe40) {
            ctx->pc = 0x38FE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fe28;
        }
    }
    ctx->pc = 0x38FE48u;
    // 0x38fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE48u;
        // 0x38fe4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE50u;
}
