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

// Function: func_002ACD78
// Address: 0x2acd78 - 0x2acdc8
void func_002ACD78_0x2acd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ACD78_0x2acd78");
#endif

    ctx->pc = 0x2acd78u;

    // 0x2acd78: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2acd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2acd7c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ACD7Cu;
    {
        const bool branch_taken_0x2acd7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2acd7c) {
            ctx->pc = 0x2ACDACu;
            goto label_2acdac;
        }
    }
    ctx->pc = 0x2ACD84u;
    // 0x2acd84: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ACD84u;
    {
        const bool branch_taken_0x2acd84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD84u;
        // 0x2acd88: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd84) {
            ctx->pc = 0x2ACDACu;
            goto label_2acdac;
        }
    }
    ctx->pc = 0x2ACD8Cu;
    // 0x2acd8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2acd90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2acd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acd94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACD94u;
    {
        const bool branch_taken_0x2acd94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd94) {
            ctx->pc = 0x2ACDACu;
            goto label_2acdac;
        }
    }
    ctx->pc = 0x2ACD9Cu;
    // 0x2acd9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2acd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acda0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2acda0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2acda4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACDA4u;
    {
        const bool branch_taken_0x2acda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDA4u;
        // 0x2acda8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acda4) {
            ctx->pc = 0x2ACDB4u;
            goto label_2acdb4;
        }
    }
    ctx->pc = 0x2ACDACu;
label_2acdac:
    // 0x2acdac: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDACu;
        // 0x2acdb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACDB4u;
label_2acdb4:
    // 0x2acdb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2acdb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2acdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2acdbc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2acdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2acdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDC0u;
        // 0x2acdc4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACDC8u;
}
