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

// Function: ResetField214FreeField600I_193278
// Address: 0x193278 - 0x1932d8
void ResetField214FreeField600I_193278_0x193278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetField214FreeField600I_193278_0x193278");
#endif

    switch (ctx->pc) {
        case 0x1932b4u: goto label_1932b4;
        case 0x1932c4u: goto label_1932c4;
        default: break;
    }

    ctx->pc = 0x193278u;

    // 0x193278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19327c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193280: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x193280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x193284: 0x244246a8  addiu       $v0, $v0, 0x46A8
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18088));
    // 0x193288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19328c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19328cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193294: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x193294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x193298: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19329c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19329Cu;
    {
        const bool branch_taken_0x19329c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1932A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19329Cu;
        // 0x1932a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19329c) {
            ctx->pc = 0x1932B8u;
            goto label_1932b8;
        }
    }
    ctx->pc = 0x1932A4u;
    // 0x1932a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1932a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1932a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932ac: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1932ACu;
    SET_GPR_U32(ctx, 31, 0x1932B4u);
    ctx->pc = 0x1932B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932ACu;
    // 0x1932b0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1932ACu, 0x1932B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932B4u;
label_1932b4:
    // 0x1932b4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1932b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1932b8:
    // 0x1932b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1932b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932bc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1932BCu;
    SET_GPR_U32(ctx, 31, 0x1932C4u);
    ctx->pc = 0x1932C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932BCu;
    // 0x1932c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1932BCu, 0x1932C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932C4u;
label_1932c4:
    // 0x1932c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1932c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1932c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1932c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1932cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1932d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1932D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932D0u;
        // 0x1932d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1932D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1932D8u;
}
