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

// Function: func_0017AC30
// Address: 0x17ac30 - 0x17ac90
void func_0017AC30_0x17ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017AC30_0x17ac30");
#endif

    switch (ctx->pc) {
        case 0x17ac6cu: goto label_17ac6c;
        case 0x17ac7cu: goto label_17ac7c;
        default: break;
    }

    ctx->pc = 0x17ac30u;

    // 0x17ac30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ac34: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17ac38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17ac3c: 0x24421a08  addiu       $v0, $v0, 0x1A08
    ctx->pc = 0x17ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
    // 0x17ac40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ac44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ac44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ac4c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x17ac50: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x17ac54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AC54u;
    {
        const bool branch_taken_0x17ac54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC54u;
        // 0x17ac58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac54) {
            ctx->pc = 0x17AC70u;
            goto label_17ac70;
        }
    }
    ctx->pc = 0x17AC5Cu;
    // 0x17ac5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x17ac60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x17ac60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac64: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x17AC64u;
    SET_GPR_U32(ctx, 31, 0x17AC6Cu);
    ctx->pc = 0x17AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC64u;
    // 0x17ac68: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x17AC64u, 0x17AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC6Cu;
label_17ac6c:
    // 0x17ac6c: 0xae00060c  sw          $zero, 0x60C($s0)
    ctx->pc = 0x17ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 0));
label_17ac70:
    // 0x17ac70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac74: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17AC74u;
    SET_GPR_U32(ctx, 31, 0x17AC7Cu);
    ctx->pc = 0x17AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC74u;
    // 0x17ac78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17AC74u, 0x17AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC7Cu;
label_17ac7c:
    // 0x17ac7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ac7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ac80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ac80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ac84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC88u;
        // 0x17ac8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC90u;
}
