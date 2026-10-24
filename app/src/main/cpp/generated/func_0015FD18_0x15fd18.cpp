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

// Function: func_0015FD18
// Address: 0x15fd18 - 0x15fd68
void func_0015FD18_0x15fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015FD18_0x15fd18");
#endif

    switch (ctx->pc) {
        case 0x15fd2cu: goto label_15fd2c;
        case 0x15fd40u: goto label_15fd40;
        default: break;
    }

    ctx->pc = 0x15fd18u;

    // 0x15fd18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15fd1c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FD1Cu;
    {
        const bool branch_taken_0x15fd1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD1Cu;
        // 0x15fd20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd1c) {
            ctx->pc = 0x15FD38u;
            goto label_15fd38;
        }
    }
    ctx->pc = 0x15FD24u;
    // 0x15fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD24u;
        // 0x15fd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FD2Cu;
label_15fd2c:
    // 0x15fd2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15fd30: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD30u;
        // 0x15fd34: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FD38u;
label_15fd38:
    // 0x15fd38: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15fd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd3c: 0x0  nop
    ctx->pc = 0x15fd3cu;
    // NOP
label_15fd40:
    // 0x15fd40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fd44: 0x1045fff9  beq         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15FD44u;
    {
        const bool branch_taken_0x15fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD44u;
        // 0x15fd48: 0x718c0  sll         $v1, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd44) {
            ctx->pc = 0x15FD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fd2c;
        }
    }
    ctx->pc = 0x15FD4Cu;
    // 0x15fd4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15fd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15fd50: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x15fd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15fd54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FD54u;
    {
        const bool branch_taken_0x15fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD54u;
        // 0x15fd58: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd54) {
            ctx->pc = 0x15FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fd40;
        }
    }
    ctx->pc = 0x15FD5Cu;
    // 0x15fd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15FD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD5Cu;
        // 0x15fd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FD64u;
    // 0x15fd64: 0x0  nop
    ctx->pc = 0x15fd64u;
    // NOP
    ctx->pc = 0x15fd68u;
}
