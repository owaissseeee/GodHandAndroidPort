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

// Function: UpdatePhaseWithScroll
// Address: 0x1aedb0 - 0x1aeea8
void UpdatePhaseWithScroll_0x1aedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithScroll_0x1aedb0");
#endif

    switch (ctx->pc) {
        case 0x1aedb0u: goto label_1aedb0;
        case 0x1aedb4u: goto label_1aedb4;
        case 0x1aedb8u: goto label_1aedb8;
        case 0x1aedbcu: goto label_1aedbc;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aedc4u: goto label_1aedc4;
        case 0x1aedc8u: goto label_1aedc8;
        case 0x1aedccu: goto label_1aedcc;
        case 0x1aedd0u: goto label_1aedd0;
        case 0x1aedd4u: goto label_1aedd4;
        case 0x1aedd8u: goto label_1aedd8;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aede0u: goto label_1aede0;
        case 0x1aede4u: goto label_1aede4;
        case 0x1aede8u: goto label_1aede8;
        case 0x1aedecu: goto label_1aedec;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf4u: goto label_1aedf4;
        case 0x1aedf8u: goto label_1aedf8;
        case 0x1aedfcu: goto label_1aedfc;
        case 0x1aee00u: goto label_1aee00;
        case 0x1aee04u: goto label_1aee04;
        case 0x1aee08u: goto label_1aee08;
        case 0x1aee0cu: goto label_1aee0c;
        case 0x1aee10u: goto label_1aee10;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee18u: goto label_1aee18;
        case 0x1aee1cu: goto label_1aee1c;
        case 0x1aee20u: goto label_1aee20;
        case 0x1aee24u: goto label_1aee24;
        case 0x1aee28u: goto label_1aee28;
        case 0x1aee2cu: goto label_1aee2c;
        case 0x1aee30u: goto label_1aee30;
        case 0x1aee34u: goto label_1aee34;
        case 0x1aee38u: goto label_1aee38;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee40u: goto label_1aee40;
        case 0x1aee44u: goto label_1aee44;
        case 0x1aee48u: goto label_1aee48;
        case 0x1aee4cu: goto label_1aee4c;
        case 0x1aee50u: goto label_1aee50;
        case 0x1aee54u: goto label_1aee54;
        case 0x1aee58u: goto label_1aee58;
        case 0x1aee5cu: goto label_1aee5c;
        case 0x1aee60u: goto label_1aee60;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee68u: goto label_1aee68;
        case 0x1aee6cu: goto label_1aee6c;
        case 0x1aee70u: goto label_1aee70;
        case 0x1aee74u: goto label_1aee74;
        case 0x1aee78u: goto label_1aee78;
        case 0x1aee7cu: goto label_1aee7c;
        case 0x1aee80u: goto label_1aee80;
        case 0x1aee84u: goto label_1aee84;
        case 0x1aee88u: goto label_1aee88;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aee90u: goto label_1aee90;
        case 0x1aee94u: goto label_1aee94;
        case 0x1aee98u: goto label_1aee98;
        case 0x1aee9cu: goto label_1aee9c;
        case 0x1aeea0u: goto label_1aeea0;
        case 0x1aeea4u: goto label_1aeea4;
        default: break;
    }

    ctx->pc = 0x1aedb0u;

label_1aedb0:
    // 0x1aedb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1aedb4:
    // 0x1aedb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1aedb8:
    // 0x1aedb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aedb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aedbc:
    // 0x1aedbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aedbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aedc0:
    // 0x1aedc0: 0xc06ddac  jal         func_1B76B0
label_1aedc4:
    if (ctx->pc == 0x1AEDC4u) {
        ctx->pc = 0x1AEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC0u;
        // 0x1aedc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDC8u;
        goto label_1aedc8;
    }
    ctx->pc = 0x1AEDC0u;
    SET_GPR_U32(ctx, 31, 0x1AEDC8u);
    ctx->pc = 0x1AEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDC0u;
    // 0x1aedc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1AEDC0u, 0x1AEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDC8u;
label_1aedc8:
    // 0x1aedc8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1aedcc:
    if (ctx->pc == 0x1AEDCCu) {
        ctx->pc = 0x1AEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC8u;
        // 0x1aedcc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDD0u;
        goto label_1aedd0;
    }
    ctx->pc = 0x1AEDC8u;
    {
        const bool branch_taken_0x1aedc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC8u;
        // 0x1aedcc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedc8) {
            ctx->pc = 0x1AEE90u;
            goto label_1aee90;
        }
    }
    ctx->pc = 0x1AEDD0u;
label_1aedd0:
    // 0x1aedd0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1aedd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1aedd4:
    // 0x1aedd4: 0x2446dc68  addiu       $a2, $v0, -0x2398
    ctx->pc = 0x1aedd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958184));
label_1aedd8:
    // 0x1aedd8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1aedd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aeddc:
    // 0x1aeddc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1aeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1aede0:
    // 0x1aede0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1aede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1aede4:
    // 0x1aede4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1aede8:
    // 0x1aede8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1aedec:
    if (ctx->pc == 0x1AEDECu) {
        ctx->pc = 0x1AEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDE8u;
        // 0x1aedec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEDF0u;
        goto label_1aedf0;
    }
    ctx->pc = 0x1AEDE8u;
    {
        const bool branch_taken_0x1aede8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDE8u;
        // 0x1aedec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aede8) {
            ctx->pc = 0x1AEE14u;
            goto label_1aee14;
        }
    }
    ctx->pc = 0x1AEDF0u;
label_1aedf0:
    // 0x1aedf0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1aedf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1aedf4:
    // 0x1aedf4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1aedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1aedf8:
    // 0x1aedf8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1aedfc:
    // 0x1aedfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1aedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aee00:
    // 0x1aee00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aee04:
    // 0x1aee04: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1aee04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1aee08:
    // 0x1aee08: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1aee08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1aee0c:
    // 0x1aee0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aee10:
    if (ctx->pc == 0x1AEE10u) {
        ctx->pc = 0x1AEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE0Cu;
        // 0x1aee10: 0x2503dc68  addiu       $v1, $t0, -0x2398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE14u;
        goto label_1aee14;
    }
    ctx->pc = 0x1AEE0Cu;
    {
        const bool branch_taken_0x1aee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE0Cu;
        // 0x1aee10: 0x2503dc68  addiu       $v1, $t0, -0x2398 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee0c) {
            ctx->pc = 0x1AEE20u;
            goto label_1aee20;
        }
    }
    ctx->pc = 0x1AEE14u;
label_1aee14:
    // 0x1aee14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1aee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1aee18:
    // 0x1aee18: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1aee18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aee1c:
    // 0x1aee1c: 0x2503dc68  addiu       $v1, $t0, -0x2398
    ctx->pc = 0x1aee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958184));
label_1aee20:
    // 0x1aee20: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1aee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1aee24:
    // 0x1aee24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aee28:
    // 0x1aee28: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1aee2c:
    if (ctx->pc == 0x1AEE2Cu) {
        ctx->pc = 0x1AEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE28u;
        // 0x1aee2c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE30u;
        goto label_1aee30;
    }
    ctx->pc = 0x1AEE28u;
    {
        const bool branch_taken_0x1aee28 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE28u;
        // 0x1aee2c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee28) {
            ctx->pc = 0x1AEE44u;
            goto label_1aee44;
        }
    }
    ctx->pc = 0x1AEE30u;
label_1aee30:
    // 0x1aee30: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1aee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1aee34:
    // 0x1aee34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aee34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aee38:
    // 0x1aee38: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aee38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aee3c:
    // 0x1aee3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aee40:
    if (ctx->pc == 0x1AEE40u) {
        ctx->pc = 0x1AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE3Cu;
        // 0x1aee40: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE44u;
        goto label_1aee44;
    }
    ctx->pc = 0x1AEE3Cu;
    {
        const bool branch_taken_0x1aee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE3Cu;
        // 0x1aee40: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee3c) {
            ctx->pc = 0x1AEE48u;
            goto label_1aee48;
        }
    }
    ctx->pc = 0x1AEE44u;
label_1aee44:
    // 0x1aee44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aee48:
    // 0x1aee48: 0xc0f809  jalr        $a2
label_1aee4c:
    if (ctx->pc == 0x1AEE4Cu) {
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE48u;
        // 0x1aee4c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE50u;
        goto label_1aee50;
    }
    ctx->pc = 0x1AEE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AEE50u);
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE48u;
        // 0x1aee4c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE48u, 0x1AEE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AEE50u;
label_1aee50:
    // 0x1aee50: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1aee54:
    // 0x1aee54: 0xc0a4bd4  jal         func_292F50
label_1aee58:
    if (ctx->pc == 0x1AEE58u) {
        ctx->pc = 0x1AEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE54u;
        // 0x1aee58: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE5Cu;
        goto label_1aee5c;
    }
    ctx->pc = 0x1AEE54u;
    SET_GPR_U32(ctx, 31, 0x1AEE5Cu);
    ctx->pc = 0x1AEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE54u;
    // 0x1aee58: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1AEE54u, 0x1AEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE5Cu;
label_1aee5c:
    // 0x1aee5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee60:
    // 0x1aee60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1aee60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1aee64:
    // 0x1aee64: 0xc053934  jal         func_14E4D0
label_1aee68:
    if (ctx->pc == 0x1AEE68u) {
        ctx->pc = 0x1AEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE64u;
        // 0x1aee68: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE6Cu;
        goto label_1aee6c;
    }
    ctx->pc = 0x1AEE64u;
    SET_GPR_U32(ctx, 31, 0x1AEE6Cu);
    ctx->pc = 0x1AEE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE64u;
    // 0x1aee68: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x1AEE64u, 0x1AEE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE6Cu;
label_1aee6c:
    // 0x1aee6c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1aee70:
    // 0x1aee70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee74:
    // 0x1aee74: 0xc04d23a  jal         func_1348E8
label_1aee78:
    if (ctx->pc == 0x1AEE78u) {
        ctx->pc = 0x1AEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE74u;
        // 0x1aee78: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE7Cu;
        goto label_1aee7c;
    }
    ctx->pc = 0x1AEE74u;
    SET_GPR_U32(ctx, 31, 0x1AEE7Cu);
    ctx->pc = 0x1AEE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE74u;
    // 0x1aee78: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x1AEE74u, 0x1AEE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE7Cu;
label_1aee7c:
    // 0x1aee7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aee80:
    // 0x1aee80: 0xc0aa1fa  jal         func_2A87E8
label_1aee84:
    if (ctx->pc == 0x1AEE84u) {
        ctx->pc = 0x1AEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE80u;
        // 0x1aee84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE88u;
        goto label_1aee88;
    }
    ctx->pc = 0x1AEE80u;
    SET_GPR_U32(ctx, 31, 0x1AEE88u);
    ctx->pc = 0x1AEE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE80u;
    // 0x1aee84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1AEE80u, 0x1AEE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE88u;
label_1aee88:
    // 0x1aee88: 0xc06ddb6  jal         func_1B76D8
label_1aee8c:
    if (ctx->pc == 0x1AEE8Cu) {
        ctx->pc = 0x1AEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE88u;
        // 0x1aee8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEE90u;
        goto label_1aee90;
    }
    ctx->pc = 0x1AEE88u;
    SET_GPR_U32(ctx, 31, 0x1AEE90u);
    ctx->pc = 0x1AEE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE88u;
    // 0x1aee8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1AEE88u, 0x1AEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE90u;
label_1aee90:
    // 0x1aee90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aee90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aee94:
    // 0x1aee94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aee94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aee98:
    // 0x1aee98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aee9c:
    // 0x1aee9c: 0x3e00008  jr          $ra
label_1aeea0:
    if (ctx->pc == 0x1AEEA0u) {
        ctx->pc = 0x1AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE9Cu;
        // 0x1aeea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AEEA4u;
        goto label_1aeea4;
    }
    ctx->pc = 0x1AEE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE9Cu;
        // 0x1aeea0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEEA4u;
label_1aeea4:
    // 0x1aeea4: 0x0  nop
    ctx->pc = 0x1aeea4u;
    // NOP
    ctx->pc = 0x1aeea8u;
}
