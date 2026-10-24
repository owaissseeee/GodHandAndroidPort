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

// Function: func_0033E558
// Address: 0x33e558 - 0x33e5c0
void func_0033E558_0x33e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E558_0x33e558");
#endif

    switch (ctx->pc) {
        case 0x33e578u: goto label_33e578;
        case 0x33e594u: goto label_33e594;
        default: break;
    }

    ctx->pc = 0x33e558u;

    // 0x33e558: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33e55c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e560: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33e560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e564: 0x24a56918  addiu       $a1, $a1, 0x6918
    ctx->pc = 0x33e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26904));
    // 0x33e568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e56c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33e570: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x33E570u;
    SET_GPR_U32(ctx, 31, 0x33E578u);
    ctx->pc = 0x33E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E570u;
    // 0x33e574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x33E570u, 0x33E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E578u;
label_33e578:
    // 0x33e578: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33e578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33e57c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33e580: 0x24a56920  addiu       $a1, $a1, 0x6920
    ctx->pc = 0x33e580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26912));
    // 0x33e584: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33E584u;
    {
        const bool branch_taken_0x33e584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E584u;
        // 0x33e588: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e584) {
            ctx->pc = 0x33E5A8u;
            goto label_33e5a8;
        }
    }
    ctx->pc = 0x33E58Cu;
    // 0x33e58c: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x33E58Cu;
    SET_GPR_U32(ctx, 31, 0x33E594u);
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x33E58Cu, 0x33E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E594u;
label_33e594:
    // 0x33e594: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E594u;
    {
        const bool branch_taken_0x33e594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e594) {
            ctx->pc = 0x33E598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E594u;
            // 0x33e598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E5ACu;
            goto label_33e5ac;
        }
    }
    ctx->pc = 0x33E59Cu;
    // 0x33e59c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33E59Cu;
    {
        const bool branch_taken_0x33e59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E59Cu;
        // 0x33e5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e59c) {
            ctx->pc = 0x33E5ACu;
            goto label_33e5ac;
        }
    }
    ctx->pc = 0x33E5A4u;
    // 0x33e5a4: 0x0  nop
    ctx->pc = 0x33e5a4u;
    // NOP
label_33e5a8:
    // 0x33e5a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33e5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e5ac:
    // 0x33e5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e5b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33e5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x33E5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E5B4u;
        // 0x33e5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E5BCu;
    // 0x33e5bc: 0x0  nop
    ctx->pc = 0x33e5bcu;
    // NOP
    ctx->pc = 0x33e5c0u;
}
