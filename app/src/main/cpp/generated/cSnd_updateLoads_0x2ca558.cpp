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

// Function: cSnd_updateLoads
// Address: 0x2ca558 - 0x2ca5d8
void cSnd_updateLoads_0x2ca558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_updateLoads_0x2ca558");
#endif

    switch (ctx->pc) {
        case 0x2ca578u: goto label_2ca578;
        case 0x2ca580u: goto label_2ca580;
        case 0x2ca58cu: goto label_2ca58c;
        case 0x2ca5a0u: goto label_2ca5a0;
        case 0x2ca5a8u: goto label_2ca5a8;
        case 0x2ca5b4u: goto label_2ca5b4;
        default: break;
    }

    ctx->pc = 0x2ca558u;

    // 0x2ca558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca55c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ca55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ca560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ca564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca56c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca570: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca574: 0x0  nop
    ctx->pc = 0x2ca574u;
    // NOP
label_2ca578:
    // 0x2ca578: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CA578u;
    SET_GPR_U32(ctx, 31, 0x2CA580u);
    ctx->pc = 0x2CA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA578u;
    // 0x2ca57c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CA578u, 0x2CA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA580u;
label_2ca580:
    // 0x2ca580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ca580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca584: 0xc0b3d10  jal         func_2CF440
    ctx->pc = 0x2CA584u;
    SET_GPR_U32(ctx, 31, 0x2CA58Cu);
    ctx->pc = 0x2CA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA584u;
    // 0x2ca588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF440u, 0x2CA584u, 0x2CA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA58Cu;
label_2ca58c:
    // 0x2ca58c: 0x2a020034  slti        $v0, $s0, 0x34
    ctx->pc = 0x2ca58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x2ca590: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA590u;
    {
        const bool branch_taken_0x2ca590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA590u;
        // 0x2ca594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca590) {
            ctx->pc = 0x2CA578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca578;
        }
    }
    ctx->pc = 0x2CA598u;
    // 0x2ca598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ca598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca59c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ca59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca5a0:
    // 0x2ca5a0: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CA5A0u;
    SET_GPR_U32(ctx, 31, 0x2CA5A8u);
    ctx->pc = 0x2CA5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5A0u;
    // 0x2ca5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CA5A0u, 0x2CA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5A8u;
label_2ca5a8:
    // 0x2ca5a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ca5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ca5ac: 0xc0b401a  jal         func_2D0068
    ctx->pc = 0x2CA5ACu;
    SET_GPR_U32(ctx, 31, 0x2CA5B4u);
    ctx->pc = 0x2CA5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA5ACu;
    // 0x2ca5b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0068u, 0x2CA5ACu, 0x2CA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA5B4u;
label_2ca5b4:
    // 0x2ca5b4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2ca5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ca5b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CA5B8u;
    {
        const bool branch_taken_0x2ca5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5B8u;
        // 0x2ca5bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5b8) {
            ctx->pc = 0x2CA5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca5a0;
        }
    }
    ctx->pc = 0x2CA5C0u;
    // 0x2ca5c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ca5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5CCu;
        // 0x2ca5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA5D4u;
    // 0x2ca5d4: 0x0  nop
    ctx->pc = 0x2ca5d4u;
    // NOP
    ctx->pc = 0x2ca5d8u;
}
