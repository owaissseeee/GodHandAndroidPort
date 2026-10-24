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

// Function: func_001F2A88
// Address: 0x1f2a88 - 0x1f2b28
void func_001F2A88_0x1f2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2A88_0x1f2a88");
#endif

    switch (ctx->pc) {
        case 0x1f2aacu: goto label_1f2aac;
        case 0x1f2abcu: goto label_1f2abc;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2ae0u: goto label_1f2ae0;
        case 0x1f2af0u: goto label_1f2af0;
        case 0x1f2b00u: goto label_1f2b00;
        case 0x1f2b10u: goto label_1f2b10;
        default: break;
    }

    ctx->pc = 0x1f2a88u;

    // 0x1f2a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f2a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f2a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2a98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f2a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2aa4: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AA4u;
    SET_GPR_U32(ctx, 31, 0x1F2AACu);
    ctx->pc = 0x1F2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AA4u;
    // 0x1f2aa8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AA4u, 0x1F2AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AACu;
label_1f2aac:
    // 0x1f2aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ab0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f2ab4: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AB4u;
    SET_GPR_U32(ctx, 31, 0x1F2ABCu);
    ctx->pc = 0x1F2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AB4u;
    // 0x1f2ab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AB4u, 0x1F2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ABCu;
label_1f2abc:
    // 0x1f2abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ac0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f2ac4: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AC4u;
    SET_GPR_U32(ctx, 31, 0x1F2ACCu);
    ctx->pc = 0x1F2AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AC4u;
    // 0x1f2ac8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AC4u, 0x1F2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ACCu;
label_1f2acc:
    // 0x1f2acc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F2ACCu;
    {
        const bool branch_taken_0x1f2acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ACCu;
        // 0x1f2ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2acc) {
            ctx->pc = 0x1F2B10u;
            goto label_1f2b10;
        }
    }
    ctx->pc = 0x1F2AD4u;
    // 0x1f2ad4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2ad8: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AD8u;
    SET_GPR_U32(ctx, 31, 0x1F2AE0u);
    ctx->pc = 0x1F2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AD8u;
    // 0x1f2adc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AD8u, 0x1F2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AE0u;
label_1f2ae0:
    // 0x1f2ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ae4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2ae8: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AE8u;
    SET_GPR_U32(ctx, 31, 0x1F2AF0u);
    ctx->pc = 0x1F2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AE8u;
    // 0x1f2aec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AE8u, 0x1F2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AF0u;
label_1f2af0:
    // 0x1f2af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1f2af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f2af8: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2AF8u;
    SET_GPR_U32(ctx, 31, 0x1F2B00u);
    ctx->pc = 0x1F2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AF8u;
    // 0x1f2afc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2AF8u, 0x1F2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B00u;
label_1f2b00:
    // 0x1f2b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b04: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f2b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f2b08: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2B08u;
    SET_GPR_U32(ctx, 31, 0x1F2B10u);
    ctx->pc = 0x1F2B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B08u;
    // 0x1f2b0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2B08u, 0x1F2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B10u;
label_1f2b10:
    // 0x1f2b10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f2b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B1Cu;
        // 0x1f2b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2B24u;
    // 0x1f2b24: 0x0  nop
    ctx->pc = 0x1f2b24u;
    // NOP
    ctx->pc = 0x1f2b28u;
}
