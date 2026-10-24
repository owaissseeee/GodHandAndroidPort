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

// Function: func_0019A7A8
// Address: 0x19a7a8 - 0x19a808
void func_0019A7A8_0x19a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A7A8_0x19a7a8");
#endif

    switch (ctx->pc) {
        case 0x19a7e4u: goto label_19a7e4;
        case 0x19a7f4u: goto label_19a7f4;
        default: break;
    }

    ctx->pc = 0x19a7a8u;

    // 0x19a7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a7ac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a7b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19a7b4: 0x24425548  addiu       $v0, $v0, 0x5548
    ctx->pc = 0x19a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
    // 0x19a7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a7c4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19a7c8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19a7cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A7CCu;
    {
        const bool branch_taken_0x19a7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7CCu;
        // 0x19a7d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7cc) {
            ctx->pc = 0x19A7E8u;
            goto label_19a7e8;
        }
    }
    ctx->pc = 0x19A7D4u;
    // 0x19a7d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19a7d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19a7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7dc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19A7DCu;
    SET_GPR_U32(ctx, 31, 0x19A7E4u);
    ctx->pc = 0x19A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7DCu;
    // 0x19a7e0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19A7DCu, 0x19A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7E4u;
label_19a7e4:
    // 0x19a7e4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19a7e8:
    // 0x19a7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7ec: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19A7ECu;
    SET_GPR_U32(ctx, 31, 0x19A7F4u);
    ctx->pc = 0x19A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7ECu;
    // 0x19a7f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19A7ECu, 0x19A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7F4u;
label_19a7f4:
    // 0x19a7f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19a7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a7f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a800: 0x3e00008  jr          $ra
    ctx->pc = 0x19A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A800u;
        // 0x19a804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A808u;
}
