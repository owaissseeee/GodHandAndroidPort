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

// Function: func_00312AB0
// Address: 0x312ab0 - 0x312b00
void func_00312AB0_0x312ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00312AB0_0x312ab0");
#endif

    switch (ctx->pc) {
        case 0x312accu: goto label_312acc;
        case 0x312adcu: goto label_312adc;
        default: break;
    }

    ctx->pc = 0x312ab0u;

    // 0x312ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x312ab4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x312ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x312ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312ac4: 0xc0c3edc  jal         func_30FB70
    ctx->pc = 0x312AC4u;
    SET_GPR_U32(ctx, 31, 0x312ACCu);
    ctx->pc = 0x312AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AC4u;
    // 0x312ac8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FB70u, 0x312AC4u, 0x312ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312ACCu;
label_312acc:
    // 0x312acc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312ACCu;
    {
        const bool branch_taken_0x312acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312ACCu;
        // 0x312ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312acc) {
            ctx->pc = 0x312AE4u;
            goto label_312ae4;
        }
    }
    ctx->pc = 0x312AD4u;
    // 0x312ad4: 0xc0c4ac0  jal         func_312B00
    ctx->pc = 0x312AD4u;
    SET_GPR_U32(ctx, 31, 0x312ADCu);
    ctx->pc = 0x312AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312AD4u;
    // 0x312ad8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B00u, 0x312AD4u, 0x312ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312ADCu;
label_312adc:
    // 0x312adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x312ADCu;
    {
        const bool branch_taken_0x312adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312ADCu;
        // 0x312ae0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312adc) {
            ctx->pc = 0x312AECu;
            goto label_312aec;
        }
    }
    ctx->pc = 0x312AE4u;
label_312ae4:
    // 0x312ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ae8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x312ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312aec:
    // 0x312aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312af4: 0x3e00008  jr          $ra
    ctx->pc = 0x312AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AF4u;
        // 0x312af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312AFCu;
    // 0x312afc: 0x0  nop
    ctx->pc = 0x312afcu;
    // NOP
    ctx->pc = 0x312b00u;
}
