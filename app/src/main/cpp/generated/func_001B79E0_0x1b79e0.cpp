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

// Function: func_001B79E0
// Address: 0x1b79e0 - 0x1b7a78
void func_001B79E0_0x1b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B79E0_0x1b79e0");
#endif

    switch (ctx->pc) {
        case 0x1b7a28u: goto label_1b7a28;
        default: break;
    }

    ctx->pc = 0x1b79e0u;

    // 0x1b79e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b79e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b79e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b79e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b79ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b79ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b79f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b79f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b79f8: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x1b79f8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1b79fc: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1b79fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1b7a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7a04: 0x10510017  beq         $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7A04u;
    {
        const bool branch_taken_0x1b7a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A04u;
        // 0x1b7a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a04) {
            ctx->pc = 0x1B7A64u;
            goto label_1b7a64;
        }
    }
    ctx->pc = 0x1B7A0Cu;
    // 0x1b7a0c: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b7a0cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b7a10: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x1b7a10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x1b7a14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7a18: 0x10510012  beq         $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7A18u;
    {
        const bool branch_taken_0x1b7a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A18u;
        // 0x1b7a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a18) {
            ctx->pc = 0x1B7A64u;
            goto label_1b7a64;
        }
    }
    ctx->pc = 0x1B7A20u;
    // 0x1b7a20: 0xc06de9e  jal         func_1B7A78
    ctx->pc = 0x1B7A20u;
    SET_GPR_U32(ctx, 31, 0x1B7A28u);
    ctx->pc = 0x1B7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A20u;
    // 0x1b7a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A78u, 0x1B7A20u, 0x1B7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A28u;
label_1b7a28:
    // 0x1b7a28: 0x5451000c  bnel        $v0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7A28u;
    {
        const bool branch_taken_0x1b7a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b7a28) {
            ctx->pc = 0x1B7A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A28u;
            // 0x1b7a2c: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A5Cu;
            goto label_1b7a5c;
        }
    }
    ctx->pc = 0x1B7A30u;
    // 0x1b7a30: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1b7a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1b7a34: 0x286203da  slti        $v0, $v1, 0x3DA
    ctx->pc = 0x1b7a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)986) ? 1 : 0);
    // 0x1b7a38: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7A38u;
    {
        const bool branch_taken_0x1b7a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A38u;
        // 0x1b7a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a38) {
            ctx->pc = 0x1B7A64u;
            goto label_1b7a64;
        }
    }
    ctx->pc = 0x1B7A40u;
    // 0x1b7a40: 0x286203de  slti        $v0, $v1, 0x3DE
    ctx->pc = 0x1b7a40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)990) ? 1 : 0);
    // 0x1b7a44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A44u;
    {
        const bool branch_taken_0x1b7a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a44) {
            ctx->pc = 0x1B7A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A44u;
            // 0x1b7a48: 0x9e0205b8  lwu         $v0, 0x5B8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A5Cu;
            goto label_1b7a5c;
        }
    }
    ctx->pc = 0x1B7A4Cu;
    // 0x1b7a4c: 0x240203ea  addiu       $v0, $zero, 0x3EA
    ctx->pc = 0x1b7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
    // 0x1b7a50: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A50u;
    {
        const bool branch_taken_0x1b7a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A50u;
        // 0x1b7a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a50) {
            ctx->pc = 0x1B7A64u;
            goto label_1b7a64;
        }
    }
    ctx->pc = 0x1B7A58u;
    // 0x1b7a58: 0x9e0205b8  lwu         $v0, 0x5B8($s0)
    ctx->pc = 0x1b7a58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1b7a5c:
    // 0x1b7a5c: 0x2123b  dsra        $v0, $v0, 8
    ctx->pc = 0x1b7a5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 8);
    // 0x1b7a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b7a64:
    // 0x1b7a64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7a68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A70u;
        // 0x1b7a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A78u;
}
