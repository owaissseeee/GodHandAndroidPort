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

// Function: func_001D5C38
// Address: 0x1d5c38 - 0x1d5d20
void func_001D5C38_0x1d5c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5C38_0x1d5c38");
#endif

    switch (ctx->pc) {
        case 0x1d5c7cu: goto label_1d5c7c;
        case 0x1d5c8cu: goto label_1d5c8c;
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cc4u: goto label_1d5cc4;
        case 0x1d5cd4u: goto label_1d5cd4;
        case 0x1d5ce8u: goto label_1d5ce8;
        case 0x1d5cf8u: goto label_1d5cf8;
        case 0x1d5d10u: goto label_1d5d10;
        default: break;
    }

    ctx->pc = 0x1d5c38u;

    // 0x1d5c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5c3c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1d5c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5c40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5c4c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5C4Cu;
    {
        const bool branch_taken_0x1d5c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C4Cu;
        // 0x1d5c50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c4c) {
            ctx->pc = 0x1D5C9Cu;
            goto label_1d5c9c;
        }
    }
    ctx->pc = 0x1D5C54u;
    // 0x1d5c54: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d5c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5c58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5C58u;
    {
        const bool branch_taken_0x1d5c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c58) {
            ctx->pc = 0x1D5C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5C58u;
            // 0x1d5c5c: 0x260405b4  addiu       $a0, $s0, 0x5B4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1460));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5C60u;
    // 0x1d5c60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5c64: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5C64u;
    {
        const bool branch_taken_0x1d5c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C64u;
        // 0x1d5c68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c64) {
            ctx->pc = 0x1D5CB0u;
            goto label_1d5cb0;
        }
    }
    ctx->pc = 0x1D5C6Cu;
    // 0x1d5c6c: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C6Cu;
        // 0x1d5c70: 0x260405b4  addiu       $a0, $s0, 0x5B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5C74u;
label_1d5c74:
    // 0x1d5c74: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5C74u;
    SET_GPR_U32(ctx, 31, 0x1D5C7Cu);
    ctx->pc = 0x1D5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C74u;
    // 0x1d5c78: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5C74u, 0x1D5C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C7Cu;
label_1d5c7c:
    // 0x1d5c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c80: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5c84: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5C84u;
    SET_GPR_U32(ctx, 31, 0x1D5C8Cu);
    ctx->pc = 0x1D5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C84u;
    // 0x1d5c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5C84u, 0x1D5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C8Cu;
label_1d5c8c:
    // 0x1d5c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c90: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5c94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5C94u;
    {
        const bool branch_taken_0x1d5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C94u;
        // 0x1d5c98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c94) {
            ctx->pc = 0x1D5CE0u;
            goto label_1d5ce0;
        }
    }
    ctx->pc = 0x1D5C9Cu;
label_1d5c9c:
    // 0x1d5c9c: 0x260405b4  addiu       $a0, $s0, 0x5B4
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1460));
    // 0x1d5ca0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5CA0u;
    SET_GPR_U32(ctx, 31, 0x1D5CA8u);
    ctx->pc = 0x1D5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA0u;
    // 0x1d5ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5CA0u, 0x1D5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA8u;
label_1d5ca8:
    // 0x1d5ca8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5CA8u;
    {
        const bool branch_taken_0x1d5ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CA8u;
        // 0x1d5cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ca8) {
            ctx->pc = 0x1D5CC8u;
            goto label_1d5cc8;
        }
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5cb4: 0x260405b4  addiu       $a0, $s0, 0x5B4
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1460));
    // 0x1d5cb8: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d5cbc: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5CBCu;
    SET_GPR_U32(ctx, 31, 0x1D5CC4u);
    ctx->pc = 0x1D5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CBCu;
    // 0x1d5cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5CBCu, 0x1D5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CC4u;
label_1d5cc4:
    // 0x1d5cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5cc8:
    // 0x1d5cc8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5ccc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5CCCu;
    SET_GPR_U32(ctx, 31, 0x1D5CD4u);
    ctx->pc = 0x1D5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CCCu;
    // 0x1d5cd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5CCCu, 0x1D5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CD4u;
label_1d5cd4:
    // 0x1d5cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cd8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d5cdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5ce0:
    // 0x1d5ce0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5CE0u;
    SET_GPR_U32(ctx, 31, 0x1D5CE8u);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5CE0u, 0x1D5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CE8u;
label_1d5ce8:
    // 0x1d5ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cec: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d5cf0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5CF0u;
    SET_GPR_U32(ctx, 31, 0x1D5CF8u);
    ctx->pc = 0x1D5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CF0u;
    // 0x1d5cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5CF0u, 0x1D5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF8u;
label_1d5cf8:
    // 0x1d5cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5CF8u;
    {
        const bool branch_taken_0x1d5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF8u;
        // 0x1d5cfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cf8) {
            ctx->pc = 0x1D5D14u;
            goto label_1d5d14;
        }
    }
    ctx->pc = 0x1D5D00u;
label_1d5d00:
    // 0x1d5d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d04: 0x2406fec0  addiu       $a2, $zero, -0x140
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d5d08: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5D08u;
    SET_GPR_U32(ctx, 31, 0x1D5D10u);
    ctx->pc = 0x1D5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D08u;
    // 0x1d5d0c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5D08u, 0x1D5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D10u;
label_1d5d10:
    // 0x1d5d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5d14:
    // 0x1d5d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D18u;
        // 0x1d5d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D20u;
}
