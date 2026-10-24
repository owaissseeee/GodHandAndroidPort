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

// Function: func_00195F18
// Address: 0x195f18 - 0x195fe0
void func_00195F18_0x195f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195F18_0x195f18");
#endif

    switch (ctx->pc) {
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        case 0x195f2cu: goto label_195f2c;
        case 0x195f30u: goto label_195f30;
        case 0x195f34u: goto label_195f34;
        case 0x195f38u: goto label_195f38;
        case 0x195f3cu: goto label_195f3c;
        case 0x195f40u: goto label_195f40;
        case 0x195f44u: goto label_195f44;
        case 0x195f48u: goto label_195f48;
        case 0x195f4cu: goto label_195f4c;
        case 0x195f50u: goto label_195f50;
        case 0x195f54u: goto label_195f54;
        case 0x195f58u: goto label_195f58;
        case 0x195f5cu: goto label_195f5c;
        case 0x195f60u: goto label_195f60;
        case 0x195f64u: goto label_195f64;
        case 0x195f68u: goto label_195f68;
        case 0x195f6cu: goto label_195f6c;
        case 0x195f70u: goto label_195f70;
        case 0x195f74u: goto label_195f74;
        case 0x195f78u: goto label_195f78;
        case 0x195f7cu: goto label_195f7c;
        case 0x195f80u: goto label_195f80;
        case 0x195f84u: goto label_195f84;
        case 0x195f88u: goto label_195f88;
        case 0x195f8cu: goto label_195f8c;
        case 0x195f90u: goto label_195f90;
        case 0x195f94u: goto label_195f94;
        case 0x195f98u: goto label_195f98;
        case 0x195f9cu: goto label_195f9c;
        case 0x195fa0u: goto label_195fa0;
        case 0x195fa4u: goto label_195fa4;
        case 0x195fa8u: goto label_195fa8;
        case 0x195facu: goto label_195fac;
        case 0x195fb0u: goto label_195fb0;
        case 0x195fb4u: goto label_195fb4;
        case 0x195fb8u: goto label_195fb8;
        case 0x195fbcu: goto label_195fbc;
        case 0x195fc0u: goto label_195fc0;
        case 0x195fc4u: goto label_195fc4;
        case 0x195fc8u: goto label_195fc8;
        case 0x195fccu: goto label_195fcc;
        case 0x195fd0u: goto label_195fd0;
        case 0x195fd4u: goto label_195fd4;
        case 0x195fd8u: goto label_195fd8;
        case 0x195fdcu: goto label_195fdc;
        default: break;
    }

    ctx->pc = 0x195f18u;

label_195f18:
    // 0x195f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195f1c:
    // 0x195f1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_195f20:
    // 0x195f20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195f24:
    // 0x195f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195f28:
    // 0x195f28: 0xc06ddac  jal         func_1B76B0
label_195f2c:
    if (ctx->pc == 0x195F2Cu) {
        ctx->pc = 0x195F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F28u;
        // 0x195f2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F30u;
        goto label_195f30;
    }
    ctx->pc = 0x195F28u;
    SET_GPR_U32(ctx, 31, 0x195F30u);
    ctx->pc = 0x195F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F28u;
    // 0x195f2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x195F28u, 0x195F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F30u;
label_195f30:
    // 0x195f30: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_195f34:
    if (ctx->pc == 0x195F34u) {
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F30u;
        // 0x195f34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F38u;
        goto label_195f38;
    }
    ctx->pc = 0x195F30u;
    {
        const bool branch_taken_0x195f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F30u;
        // 0x195f34: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f30) {
            ctx->pc = 0x195FCCu;
            goto label_195fcc;
        }
    }
    ctx->pc = 0x195F38u;
label_195f38:
    // 0x195f38: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x195f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_195f3c:
    // 0x195f3c: 0x2446db68  addiu       $a2, $v0, -0x2498
    ctx->pc = 0x195f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957928));
label_195f40:
    // 0x195f40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x195f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195f44:
    // 0x195f44: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x195f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_195f48:
    // 0x195f48: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x195f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195f4c:
    // 0x195f4c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x195f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_195f50:
    // 0x195f50: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_195f54:
    if (ctx->pc == 0x195F54u) {
        ctx->pc = 0x195F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F50u;
        // 0x195f54: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F58u;
        goto label_195f58;
    }
    ctx->pc = 0x195F50u;
    {
        const bool branch_taken_0x195f50 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x195F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F50u;
        // 0x195f54: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f50) {
            ctx->pc = 0x195F7Cu;
            goto label_195f7c;
        }
    }
    ctx->pc = 0x195F58u;
label_195f58:
    // 0x195f58: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x195f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_195f5c:
    // 0x195f5c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x195f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_195f60:
    // 0x195f60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x195f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_195f64:
    // 0x195f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x195f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_195f68:
    // 0x195f68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195f6c:
    // 0x195f6c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x195f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_195f70:
    // 0x195f70: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x195f70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_195f74:
    // 0x195f74: 0x10000004  b           . + 4 + (0x4 << 2)
label_195f78:
    if (ctx->pc == 0x195F78u) {
        ctx->pc = 0x195F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F74u;
        // 0x195f78: 0x2503db68  addiu       $v1, $t0, -0x2498 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F7Cu;
        goto label_195f7c;
    }
    ctx->pc = 0x195F74u;
    {
        const bool branch_taken_0x195f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F74u;
        // 0x195f78: 0x2503db68  addiu       $v1, $t0, -0x2498 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f74) {
            ctx->pc = 0x195F88u;
            goto label_195f88;
        }
    }
    ctx->pc = 0x195F7Cu;
label_195f7c:
    // 0x195f7c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x195f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_195f80:
    // 0x195f80: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x195f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_195f84:
    // 0x195f84: 0x2503db68  addiu       $v1, $t0, -0x2498
    ctx->pc = 0x195f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957928));
label_195f88:
    // 0x195f88: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x195f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_195f8c:
    // 0x195f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195f90:
    // 0x195f90: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_195f94:
    if (ctx->pc == 0x195F94u) {
        ctx->pc = 0x195F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F90u;
        // 0x195f94: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F98u;
        goto label_195f98;
    }
    ctx->pc = 0x195F90u;
    {
        const bool branch_taken_0x195f90 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x195F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F90u;
        // 0x195f94: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f90) {
            ctx->pc = 0x195FACu;
            goto label_195fac;
        }
    }
    ctx->pc = 0x195F98u;
label_195f98:
    // 0x195f98: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x195f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_195f9c:
    // 0x195f9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x195f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_195fa0:
    // 0x195fa0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x195fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_195fa4:
    // 0x195fa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_195fa8:
    if (ctx->pc == 0x195FA8u) {
        ctx->pc = 0x195FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FA4u;
        // 0x195fa8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FACu;
        goto label_195fac;
    }
    ctx->pc = 0x195FA4u;
    {
        const bool branch_taken_0x195fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FA4u;
        // 0x195fa8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fa4) {
            ctx->pc = 0x195FB0u;
            goto label_195fb0;
        }
    }
    ctx->pc = 0x195FACu;
label_195fac:
    // 0x195fac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x195facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_195fb0:
    // 0x195fb0: 0xc0f809  jalr        $a2
label_195fb4:
    if (ctx->pc == 0x195FB4u) {
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB0u;
        // 0x195fb4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FB8u;
        goto label_195fb8;
    }
    ctx->pc = 0x195FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x195FB8u);
        ctx->pc = 0x195FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FB0u;
        // 0x195fb4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FB0u, 0x195FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195FB8u;
label_195fb8:
    // 0x195fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195fbc:
    // 0x195fbc: 0xc0aa1fa  jal         func_2A87E8
label_195fc0:
    if (ctx->pc == 0x195FC0u) {
        ctx->pc = 0x195FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FBCu;
        // 0x195fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FC4u;
        goto label_195fc4;
    }
    ctx->pc = 0x195FBCu;
    SET_GPR_U32(ctx, 31, 0x195FC4u);
    ctx->pc = 0x195FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FBCu;
    // 0x195fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x195FBCu, 0x195FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FC4u;
label_195fc4:
    // 0x195fc4: 0xc06ddb6  jal         func_1B76D8
label_195fc8:
    if (ctx->pc == 0x195FC8u) {
        ctx->pc = 0x195FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FC4u;
        // 0x195fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FCCu;
        goto label_195fcc;
    }
    ctx->pc = 0x195FC4u;
    SET_GPR_U32(ctx, 31, 0x195FCCu);
    ctx->pc = 0x195FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195FC4u;
    // 0x195fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x195FC4u, 0x195FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195FCCu;
label_195fcc:
    // 0x195fcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195fd0:
    // 0x195fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195fd4:
    // 0x195fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195fd8:
    // 0x195fd8: 0x3e00008  jr          $ra
label_195fdc:
    if (ctx->pc == 0x195FDCu) {
        ctx->pc = 0x195FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FD8u;
        // 0x195fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195FE0u;
        goto label_fallthrough_0x195fd8;
    }
    ctx->pc = 0x195FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FD8u;
        // 0x195fdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195fd8:
    ctx->pc = 0x195FE0u;
}
