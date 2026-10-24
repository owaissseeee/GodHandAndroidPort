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

// Function: func_00306AF0
// Address: 0x306af0 - 0x306bb0
void func_00306AF0_0x306af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306AF0_0x306af0");
#endif

    switch (ctx->pc) {
        case 0x306b50u: goto label_306b50;
        case 0x306b60u: goto label_306b60;
        default: break;
    }

    ctx->pc = 0x306af0u;

    // 0x306af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x306af4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x306af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x306af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x306afc: 0x34424d45  ori         $v0, $v0, 0x4D45
    ctx->pc = 0x306afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19781);
    // 0x306b00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x306b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x306b04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x306b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x306b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x306b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306b10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x306b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x306b14: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x306B14u;
    {
        const bool branch_taken_0x306b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x306B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B14u;
        // 0x306b18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b14) {
            ctx->pc = 0x306B8Cu;
            goto label_306b8c;
        }
    }
    ctx->pc = 0x306B1Cu;
    // 0x306b1c: 0x28a204e2  slti        $v0, $a1, 0x4E2
    ctx->pc = 0x306b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1250) ? 1 : 0);
    // 0x306b20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x306B20u;
    {
        const bool branch_taken_0x306b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B20u;
        // 0x306b24: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b20) {
            ctx->pc = 0x306B8Cu;
            goto label_306b8c;
        }
    }
    ctx->pc = 0x306B28u;
    // 0x306b28: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x306b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x306b2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x306b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306b30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306b34: 0x54800018  bnel        $a0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x306B34u;
    {
        const bool branch_taken_0x306b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x306b34) {
            ctx->pc = 0x306B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306B34u;
            // 0x306b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306B98u;
            goto label_306b98;
        }
    }
    ctx->pc = 0x306B3Cu;
    // 0x306b3c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x306b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x306b40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x306b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x306b44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x306B44u;
    {
        const bool branch_taken_0x306b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B44u;
        // 0x306b48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b44) {
            ctx->pc = 0x306B94u;
            goto label_306b94;
        }
    }
    ctx->pc = 0x306B4Cu;
    // 0x306b4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x306b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_306b50:
    // 0x306b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x306b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b58: 0xc0c1a92  jal         func_306A48
    ctx->pc = 0x306B58u;
    SET_GPR_U32(ctx, 31, 0x306B60u);
    ctx->pc = 0x306B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B58u;
    // 0x306b5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A48u, 0x306B58u, 0x306B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B60u;
label_306b60:
    // 0x306b60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306B60u;
    {
        const bool branch_taken_0x306b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B60u;
        // 0x306b64: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b60) {
            ctx->pc = 0x306B70u;
            goto label_306b70;
        }
    }
    ctx->pc = 0x306B68u;
    // 0x306b68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x306B68u;
    {
        const bool branch_taken_0x306b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306b68) {
            ctx->pc = 0x306B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306B68u;
            // 0x306b6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306B70u;
            goto label_306b70;
        }
    }
    ctx->pc = 0x306B70u;
label_306b70:
    // 0x306b70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x306b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x306b74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x306b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x306b78: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x306b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306b7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x306B7Cu;
    {
        const bool branch_taken_0x306b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B7Cu;
        // 0x306b80: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b7c) {
            ctx->pc = 0x306B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306b50;
        }
    }
    ctx->pc = 0x306B84u;
    // 0x306b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306B84u;
    {
        const bool branch_taken_0x306b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B84u;
        // 0x306b88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b84) {
            ctx->pc = 0x306B98u;
            goto label_306b98;
        }
    }
    ctx->pc = 0x306B8Cu;
label_306b8c:
    // 0x306b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x306B8Cu;
    {
        const bool branch_taken_0x306b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B8Cu;
        // 0x306b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b8c) {
            ctx->pc = 0x306B98u;
            goto label_306b98;
        }
    }
    ctx->pc = 0x306B94u;
label_306b94:
    // 0x306b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306b98:
    // 0x306b98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x306b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306b9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x306b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x306ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x306BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BA8u;
        // 0x306bac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306BB0u;
}
