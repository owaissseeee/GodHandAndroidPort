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

// Function: func_001F75D0
// Address: 0x1f75d0 - 0x1f7680
void func_001F75D0_0x1f75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F75D0_0x1f75d0");
#endif

    switch (ctx->pc) {
        case 0x1f7608u: goto label_1f7608;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7644u: goto label_1f7644;
        default: break;
    }

    ctx->pc = 0x1f75d0u;

    // 0x1f75d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f75d4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f75d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f75d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f75dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f75dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f75e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f75e4: 0x26500104  addiu       $s0, $s2, 0x104
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1f75e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f75ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f75ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1f75f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f75f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f75f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1f75fc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1f75fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7604: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f7604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7608:
    // 0x1f7608: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f760c: 0x30420201  andi        $v0, $v0, 0x201
    ctx->pc = 0x1f760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)513);
    // 0x1f7610: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f7610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f7614: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f7618: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1F7618u;
    {
        const bool branch_taken_0x1f7618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1f7618) {
            ctx->pc = 0x1F761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7618u;
            // 0x1f761c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7648u;
            goto label_1f7648;
        }
    }
    ctx->pc = 0x1F7620u;
    // 0x1f7620: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1f7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f7624: 0x10540005  beq         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7624u;
    {
        const bool branch_taken_0x1f7624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1F7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7624u;
        // 0x1f7628: 0x26240104  addiu       $a0, $s1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7624) {
            ctx->pc = 0x1F763Cu;
            goto label_1f763c;
        }
    }
    ctx->pc = 0x1F762Cu;
    // 0x1f762c: 0xc07dc8a  jal         func_1F7228
    ctx->pc = 0x1F762Cu;
    SET_GPR_U32(ctx, 31, 0x1F7634u);
    ctx->pc = 0x1F7630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F762Cu;
    // 0x1f7630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7228u, 0x1F762Cu, 0x1F7634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7634u;
label_1f7634:
    // 0x1f7634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7634u;
    {
        const bool branch_taken_0x1f7634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7634u;
        // 0x1f7638: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7634) {
            ctx->pc = 0x1F7648u;
            goto label_1f7648;
        }
    }
    ctx->pc = 0x1F763Cu;
label_1f763c:
    // 0x1f763c: 0xc07dbd6  jal         func_1F6F58
    ctx->pc = 0x1F763Cu;
    SET_GPR_U32(ctx, 31, 0x1F7644u);
    ctx->pc = 0x1F7640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F763Cu;
    // 0x1f7640: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F58u, 0x1F763Cu, 0x1F7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7644u;
label_1f7644:
    // 0x1f7644: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7648:
    // 0x1f7648: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x1f7648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1f764c: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1f764cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f7650: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F7650u;
    {
        const bool branch_taken_0x1f7650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7650u;
        // 0x1f7654: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7650) {
            ctx->pc = 0x1F7608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7608;
        }
    }
    ctx->pc = 0x1F7658u;
    // 0x1f7658: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f7658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f765c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7660: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f7660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f7664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7668: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f7668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f766c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f766cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7674: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7674u;
        // 0x1f7678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F767Cu;
    // 0x1f767c: 0x0  nop
    ctx->pc = 0x1f767cu;
    // NOP
    ctx->pc = 0x1f7680u;
}
