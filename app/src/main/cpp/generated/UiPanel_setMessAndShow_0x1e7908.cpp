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

// Function: UiPanel_setMessAndShow
// Address: 0x1e7908 - 0x1e7960
void UiPanel_setMessAndShow_0x1e7908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UiPanel_setMessAndShow_0x1e7908");
#endif

    switch (ctx->pc) {
        case 0x1e7928u: goto label_1e7928;
        case 0x1e7938u: goto label_1e7938;
        case 0x1e7948u: goto label_1e7948;
        default: break;
    }

    ctx->pc = 0x1e7908u;

    // 0x1e7908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e790c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e791c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e791cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7920: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1E7920u;
    SET_GPR_U32(ctx, 31, 0x1E7928u);
    ctx->pc = 0x1E7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7920u;
    // 0x1e7924: 0x260405fc  addiu       $a0, $s0, 0x5FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1E7920u, 0x1E7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7928u;
label_1e7928:
    // 0x1e7928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e792c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e792cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7930: 0xc079d4e  jal         func_1E7538
    ctx->pc = 0x1E7930u;
    SET_GPR_U32(ctx, 31, 0x1E7938u);
    ctx->pc = 0x1E7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7930u;
    // 0x1e7934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7538u, 0x1E7930u, 0x1E7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7938u;
label_1e7938:
    // 0x1e7938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e793c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e793cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7940: 0xc079d4e  jal         func_1E7538
    ctx->pc = 0x1E7940u;
    SET_GPR_U32(ctx, 31, 0x1E7948u);
    ctx->pc = 0x1E7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7940u;
    // 0x1e7944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7538u, 0x1E7940u, 0x1E7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7948u;
label_1e7948:
    // 0x1e7948: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e794c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e794cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7954: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7954u;
        // 0x1e7958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E795Cu;
    // 0x1e795c: 0x0  nop
    ctx->pc = 0x1e795cu;
    // NOP
    ctx->pc = 0x1e7960u;
}
