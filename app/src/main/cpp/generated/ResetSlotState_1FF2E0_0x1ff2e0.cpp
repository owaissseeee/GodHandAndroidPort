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

// Function: ResetSlotState_1FF2E0
// Address: 0x1ff2e0 - 0x1ff338
void ResetSlotState_1FF2E0_0x1ff2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetSlotState_1FF2E0_0x1ff2e0");
#endif

    switch (ctx->pc) {
        case 0x1ff300u: goto label_1ff300;
        case 0x1ff314u: goto label_1ff314;
        default: break;
    }

    ctx->pc = 0x1ff2e0u;

    // 0x1ff2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff2ec: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF2ECu;
    {
        const bool branch_taken_0x1ff2ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2ECu;
        // 0x1ff2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2ec) {
            ctx->pc = 0x1FF2F8u;
            goto label_1ff2f8;
        }
    }
    ctx->pc = 0x1FF2F4u;
    // 0x1ff2f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ff2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1ff2f8:
    // 0x1ff2f8: 0xc07fc2c  jal         func_1FF0B0
    ctx->pc = 0x1FF2F8u;
    SET_GPR_U32(ctx, 31, 0x1FF300u);
    ctx->pc = 0x1FF2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF2F8u;
    // 0x1ff2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF0B0u, 0x1FF2F8u, 0x1FF300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF300u;
label_1ff300:
    // 0x1ff300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ff300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff304: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF304u;
    {
        const bool branch_taken_0x1ff304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF304u;
        // 0x1ff308: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff304) {
            ctx->pc = 0x1FF318u;
            goto label_1ff318;
        }
    }
    ctx->pc = 0x1FF30Cu;
    // 0x1ff30c: 0xc07fd6e  jal         func_1FF5B8
    ctx->pc = 0x1FF30Cu;
    SET_GPR_U32(ctx, 31, 0x1FF314u);
    ctx->pc = 0x1FF310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF30Cu;
    // 0x1ff310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF5B8u, 0x1FF30Cu, 0x1FF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF314u;
label_1ff314:
    // 0x1ff314: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ff314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ff318:
    // 0x1ff318: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ff318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ff31c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff324: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF324u;
        // 0x1ff328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF32Cu;
    // 0x1ff32c: 0x0  nop
    ctx->pc = 0x1ff32cu;
    // NOP
    // 0x1ff330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ff334: 0x0  nop
    ctx->pc = 0x1ff334u;
    // NOP
    ctx->pc = 0x1ff338u;
}
