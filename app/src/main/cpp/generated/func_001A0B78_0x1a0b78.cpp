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

// Function: func_001A0B78
// Address: 0x1a0b78 - 0x1a0bd8
void func_001A0B78_0x1a0b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0B78_0x1a0b78");
#endif

    switch (ctx->pc) {
        case 0x1a0bb4u: goto label_1a0bb4;
        case 0x1a0bc4u: goto label_1a0bc4;
        default: break;
    }

    ctx->pc = 0x1a0b78u;

    // 0x1a0b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0b7c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0b80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a0b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a0b84: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x1a0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
    // 0x1a0b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0b94: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a0b98: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a0b9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0B9Cu;
    {
        const bool branch_taken_0x1a0b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B9Cu;
        // 0x1a0ba0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0b9c) {
            ctx->pc = 0x1A0BB8u;
            goto label_1a0bb8;
        }
    }
    ctx->pc = 0x1A0BA4u;
    // 0x1a0ba4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a0ba8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a0ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bac: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A0BACu;
    SET_GPR_U32(ctx, 31, 0x1A0BB4u);
    ctx->pc = 0x1A0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BACu;
    // 0x1a0bb0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A0BACu, 0x1A0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BB4u;
label_1a0bb4:
    // 0x1a0bb4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1a0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1a0bb8:
    // 0x1a0bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bbc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1A0BBCu;
    SET_GPR_U32(ctx, 31, 0x1A0BC4u);
    ctx->pc = 0x1A0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BBCu;
    // 0x1a0bc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1A0BBCu, 0x1A0BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BC4u;
label_1a0bc4:
    // 0x1a0bc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a0bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD0u;
        // 0x1a0bd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BD8u;
}
