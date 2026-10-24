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

// Function: func_001F0E18
// Address: 0x1f0e18 - 0x1f1038
void func_001F0E18_0x1f0e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0E18_0x1f0e18");
#endif

    switch (ctx->pc) {
        case 0x1f0e58u: goto label_1f0e58;
        case 0x1f0e84u: goto label_1f0e84;
        case 0x1f0ebcu: goto label_1f0ebc;
        case 0x1f0ef4u: goto label_1f0ef4;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f64u: goto label_1f0f64;
        case 0x1f0f9cu: goto label_1f0f9c;
        case 0x1f0fd4u: goto label_1f0fd4;
        case 0x1f0ff8u: goto label_1f0ff8;
        case 0x1f1000u: goto label_1f1000;
        default: break;
    }

    ctx->pc = 0x1f0e18u;

    // 0x1f0e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0e1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0e20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e28: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0e2c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1f0e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f0e30: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1F0E30u;
    {
        const bool branch_taken_0x1f0e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E30u;
        // 0x1f0e34: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e30) {
            ctx->pc = 0x1F1028u;
            goto label_1f1028;
        }
    }
    ctx->pc = 0x1F0E38u;
    // 0x1f0e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0e3c: 0x2442bec0  addiu       $v0, $v0, -0x4140
    ctx->pc = 0x1f0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
    // 0x1f0e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0e48: 0x800008  jr          $a0
    ctx->pc = 0x1F0E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0E50u: goto label_1f0e50;
            case 0x1F0E6Cu: goto label_1f0e6c;
            case 0x1F0EA4u: goto label_1f0ea4;
            case 0x1F0EDCu: goto label_1f0edc;
            case 0x1F0F14u: goto label_1f0f14;
            case 0x1F0F4Cu: goto label_1f0f4c;
            case 0x1F0F84u: goto label_1f0f84;
            case 0x1F0FBCu: goto label_1f0fbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F0E50u;
label_1f0e50:
    // 0x1f0e50: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F0E50u;
    SET_GPR_U32(ctx, 31, 0x1F0E58u);
    ctx->pc = 0x1F0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E50u;
    // 0x1f0e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F0E50u, 0x1F0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E58u;
label_1f0e58:
    // 0x1f0e58: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0e5c: 0xae000ba0  sw          $zero, 0xBA0($s0)
    ctx->pc = 0x1f0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
    // 0x1f0e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0e64: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1F0E64u;
    {
        const bool branch_taken_0x1f0e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E64u;
        // 0x1f0e68: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e64) {
            ctx->pc = 0x1F1028u;
            goto label_1f1028;
        }
    }
    ctx->pc = 0x1F0E6Cu;
label_1f0e6c:
    // 0x1f0e6c: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0e70: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0e74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0E74u;
    {
        const bool branch_taken_0x1f0e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E74u;
        // 0x1f0e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e74) {
            ctx->pc = 0x1F0E90u;
            goto label_1f0e90;
        }
    }
    ctx->pc = 0x1F0E7Cu;
    // 0x1f0e7c: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E84u);
    ctx->pc = 0x1F0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E7Cu;
    // 0x1f0e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0E7Cu, 0x1F0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E84u;
label_1f0e84:
    // 0x1f0e84: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x1F0E84u;
    {
        const bool branch_taken_0x1f0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e84) {
            ctx->pc = 0x1F0E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0E84u;
            // 0x1f0e88: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0E8Cu;
    // 0x1f0e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0e90:
    // 0x1f0e90: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0e94: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0e94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0e98: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0e9c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F0E9Cu;
    {
        const bool branch_taken_0x1f0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E9Cu;
        // 0x1f0ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e9c) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0EA4u;
label_1f0ea4:
    // 0x1f0ea4: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0ea8: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0eac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0EACu;
    {
        const bool branch_taken_0x1f0eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EACu;
        // 0x1f0eb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0eac) {
            ctx->pc = 0x1F0EC8u;
            goto label_1f0ec8;
        }
    }
    ctx->pc = 0x1F0EB4u;
    // 0x1f0eb4: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0EB4u;
    SET_GPR_U32(ctx, 31, 0x1F0EBCu);
    ctx->pc = 0x1F0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EB4u;
    // 0x1f0eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0EB4u, 0x1F0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EBCu;
label_1f0ebc:
    // 0x1f0ebc: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1F0EBCu;
    {
        const bool branch_taken_0x1f0ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ebc) {
            ctx->pc = 0x1F0EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0EBCu;
            // 0x1f0ec0: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0EC4u;
    // 0x1f0ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0ec8:
    // 0x1f0ec8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0ecc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0eccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0ed0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0ed4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1F0ED4u;
    {
        const bool branch_taken_0x1f0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ED4u;
        // 0x1f0ed8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ed4) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0EDCu;
label_1f0edc:
    // 0x1f0edc: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0ee0: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0ee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0EE4u;
    {
        const bool branch_taken_0x1f0ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0EE4u;
        // 0x1f0ee8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ee4) {
            ctx->pc = 0x1F0F00u;
            goto label_1f0f00;
        }
    }
    ctx->pc = 0x1F0EECu;
    // 0x1f0eec: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0EECu;
    SET_GPR_U32(ctx, 31, 0x1F0EF4u);
    ctx->pc = 0x1F0EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EECu;
    // 0x1f0ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0EECu, 0x1F0EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EF4u;
label_1f0ef4:
    // 0x1f0ef4: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F0EF4u;
    {
        const bool branch_taken_0x1f0ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ef4) {
            ctx->pc = 0x1F0EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0EF4u;
            // 0x1f0ef8: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0EFCu;
    // 0x1f0efc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0f00:
    // 0x1f0f00: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0f04: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0f04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0f08: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0f0c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1F0F0Cu;
    {
        const bool branch_taken_0x1f0f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F0Cu;
        // 0x1f0f10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f0c) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0F14u;
label_1f0f14:
    // 0x1f0f14: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0f18: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F1Cu;
    {
        const bool branch_taken_0x1f0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F1Cu;
        // 0x1f0f20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f1c) {
            ctx->pc = 0x1F0F38u;
            goto label_1f0f38;
        }
    }
    ctx->pc = 0x1F0F24u;
    // 0x1f0f24: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0F24u;
    SET_GPR_U32(ctx, 31, 0x1F0F2Cu);
    ctx->pc = 0x1F0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F24u;
    // 0x1f0f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0F24u, 0x1F0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F2Cu;
label_1f0f2c:
    // 0x1f0f2c: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F0F2Cu;
    {
        const bool branch_taken_0x1f0f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f2c) {
            ctx->pc = 0x1F0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0F2Cu;
            // 0x1f0f30: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0F34u;
    // 0x1f0f34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0f38:
    // 0x1f0f38: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0f3c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0f40: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0f44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F0F44u;
    {
        const bool branch_taken_0x1f0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F44u;
        // 0x1f0f48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f44) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0F4Cu;
label_1f0f4c:
    // 0x1f0f4c: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0f50: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0f54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F54u;
    {
        const bool branch_taken_0x1f0f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F54u;
        // 0x1f0f58: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f54) {
            ctx->pc = 0x1F0F70u;
            goto label_1f0f70;
        }
    }
    ctx->pc = 0x1F0F5Cu;
    // 0x1f0f5c: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F64u);
    ctx->pc = 0x1F0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F5Cu;
    // 0x1f0f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0F5Cu, 0x1F0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F64u;
label_1f0f64:
    // 0x1f0f64: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F0F64u;
    {
        const bool branch_taken_0x1f0f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f64) {
            ctx->pc = 0x1F0F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0F64u;
            // 0x1f0f68: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0F6Cu;
    // 0x1f0f6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f0f70:
    // 0x1f0f70: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0f74: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0f74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0f78: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0f7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F0F7Cu;
    {
        const bool branch_taken_0x1f0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F7Cu;
        // 0x1f0f80: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f7c) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0F84u;
label_1f0f84:
    // 0x1f0f84: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0f88: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0f8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F8Cu;
    {
        const bool branch_taken_0x1f0f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F8Cu;
        // 0x1f0f90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f8c) {
            ctx->pc = 0x1F0FA8u;
            goto label_1f0fa8;
        }
    }
    ctx->pc = 0x1F0F94u;
    // 0x1f0f94: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0F94u;
    SET_GPR_U32(ctx, 31, 0x1F0F9Cu);
    ctx->pc = 0x1F0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F94u;
    // 0x1f0f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0F94u, 0x1F0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F9Cu;
label_1f0f9c:
    // 0x1f0f9c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F0F9Cu;
    {
        const bool branch_taken_0x1f0f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f9c) {
            ctx->pc = 0x1F0FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0F9Cu;
            // 0x1f0fa0: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0FA4u;
    // 0x1f0fa4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0fa8:
    // 0x1f0fa8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0fac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0fb0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F0FB4u;
    {
        const bool branch_taken_0x1f0fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FB4u;
        // 0x1f0fb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fb4) {
            ctx->pc = 0x1F0FF0u;
            goto label_1f0ff0;
        }
    }
    ctx->pc = 0x1F0FBCu;
label_1f0fbc:
    // 0x1f0fbc: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f0fc0: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1f0fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1f0fc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0FC4u;
    {
        const bool branch_taken_0x1f0fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0FC4u;
        // 0x1f0fc8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0fc4) {
            ctx->pc = 0x1F0FE0u;
            goto label_1f0fe0;
        }
    }
    ctx->pc = 0x1F0FCCu;
    // 0x1f0fcc: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F0FCCu;
    SET_GPR_U32(ctx, 31, 0x1F0FD4u);
    ctx->pc = 0x1F0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FCCu;
    // 0x1f0fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F0FCCu, 0x1F0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FD4u;
label_1f0fd4:
    // 0x1f0fd4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0FD4u;
    {
        const bool branch_taken_0x1f0fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0fd4) {
            ctx->pc = 0x1F0FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0FD4u;
            // 0x1f0fd8: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1020u;
            goto label_1f1020;
        }
    }
    ctx->pc = 0x1F0FDCu;
    // 0x1f0fdc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f0fe0:
    // 0x1f0fe0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0fe4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0fe8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0fec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f0fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f0ff0:
    // 0x1f0ff0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0FF0u;
    SET_GPR_U32(ctx, 31, 0x1F0FF8u);
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0FF0u, 0x1F0FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FF8u;
label_1f0ff8:
    // 0x1f0ff8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0FF8u;
    SET_GPR_U32(ctx, 31, 0x1F1000u);
    ctx->pc = 0x1F0FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0FF8u;
    // 0x1f0ffc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0FF8u, 0x1F1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1000u;
label_1f1000:
    // 0x1f1000: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1004: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1008: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f100c: 0xae000ba0  sw          $zero, 0xBA0($s0)
    ctx->pc = 0x1f100cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 0));
    // 0x1f1010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1014: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f1018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1018u;
    {
        const bool branch_taken_0x1f1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1018u;
        // 0x1f101c: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1018) {
            ctx->pc = 0x1F1028u;
            goto label_1f1028;
        }
    }
    ctx->pc = 0x1F1020u;
label_1f1020:
    // 0x1f1020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1024: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f1028:
    // 0x1f1028: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f1028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f102c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1030: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1030u;
        // 0x1f1034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1038u;
}
