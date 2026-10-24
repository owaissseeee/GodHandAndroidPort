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

// Function: func_0017BA28
// Address: 0x17ba28 - 0x17baf0
void func_0017BA28_0x17ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017BA28_0x17ba28");
#endif

    switch (ctx->pc) {
        case 0x17ba28u: goto label_17ba28;
        case 0x17ba2cu: goto label_17ba2c;
        case 0x17ba30u: goto label_17ba30;
        case 0x17ba34u: goto label_17ba34;
        case 0x17ba38u: goto label_17ba38;
        case 0x17ba3cu: goto label_17ba3c;
        case 0x17ba40u: goto label_17ba40;
        case 0x17ba44u: goto label_17ba44;
        case 0x17ba48u: goto label_17ba48;
        case 0x17ba4cu: goto label_17ba4c;
        case 0x17ba50u: goto label_17ba50;
        case 0x17ba54u: goto label_17ba54;
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba5cu: goto label_17ba5c;
        case 0x17ba60u: goto label_17ba60;
        case 0x17ba64u: goto label_17ba64;
        case 0x17ba68u: goto label_17ba68;
        case 0x17ba6cu: goto label_17ba6c;
        case 0x17ba70u: goto label_17ba70;
        case 0x17ba74u: goto label_17ba74;
        case 0x17ba78u: goto label_17ba78;
        case 0x17ba7cu: goto label_17ba7c;
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba88u: goto label_17ba88;
        case 0x17ba8cu: goto label_17ba8c;
        case 0x17ba90u: goto label_17ba90;
        case 0x17ba94u: goto label_17ba94;
        case 0x17ba98u: goto label_17ba98;
        case 0x17ba9cu: goto label_17ba9c;
        case 0x17baa0u: goto label_17baa0;
        case 0x17baa4u: goto label_17baa4;
        case 0x17baa8u: goto label_17baa8;
        case 0x17baacu: goto label_17baac;
        case 0x17bab0u: goto label_17bab0;
        case 0x17bab4u: goto label_17bab4;
        case 0x17bab8u: goto label_17bab8;
        case 0x17babcu: goto label_17babc;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bac8u: goto label_17bac8;
        case 0x17baccu: goto label_17bacc;
        case 0x17bad0u: goto label_17bad0;
        case 0x17bad4u: goto label_17bad4;
        case 0x17bad8u: goto label_17bad8;
        case 0x17badcu: goto label_17badc;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bae4u: goto label_17bae4;
        case 0x17bae8u: goto label_17bae8;
        case 0x17baecu: goto label_17baec;
        default: break;
    }

    ctx->pc = 0x17ba28u;

label_17ba28:
    // 0x17ba28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ba2c:
    // 0x17ba2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17ba30:
    // 0x17ba30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ba34:
    // 0x17ba34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17ba38:
    // 0x17ba38: 0xc06ddac  jal         func_1B76B0
label_17ba3c:
    if (ctx->pc == 0x17BA3Cu) {
        ctx->pc = 0x17BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA38u;
        // 0x17ba3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA40u;
        goto label_17ba40;
    }
    ctx->pc = 0x17BA38u;
    SET_GPR_U32(ctx, 31, 0x17BA40u);
    ctx->pc = 0x17BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA38u;
    // 0x17ba3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17BA38u, 0x17BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA40u;
label_17ba40:
    // 0x17ba40: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_17ba44:
    if (ctx->pc == 0x17BA44u) {
        ctx->pc = 0x17BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA40u;
        // 0x17ba44: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA48u;
        goto label_17ba48;
    }
    ctx->pc = 0x17BA40u;
    {
        const bool branch_taken_0x17ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA40u;
        // 0x17ba44: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba40) {
            ctx->pc = 0x17BADCu;
            goto label_17badc;
        }
    }
    ctx->pc = 0x17BA48u;
label_17ba48:
    // 0x17ba48: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17ba48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17ba4c:
    // 0x17ba4c: 0x2446da40  addiu       $a2, $v0, -0x25C0
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
label_17ba50:
    // 0x17ba50: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ba50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ba54:
    // 0x17ba54: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17ba58:
    // 0x17ba58: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17ba5c:
    // 0x17ba5c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17ba5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ba60:
    // 0x17ba60: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17ba64:
    if (ctx->pc == 0x17BA64u) {
        ctx->pc = 0x17BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA60u;
        // 0x17ba64: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA68u;
        goto label_17ba68;
    }
    ctx->pc = 0x17BA60u;
    {
        const bool branch_taken_0x17ba60 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA60u;
        // 0x17ba64: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba60) {
            ctx->pc = 0x17BA8Cu;
            goto label_17ba8c;
        }
    }
    ctx->pc = 0x17BA68u;
label_17ba68:
    // 0x17ba68: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17ba6c:
    // 0x17ba6c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ba70:
    // 0x17ba70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ba74:
    // 0x17ba74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ba78:
    // 0x17ba78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ba7c:
    // 0x17ba7c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17ba7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17ba80:
    // 0x17ba80: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17ba80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17ba84:
    // 0x17ba84: 0x10000004  b           . + 4 + (0x4 << 2)
label_17ba88:
    if (ctx->pc == 0x17BA88u) {
        ctx->pc = 0x17BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA84u;
        // 0x17ba88: 0x2503da40  addiu       $v1, $t0, -0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA8Cu;
        goto label_17ba8c;
    }
    ctx->pc = 0x17BA84u;
    {
        const bool branch_taken_0x17ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA84u;
        // 0x17ba88: 0x2503da40  addiu       $v1, $t0, -0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba84) {
            ctx->pc = 0x17BA98u;
            goto label_17ba98;
        }
    }
    ctx->pc = 0x17BA8Cu;
label_17ba8c:
    // 0x17ba8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17ba90:
    // 0x17ba90: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17ba94:
    // 0x17ba94: 0x2503da40  addiu       $v1, $t0, -0x25C0
    ctx->pc = 0x17ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957632));
label_17ba98:
    // 0x17ba98: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17ba9c:
    // 0x17ba9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17baa0:
    // 0x17baa0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17baa4:
    if (ctx->pc == 0x17BAA4u) {
        ctx->pc = 0x17BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAA0u;
        // 0x17baa4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAA8u;
        goto label_17baa8;
    }
    ctx->pc = 0x17BAA0u;
    {
        const bool branch_taken_0x17baa0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAA0u;
        // 0x17baa4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17baa0) {
            ctx->pc = 0x17BABCu;
            goto label_17babc;
        }
    }
    ctx->pc = 0x17BAA8u;
label_17baa8:
    // 0x17baa8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17baac:
    // 0x17baac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17baacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17bab0:
    // 0x17bab0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17bab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17bab4:
    // 0x17bab4: 0x10000002  b           . + 4 + (0x2 << 2)
label_17bab8:
    if (ctx->pc == 0x17BAB8u) {
        ctx->pc = 0x17BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAB4u;
        // 0x17bab8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BABCu;
        goto label_17babc;
    }
    ctx->pc = 0x17BAB4u;
    {
        const bool branch_taken_0x17bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAB4u;
        // 0x17bab8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bab4) {
            ctx->pc = 0x17BAC0u;
            goto label_17bac0;
        }
    }
    ctx->pc = 0x17BABCu;
label_17babc:
    // 0x17babc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17babcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17bac0:
    // 0x17bac0: 0xc0f809  jalr        $a2
label_17bac4:
    if (ctx->pc == 0x17BAC4u) {
        ctx->pc = 0x17BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAC0u;
        // 0x17bac4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAC8u;
        goto label_17bac8;
    }
    ctx->pc = 0x17BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17BAC8u);
        ctx->pc = 0x17BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAC0u;
        // 0x17bac4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAC0u, 0x17BAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BAC8u;
label_17bac8:
    // 0x17bac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bacc:
    // 0x17bacc: 0xc0aa1fa  jal         func_2A87E8
label_17bad0:
    if (ctx->pc == 0x17BAD0u) {
        ctx->pc = 0x17BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BACCu;
        // 0x17bad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAD4u;
        goto label_17bad4;
    }
    ctx->pc = 0x17BACCu;
    SET_GPR_U32(ctx, 31, 0x17BAD4u);
    ctx->pc = 0x17BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BACCu;
    // 0x17bad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x17BACCu, 0x17BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BAD4u;
label_17bad4:
    // 0x17bad4: 0xc06ddb6  jal         func_1B76D8
label_17bad8:
    if (ctx->pc == 0x17BAD8u) {
        ctx->pc = 0x17BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD4u;
        // 0x17bad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BADCu;
        goto label_17badc;
    }
    ctx->pc = 0x17BAD4u;
    SET_GPR_U32(ctx, 31, 0x17BADCu);
    ctx->pc = 0x17BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BAD4u;
    // 0x17bad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17BAD4u, 0x17BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BADCu;
label_17badc:
    // 0x17badc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17badcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17bae0:
    // 0x17bae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17bae4:
    // 0x17bae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bae8:
    // 0x17bae8: 0x3e00008  jr          $ra
label_17baec:
    if (ctx->pc == 0x17BAECu) {
        ctx->pc = 0x17BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAE8u;
        // 0x17baec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BAF0u;
        goto label_fallthrough_0x17bae8;
    }
    ctx->pc = 0x17BAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAE8u;
        // 0x17baec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17bae8:
    ctx->pc = 0x17BAF0u;
}
