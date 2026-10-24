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

// Function: func_00306BB0
// Address: 0x306bb0 - 0x306c78
void func_00306BB0_0x306bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306BB0_0x306bb0");
#endif

    switch (ctx->pc) {
        case 0x306c08u: goto label_306c08;
        case 0x306c18u: goto label_306c18;
        default: break;
    }

    ctx->pc = 0x306bb0u;

    // 0x306bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x306bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x306bb4: 0x28a204e2  slti        $v0, $a1, 0x4E2
    ctx->pc = 0x306bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1250) ? 1 : 0);
    // 0x306bb8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x306bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x306bbc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x306bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x306bc0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x306bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x306bc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x306bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x306bc8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x306bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x306bcc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x306BCCu;
    {
        const bool branch_taken_0x306bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BCCu;
        // 0x306bd0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bcc) {
            ctx->pc = 0x306C48u;
            goto label_306c48;
        }
    }
    ctx->pc = 0x306BD4u;
    // 0x306bd4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x306bd8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x306bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x306bdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x306bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306be0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x306be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306be8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x306be8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306bec: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x306BECu;
    {
        const bool branch_taken_0x306bec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BECu;
        // 0x306bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bec) {
            ctx->pc = 0x306C54u;
            goto label_306c54;
        }
    }
    ctx->pc = 0x306BF4u;
    // 0x306bf4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x306bf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x306BF8u;
    {
        const bool branch_taken_0x306bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BF8u;
        // 0x306bfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bf8) {
            ctx->pc = 0x306C3Cu;
            goto label_306c3c;
        }
    }
    ctx->pc = 0x306C00u;
    // 0x306c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c04: 0x0  nop
    ctx->pc = 0x306c04u;
    // NOP
label_306c08:
    // 0x306c08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c10: 0xc0c1a92  jal         func_306A48
    ctx->pc = 0x306C10u;
    SET_GPR_U32(ctx, 31, 0x306C18u);
    ctx->pc = 0x306C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C10u;
    // 0x306c14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A48u, 0x306C10u, 0x306C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C18u;
label_306c18:
    // 0x306c18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306C18u;
    {
        const bool branch_taken_0x306c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C18u;
        // 0x306c1c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c18) {
            ctx->pc = 0x306C28u;
            goto label_306c28;
        }
    }
    ctx->pc = 0x306C20u;
    // 0x306c20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x306C20u;
    {
        const bool branch_taken_0x306c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306c20) {
            ctx->pc = 0x306C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306C20u;
            // 0x306c24: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306C28u;
            goto label_306c28;
        }
    }
    ctx->pc = 0x306C28u;
label_306c28:
    // 0x306c28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x306c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x306c2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x306c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x306c30: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x306c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306c34: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x306C34u;
    {
        const bool branch_taken_0x306c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C34u;
        // 0x306c38: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c34) {
            ctx->pc = 0x306C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306c08;
        }
    }
    ctx->pc = 0x306C3Cu;
label_306c3c:
    // 0x306c3c: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x306c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x306c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x306C40u;
    {
        const bool branch_taken_0x306c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C40u;
        // 0x306c44: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c40) {
            ctx->pc = 0x306C50u;
            goto label_306c50;
        }
    }
    ctx->pc = 0x306C48u;
label_306c48:
    // 0x306c48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x306C48u;
    {
        const bool branch_taken_0x306c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C48u;
        // 0x306c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c48) {
            ctx->pc = 0x306C54u;
            goto label_306c54;
        }
    }
    ctx->pc = 0x306C50u;
label_306c50:
    // 0x306c50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306c54:
    // 0x306c54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x306c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x306c58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x306c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306c5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x306c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306c60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x306c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306c64: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x306c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x306C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C6Cu;
        // 0x306c70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306C74u;
    // 0x306c74: 0x0  nop
    ctx->pc = 0x306c74u;
    // NOP
    ctx->pc = 0x306c78u;
}
