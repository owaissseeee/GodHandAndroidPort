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

// Function: func_0017EED8
// Address: 0x17eed8 - 0x17ef98
void func_0017EED8_0x17eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EED8_0x17eed8");
#endif

    switch (ctx->pc) {
        case 0x17eed8u: goto label_17eed8;
        case 0x17eedcu: goto label_17eedc;
        case 0x17eee0u: goto label_17eee0;
        case 0x17eee4u: goto label_17eee4;
        case 0x17eee8u: goto label_17eee8;
        case 0x17eeecu: goto label_17eeec;
        case 0x17eef0u: goto label_17eef0;
        case 0x17eef4u: goto label_17eef4;
        case 0x17eef8u: goto label_17eef8;
        case 0x17eefcu: goto label_17eefc;
        case 0x17ef00u: goto label_17ef00;
        case 0x17ef04u: goto label_17ef04;
        case 0x17ef08u: goto label_17ef08;
        case 0x17ef0cu: goto label_17ef0c;
        case 0x17ef10u: goto label_17ef10;
        case 0x17ef14u: goto label_17ef14;
        case 0x17ef18u: goto label_17ef18;
        case 0x17ef1cu: goto label_17ef1c;
        case 0x17ef20u: goto label_17ef20;
        case 0x17ef24u: goto label_17ef24;
        case 0x17ef28u: goto label_17ef28;
        case 0x17ef2cu: goto label_17ef2c;
        case 0x17ef30u: goto label_17ef30;
        case 0x17ef34u: goto label_17ef34;
        case 0x17ef38u: goto label_17ef38;
        case 0x17ef3cu: goto label_17ef3c;
        case 0x17ef40u: goto label_17ef40;
        case 0x17ef44u: goto label_17ef44;
        case 0x17ef48u: goto label_17ef48;
        case 0x17ef4cu: goto label_17ef4c;
        case 0x17ef50u: goto label_17ef50;
        case 0x17ef54u: goto label_17ef54;
        case 0x17ef58u: goto label_17ef58;
        case 0x17ef5cu: goto label_17ef5c;
        case 0x17ef60u: goto label_17ef60;
        case 0x17ef64u: goto label_17ef64;
        case 0x17ef68u: goto label_17ef68;
        case 0x17ef6cu: goto label_17ef6c;
        case 0x17ef70u: goto label_17ef70;
        case 0x17ef74u: goto label_17ef74;
        case 0x17ef78u: goto label_17ef78;
        case 0x17ef7cu: goto label_17ef7c;
        case 0x17ef80u: goto label_17ef80;
        case 0x17ef84u: goto label_17ef84;
        case 0x17ef88u: goto label_17ef88;
        case 0x17ef8cu: goto label_17ef8c;
        case 0x17ef90u: goto label_17ef90;
        case 0x17ef94u: goto label_17ef94;
        default: break;
    }

    ctx->pc = 0x17eed8u;

label_17eed8:
    // 0x17eed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17eedc:
    // 0x17eedc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17eee0:
    // 0x17eee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17eee4:
    // 0x17eee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17eee8:
    // 0x17eee8: 0xc06ddac  jal         func_1B76B0
label_17eeec:
    if (ctx->pc == 0x17EEECu) {
        ctx->pc = 0x17EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEE8u;
        // 0x17eeec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEF0u;
        goto label_17eef0;
    }
    ctx->pc = 0x17EEE8u;
    SET_GPR_U32(ctx, 31, 0x17EEF0u);
    ctx->pc = 0x17EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EEE8u;
    // 0x17eeec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17EEE8u, 0x17EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EEF0u;
label_17eef0:
    // 0x17eef0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_17eef4:
    if (ctx->pc == 0x17EEF4u) {
        ctx->pc = 0x17EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF0u;
        // 0x17eef4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEF8u;
        goto label_17eef8;
    }
    ctx->pc = 0x17EEF0u;
    {
        const bool branch_taken_0x17eef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEF0u;
        // 0x17eef4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eef0) {
            ctx->pc = 0x17EF80u;
            goto label_17ef80;
        }
    }
    ctx->pc = 0x17EEF8u;
label_17eef8:
    // 0x17eef8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17eef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17eefc:
    // 0x17eefc: 0x2446da98  addiu       $a2, $v0, -0x2568
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957720));
label_17ef00:
    // 0x17ef00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ef00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ef04:
    // 0x17ef04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17ef08:
    // 0x17ef08: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17ef0c:
    // 0x17ef0c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17ef0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ef10:
    // 0x17ef10: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17ef14:
    if (ctx->pc == 0x17EF14u) {
        ctx->pc = 0x17EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF10u;
        // 0x17ef14: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF18u;
        goto label_17ef18;
    }
    ctx->pc = 0x17EF10u;
    {
        const bool branch_taken_0x17ef10 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF10u;
        // 0x17ef14: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef10) {
            ctx->pc = 0x17EF3Cu;
            goto label_17ef3c;
        }
    }
    ctx->pc = 0x17EF18u;
label_17ef18:
    // 0x17ef18: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17ef18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17ef1c:
    // 0x17ef1c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ef20:
    // 0x17ef20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ef24:
    // 0x17ef24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ef28:
    // 0x17ef28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ef2c:
    // 0x17ef2c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17ef2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17ef30:
    // 0x17ef30: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17ef30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17ef34:
    // 0x17ef34: 0x10000004  b           . + 4 + (0x4 << 2)
label_17ef38:
    if (ctx->pc == 0x17EF38u) {
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF34u;
        // 0x17ef38: 0x2503da98  addiu       $v1, $t0, -0x2568 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF3Cu;
        goto label_17ef3c;
    }
    ctx->pc = 0x17EF34u;
    {
        const bool branch_taken_0x17ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF34u;
        // 0x17ef38: 0x2503da98  addiu       $v1, $t0, -0x2568 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef34) {
            ctx->pc = 0x17EF48u;
            goto label_17ef48;
        }
    }
    ctx->pc = 0x17EF3Cu;
label_17ef3c:
    // 0x17ef3c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17ef40:
    // 0x17ef40: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17ef40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17ef44:
    // 0x17ef44: 0x2503da98  addiu       $v1, $t0, -0x2568
    ctx->pc = 0x17ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957720));
label_17ef48:
    // 0x17ef48: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17ef4c:
    // 0x17ef4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ef50:
    // 0x17ef50: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17ef54:
    if (ctx->pc == 0x17EF54u) {
        ctx->pc = 0x17EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF50u;
        // 0x17ef54: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF58u;
        goto label_17ef58;
    }
    ctx->pc = 0x17EF50u;
    {
        const bool branch_taken_0x17ef50 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF50u;
        // 0x17ef54: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef50) {
            ctx->pc = 0x17EF6Cu;
            goto label_17ef6c;
        }
    }
    ctx->pc = 0x17EF58u;
label_17ef58:
    // 0x17ef58: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17ef5c:
    // 0x17ef5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17ef60:
    // 0x17ef60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17ef60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17ef64:
    // 0x17ef64: 0x10000002  b           . + 4 + (0x2 << 2)
label_17ef68:
    if (ctx->pc == 0x17EF68u) {
        ctx->pc = 0x17EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF64u;
        // 0x17ef68: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF6Cu;
        goto label_17ef6c;
    }
    ctx->pc = 0x17EF64u;
    {
        const bool branch_taken_0x17ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF64u;
        // 0x17ef68: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef64) {
            ctx->pc = 0x17EF70u;
            goto label_17ef70;
        }
    }
    ctx->pc = 0x17EF6Cu;
label_17ef6c:
    // 0x17ef6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17ef6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17ef70:
    // 0x17ef70: 0xc0f809  jalr        $a2
label_17ef74:
    if (ctx->pc == 0x17EF74u) {
        ctx->pc = 0x17EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF70u;
        // 0x17ef74: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF78u;
        goto label_17ef78;
    }
    ctx->pc = 0x17EF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17EF78u);
        ctx->pc = 0x17EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF70u;
        // 0x17ef74: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF70u, 0x17EF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EF78u;
label_17ef78:
    // 0x17ef78: 0xc06ddb6  jal         func_1B76D8
label_17ef7c:
    if (ctx->pc == 0x17EF7Cu) {
        ctx->pc = 0x17EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF78u;
        // 0x17ef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF80u;
        goto label_17ef80;
    }
    ctx->pc = 0x17EF78u;
    SET_GPR_U32(ctx, 31, 0x17EF80u);
    ctx->pc = 0x17EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF78u;
    // 0x17ef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17EF78u, 0x17EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF80u;
label_17ef80:
    // 0x17ef80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ef80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ef84:
    // 0x17ef84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ef84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ef88:
    // 0x17ef88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ef88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ef8c:
    // 0x17ef8c: 0x3e00008  jr          $ra
label_17ef90:
    if (ctx->pc == 0x17EF90u) {
        ctx->pc = 0x17EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF8Cu;
        // 0x17ef90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EF94u;
        goto label_17ef94;
    }
    ctx->pc = 0x17EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF8Cu;
        // 0x17ef90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EF94u;
label_17ef94:
    // 0x17ef94: 0x0  nop
    ctx->pc = 0x17ef94u;
    // NOP
    ctx->pc = 0x17ef98u;
}
