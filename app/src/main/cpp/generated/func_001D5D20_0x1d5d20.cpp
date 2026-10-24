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

// Function: func_001D5D20
// Address: 0x1d5d20 - 0x1d5e08
void func_001D5D20_0x1d5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5D20_0x1d5d20");
#endif

    switch (ctx->pc) {
        case 0x1d5d64u: goto label_1d5d64;
        case 0x1d5d74u: goto label_1d5d74;
        case 0x1d5d90u: goto label_1d5d90;
        case 0x1d5dacu: goto label_1d5dac;
        case 0x1d5dbcu: goto label_1d5dbc;
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5de0u: goto label_1d5de0;
        case 0x1d5df8u: goto label_1d5df8;
        default: break;
    }

    ctx->pc = 0x1d5d20u;

    // 0x1d5d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5d24: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1d5d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5d28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5d34: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5D34u;
    {
        const bool branch_taken_0x1d5d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D34u;
        // 0x1d5d38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d34) {
            ctx->pc = 0x1D5D84u;
            goto label_1d5d84;
        }
    }
    ctx->pc = 0x1D5D3Cu;
    // 0x1d5d3c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d5d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5d40: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5D40u;
    {
        const bool branch_taken_0x1d5d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d40) {
            ctx->pc = 0x1D5D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5D40u;
            // 0x1d5d44: 0x260404bc  addiu       $a0, $s0, 0x4BC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D48u;
    // 0x1d5d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5d4c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5D4Cu;
    {
        const bool branch_taken_0x1d5d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D4Cu;
        // 0x1d5d50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d4c) {
            ctx->pc = 0x1D5D98u;
            goto label_1d5d98;
        }
    }
    ctx->pc = 0x1D5D54u;
    // 0x1d5d54: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D5D54u;
    {
        const bool branch_taken_0x1d5d54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D54u;
        // 0x1d5d58: 0x260404bc  addiu       $a0, $s0, 0x4BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d54) {
            ctx->pc = 0x1D5DE8u;
            goto label_1d5de8;
        }
    }
    ctx->pc = 0x1D5D5Cu;
label_1d5d5c:
    // 0x1d5d5c: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D64u);
    ctx->pc = 0x1D5D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D5Cu;
    // 0x1d5d60: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5D5Cu, 0x1D5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D64u;
label_1d5d64:
    // 0x1d5d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d68: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d5d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d5d6c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D74u);
    ctx->pc = 0x1D5D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D6Cu;
    // 0x1d5d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5D6Cu, 0x1D5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D74u;
label_1d5d74:
    // 0x1d5d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d5d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5d7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5D7Cu;
    {
        const bool branch_taken_0x1d5d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D7Cu;
        // 0x1d5d80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d7c) {
            ctx->pc = 0x1D5DC8u;
            goto label_1d5dc8;
        }
    }
    ctx->pc = 0x1D5D84u;
label_1d5d84:
    // 0x1d5d84: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1d5d88: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5D88u;
    SET_GPR_U32(ctx, 31, 0x1D5D90u);
    ctx->pc = 0x1D5D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D88u;
    // 0x1d5d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5D88u, 0x1D5D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D90u;
label_1d5d90:
    // 0x1d5d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5D90u;
    {
        const bool branch_taken_0x1d5d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D90u;
        // 0x1d5d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d90) {
            ctx->pc = 0x1D5DB0u;
            goto label_1d5db0;
        }
    }
    ctx->pc = 0x1D5D98u;
label_1d5d98:
    // 0x1d5d98: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d5d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5d9c: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1d5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1d5da0: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d5da4: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5DA4u;
    SET_GPR_U32(ctx, 31, 0x1D5DACu);
    ctx->pc = 0x1D5DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA4u;
    // 0x1d5da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5DA4u, 0x1D5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DACu;
label_1d5dac:
    // 0x1d5dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5db0:
    // 0x1d5db0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d5db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d5db4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5DB4u;
    SET_GPR_U32(ctx, 31, 0x1D5DBCu);
    ctx->pc = 0x1D5DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DB4u;
    // 0x1d5db8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5DB4u, 0x1D5DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DBCu;
label_1d5dbc:
    // 0x1d5dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dc0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5dc8:
    // 0x1d5dc8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5DC8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD0u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5DC8u, 0x1D5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DD0u;
label_1d5dd0:
    // 0x1d5dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d5dd8: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5DD8u;
    SET_GPR_U32(ctx, 31, 0x1D5DE0u);
    ctx->pc = 0x1D5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DD8u;
    // 0x1d5ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5DD8u, 0x1D5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE0u;
label_1d5de0:
    // 0x1d5de0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5DE0u;
    {
        const bool branch_taken_0x1d5de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5de0) {
            ctx->pc = 0x1D5DFCu;
            goto label_1d5dfc;
        }
    }
    ctx->pc = 0x1D5DE8u;
label_1d5de8:
    // 0x1d5de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dec: 0x2406fec0  addiu       $a2, $zero, -0x140
    ctx->pc = 0x1d5decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d5df0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5DF0u;
    SET_GPR_U32(ctx, 31, 0x1D5DF8u);
    ctx->pc = 0x1D5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DF0u;
    // 0x1d5df4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5DF0u, 0x1D5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF8u;
label_1d5df8:
    // 0x1d5df8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5dfc:
    // 0x1d5dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E00u;
        // 0x1d5e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E08u;
}
