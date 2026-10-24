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

// Function: func_0019ABC8
// Address: 0x19abc8 - 0x19ac18
void func_0019ABC8_0x19abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019ABC8_0x19abc8");
#endif

    switch (ctx->pc) {
        case 0x19abecu: goto label_19abec;
        case 0x19ac04u: goto label_19ac04;
        default: break;
    }

    ctx->pc = 0x19abc8u;

    // 0x19abc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19abcc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19abccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19abd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19abd4: 0x8c625d78  lw          $v0, 0x5D78($v1)
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D78u));
    // 0x19abd8: 0x24705d78  addiu       $s0, $v1, 0x5D78
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23928));
    // 0x19abdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ABDCu;
    {
        const bool branch_taken_0x19abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABDCu;
        // 0x19abe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19abdc) {
            ctx->pc = 0x19AC04u;
            goto label_19ac04;
        }
    }
    ctx->pc = 0x19ABE4u;
    // 0x19abe4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19ABE4u;
    SET_GPR_U32(ctx, 31, 0x19ABECu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19ABE4u, 0x19ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABECu;
label_19abec:
    // 0x19abec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19abecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19abf0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19abf4: 0x24a55700  addiu       $a1, $a1, 0x5700
    ctx->pc = 0x19abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22272));
    // 0x19abf8: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19abfc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19ABFCu;
    SET_GPR_U32(ctx, 31, 0x19AC04u);
    ctx->pc = 0x19AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABFCu;
    // 0x19ac00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19ABFCu, 0x19AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC04u;
label_19ac04:
    // 0x19ac04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ac04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ac0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC10u;
        // 0x19ac14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC18u;
}
