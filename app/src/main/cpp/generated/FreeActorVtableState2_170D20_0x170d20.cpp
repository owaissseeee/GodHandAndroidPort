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

// Function: FreeActorVtableState2_170D20
// Address: 0x170d20 - 0x170d80
void FreeActorVtableState2_170D20_0x170d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeActorVtableState2_170D20_0x170d20");
#endif

    switch (ctx->pc) {
        case 0x170d5cu: goto label_170d5c;
        case 0x170d6cu: goto label_170d6c;
        default: break;
    }

    ctx->pc = 0x170d20u;

    // 0x170d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170d24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x170d28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170d2c: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x170d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x170d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170d3c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x170d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x170d40: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x170d44: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x170D44u;
    {
        const bool branch_taken_0x170d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D44u;
        // 0x170d48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d44) {
            ctx->pc = 0x170D60u;
            goto label_170d60;
        }
    }
    ctx->pc = 0x170D4Cu;
    // 0x170d4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x170d50: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x170d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d54: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x170D54u;
    SET_GPR_U32(ctx, 31, 0x170D5Cu);
    ctx->pc = 0x170D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D54u;
    // 0x170d58: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x170D54u, 0x170D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D5Cu;
label_170d5c:
    // 0x170d5c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x170d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_170d60:
    // 0x170d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d64: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x170D64u;
    SET_GPR_U32(ctx, 31, 0x170D6Cu);
    ctx->pc = 0x170D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D64u;
    // 0x170d68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x170D64u, 0x170D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D6Cu;
label_170d6c:
    // 0x170d6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170d78: 0x3e00008  jr          $ra
    ctx->pc = 0x170D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D78u;
        // 0x170d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D80u;
}
