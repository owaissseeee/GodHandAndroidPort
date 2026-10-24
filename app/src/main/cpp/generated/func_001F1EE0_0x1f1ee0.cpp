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

// Function: func_001F1EE0
// Address: 0x1f1ee0 - 0x1f20f0
void func_001F1EE0_0x1f1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F1EE0_0x1f1ee0");
#endif

    switch (ctx->pc) {
        case 0x1f1f20u: goto label_1f1f20;
        case 0x1f1f4cu: goto label_1f1f4c;
        case 0x1f1f80u: goto label_1f1f80;
        case 0x1f1fb4u: goto label_1f1fb4;
        case 0x1f1fe8u: goto label_1f1fe8;
        case 0x1f201cu: goto label_1f201c;
        case 0x1f2050u: goto label_1f2050;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20b0u: goto label_1f20b0;
        default: break;
    }

    ctx->pc = 0x1f1ee0u;

    // 0x1f1ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1ee4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f1ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f1ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ef0: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1ef4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1f1ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f1ef8: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1F1EF8u;
    {
        const bool branch_taken_0x1f1ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EF8u;
        // 0x1f1efc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ef8) {
            ctx->pc = 0x1F20DCu;
            goto label_1f20dc;
        }
    }
    ctx->pc = 0x1F1F00u;
    // 0x1f1f00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f1f04: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1f1f08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f1f0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f1f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1f10: 0x800008  jr          $a0
    ctx->pc = 0x1F1F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1F18u: goto label_1f1f18;
            case 0x1F1F38u: goto label_1f1f38;
            case 0x1F1F6Cu: goto label_1f1f6c;
            case 0x1F1FA0u: goto label_1f1fa0;
            case 0x1F1FD4u: goto label_1f1fd4;
            case 0x1F2008u: goto label_1f2008;
            case 0x1F203Cu: goto label_1f203c;
            case 0x1F2070u: goto label_1f2070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1F10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F1F18u;
label_1f1f18:
    // 0x1f1f18: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F1F18u;
    SET_GPR_U32(ctx, 31, 0x1F1F20u);
    ctx->pc = 0x1F1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F18u;
    // 0x1f1f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F1F18u, 0x1F1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F20u;
label_1f1f20:
    // 0x1f1f20: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1f24: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1f1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f1f28: 0xae030ba0  sw          $v1, 0xBA0($s0)
    ctx->pc = 0x1f1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
    // 0x1f1f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1f30: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1F1F30u;
    {
        const bool branch_taken_0x1f1f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F30u;
        // 0x1f1f34: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f30) {
            ctx->pc = 0x1F20DCu;
            goto label_1f20dc;
        }
    }
    ctx->pc = 0x1F1F38u;
label_1f1f38:
    // 0x1f1f38: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1f3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1F3Cu;
    {
        const bool branch_taken_0x1f1f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F3Cu;
        // 0x1f1f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f3c) {
            ctx->pc = 0x1F1F58u;
            goto label_1f1f58;
        }
    }
    ctx->pc = 0x1F1F44u;
    // 0x1f1f44: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1F44u;
    SET_GPR_U32(ctx, 31, 0x1F1F4Cu);
    ctx->pc = 0x1F1F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F44u;
    // 0x1f1f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1F44u, 0x1F1F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F4Cu;
label_1f1f4c:
    // 0x1f1f4c: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1F1F4Cu;
    {
        const bool branch_taken_0x1f1f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f4c) {
            ctx->pc = 0x1F1F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1F4Cu;
            // 0x1f1f50: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F1F54u;
    // 0x1f1f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1f58:
    // 0x1f1f58: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1f5c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1f60: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1f64: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1F1F64u;
    {
        const bool branch_taken_0x1f1f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F64u;
        // 0x1f1f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f64) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F1F6Cu;
label_1f1f6c:
    // 0x1f1f6c: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1f70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1F70u;
    {
        const bool branch_taken_0x1f1f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F70u;
        // 0x1f1f74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f70) {
            ctx->pc = 0x1F1F8Cu;
            goto label_1f1f8c;
        }
    }
    ctx->pc = 0x1F1F78u;
    // 0x1f1f78: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1F78u;
    SET_GPR_U32(ctx, 31, 0x1F1F80u);
    ctx->pc = 0x1F1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F78u;
    // 0x1f1f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1F78u, 0x1F1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F80u;
label_1f1f80:
    // 0x1f1f80: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1F1F80u;
    {
        const bool branch_taken_0x1f1f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f80) {
            ctx->pc = 0x1F1F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1F80u;
            // 0x1f1f84: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F1F88u;
    // 0x1f1f88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1f8c:
    // 0x1f1f8c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1f90: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1f90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1f94: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1f98: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1F1F98u;
    {
        const bool branch_taken_0x1f1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F98u;
        // 0x1f1f9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f98) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F1FA0u;
label_1f1fa0:
    // 0x1f1fa0: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1FA4u;
    {
        const bool branch_taken_0x1f1fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA4u;
        // 0x1f1fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fa4) {
            ctx->pc = 0x1F1FC0u;
            goto label_1f1fc0;
        }
    }
    ctx->pc = 0x1F1FACu;
    // 0x1f1fac: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1FACu;
    SET_GPR_U32(ctx, 31, 0x1F1FB4u);
    ctx->pc = 0x1F1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FACu;
    // 0x1f1fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1FACu, 0x1F1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FB4u;
label_1f1fb4:
    // 0x1f1fb4: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F1FB4u;
    {
        const bool branch_taken_0x1f1fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fb4) {
            ctx->pc = 0x1F1FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1FB4u;
            // 0x1f1fb8: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F1FBCu;
    // 0x1f1fbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f1fc0:
    // 0x1f1fc0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1fc4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1fc8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1fcc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1F1FCCu;
    {
        const bool branch_taken_0x1f1fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FCCu;
        // 0x1f1fd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fcc) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F1FD4u;
label_1f1fd4:
    // 0x1f1fd4: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1fd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1FD8u;
    {
        const bool branch_taken_0x1f1fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FD8u;
        // 0x1f1fdc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fd8) {
            ctx->pc = 0x1F1FF4u;
            goto label_1f1ff4;
        }
    }
    ctx->pc = 0x1F1FE0u;
    // 0x1f1fe0: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F1FE0u;
    SET_GPR_U32(ctx, 31, 0x1F1FE8u);
    ctx->pc = 0x1F1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FE0u;
    // 0x1f1fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F1FE0u, 0x1F1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE8u;
label_1f1fe8:
    // 0x1f1fe8: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F1FE8u;
    {
        const bool branch_taken_0x1f1fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fe8) {
            ctx->pc = 0x1F1FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1FE8u;
            // 0x1f1fec: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F1FF0u;
    // 0x1f1ff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f1ff4:
    // 0x1f1ff4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f1ff8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f1ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1ffc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f2000: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F2000u;
    {
        const bool branch_taken_0x1f2000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2000u;
        // 0x1f2004: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2000) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F2008u;
label_1f2008:
    // 0x1f2008: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f2008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f200c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F200Cu;
    {
        const bool branch_taken_0x1f200c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F200Cu;
        // 0x1f2010: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f200c) {
            ctx->pc = 0x1F2028u;
            goto label_1f2028;
        }
    }
    ctx->pc = 0x1F2014u;
    // 0x1f2014: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F2014u;
    SET_GPR_U32(ctx, 31, 0x1F201Cu);
    ctx->pc = 0x1F2018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2014u;
    // 0x1f2018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F2014u, 0x1F201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F201Cu;
label_1f201c:
    // 0x1f201c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F201Cu;
    {
        const bool branch_taken_0x1f201c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f201c) {
            ctx->pc = 0x1F2020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F201Cu;
            // 0x1f2020: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F2024u;
    // 0x1f2024: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f2024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f2028:
    // 0x1f2028: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f202c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f202cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2030: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f2034: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F2034u;
    {
        const bool branch_taken_0x1f2034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2034u;
        // 0x1f2038: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2034) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F203Cu;
label_1f203c:
    // 0x1f203c: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f2040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2040u;
    {
        const bool branch_taken_0x1f2040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2040u;
        // 0x1f2044: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2040) {
            ctx->pc = 0x1F205Cu;
            goto label_1f205c;
        }
    }
    ctx->pc = 0x1F2048u;
    // 0x1f2048: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F2048u;
    SET_GPR_U32(ctx, 31, 0x1F2050u);
    ctx->pc = 0x1F204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2048u;
    // 0x1f204c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F2048u, 0x1F2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2050u;
label_1f2050:
    // 0x1f2050: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2050u;
    {
        const bool branch_taken_0x1f2050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2050) {
            ctx->pc = 0x1F2054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2050u;
            // 0x1f2054: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F2058u;
    // 0x1f2058: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f205c:
    // 0x1f205c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f205cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f2060: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f2060u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2064: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f2068: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F2068u;
    {
        const bool branch_taken_0x1f2068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2068u;
        // 0x1f206c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2068) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F2070u;
label_1f2070:
    // 0x1f2070: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f2074: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2074u;
    {
        const bool branch_taken_0x1f2074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2074u;
        // 0x1f2078: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2074) {
            ctx->pc = 0x1F2090u;
            goto label_1f2090;
        }
    }
    ctx->pc = 0x1F207Cu;
    // 0x1f207c: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F207Cu;
    SET_GPR_U32(ctx, 31, 0x1F2084u);
    ctx->pc = 0x1F2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F207Cu;
    // 0x1f2080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F207Cu, 0x1F2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2084u;
label_1f2084:
    // 0x1f2084: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2084u;
    {
        const bool branch_taken_0x1f2084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2084) {
            ctx->pc = 0x1F2088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2084u;
            // 0x1f2088: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20D4u;
            goto label_1f20d4;
        }
    }
    ctx->pc = 0x1F208Cu;
    // 0x1f208c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f2090:
    // 0x1f2090: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f2094: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f2094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2098: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f2098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f209c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f20a0:
    // 0x1f20a0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F20A0u;
    SET_GPR_U32(ctx, 31, 0x1F20A8u);
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F20A0u, 0x1F20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20A8u;
label_1f20a8:
    // 0x1f20a8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F20A8u;
    SET_GPR_U32(ctx, 31, 0x1F20B0u);
    ctx->pc = 0x1F20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20A8u;
    // 0x1f20ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F20A8u, 0x1F20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20B0u;
label_1f20b0:
    // 0x1f20b0: 0x8e030b8c  lw          $v1, 0xB8C($s0)
    ctx->pc = 0x1f20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f20b4: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x1f20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1f20b8: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f20bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f20c0: 0xae040ba0  sw          $a0, 0xBA0($s0)
    ctx->pc = 0x1f20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 4));
    // 0x1f20c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f20c8: 0xae030b8c  sw          $v1, 0xB8C($s0)
    ctx->pc = 0x1f20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 3));
    // 0x1f20cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F20CCu;
    {
        const bool branch_taken_0x1f20cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20CCu;
        // 0x1f20d0: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20cc) {
            ctx->pc = 0x1F20DCu;
            goto label_1f20dc;
        }
    }
    ctx->pc = 0x1F20D4u;
label_1f20d4:
    // 0x1f20d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f20d8: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f20dc:
    // 0x1f20dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f20dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f20e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f20e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f20e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F20E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F20E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20E4u;
        // 0x1f20e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F20E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F20ECu;
    // 0x1f20ec: 0x0  nop
    ctx->pc = 0x1f20ecu;
    // NOP
    ctx->pc = 0x1f20f0u;
}
