#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: formatMenu__7cMcSave
// Address: 0x7c4b18 - 0x7c4da0
void formatMenu__7cMcSave_0x7c4b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("formatMenu__7cMcSave_0x7c4b18");
#endif

    switch (ctx->pc) {
        case 0x7c4b64u: goto label_7c4b64;
        case 0x7c4b84u: goto label_7c4b84;
        case 0x7c4b94u: goto label_7c4b94;
        case 0x7c4bb8u: goto label_7c4bb8;
        case 0x7c4bd4u: goto label_7c4bd4;
        case 0x7c4c24u: goto label_7c4c24;
        case 0x7c4c48u: goto label_7c4c48;
        case 0x7c4c6cu: goto label_7c4c6c;
        case 0x7c4cc8u: goto label_7c4cc8;
        case 0x7c4d1cu: goto label_7c4d1c;
        case 0x7c4d44u: goto label_7c4d44;
        case 0x7c4d7cu: goto label_7c4d7c;
        default: break;
    }

    ctx->pc = 0x7c4b18u;

    // 0x7c4b18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c4b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c4b1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c4b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c4b20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c4b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c4b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c4b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c4b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c4b2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c4b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c4b30: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c4b34: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c4b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c4b38: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x7C4B38u;
    {
        const bool branch_taken_0x7c4b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4B38u;
        // 0x7c4b3c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4b38) {
            ctx->pc = 0x7C4C8Cu;
            goto label_7c4c8c;
        }
    }
    ctx->pc = 0x7C4B40u;
    // 0x7c4b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c4b44: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x7c4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x7c4b48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c4b4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c4b50: 0x800008  jr          $a0
    ctx->pc = 0x7C4B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4B50u;
        // 0x7c4b54: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C4B58u: goto label_7c4b58;
            case 0x7C4B74u: goto label_7c4b74;
            case 0x7C4BA8u: goto label_7c4ba8;
            case 0x7C4C14u: goto label_7c4c14;
            case 0x7C4C38u: goto label_7c4c38;
            case 0x7C4C5Cu: goto label_7c4c5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4B50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C4B58u;
label_7c4b58:
    // 0x7c4b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4b5c: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C4B5Cu;
    SET_GPR_U32(ctx, 31, 0x7C4B64u);
    ctx->pc = 0x7C4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4B5Cu;
    // 0x7c4b60: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C4B5Cu, 0x7C4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4B64u;
label_7c4b64:
    // 0x7c4b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4b68: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c4b6c: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x7c4b70: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c4b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c4b74:
    // 0x7c4b74: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7c4b74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c4b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4b7c: 0xc1f0e34  jal         func_7C38D0
    ctx->pc = 0x7C4B7Cu;
    SET_GPR_U32(ctx, 31, 0x7C4B84u);
    ctx->pc = 0x7C4B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4B7Cu;
    // 0x7c4b80: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C4B7Cu, 0x7C4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4B84u;
label_7c4b84:
    // 0x7c4b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c4b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4b88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c4b8c: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C4B8Cu;
    SET_GPR_U32(ctx, 31, 0x7C4B94u);
    ctx->pc = 0x7C4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4B8Cu;
    // 0x7c4b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4B8Cu, 0x7C4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4B94u;
label_7c4b94:
    // 0x7c4b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C4B94u;
    {
        const bool branch_taken_0x7c4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4B94u;
        // 0x7c4b98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4b94) {
            ctx->pc = 0x7C4BA4u;
            goto label_7c4ba4;
        }
    }
    ctx->pc = 0x7C4B9Cu;
    // 0x7c4b9c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x7C4B9Cu;
    {
        const bool branch_taken_0x7c4b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4B9Cu;
        // 0x7c4ba0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4b9c) {
            ctx->pc = 0x7C4C7Cu;
            goto label_7c4c7c;
        }
    }
    ctx->pc = 0x7C4BA4u;
label_7c4ba4:
    // 0x7c4ba4: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c4ba8:
    // 0x7c4ba8: 0x26121740  addiu       $s2, $s0, 0x1740
    ctx->pc = 0x7c4ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c4bac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4bb0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4BB0u;
    SET_GPR_U32(ctx, 31, 0x7C4BB8u);
    ctx->pc = 0x7C4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4BB0u;
    // 0x7c4bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4BB0u, 0x7C4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4BB8u;
label_7c4bb8:
    // 0x7c4bb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c4bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4bc0: 0x16020033  bne         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x7C4BC0u;
    {
        const bool branch_taken_0x7c4bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BC0u;
        // 0x7c4bc4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4bc0) {
            ctx->pc = 0x7C4C90u;
            goto label_7c4c90;
        }
    }
    ctx->pc = 0x7C4BC8u;
    // 0x7c4bc8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4bcc: 0xc1f1b8e  jal         func_7C6E38
    ctx->pc = 0x7C4BCCu;
    SET_GPR_U32(ctx, 31, 0x7C4BD4u);
    ctx->pc = 0x7C4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4BCCu;
    // 0x7c4bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C4BCCu, 0x7C4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4BD4u;
label_7c4bd4:
    // 0x7c4bd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c4bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4bd8: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4BD8u;
    {
        const bool branch_taken_0x7c4bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BD8u;
        // 0x7c4bdc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4bd8) {
            ctx->pc = 0x7C4BF0u;
            goto label_7c4bf0;
        }
    }
    ctx->pc = 0x7C4BE0u;
    // 0x7c4be0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7C4BE0u;
    {
        const bool branch_taken_0x7c4be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BE0u;
        // 0x7c4be4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4be0) {
            ctx->pc = 0x7C4C0Cu;
            goto label_7c4c0c;
        }
    }
    ctx->pc = 0x7C4BE8u;
    // 0x7c4be8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x7C4BE8u;
    {
        const bool branch_taken_0x7c4be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BE8u;
        // 0x7c4bec: 0xae3000f4  sw          $s0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4be8) {
            ctx->pc = 0x7C4C8Cu;
            goto label_7c4c8c;
        }
    }
    ctx->pc = 0x7C4BF0u;
label_7c4bf0:
    // 0x7c4bf0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x7c4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x7c4bf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C4BF4u;
    {
        const bool branch_taken_0x7c4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BF4u;
        // 0x7c4bf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4bf4) {
            ctx->pc = 0x7C4C04u;
            goto label_7c4c04;
        }
    }
    ctx->pc = 0x7C4BFCu;
    // 0x7c4bfc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7C4BFCu;
    {
        const bool branch_taken_0x7c4bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4BFCu;
        // 0x7c4c00: 0xae2300f4  sw          $v1, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4bfc) {
            ctx->pc = 0x7C4C8Cu;
            goto label_7c4c8c;
        }
    }
    ctx->pc = 0x7C4C04u;
label_7c4c04:
    // 0x7c4c04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x7C4C04u;
    {
        const bool branch_taken_0x7c4c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C04u;
        // 0x7c4c08: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c04) {
            ctx->pc = 0x7C4C8Cu;
            goto label_7c4c8c;
        }
    }
    ctx->pc = 0x7C4C0Cu;
label_7c4c0c:
    // 0x7c4c0c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x7C4C0Cu;
    {
        const bool branch_taken_0x7c4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C0Cu;
        // 0x7c4c10: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c0c) {
            ctx->pc = 0x7C4D88u;
            goto label_7c4d88;
        }
    }
    ctx->pc = 0x7C4C14u;
label_7c4c14:
    // 0x7c4c14: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4c18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4c1c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4C1Cu;
    SET_GPR_U32(ctx, 31, 0x7C4C24u);
    ctx->pc = 0x7C4C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4C1Cu;
    // 0x7c4c20: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4C1Cu, 0x7C4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4C24u;
label_7c4c24:
    // 0x7c4c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4c28: 0x14430058  bne         $v0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x7C4C28u;
    {
        const bool branch_taken_0x7c4c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C28u;
        // 0x7c4c2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c28) {
            ctx->pc = 0x7C4D8Cu;
            goto label_7c4d8c;
        }
    }
    ctx->pc = 0x7C4C30u;
    // 0x7c4c30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x7C4C30u;
    {
        const bool branch_taken_0x7c4c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C30u;
        // 0x7c4c34: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c30) {
            ctx->pc = 0x7C4C7Cu;
            goto label_7c4c7c;
        }
    }
    ctx->pc = 0x7C4C38u;
label_7c4c38:
    // 0x7c4c38: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4c40: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4C40u;
    SET_GPR_U32(ctx, 31, 0x7C4C48u);
    ctx->pc = 0x7C4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4C40u;
    // 0x7c4c44: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4C40u, 0x7C4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4C48u;
label_7c4c48:
    // 0x7c4c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4c4c: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x7C4C4Cu;
    {
        const bool branch_taken_0x7c4c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C4Cu;
        // 0x7c4c50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c4c) {
            ctx->pc = 0x7C4D8Cu;
            goto label_7c4d8c;
        }
    }
    ctx->pc = 0x7C4C54u;
    // 0x7c4c54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C4C54u;
    {
        const bool branch_taken_0x7c4c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C54u;
        // 0x7c4c58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c54) {
            ctx->pc = 0x7C4C7Cu;
            goto label_7c4c7c;
        }
    }
    ctx->pc = 0x7C4C5Cu;
label_7c4c5c:
    // 0x7c4c5c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c4c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4c60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4c64: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4C64u;
    SET_GPR_U32(ctx, 31, 0x7C4C6Cu);
    ctx->pc = 0x7C4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4C64u;
    // 0x7c4c68: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4C64u, 0x7C4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4C6Cu;
label_7c4c6c:
    // 0x7c4c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7c4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4c70: 0x14430046  bne         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x7C4C70u;
    {
        const bool branch_taken_0x7c4c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C70u;
        // 0x7c4c74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c70) {
            ctx->pc = 0x7C4D8Cu;
            goto label_7c4d8c;
        }
    }
    ctx->pc = 0x7C4C78u;
    // 0x7c4c78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c4c7c:
    // 0x7c4c7c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4c80: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c4c84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x7C4C84u;
    {
        const bool branch_taken_0x7c4c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4C84u;
        // 0x7c4c88: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4c84) {
            ctx->pc = 0x7C4D88u;
            goto label_7c4d88;
        }
    }
    ctx->pc = 0x7C4C8Cu;
label_7c4c8c:
    // 0x7c4c8c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7c4c90:
    // 0x7c4c90: 0x3c040c00  lui         $a0, 0xC00
    ctx->pc = 0x7c4c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c4c94: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c4c98: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c4c98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x7c4c9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c4ca0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C4CA0u;
    {
        const bool branch_taken_0x7c4ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4CA0u;
        // 0x7c4ca4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ca0) {
            ctx->pc = 0x7C4CDCu;
            goto label_7c4cdc;
        }
    }
    ctx->pc = 0x7C4CA8u;
    // 0x7c4ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4cac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c4cb0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x7c4cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c4cb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c4cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4cb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c4cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4cbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c4cbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4cc0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C4CC0u;
    SET_GPR_U32(ctx, 31, 0x7C4CC8u);
    ctx->pc = 0x7C4CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4CC0u;
    // 0x7c4cc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C4CC0u, 0x7C4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4CC8u;
label_7c4cc8:
    // 0x7c4cc8: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c4cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c4ccc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x7c4cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c4cd0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x7c4cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c4cd4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x7C4CD4u;
    {
        const bool branch_taken_0x7c4cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4CD4u;
        // 0x7c4cd8: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4cd4) {
            ctx->pc = 0x7C4D88u;
            goto label_7c4d88;
        }
    }
    ctx->pc = 0x7C4CDCu;
label_7c4cdc:
    // 0x7c4cdc: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x7c4cdcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c4ce0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x7c4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c4ce4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c4ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c4ce8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7C4CE8u;
    {
        const bool branch_taken_0x7c4ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4CE8u;
        // 0x7c4cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ce8) {
            ctx->pc = 0x7C4D4Cu;
            goto label_7c4d4c;
        }
    }
    ctx->pc = 0x7C4CF0u;
    // 0x7c4cf0: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c4cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c4cf4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C4CF4u;
    {
        const bool branch_taken_0x7c4cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4CF4u;
        // 0x7c4cf8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4cf4) {
            ctx->pc = 0x7C4D24u;
            goto label_7c4d24;
        }
    }
    ctx->pc = 0x7C4CFCu;
    // 0x7c4cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d00: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c4d04: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x7c4d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c4d08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d0c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c4d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c4d10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d14: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C4D14u;
    SET_GPR_U32(ctx, 31, 0x7C4D1Cu);
    ctx->pc = 0x7C4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4D14u;
    // 0x7c4d18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C4D14u, 0x7C4D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4D1Cu;
label_7c4d1c:
    // 0x7c4d1c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x7C4D1Cu;
    {
        const bool branch_taken_0x7c4d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4D1Cu;
        // 0x7c4d20: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4d1c) {
            ctx->pc = 0x7C4D84u;
            goto label_7c4d84;
        }
    }
    ctx->pc = 0x7C4D24u;
label_7c4d24:
    // 0x7c4d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d28: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c4d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c4d2c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c4d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c4d30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c4d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c4d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c4d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d3c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C4D3Cu;
    SET_GPR_U32(ctx, 31, 0x7C4D44u);
    ctx->pc = 0x7C4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4D3Cu;
    // 0x7c4d40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C4D3Cu, 0x7C4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4D44u;
label_7c4d44:
    // 0x7c4d44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7C4D44u;
    {
        const bool branch_taken_0x7c4d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4D44u;
        // 0x7c4d48: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4d44) {
            ctx->pc = 0x7C4D84u;
            goto label_7c4d84;
        }
    }
    ctx->pc = 0x7C4D4Cu;
label_7c4d4c:
    // 0x7c4d4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c4d50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c4d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c4d54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C4D54u;
    {
        const bool branch_taken_0x7c4d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4D54u;
        // 0x7c4d58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4d54) {
            ctx->pc = 0x7C4D88u;
            goto label_7c4d88;
        }
    }
    ctx->pc = 0x7C4D5Cu;
    // 0x7c4d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c4d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d60: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7c4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c4d64: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x7c4d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c4d68: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7c4d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7c4d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c4d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c4d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4d74: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7C4D74u;
    SET_GPR_U32(ctx, 31, 0x7C4D7Cu);
    ctx->pc = 0x7C4D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4D74u;
    // 0x7c4d78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7C4D74u, 0x7C4D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4D7Cu;
label_7c4d7c:
    // 0x7c4d7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x7c4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7c4d80: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c4d80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c4d84:
    // 0x7c4d84: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c4d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_7c4d88:
    // 0x7c4d88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c4d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7c4d8c:
    // 0x7c4d8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c4d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c4d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c4d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c4d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c4d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x7C4D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4D98u;
        // 0x7c4d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C4DA0u;
}
} // namespace gh_mcport
