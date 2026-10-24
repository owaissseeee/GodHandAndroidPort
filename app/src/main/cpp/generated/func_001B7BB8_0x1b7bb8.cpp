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

// Function: func_001B7BB8
// Address: 0x1b7bb8 - 0x1b7c48
void func_001B7BB8_0x1b7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7BB8_0x1b7bb8");
#endif

    switch (ctx->pc) {
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7c18u: goto label_1b7c18;
        case 0x1b7c34u: goto label_1b7c34;
        default: break;
    }

    ctx->pc = 0x1b7bb8u;

    // 0x1b7bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7bbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b7bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7bcc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7bd0: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1b7bd0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1b7bd4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x1b7bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7bdc: 0x10510015  beq         $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B7BDCu;
    {
        const bool branch_taken_0x1b7bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BDCu;
        // 0x1b7be0: 0x8e0305b0  lw          $v1, 0x5B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7bdc) {
            ctx->pc = 0x1B7C34u;
            goto label_1b7c34;
        }
    }
    ctx->pc = 0x1B7BE4u;
    // 0x1b7be4: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1b7be8: 0xc06de9e  jal         func_1B7A78
    ctx->pc = 0x1B7BE8u;
    SET_GPR_U32(ctx, 31, 0x1B7BF0u);
    ctx->pc = 0x1B7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BE8u;
    // 0x1b7bec: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A78u, 0x1B7BE8u, 0x1B7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF0u;
label_1b7bf0:
    // 0x1b7bf0: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7BF0u;
    {
        const bool branch_taken_0x1b7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b7bf0) {
            ctx->pc = 0x1B7BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7BF0u;
            // 0x1b7bf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7C38u;
            goto label_1b7c38;
        }
    }
    ctx->pc = 0x1B7BF8u;
    // 0x1b7bf8: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x1b7bfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b7bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b7c00: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7C00u;
    {
        const bool branch_taken_0x1b7c00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C00u;
        // 0x1b7c04: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c00) {
            ctx->pc = 0x1B7C20u;
            goto label_1b7c20;
        }
    }
    ctx->pc = 0x1B7C08u;
    // 0x1b7c08: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b7c0c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1b7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1b7c10: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x1B7C10u;
    SET_GPR_U32(ctx, 31, 0x1B7C18u);
    ctx->pc = 0x1B7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C10u;
    // 0x1b7c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1B7C10u, 0x1B7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C18u;
label_1b7c18:
    // 0x1b7c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7C18u;
    {
        const bool branch_taken_0x1b7c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C18u;
        // 0x1b7c1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c18) {
            ctx->pc = 0x1B7C38u;
            goto label_1b7c38;
        }
    }
    ctx->pc = 0x1B7C20u;
label_1b7c20:
    // 0x1b7c20: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1b7c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b7c24: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1b7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1b7c28: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1b7c28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b7c2c: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x1B7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C34u);
    ctx->pc = 0x1B7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C2Cu;
    // 0x1b7c30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1B7C2Cu, 0x1B7C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C34u;
label_1b7c34:
    // 0x1b7c34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7c38:
    // 0x1b7c38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C40u;
        // 0x1b7c44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C48u;
}
