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

// Function: sfhds_AnlyUsedStmid
// Address: 0x34d7a8 - 0x34d820
void sfhds_AnlyUsedStmid_0x34d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_AnlyUsedStmid_0x34d7a8");
#endif

    switch (ctx->pc) {
        case 0x34d7d8u: goto label_34d7d8;
        case 0x34d7e4u: goto label_34d7e4;
        default: break;
    }

    ctx->pc = 0x34d7a8u;

    // 0x34d7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d7ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34d7b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34d7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34d7b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34d7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7bc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x34d7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34d7c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34d7c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34d7c8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34D7C8u;
    {
        const bool branch_taken_0x34d7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7C8u;
        // 0x34d7cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7c8) {
            ctx->pc = 0x34D804u;
            goto label_34d804;
        }
    }
    ctx->pc = 0x34D7D0u;
    // 0x34d7d0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x34d7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34d7d4: 0x0  nop
    ctx->pc = 0x34d7d4u;
    // NOP
label_34d7d8:
    // 0x34d7d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d7dc: 0xc0d7646  jal         func_35D918
    ctx->pc = 0x34D7DCu;
    SET_GPR_U32(ctx, 31, 0x34D7E4u);
    ctx->pc = 0x34D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D7DCu;
    // 0x34d7e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D918u, 0x34D7DCu, 0x34D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7E4u;
label_34d7e4:
    // 0x34d7e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D7E4u;
    {
        const bool branch_taken_0x34d7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7E4u;
        // 0x34d7e8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7e4) {
            ctx->pc = 0x34D7F4u;
            goto label_34d7f4;
        }
    }
    ctx->pc = 0x34D7ECu;
    // 0x34d7ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34D7ECu;
    {
        const bool branch_taken_0x34d7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7ECu;
        // 0x34d7f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7ec) {
            ctx->pc = 0x34D808u;
            goto label_34d808;
        }
    }
    ctx->pc = 0x34D7F4u;
label_34d7f4:
    // 0x34d7f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34d7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34d7f8: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x34d7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34d7fc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34D7FCu;
    {
        const bool branch_taken_0x34d7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7FCu;
        // 0x34d800: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7fc) {
            ctx->pc = 0x34D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d7d8;
        }
    }
    ctx->pc = 0x34D804u;
label_34d804:
    // 0x34d804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34d804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34d808:
    // 0x34d808: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34d808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d80c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34d80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34d810: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34d810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d814: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34d814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34d818: 0x3e00008  jr          $ra
    ctx->pc = 0x34D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D818u;
        // 0x34d81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D820u;
}
