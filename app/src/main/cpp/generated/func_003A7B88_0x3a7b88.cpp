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

// Function: func_003A7B88
// Address: 0x3a7b88 - 0x3a7c28
void func_003A7B88_0x3a7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A7B88_0x3a7b88");
#endif

    switch (ctx->pc) {
        case 0x3a7bccu: goto label_3a7bcc;
        default: break;
    }

    ctx->pc = 0x3a7b88u;

    // 0x3a7b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7b8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a7b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a7b90: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3a7b90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3a7b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a7b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7b9c: 0x8e02a62c  lw          $v0, -0x59D4($s0)
    ctx->pc = 0x3a7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a7ba0: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x3a7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x3a7ba4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7BA4u;
    {
        const bool branch_taken_0x3a7ba4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BA4u;
        // 0x3a7ba8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ba4) {
            ctx->pc = 0x3A7BB4u;
            goto label_3a7bb4;
        }
    }
    ctx->pc = 0x3A7BACu;
    // 0x3a7bac: 0x2445014c  addiu       $a1, $v0, 0x14C
    ctx->pc = 0x3a7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x3a7bb0: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x3a7bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
label_3a7bb4:
    // 0x3a7bb4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3a7bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3a7bb8: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x3a7bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a7bbc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3A7BBCu;
    {
        const bool branch_taken_0x3a7bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7bbc) {
            ctx->pc = 0x3A7BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7BBCu;
            // 0x3a7bc0: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7BF8u;
            goto label_3a7bf8;
        }
    }
    ctx->pc = 0x3A7BC4u;
    // 0x3a7bc4: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x3A7BC4u;
    SET_GPR_U32(ctx, 31, 0x3A7BCCu);
    ctx->pc = 0x3A7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BC4u;
    // 0x3a7bc8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x3A7BC4u, 0x3A7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BCCu;
label_3a7bcc:
    // 0x3a7bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a7bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bd0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7BD0u;
    {
        const bool branch_taken_0x3a7bd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7bd0) {
            ctx->pc = 0x3A7BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7BD0u;
            // 0x3a7bd4: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7BE0u;
            goto label_3a7be0;
        }
    }
    ctx->pc = 0x3A7BD8u;
    // 0x3a7bd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A7BD8u;
    {
        const bool branch_taken_0x3a7bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BD8u;
        // 0x3a7bdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7bd8) {
            ctx->pc = 0x3A7C10u;
            goto label_3a7c10;
        }
    }
    ctx->pc = 0x3A7BE0u;
label_3a7be0:
    // 0x3a7be0: 0x8e02a62c  lw          $v0, -0x59D4($s0)
    ctx->pc = 0x3a7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    // 0x3a7be4: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x3a7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x3a7be8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3a7bec: 0x8e02a62c  lw          $v0, -0x59D4($s0)
    ctx->pc = 0x3a7becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944300)));
    // 0x3a7bf0: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x3a7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 5));
    // 0x3a7bf4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3a7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3a7bf8:
    // 0x3a7bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a7bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bfc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a7bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a7c00: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3a7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3a7c04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a7c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a7c08: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x3a7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x3a7c0c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3a7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_3a7c10:
    // 0x3a7c10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a7c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7c14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a7c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C1Cu;
        // 0x3a7c20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7C24u;
    // 0x3a7c24: 0x0  nop
    ctx->pc = 0x3a7c24u;
    // NOP
    ctx->pc = 0x3a7c28u;
}
