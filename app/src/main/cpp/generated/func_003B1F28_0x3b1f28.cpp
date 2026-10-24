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

// Function: func_003B1F28
// Address: 0x3b1f28 - 0x3b1fa8
void func_003B1F28_0x3b1f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B1F28_0x3b1f28");
#endif

    switch (ctx->pc) {
        case 0x3b1f60u: goto label_3b1f60;
        case 0x3b1f84u: goto label_3b1f84;
        case 0x3b1f94u: goto label_3b1f94;
        default: break;
    }

    ctx->pc = 0x3b1f28u;

    // 0x3b1f28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b1f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b1f2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b1f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b1f30: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3b1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3b1f34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b1f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b1f3c: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x3b1f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x3b1f40: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x3b1f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x3b1f44: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x3b1f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x3b1f48: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x3b1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x3b1f4c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x3b1f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x3b1f50: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x3b1f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x3b1f54: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x3b1f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x3b1f58: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B1F58u;
    SET_GPR_U32(ctx, 31, 0x3B1F60u);
    ctx->pc = 0x3B1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F58u;
    // 0x3b1f5c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B1F58u, 0x3B1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F60u;
label_3b1f60:
    // 0x3b1f60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x3b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x3b1f64: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3b1f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3b1f68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f6c: 0x24841e40  addiu       $a0, $a0, 0x1E40
    ctx->pc = 0x3b1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7744));
    // 0x3b1f70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b1f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b1f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1f78: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3b1f78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3b1f7c: 0xc0ec434  jal         func_3B10D0
    ctx->pc = 0x3B1F7Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F84u);
    ctx->pc = 0x3B1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F7Cu;
    // 0x3b1f80: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10D0u, 0x3B1F7Cu, 0x3B1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F84u;
label_3b1f84:
    // 0x3b1f84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1F84u;
    {
        const bool branch_taken_0x3b1f84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F84u;
        // 0x3b1f88: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f84) {
            ctx->pc = 0x3B1F98u;
            goto label_3b1f98;
        }
    }
    ctx->pc = 0x3B1F8Cu;
    // 0x3b1f8c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B1F8Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F94u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B1F8Cu, 0x3B1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F94u;
label_3b1f94:
    // 0x3b1f94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1f98:
    // 0x3b1f98: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3b1f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1f9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b1f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FA0u;
        // 0x3b1fa4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1FA8u;
}
