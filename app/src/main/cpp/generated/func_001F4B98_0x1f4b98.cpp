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

// Function: func_001F4B98
// Address: 0x1f4b98 - 0x1f4c40
void func_001F4B98_0x1f4b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4B98_0x1f4b98");
#endif

    switch (ctx->pc) {
        case 0x1f4bdcu: goto label_1f4bdc;
        case 0x1f4bf0u: goto label_1f4bf0;
        case 0x1f4c0cu: goto label_1f4c0c;
        case 0x1f4c20u: goto label_1f4c20;
        default: break;
    }

    ctx->pc = 0x1f4b98u;

    // 0x1f4b98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f4b9c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f4b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f4ba0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f4ba4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x1f4ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f4ba8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f4bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f4bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bb0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f4bb4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f4bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f4bbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f4bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bc0: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1f4bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f4bc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4BC4u;
    {
        const bool branch_taken_0x1f4bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BC4u;
        // 0x1f4bc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bc4) {
            ctx->pc = 0x1F4C20u;
            goto label_1f4c20;
        }
    }
    ctx->pc = 0x1F4BCCu;
    // 0x1f4bcc: 0x2612000a  addiu       $s2, $s0, 0xA
    ctx->pc = 0x1f4bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1f4bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4bd4: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4BD4u;
    SET_GPR_U32(ctx, 31, 0x1F4BDCu);
    ctx->pc = 0x1F4BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4BD4u;
    // 0x1f4bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4BD4u, 0x1F4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4BDCu;
label_1f4bdc:
    // 0x1f4bdc: 0x26100011  addiu       $s0, $s0, 0x11
    ctx->pc = 0x1f4bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1f4be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4be8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4BE8u;
    SET_GPR_U32(ctx, 31, 0x1F4BF0u);
    ctx->pc = 0x1F4BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4BE8u;
    // 0x1f4bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4BE8u, 0x1F4BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4BF0u;
label_1f4bf0:
    // 0x1f4bf0: 0x5260000c  beql        $s3, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4BF0u;
    {
        const bool branch_taken_0x1f4bf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4bf0) {
            ctx->pc = 0x1F4BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4BF0u;
            // 0x1f4bf4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4C24u;
            goto label_1f4c24;
        }
    }
    ctx->pc = 0x1F4BF8u;
    // 0x1f4bf8: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4BF8u;
    {
        const bool branch_taken_0x1f4bf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BF8u;
        // 0x1f4bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bf8) {
            ctx->pc = 0x1F4C14u;
            goto label_1f4c14;
        }
    }
    ctx->pc = 0x1F4C00u;
    // 0x1f4c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c04: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4C04u;
    SET_GPR_U32(ctx, 31, 0x1F4C0Cu);
    ctx->pc = 0x1F4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C04u;
    // 0x1f4c08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4C04u, 0x1F4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C0Cu;
label_1f4c0c:
    // 0x1f4c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4C0Cu;
    {
        const bool branch_taken_0x1f4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C0Cu;
        // 0x1f4c10: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c0c) {
            ctx->pc = 0x1F4C24u;
            goto label_1f4c24;
        }
    }
    ctx->pc = 0x1F4C14u;
label_1f4c14:
    // 0x1f4c14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c18: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4C18u;
    SET_GPR_U32(ctx, 31, 0x1F4C20u);
    ctx->pc = 0x1F4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C18u;
    // 0x1f4c1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4C18u, 0x1F4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C20u;
label_1f4c20:
    // 0x1f4c20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f4c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4c24:
    // 0x1f4c24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f4c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4c28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f4c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4c2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f4c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4c30: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f4c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C38u;
        // 0x1f4c3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4C40u;
}
