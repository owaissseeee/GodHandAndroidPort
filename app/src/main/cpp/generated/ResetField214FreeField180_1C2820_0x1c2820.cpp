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

// Function: ResetField214FreeField180_1C2820
// Address: 0x1c2820 - 0x1c28a0
void ResetField214FreeField180_1C2820_0x1c2820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField180_1C2820_0x1c2820");
#endif

    switch (ctx->pc) {
        case 0x1c285cu: goto label_1c285c;
        case 0x1c2878u: goto label_1c2878;
        case 0x1c2888u: goto label_1c2888;
        default: break;
    }

    ctx->pc = 0x1c2820u;

    // 0x1c2820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2824: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c2824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c2828: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c282c: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x1c282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x1c2830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c283c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1c283cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1c2840: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c2844: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2844u;
    {
        const bool branch_taken_0x1c2844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2844u;
        // 0x1c2848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2844) {
            ctx->pc = 0x1C2860u;
            goto label_1c2860;
        }
    }
    ctx->pc = 0x1C284Cu;
    // 0x1c284c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c284cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1c2850: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c2850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2854: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1C2854u;
    SET_GPR_U32(ctx, 31, 0x1C285Cu);
    ctx->pc = 0x1C2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2854u;
    // 0x1c2858: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1C2854u, 0x1C285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C285Cu;
label_1c285c:
    // 0x1c285c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1c285cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1c2860:
    // 0x1c2860: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1c2864: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2864u;
    {
        const bool branch_taken_0x1c2864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2864u;
        // 0x1c2868: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2864) {
            ctx->pc = 0x1C287Cu;
            goto label_1c287c;
        }
    }
    ctx->pc = 0x1C286Cu;
    // 0x1c286c: 0x8e050600  lw          $a1, 0x600($s0)
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1c2870: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1C2870u;
    SET_GPR_U32(ctx, 31, 0x1C2878u);
    ctx->pc = 0x1C2874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2870u;
    // 0x1c2874: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1C2870u, 0x1C2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2878u;
label_1c2878:
    // 0x1c2878: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1c2878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1c287c:
    // 0x1c287c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2880: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1C2880u;
    SET_GPR_U32(ctx, 31, 0x1C2888u);
    ctx->pc = 0x1C2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2880u;
    // 0x1c2884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1C2880u, 0x1C2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2888u;
label_1c2888:
    // 0x1c2888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c288c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c288cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2894: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2894u;
        // 0x1c2898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C289Cu;
    // 0x1c289c: 0x0  nop
    ctx->pc = 0x1c289cu;
    // NOP
    ctx->pc = 0x1c28a0u;
}
