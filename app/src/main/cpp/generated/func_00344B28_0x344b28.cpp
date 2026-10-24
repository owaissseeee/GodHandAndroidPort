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

// Function: func_00344B28
// Address: 0x344b28 - 0x344bc0
void func_00344B28_0x344b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344B28_0x344b28");
#endif

    switch (ctx->pc) {
        case 0x344b60u: goto label_344b60;
        default: break;
    }

    ctx->pc = 0x344b28u;

    // 0x344b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x344b2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x344b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x344b30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x344b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x344b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x344b38: 0x24930160  addiu       $s3, $a0, 0x160
    ctx->pc = 0x344b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x344b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x344b44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x344b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x344b48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x344b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x344b4c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x344b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x344b50: 0x8c940178  lw          $s4, 0x178($a0)
    ctx->pc = 0x344b50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x344b54: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x344b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x344b58: 0xc0d1566  jal         func_345598
    ctx->pc = 0x344B58u;
    SET_GPR_U32(ctx, 31, 0x344B60u);
    ctx->pc = 0x344B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B58u;
    // 0x344b5c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345598u, 0x344B58u, 0x344B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B60u;
label_344b60:
    // 0x344b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344b64: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B64u;
    {
        const bool branch_taken_0x344b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x344b64) {
            ctx->pc = 0x344B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344B64u;
            // 0x344b68: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344B78u;
            goto label_344b78;
        }
    }
    ctx->pc = 0x344B6Cu;
    // 0x344b6c: 0x16930004  bne         $s4, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B6Cu;
    {
        const bool branch_taken_0x344b6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x344b6c) {
            ctx->pc = 0x344B80u;
            goto label_344b80;
        }
    }
    ctx->pc = 0x344B74u;
    // 0x344b74: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x344b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_344b78:
    // 0x344b78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x344B78u;
    {
        const bool branch_taken_0x344b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B78u;
        // 0x344b7c: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b78) {
            ctx->pc = 0x344BA0u;
            goto label_344ba0;
        }
    }
    ctx->pc = 0x344B80u;
label_344b80:
    // 0x344b80: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x344B80u;
    {
        const bool branch_taken_0x344b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B80u;
        // 0x344b84: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b80) {
            ctx->pc = 0x344B98u;
            goto label_344b98;
        }
    }
    ctx->pc = 0x344B88u;
    // 0x344b88: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B88u;
    {
        const bool branch_taken_0x344b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344b88) {
            ctx->pc = 0x344B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344B88u;
            // 0x344b8c: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344B9Cu;
            goto label_344b9c;
        }
    }
    ctx->pc = 0x344B90u;
    // 0x344b90: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x344b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x344b94: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x344b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_344b98:
    // 0x344b98: 0xae510048  sw          $s1, 0x48($s2)
    ctx->pc = 0x344b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
label_344b9c:
    // 0x344b9c: 0xae500044  sw          $s0, 0x44($s2)
    ctx->pc = 0x344b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 16));
label_344ba0:
    // 0x344ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344ba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x344ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344bac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x344bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344bb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x344bb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344bb4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x344bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x344BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BB8u;
        // 0x344bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344BC0u;
}
