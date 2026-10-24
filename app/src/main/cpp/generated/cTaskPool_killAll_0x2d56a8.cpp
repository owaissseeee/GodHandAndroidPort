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

// Function: cTaskPool_killAll
// Address: 0x2d56a8 - 0x2d5708
void cTaskPool_killAll_0x2d56a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskPool_killAll_0x2d56a8");
#endif

    switch (ctx->pc) {
        case 0x2d56d0u: goto label_2d56d0;
        case 0x2d56e0u: goto label_2d56e0;
        default: break;
    }

    ctx->pc = 0x2d56a8u;

    // 0x2d56a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d56a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d56ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d56acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d56b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d56b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d56b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d56b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d56b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d56c0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d56c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d56c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D56C4u;
    {
        const bool branch_taken_0x2d56c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56C4u;
        // 0x2d56c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56c4) {
            ctx->pc = 0x2D56F0u;
            goto label_2d56f0;
        }
    }
    ctx->pc = 0x2D56CCu;
    // 0x2d56cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d56ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d56d0:
    // 0x2d56d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d56d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d56d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d56d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d56d8: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x2D56D8u;
    SET_GPR_U32(ctx, 31, 0x2D56E0u);
    ctx->pc = 0x2D56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56D8u;
    // 0x2d56dc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x2D56D8u, 0x2D56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56E0u;
label_2d56e0:
    // 0x2d56e0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d56e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d56e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d56e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d56e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D56E8u;
    {
        const bool branch_taken_0x2d56e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56E8u;
        // 0x2d56ec: 0x26520058  addiu       $s2, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56e8) {
            ctx->pc = 0x2D56D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d56d0;
        }
    }
    ctx->pc = 0x2D56F0u;
label_2d56f0:
    // 0x2d56f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d56f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d56f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d56f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d56f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d56f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d56fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d56fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5700: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5700u;
        // 0x2d5704: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5708u;
}
