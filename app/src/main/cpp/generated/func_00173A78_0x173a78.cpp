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

// Function: func_00173A78
// Address: 0x173a78 - 0x173ad8
void func_00173A78_0x173a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173A78_0x173a78");
#endif

    switch (ctx->pc) {
        case 0x173ab4u: goto label_173ab4;
        case 0x173ac4u: goto label_173ac4;
        default: break;
    }

    ctx->pc = 0x173a78u;

    // 0x173a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173a7c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x173a80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173a84: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x173a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x173a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173a94: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x173a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x173a98: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x173a9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173A9Cu;
    {
        const bool branch_taken_0x173a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A9Cu;
        // 0x173aa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a9c) {
            ctx->pc = 0x173AB8u;
            goto label_173ab8;
        }
    }
    ctx->pc = 0x173AA4u;
    // 0x173aa4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x173aa8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x173aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173aac: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x173AACu;
    SET_GPR_U32(ctx, 31, 0x173AB4u);
    ctx->pc = 0x173AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AACu;
    // 0x173ab0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x173AACu, 0x173AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AB4u;
label_173ab4:
    // 0x173ab4: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x173ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_173ab8:
    // 0x173ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173abc: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x173ABCu;
    SET_GPR_U32(ctx, 31, 0x173AC4u);
    ctx->pc = 0x173AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173ABCu;
    // 0x173ac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x173ABCu, 0x173AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AC4u;
label_173ac4:
    // 0x173ac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x173AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173AD0u;
        // 0x173ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173AD8u;
}
