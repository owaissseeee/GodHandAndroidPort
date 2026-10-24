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

// Function: func_0034B818
// Address: 0x34b818 - 0x34b888
void func_0034B818_0x34b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B818_0x34b818");
#endif

    switch (ctx->pc) {
        case 0x34b838u: goto label_34b838;
        case 0x34b848u: goto label_34b848;
        default: break;
    }

    ctx->pc = 0x34b818u;

    // 0x34b818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b81c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b82c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b830: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x34B830u;
    SET_GPR_U32(ctx, 31, 0x34B838u);
    ctx->pc = 0x34B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B830u;
    // 0x34b834: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x34B830u, 0x34B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B838u;
label_34b838:
    // 0x34b838: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x34B838u;
    {
        const bool branch_taken_0x34b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x34B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B838u;
        // 0x34b83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b838) {
            ctx->pc = 0x34B870u;
            goto label_34b870;
        }
    }
    ctx->pc = 0x34B840u;
    // 0x34b840: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x34B840u;
    SET_GPR_U32(ctx, 31, 0x34B848u);
    ctx->pc = 0x34B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B840u;
    // 0x34b844: 0x8e05211c  lw          $a1, 0x211C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x34B840u, 0x34B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B848u;
label_34b848:
    // 0x34b848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b84c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b850: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B850u;
    {
        const bool branch_taken_0x34b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x34B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B850u;
        // 0x34b854: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b850) {
            ctx->pc = 0x34B870u;
            goto label_34b870;
        }
    }
    ctx->pc = 0x34B858u;
    // 0x34b858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b85c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b85cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b864: 0x80d70d4  j           func_35C350
    ctx->pc = 0x34B864u;
    ctx->pc = 0x34B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B864u;
    // 0x34b868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C350u, 0x34B864u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B86Cu;
    // 0x34b86c: 0x0  nop
    ctx->pc = 0x34b86cu;
    // NOP
label_34b870:
    // 0x34b870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b87c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B87Cu;
        // 0x34b880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B884u;
    // 0x34b884: 0x0  nop
    ctx->pc = 0x34b884u;
    // NOP
    ctx->pc = 0x34b888u;
}
