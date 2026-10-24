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

// Function: func_0018F1A0
// Address: 0x18f1a0 - 0x18f218
void func_0018F1A0_0x18f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F1A0_0x18f1a0");
#endif

    switch (ctx->pc) {
        case 0x18f1dcu: goto label_18f1dc;
        case 0x18f1f4u: goto label_18f1f4;
        case 0x18f204u: goto label_18f204;
        default: break;
    }

    ctx->pc = 0x18f1a0u;

    // 0x18f1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f1a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18f1a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18f1ac: 0x24423e48  addiu       $v0, $v0, 0x3E48
    ctx->pc = 0x18f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15944));
    // 0x18f1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f1b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f1bc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18f1c0: 0x8e030654  lw          $v1, 0x654($s0)
    ctx->pc = 0x18f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
    // 0x18f1c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F1C4u;
    {
        const bool branch_taken_0x18f1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C4u;
        // 0x18f1c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c4) {
            ctx->pc = 0x18F1E0u;
            goto label_18f1e0;
        }
    }
    ctx->pc = 0x18F1CCu;
    // 0x18f1cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18f1d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18f1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1d4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18F1D4u;
    SET_GPR_U32(ctx, 31, 0x18F1DCu);
    ctx->pc = 0x18F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1D4u;
    // 0x18f1d8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18F1D4u, 0x18F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1DCu;
label_18f1dc:
    // 0x18f1dc: 0xae000654  sw          $zero, 0x654($s0)
    ctx->pc = 0x18f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 0));
label_18f1e0:
    // 0x18f1e0: 0x8e050658  lw          $a1, 0x658($s0)
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
    // 0x18f1e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F1E4u;
    {
        const bool branch_taken_0x18f1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E4u;
        // 0x18f1e8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1e4) {
            ctx->pc = 0x18F1F8u;
            goto label_18f1f8;
        }
    }
    ctx->pc = 0x18F1ECu;
    // 0x18f1ec: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x18F1ECu;
    SET_GPR_U32(ctx, 31, 0x18F1F4u);
    ctx->pc = 0x18F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1ECu;
    // 0x18f1f0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x18F1ECu, 0x18F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1F4u;
label_18f1f4:
    // 0x18f1f4: 0xae000658  sw          $zero, 0x658($s0)
    ctx->pc = 0x18f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 0));
label_18f1f8:
    // 0x18f1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1fc: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x18F1FCu;
    SET_GPR_U32(ctx, 31, 0x18F204u);
    ctx->pc = 0x18F200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1FCu;
    // 0x18f200: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x18F1FCu, 0x18F204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F204u;
label_18f204:
    // 0x18f204: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f210: 0x3e00008  jr          $ra
    ctx->pc = 0x18F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F210u;
        // 0x18f214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F218u;
}
