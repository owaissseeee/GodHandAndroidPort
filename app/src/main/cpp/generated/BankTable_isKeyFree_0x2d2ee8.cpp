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

// Function: BankTable_isKeyFree
// Address: 0x2d2ee8 - 0x2d2f78
void BankTable_isKeyFree_0x2d2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BankTable_isKeyFree_0x2d2ee8");
#endif

    switch (ctx->pc) {
        case 0x2d2f30u: goto label_2d2f30;
        case 0x2d2f38u: goto label_2d2f38;
        default: break;
    }

    ctx->pc = 0x2d2ee8u;

    // 0x2d2ee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2eec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d2eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d2ef0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d2ef4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d2ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d2efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2f00: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2F00u;
    {
        const bool branch_taken_0x2d2f00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F00u;
        // 0x2d2f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f00) {
            ctx->pc = 0x2D2F5Cu;
            goto label_2d2f5c;
        }
    }
    ctx->pc = 0x2D2F08u;
    // 0x2d2f08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2f0c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2F0Cu;
    {
        const bool branch_taken_0x2d2f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f0c) {
            ctx->pc = 0x2D2F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2F0Cu;
            // 0x2d2f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F5Cu;
            goto label_2d2f5c;
        }
    }
    ctx->pc = 0x2D2F14u;
    // 0x2d2f14: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2d2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2d2f18: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2F18u;
    {
        const bool branch_taken_0x2d2f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F18u;
        // 0x2d2f1c: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f18) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2F20u;
    // 0x2d2f20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D2F20u;
    {
        const bool branch_taken_0x2d2f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F20u;
        // 0x2d2f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f20) {
            ctx->pc = 0x2D2F5Cu;
            goto label_2d2f5c;
        }
    }
    ctx->pc = 0x2D2F28u;
label_2d2f28:
    // 0x2d2f28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d2f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f2c: 0x0  nop
    ctx->pc = 0x2d2f2cu;
    // NOP
label_2d2f30:
    // 0x2d2f30: 0xc0b4c84  jal         func_2D3210
    ctx->pc = 0x2D2F30u;
    SET_GPR_U32(ctx, 31, 0x2D2F38u);
    ctx->pc = 0x2D2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2F30u;
    // 0x2d2f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3210u, 0x2D2F30u, 0x2D2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F38u;
label_2d2f38:
    // 0x2d2f38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2F38u;
    {
        const bool branch_taken_0x2d2f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F38u;
        // 0x2d2f3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f38) {
            ctx->pc = 0x2D2F4Cu;
            goto label_2d2f4c;
        }
    }
    ctx->pc = 0x2D2F40u;
    // 0x2d2f40: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2d2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2d2f44: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2F44u;
    {
        const bool branch_taken_0x2d2f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F44u;
        // 0x2d2f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f44) {
            ctx->pc = 0x2D2F5Cu;
            goto label_2d2f5c;
        }
    }
    ctx->pc = 0x2D2F4Cu;
label_2d2f4c:
    // 0x2d2f4c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2d2f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d2f50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D2F50u;
    {
        const bool branch_taken_0x2d2f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F50u;
        // 0x2d2f54: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f50) {
            ctx->pc = 0x2D2F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2f30;
        }
    }
    ctx->pc = 0x2D2F58u;
    // 0x2d2f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2f5c:
    // 0x2d2f5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d2f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d2f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2f64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d2f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F6Cu;
        // 0x2d2f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2F74u;
    // 0x2d2f74: 0x0  nop
    ctx->pc = 0x2d2f74u;
    // NOP
    ctx->pc = 0x2d2f78u;
}
