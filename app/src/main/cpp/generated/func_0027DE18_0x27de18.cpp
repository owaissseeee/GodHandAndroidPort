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

// Function: func_0027DE18
// Address: 0x27de18 - 0x27de60
void func_0027DE18_0x27de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DE18_0x27de18");
#endif

    switch (ctx->pc) {
        case 0x27de40u: goto label_27de40;
        case 0x27de4cu: goto label_27de4c;
        default: break;
    }

    ctx->pc = 0x27de18u;

    // 0x27de18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27de18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27de1c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27de20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27de24: 0x244283a8  addiu       $v0, $v0, -0x7C58
    ctx->pc = 0x27de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935464));
    // 0x27de28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27de2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27de2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27de34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27de34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de38: 0xc09f822  jal         func_27E088
    ctx->pc = 0x27DE38u;
    SET_GPR_U32(ctx, 31, 0x27DE40u);
    ctx->pc = 0x27DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE38u;
    // 0x27de3c: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E088u, 0x27DE38u, 0x27DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE40u;
label_27de40:
    // 0x27de40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27de40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de44: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x27DE44u;
    SET_GPR_U32(ctx, 31, 0x27DE4Cu);
    ctx->pc = 0x27DE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DE44u;
    // 0x27de48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x27DE44u, 0x27DE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DE4Cu;
label_27de4c:
    // 0x27de4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27de4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27de50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27de50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27de54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27de58: 0x3e00008  jr          $ra
    ctx->pc = 0x27DE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DE58u;
        // 0x27de5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DE60u;
}
