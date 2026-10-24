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

// Function: M2V_SetErrFunc
// Address: 0x36d7f8 - 0x36d868
void M2V_SetErrFunc_0x36d7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("M2V_SetErrFunc_0x36d7f8");
#endif

    switch (ctx->pc) {
        case 0x36d81cu: goto label_36d81c;
        default: break;
    }

    ctx->pc = 0x36d7f8u;

    // 0x36d7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d808: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36d808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d80c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36d810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36d810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36d814: 0xc0db5a2  jal         func_36D688
    ctx->pc = 0x36D814u;
    SET_GPR_U32(ctx, 31, 0x36D81Cu);
    ctx->pc = 0x36D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D814u;
    // 0x36d818: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D688u, 0x36D814u, 0x36D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D81Cu;
label_36d81c:
    // 0x36d81c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36d820: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x36d820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x36d824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d828: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D828u;
    {
        const bool branch_taken_0x36d828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D828u;
        // 0x36d82c: 0x34a50203  ori         $a1, $a1, 0x203 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d828) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D830u;
    // 0x36d830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d838: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d83c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d840: 0x80db63a  j           func_36D8E8
    ctx->pc = 0x36D840u;
    ctx->pc = 0x36D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D840u;
    // 0x36d844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D8E8u, 0x36D840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36D848u;
label_36d848:
    // 0x36d848: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x36d848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x36d84c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x36d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x36d850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d858: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d85c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d860: 0x3e00008  jr          $ra
    ctx->pc = 0x36D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D860u;
        // 0x36d864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D868u;
}
