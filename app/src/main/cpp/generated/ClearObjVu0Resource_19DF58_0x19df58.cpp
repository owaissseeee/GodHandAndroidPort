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

// Function: ClearObjVu0Resource_19DF58
// Address: 0x19df58 - 0x19dfb8
void ClearObjVu0Resource_19DF58_0x19df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearObjVu0Resource_19DF58_0x19df58");
#endif

    switch (ctx->pc) {
        case 0x19df94u: goto label_19df94;
        case 0x19dfa4u: goto label_19dfa4;
        default: break;
    }

    ctx->pc = 0x19df58u;

    // 0x19df58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19df5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19df60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19df64: 0x24426180  addiu       $v0, $v0, 0x6180
    ctx->pc = 0x19df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24960));
    // 0x19df68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19df6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19df6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19df74: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19df74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19df78: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19df7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19DF7Cu;
    {
        const bool branch_taken_0x19df7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF7Cu;
        // 0x19df80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df7c) {
            ctx->pc = 0x19DF98u;
            goto label_19df98;
        }
    }
    ctx->pc = 0x19DF84u;
    // 0x19df84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19df88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df8c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19DF8Cu;
    SET_GPR_U32(ctx, 31, 0x19DF94u);
    ctx->pc = 0x19DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF8Cu;
    // 0x19df90: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19DF8Cu, 0x19DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DF94u;
label_19df94:
    // 0x19df94: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19df94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19df98:
    // 0x19df98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19df9c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19DF9Cu;
    SET_GPR_U32(ctx, 31, 0x19DFA4u);
    ctx->pc = 0x19DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DF9Cu;
    // 0x19dfa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19DF9Cu, 0x19DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFA4u;
label_19dfa4:
    // 0x19dfa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19dfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFB0u;
        // 0x19dfb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DFB8u;
}
