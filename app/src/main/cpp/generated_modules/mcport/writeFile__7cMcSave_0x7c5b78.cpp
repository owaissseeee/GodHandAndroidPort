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
// Function: writeFile__7cMcSave
// Address: 0x7c5b78 - 0x7c5e70
void writeFile__7cMcSave_0x7c5b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("writeFile__7cMcSave_0x7c5b78");
#endif

    switch (ctx->pc) {
        case 0x7c5bc8u: goto label_7c5bc8;
        case 0x7c5be0u: goto label_7c5be0;
        case 0x7c5bf0u: goto label_7c5bf0;
        case 0x7c5c0cu: goto label_7c5c0c;
        case 0x7c5c28u: goto label_7c5c28;
        case 0x7c5c70u: goto label_7c5c70;
        case 0x7c5c80u: goto label_7c5c80;
        case 0x7c5cb0u: goto label_7c5cb0;
        case 0x7c5cccu: goto label_7c5ccc;
        case 0x7c5ce8u: goto label_7c5ce8;
        case 0x7c5cf8u: goto label_7c5cf8;
        case 0x7c5d1cu: goto label_7c5d1c;
        case 0x7c5d38u: goto label_7c5d38;
        case 0x7c5d48u: goto label_7c5d48;
        case 0x7c5d68u: goto label_7c5d68;
        case 0x7c5d78u: goto label_7c5d78;
        case 0x7c5d9cu: goto label_7c5d9c;
        case 0x7c5db8u: goto label_7c5db8;
        case 0x7c5dd0u: goto label_7c5dd0;
        case 0x7c5de0u: goto label_7c5de0;
        case 0x7c5e00u: goto label_7c5e00;
        case 0x7c5e1cu: goto label_7c5e1c;
        case 0x7c5e50u: goto label_7c5e50;
        default: break;
    }

    ctx->pc = 0x7c5b78u;

    // 0x7c5b78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7c5b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c5b7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c5b80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c5b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c5b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c5b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5b88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c5b8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c5b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c5b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c5b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c5b94: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c5b98: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x7c5b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7c5b9c: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x7C5B9Cu;
    {
        const bool branch_taken_0x7c5b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5B9Cu;
        // 0x7c5ba0: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5b9c) {
            ctx->pc = 0x7C5E44u;
            goto label_7c5e44;
        }
    }
    ctx->pc = 0x7C5BA4u;
    // 0x7c5ba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c5ba8: 0x24420ca0  addiu       $v0, $v0, 0xCA0
    ctx->pc = 0x7c5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
    // 0x7c5bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7c5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c5bb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c5bb4: 0x800008  jr          $a0
    ctx->pc = 0x7C5BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5BB4u;
        // 0x7c5bb8: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C5BBCu: goto label_7c5bbc;
            case 0x7C5BFCu: goto label_7c5bfc;
            case 0x7C5C9Cu: goto label_7c5c9c;
            case 0x7C5D08u: goto label_7c5d08;
            case 0x7C5D88u: goto label_7c5d88;
            case 0x7C5DF0u: goto label_7c5df0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5BB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7C5BBCu;
label_7c5bbc:
    // 0x7c5bbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5bc0: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C5BC0u;
    SET_GPR_U32(ctx, 31, 0x7C5BC8u);
    ctx->pc = 0x7C5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5BC0u;
    // 0x7c5bc4: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C5BC0u, 0x7C5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5BC8u;
label_7c5bc8:
    // 0x7c5bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c5bcc: 0x26041740  addiu       $a0, $s0, 0x1740
    ctx->pc = 0x7c5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c5bd0: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x7c5bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x7c5bd4: 0x24850014  addiu       $a1, $a0, 0x14
    ctx->pc = 0x7c5bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x7c5bd8: 0xc1f0d5a  jal         func_7C3568
    ctx->pc = 0x7C5BD8u;
    SET_GPR_U32(ctx, 31, 0x7C5BE0u);
    ctx->pc = 0x7C5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5BD8u;
    // 0x7c5bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3568u, 0x7C5BD8u, 0x7C5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5BE0u;
label_7c5be0:
    // 0x7c5be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5be4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c5be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c5be8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5BE8u;
    SET_GPR_U32(ctx, 31, 0x7C5BF0u);
    ctx->pc = 0x7C5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5BE8u;
    // 0x7c5bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5BE8u, 0x7C5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5BF0u;
label_7c5bf0:
    // 0x7c5bf0: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x7C5BF0u;
    {
        const bool branch_taken_0x7c5bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5BF0u;
        // 0x7c5bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5bf0) {
            ctx->pc = 0x7C5E24u;
            goto label_7c5e24;
        }
    }
    ctx->pc = 0x7C5BF8u;
    // 0x7c5bf8: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c5bfc:
    // 0x7c5bfc: 0x26131740  addiu       $s3, $s0, 0x1740
    ctx->pc = 0x7c5bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c5c00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c04: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5C04u;
    SET_GPR_U32(ctx, 31, 0x7C5C0Cu);
    ctx->pc = 0x7C5C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5C04u;
    // 0x7c5c08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5C04u, 0x7C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5C0Cu;
label_7c5c0c:
    // 0x7c5c0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c5c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5c14: 0x1642008c  bne         $s2, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x7C5C14u;
    {
        const bool branch_taken_0x7c5c14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C14u;
        // 0x7c5c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c14) {
            ctx->pc = 0x7C5E48u;
            goto label_7c5e48;
        }
    }
    ctx->pc = 0x7C5C1Cu;
    // 0x7c5c1c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5c20: 0xc1f1ba6  jal         func_7C6E98
    ctx->pc = 0x7C5C20u;
    SET_GPR_U32(ctx, 31, 0x7C5C28u);
    ctx->pc = 0x7C5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5C20u;
    // 0x7c5c24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E98u, 0x7C5C20u, 0x7C5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5C28u;
label_7c5c28:
    // 0x7c5c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x7c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c5c30: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C5C30u;
    {
        const bool branch_taken_0x7c5c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C30u;
        // 0x7c5c34: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c30) {
            ctx->pc = 0x7C5C60u;
            goto label_7c5c60;
        }
    }
    ctx->pc = 0x7C5C38u;
    // 0x7c5c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C5C38u;
    {
        const bool branch_taken_0x7c5c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C38u;
        // 0x7c5c3c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c38) {
            ctx->pc = 0x7C5C50u;
            goto label_7c5c50;
        }
    }
    ctx->pc = 0x7C5C40u;
    // 0x7c5c40: 0x12120024  beq         $s0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x7C5C40u;
    {
        const bool branch_taken_0x7c5c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C40u;
        // 0x7c5c44: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c40) {
            ctx->pc = 0x7C5CD4u;
            goto label_7c5cd4;
        }
    }
    ctx->pc = 0x7C5C48u;
    // 0x7c5c48: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x7C5C48u;
    {
        const bool branch_taken_0x7c5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C48u;
        // 0x7c5c4c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c48) {
            ctx->pc = 0x7C5E2Cu;
            goto label_7c5e2c;
        }
    }
    ctx->pc = 0x7C5C50u;
label_7c5c50:
    // 0x7c5c50: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C5C50u;
    {
        const bool branch_taken_0x7c5c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C50u;
        // 0x7c5c54: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c50) {
            ctx->pc = 0x7C5C90u;
            goto label_7c5c90;
        }
    }
    ctx->pc = 0x7C5C58u;
    // 0x7c5c58: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x7C5C58u;
    {
        const bool branch_taken_0x7c5c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C58u;
        // 0x7c5c5c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c58) {
            ctx->pc = 0x7C5E2Cu;
            goto label_7c5e2c;
        }
    }
    ctx->pc = 0x7C5C60u;
label_7c5c60:
    // 0x7c5c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7c5c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c5c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c68: 0xc1f0d82  jal         func_7C3608
    ctx->pc = 0x7C5C68u;
    SET_GPR_U32(ctx, 31, 0x7C5C70u);
    ctx->pc = 0x7C5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5C68u;
    // 0x7c5c6c: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3608u, 0x7C5C68u, 0x7C5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5C70u;
label_7c5c70:
    // 0x7c5c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5c78: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5C78u;
    SET_GPR_U32(ctx, 31, 0x7C5C80u);
    ctx->pc = 0x7C5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5C78u;
    // 0x7c5c7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5C78u, 0x7C5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5C80u;
label_7c5c80:
    // 0x7c5c80: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x7C5C80u;
    {
        const bool branch_taken_0x7c5c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C80u;
        // 0x7c5c84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c80) {
            ctx->pc = 0x7C5E28u;
            goto label_7c5e28;
        }
    }
    ctx->pc = 0x7C5C88u;
    // 0x7c5c88: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x7C5C88u;
    {
        const bool branch_taken_0x7c5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C88u;
        // 0x7c5c8c: 0xae3000f4  sw          $s0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c88) {
            ctx->pc = 0x7C5E44u;
            goto label_7c5e44;
        }
    }
    ctx->pc = 0x7C5C90u;
label_7c5c90:
    // 0x7c5c90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7c5c94: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x7C5C94u;
    {
        const bool branch_taken_0x7c5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5C94u;
        // 0x7c5c98: 0xae22007c  sw          $v0, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5c94) {
            ctx->pc = 0x7C5E24u;
            goto label_7c5e24;
        }
    }
    ctx->pc = 0x7C5C9Cu;
label_7c5c9c:
    // 0x7c5c9c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ca4: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c5ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c5ca8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5CA8u;
    SET_GPR_U32(ctx, 31, 0x7C5CB0u);
    ctx->pc = 0x7C5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5CA8u;
    // 0x7c5cac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5CA8u, 0x7C5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5CB0u;
label_7c5cb0:
    // 0x7c5cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5cb8: 0x16020063  bne         $s0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x7C5CB8u;
    {
        const bool branch_taken_0x7c5cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5CB8u;
        // 0x7c5cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5cb8) {
            ctx->pc = 0x7C5E48u;
            goto label_7c5e48;
        }
    }
    ctx->pc = 0x7C5CC0u;
    // 0x7c5cc0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5cc4: 0xc1f1c36  jal         func_7C70D8
    ctx->pc = 0x7C5CC4u;
    SET_GPR_U32(ctx, 31, 0x7C5CCCu);
    ctx->pc = 0x7C5CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5CC4u;
    // 0x7c5cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C70D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C70D8u, 0x7C5CC4u, 0x7C5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5CCCu;
label_7c5ccc:
    // 0x7c5ccc: 0x14500056  bne         $v0, $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x7C5CCCu;
    {
        const bool branch_taken_0x7c5ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5CCCu;
        // 0x7c5cd0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5ccc) {
            ctx->pc = 0x7C5E28u;
            goto label_7c5e28;
        }
    }
    ctx->pc = 0x7C5CD4u;
label_7c5cd4:
    // 0x7c5cd4: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5cd8: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c5cdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c5cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5ce0: 0xc1f0cfc  jal         func_7C33F0
    ctx->pc = 0x7C5CE0u;
    SET_GPR_U32(ctx, 31, 0x7C5CE8u);
    ctx->pc = 0x7C5CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5CE0u;
    // 0x7c5ce4: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33F0u, 0x7C5CE0u, 0x7C5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5CE8u;
label_7c5ce8:
    // 0x7c5ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5cf0: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5CF0u;
    SET_GPR_U32(ctx, 31, 0x7C5CF8u);
    ctx->pc = 0x7C5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5CF0u;
    // 0x7c5cf4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5CF0u, 0x7C5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5CF8u;
label_7c5cf8:
    // 0x7c5cf8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x7C5CF8u;
    {
        const bool branch_taken_0x7c5cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5CF8u;
        // 0x7c5cfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5cf8) {
            ctx->pc = 0x7C5E24u;
            goto label_7c5e24;
        }
    }
    ctx->pc = 0x7C5D00u;
    // 0x7c5d00: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x7C5D00u;
    {
        const bool branch_taken_0x7c5d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5D00u;
        // 0x7c5d04: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5d00) {
            ctx->pc = 0x7C5E44u;
            goto label_7c5e44;
        }
    }
    ctx->pc = 0x7C5D08u;
label_7c5d08:
    // 0x7c5d08: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5d0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d10: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c5d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c5d14: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5D14u;
    SET_GPR_U32(ctx, 31, 0x7C5D1Cu);
    ctx->pc = 0x7C5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D14u;
    // 0x7c5d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5D14u, 0x7C5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D1Cu;
label_7c5d1c:
    // 0x7c5d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5d24: 0x16020048  bne         $s0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x7C5D24u;
    {
        const bool branch_taken_0x7c5d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5D24u;
        // 0x7c5d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5d24) {
            ctx->pc = 0x7C5E48u;
            goto label_7c5e48;
        }
    }
    ctx->pc = 0x7C5D2Cu;
    // 0x7c5d2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5d30: 0xc1f1bd8  jal         func_7C6F60
    ctx->pc = 0x7C5D30u;
    SET_GPR_U32(ctx, 31, 0x7C5D38u);
    ctx->pc = 0x7C5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D30u;
    // 0x7c5d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6F60u, 0x7C5D30u, 0x7C5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D38u;
label_7c5d38:
    // 0x7c5d38: 0x1450003b  bne         $v0, $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x7C5D38u;
    {
        const bool branch_taken_0x7c5d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5D38u;
        // 0x7c5d3c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5d38) {
            ctx->pc = 0x7C5E28u;
            goto label_7c5e28;
        }
    }
    ctx->pc = 0x7C5D40u;
    // 0x7c5d40: 0xc1f19f6  jal         func_7C67D8
    ctx->pc = 0x7C5D40u;
    SET_GPR_U32(ctx, 31, 0x7C5D48u);
    ctx->pc = 0x7C5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D40u;
    // 0x7c5d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C67D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C67D8u, 0x7C5D40u, 0x7C5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D48u;
label_7c5d48:
    // 0x7c5d48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c5d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d50: 0x8e2600f8  lw          $a2, 0xF8($s1)
    ctx->pc = 0x7c5d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c5d54: 0x3407b400  ori         $a3, $zero, 0xB400
    ctx->pc = 0x7c5d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c5d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c5d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d60: 0xc1f0dc6  jal         func_7C3718
    ctx->pc = 0x7C5D60u;
    SET_GPR_U32(ctx, 31, 0x7C5D68u);
    ctx->pc = 0x7C5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D60u;
    // 0x7c5d64: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3718u, 0x7C5D60u, 0x7C5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D68u;
label_7c5d68:
    // 0x7c5d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d70: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5D70u;
    SET_GPR_U32(ctx, 31, 0x7C5D78u);
    ctx->pc = 0x7C5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D70u;
    // 0x7c5d74: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5D70u, 0x7C5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D78u;
label_7c5d78:
    // 0x7c5d78: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x7C5D78u;
    {
        const bool branch_taken_0x7c5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5D78u;
        // 0x7c5d7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5d78) {
            ctx->pc = 0x7C5E24u;
            goto label_7c5e24;
        }
    }
    ctx->pc = 0x7C5D80u;
    // 0x7c5d80: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x7C5D80u;
    {
        const bool branch_taken_0x7c5d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5D80u;
        // 0x7c5d84: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5d80) {
            ctx->pc = 0x7C5E44u;
            goto label_7c5e44;
        }
    }
    ctx->pc = 0x7C5D88u;
label_7c5d88:
    // 0x7c5d88: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c5d8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5d90: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c5d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c5d94: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5D94u;
    SET_GPR_U32(ctx, 31, 0x7C5D9Cu);
    ctx->pc = 0x7C5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5D94u;
    // 0x7c5d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5D94u, 0x7C5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5D9Cu;
label_7c5d9c:
    // 0x7c5d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5da4: 0x16020028  bne         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x7C5DA4u;
    {
        const bool branch_taken_0x7c5da4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5DA4u;
        // 0x7c5da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5da4) {
            ctx->pc = 0x7C5E48u;
            goto label_7c5e48;
        }
    }
    ctx->pc = 0x7C5DACu;
    // 0x7c5dac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5db0: 0xc1f1c4a  jal         func_7C7128
    ctx->pc = 0x7C5DB0u;
    SET_GPR_U32(ctx, 31, 0x7C5DB8u);
    ctx->pc = 0x7C5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5DB0u;
    // 0x7c5db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7128u, 0x7C5DB0u, 0x7C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5DB8u;
label_7c5db8:
    // 0x7c5db8: 0x1450001b  bne         $v0, $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x7C5DB8u;
    {
        const bool branch_taken_0x7c5db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7C5DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5DB8u;
        // 0x7c5dbc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5db8) {
            ctx->pc = 0x7C5E28u;
            goto label_7c5e28;
        }
    }
    ctx->pc = 0x7C5DC0u;
    // 0x7c5dc0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c5dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c5dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5dc8: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C5DC8u;
    SET_GPR_U32(ctx, 31, 0x7C5DD0u);
    ctx->pc = 0x7C5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5DC8u;
    // 0x7c5dcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C5DC8u, 0x7C5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5DD0u;
label_7c5dd0:
    // 0x7c5dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c5dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5dd8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C5DD8u;
    SET_GPR_U32(ctx, 31, 0x7C5DE0u);
    ctx->pc = 0x7C5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5DD8u;
    // 0x7c5ddc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C5DD8u, 0x7C5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5DE0u;
label_7c5de0:
    // 0x7c5de0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7C5DE0u;
    {
        const bool branch_taken_0x7c5de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5DE0u;
        // 0x7c5de4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5de0) {
            ctx->pc = 0x7C5E24u;
            goto label_7c5e24;
        }
    }
    ctx->pc = 0x7C5DE8u;
    // 0x7c5de8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7C5DE8u;
    {
        const bool branch_taken_0x7c5de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5DE8u;
        // 0x7c5dec: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5de8) {
            ctx->pc = 0x7C5E44u;
            goto label_7c5e44;
        }
    }
    ctx->pc = 0x7C5DF0u;
label_7c5df0:
    // 0x7c5df0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5df4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5df8: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C5DF8u;
    SET_GPR_U32(ctx, 31, 0x7C5E00u);
    ctx->pc = 0x7C5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5DF8u;
    // 0x7c5dfc: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5DF8u, 0x7C5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5E00u;
label_7c5e00:
    // 0x7c5e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c5e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5e08: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C5E08u;
    {
        const bool branch_taken_0x7c5e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5E08u;
        // 0x7c5e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5e08) {
            ctx->pc = 0x7C5E48u;
            goto label_7c5e48;
        }
    }
    ctx->pc = 0x7C5E10u;
    // 0x7c5e10: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c5e14: 0xc1f1c02  jal         func_7C7008
    ctx->pc = 0x7C5E14u;
    SET_GPR_U32(ctx, 31, 0x7C5E1Cu);
    ctx->pc = 0x7C5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5E14u;
    // 0x7c5e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7008u, 0x7C5E14u, 0x7C5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5E1Cu;
label_7c5e1c:
    // 0x7c5e1c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C5E1Cu;
    {
        const bool branch_taken_0x7c5e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5E1Cu;
        // 0x7c5e20: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5e1c) {
            ctx->pc = 0x7C5E38u;
            goto label_7c5e38;
        }
    }
    ctx->pc = 0x7C5E24u;
label_7c5e24:
    // 0x7c5e24: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c5e28:
    // 0x7c5e28: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c5e2c:
    // 0x7c5e2c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C5E30u;
    {
        const bool branch_taken_0x7c5e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5E30u;
        // 0x7c5e34: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5e30) {
            ctx->pc = 0x7C5E50u;
            goto label_7c5e50;
        }
    }
    ctx->pc = 0x7C5E38u;
label_7c5e38:
    // 0x7c5e38: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c5e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c5e3c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5e40: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c5e44:
    // 0x7c5e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c5e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c5e48:
    // 0x7c5e48: 0xc1f1ec8  jal         func_7C7B20
    ctx->pc = 0x7C5E48u;
    SET_GPR_U32(ctx, 31, 0x7C5E50u);
    ctx->pc = 0x7C5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5E48u;
    // 0x7c5e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7B20u, 0x7C5E48u, 0x7C5E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C5E50u;
label_7c5e50:
    // 0x7c5e50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c5e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c5e54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c5e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c5e58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c5e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c5e5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c5e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c5e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c5e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c5e64: 0x3e00008  jr          $ra
    ctx->pc = 0x7C5E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5E64u;
        // 0x7c5e68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C5E6Cu;
    // 0x7c5e6c: 0x0  nop
    ctx->pc = 0x7c5e6cu;
    // NOP
    ctx->pc = 0x7c5e70u;
}
} // namespace gh_mcport
