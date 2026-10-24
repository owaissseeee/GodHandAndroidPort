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

// Function: ResetObjVtableAndFree_19EEB8
// Address: 0x19eeb8 - 0x19ef18
void ResetObjVtableAndFree_19EEB8_0x19eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjVtableAndFree_19EEB8_0x19eeb8");
#endif

    switch (ctx->pc) {
        case 0x19eef4u: goto label_19eef4;
        case 0x19ef04u: goto label_19ef04;
        default: break;
    }

    ctx->pc = 0x19eeb8u;

    // 0x19eeb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19eebc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19eec0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19eec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19eec4: 0x244266f0  addiu       $v0, $v0, 0x66F0
    ctx->pc = 0x19eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x19eec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19eecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19eeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eed4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19eed8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19eed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19eedc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EEDCu;
    {
        const bool branch_taken_0x19eedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEDCu;
        // 0x19eee0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eedc) {
            ctx->pc = 0x19EEF8u;
            goto label_19eef8;
        }
    }
    ctx->pc = 0x19EEE4u;
    // 0x19eee4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19eee8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19eee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eeec: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19EEECu;
    SET_GPR_U32(ctx, 31, 0x19EEF4u);
    ctx->pc = 0x19EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEECu;
    // 0x19eef0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19EEECu, 0x19EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EEF4u;
label_19eef4:
    // 0x19eef4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19eef8:
    // 0x19eef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eefc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19EEFCu;
    SET_GPR_U32(ctx, 31, 0x19EF04u);
    ctx->pc = 0x19EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EEFCu;
    // 0x19ef00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19EEFCu, 0x19EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF04u;
label_19ef04:
    // 0x19ef04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19ef04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ef08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF10u;
        // 0x19ef14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF18u;
}
