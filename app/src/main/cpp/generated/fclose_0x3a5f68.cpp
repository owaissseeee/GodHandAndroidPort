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

// Function: fclose
// Address: 0x3a5f68 - 0x3a6020
void fclose_0x3a5f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fclose_0x3a5f68");
#endif

    switch (ctx->pc) {
        case 0x3a5f68u: goto label_3a5f68;
        case 0x3a5f6cu: goto label_3a5f6c;
        case 0x3a5f70u: goto label_3a5f70;
        case 0x3a5f74u: goto label_3a5f74;
        case 0x3a5f78u: goto label_3a5f78;
        case 0x3a5f7cu: goto label_3a5f7c;
        case 0x3a5f80u: goto label_3a5f80;
        case 0x3a5f84u: goto label_3a5f84;
        case 0x3a5f88u: goto label_3a5f88;
        case 0x3a5f8cu: goto label_3a5f8c;
        case 0x3a5f90u: goto label_3a5f90;
        case 0x3a5f94u: goto label_3a5f94;
        case 0x3a5f98u: goto label_3a5f98;
        case 0x3a5f9cu: goto label_3a5f9c;
        case 0x3a5fa0u: goto label_3a5fa0;
        case 0x3a5fa4u: goto label_3a5fa4;
        case 0x3a5fa8u: goto label_3a5fa8;
        case 0x3a5facu: goto label_3a5fac;
        case 0x3a5fb0u: goto label_3a5fb0;
        case 0x3a5fb4u: goto label_3a5fb4;
        case 0x3a5fb8u: goto label_3a5fb8;
        case 0x3a5fbcu: goto label_3a5fbc;
        case 0x3a5fc0u: goto label_3a5fc0;
        case 0x3a5fc4u: goto label_3a5fc4;
        case 0x3a5fc8u: goto label_3a5fc8;
        case 0x3a5fccu: goto label_3a5fcc;
        case 0x3a5fd0u: goto label_3a5fd0;
        case 0x3a5fd4u: goto label_3a5fd4;
        case 0x3a5fd8u: goto label_3a5fd8;
        case 0x3a5fdcu: goto label_3a5fdc;
        case 0x3a5fe0u: goto label_3a5fe0;
        case 0x3a5fe4u: goto label_3a5fe4;
        case 0x3a5fe8u: goto label_3a5fe8;
        case 0x3a5fecu: goto label_3a5fec;
        case 0x3a5ff0u: goto label_3a5ff0;
        case 0x3a5ff4u: goto label_3a5ff4;
        case 0x3a5ff8u: goto label_3a5ff8;
        case 0x3a5ffcu: goto label_3a5ffc;
        case 0x3a6000u: goto label_3a6000;
        case 0x3a6004u: goto label_3a6004;
        case 0x3a6008u: goto label_3a6008;
        case 0x3a600cu: goto label_3a600c;
        case 0x3a6010u: goto label_3a6010;
        case 0x3a6014u: goto label_3a6014;
        case 0x3a6018u: goto label_3a6018;
        case 0x3a601cu: goto label_3a601c;
        default: break;
    }

    ctx->pc = 0x3a5f68u;

label_3a5f68:
    // 0x3a5f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a5f6c:
    // 0x3a5f6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a5f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a5f70:
    // 0x3a5f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a5f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a5f74:
    // 0x3a5f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5f78:
    // 0x3a5f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a5f7c:
    // 0x3a5f7c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_3a5f80:
    if (ctx->pc == 0x3A5F80u) {
        ctx->pc = 0x3A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F7Cu;
        // 0x3a5f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5F84u;
        goto label_3a5f84;
    }
    ctx->pc = 0x3A5F7Cu;
    {
        const bool branch_taken_0x3a5f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F7Cu;
        // 0x3a5f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5f7c) {
            ctx->pc = 0x3A6008u;
            goto label_3a6008;
        }
    }
    ctx->pc = 0x3A5F84u;
label_3a5f84:
    // 0x3a5f84: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a5f88:
    // 0x3a5f88: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3a5f8c:
    if (ctx->pc == 0x3A5F8Cu) {
        ctx->pc = 0x3A5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5F88u;
        // 0x3a5f8c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5F90u;
        goto label_3a5f90;
    }
    ctx->pc = 0x3A5F88u;
    {
        const bool branch_taken_0x3a5f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5f88) {
            ctx->pc = 0x3A5F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5F88u;
            // 0x3a5f8c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FA0u;
            goto label_3a5fa0;
        }
    }
    ctx->pc = 0x3A5F90u;
label_3a5f90:
    // 0x3a5f90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a5f94:
    // 0x3a5f94: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a5f98:
    // 0x3a5f98: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a5f9c:
    // 0x3a5f9c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a5fa0:
    // 0x3a5fa0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3a5fa4:
    // 0x3a5fa4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3a5fa8:
    if (ctx->pc == 0x3A5FA8u) {
        ctx->pc = 0x3A5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FA4u;
        // 0x3a5fa8: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FACu;
        goto label_3a5fac;
    }
    ctx->pc = 0x3A5FA4u;
    {
        const bool branch_taken_0x3a5fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5fa4) {
            ctx->pc = 0x3A5FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5FA4u;
            // 0x3a5fa8: 0x8602000c  lh          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5FB8u;
            goto label_3a5fb8;
        }
    }
    ctx->pc = 0x3A5FACu;
label_3a5fac:
    // 0x3a5fac: 0xc0e987c  jal         func_3A61F0
label_3a5fb0:
    if (ctx->pc == 0x3A5FB0u) {
        ctx->pc = 0x3A5FB4u;
        goto label_3a5fb4;
    }
    ctx->pc = 0x3A5FACu;
    SET_GPR_U32(ctx, 31, 0x3A5FB4u);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3A5FACu, 0x3A5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5FB4u;
label_3a5fb4:
    // 0x3a5fb4: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x3a5fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a5fb8:
    // 0x3a5fb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a5fbc:
    if (ctx->pc == 0x3A5FBCu) {
        ctx->pc = 0x3A5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FB8u;
        // 0x3a5fbc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FC0u;
        goto label_3a5fc0;
    }
    ctx->pc = 0x3A5FB8u;
    {
        const bool branch_taken_0x3a5fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FB8u;
        // 0x3a5fbc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fb8) {
            ctx->pc = 0x3A5FC8u;
            goto label_3a5fc8;
        }
    }
    ctx->pc = 0x3A5FC0u;
label_3a5fc0:
    // 0x3a5fc0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a5fc4:
    if (ctx->pc == 0x3A5FC4u) {
        ctx->pc = 0x3A5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FC0u;
        // 0x3a5fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FC8u;
        goto label_3a5fc8;
    }
    ctx->pc = 0x3A5FC0u;
    {
        const bool branch_taken_0x3a5fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FC0u;
        // 0x3a5fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fc0) {
            ctx->pc = 0x3A6008u;
            goto label_3a6008;
        }
    }
    ctx->pc = 0x3A5FC8u;
label_3a5fc8:
    // 0x3a5fc8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a5fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a5fcc:
    // 0x3a5fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a5fd0:
    if (ctx->pc == 0x3A5FD0u) {
        ctx->pc = 0x3A5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FCCu;
        // 0x3a5fd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FD4u;
        goto label_3a5fd4;
    }
    ctx->pc = 0x3A5FCCu;
    {
        const bool branch_taken_0x3a5fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FCCu;
        // 0x3a5fd0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5fcc) {
            ctx->pc = 0x3A5FE0u;
            goto label_3a5fe0;
        }
    }
    ctx->pc = 0x3A5FD4u;
label_3a5fd4:
    // 0x3a5fd4: 0xc0e9808  jal         func_3A6020
label_3a5fd8:
    if (ctx->pc == 0x3A5FD8u) {
        ctx->pc = 0x3A5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FD4u;
        // 0x3a5fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FDCu;
        goto label_3a5fdc;
    }
    ctx->pc = 0x3A5FD4u;
    SET_GPR_U32(ctx, 31, 0x3A5FDCu);
    ctx->pc = 0x3A5FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5FD4u;
    // 0x3a5fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3A5FD4u, 0x3A5FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5FDCu;
label_3a5fdc:
    // 0x3a5fdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a5fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5fe0:
    // 0x3a5fe0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3a5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3a5fe4:
    // 0x3a5fe4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3a5fe8:
    if (ctx->pc == 0x3A5FE8u) {
        ctx->pc = 0x3A5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FE4u;
        // 0x3a5fe8: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FECu;
        goto label_3a5fec;
    }
    ctx->pc = 0x3A5FE4u;
    {
        const bool branch_taken_0x3a5fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5fe4) {
            ctx->pc = 0x3A5FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5FE4u;
            // 0x3a5fe8: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6004u;
            goto label_3a6004;
        }
    }
    ctx->pc = 0x3A5FECu;
label_3a5fec:
    // 0x3a5fec: 0x40f809  jalr        $v0
label_3a5ff0:
    if (ctx->pc == 0x3A5FF0u) {
        ctx->pc = 0x3A5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FECu;
        // 0x3a5ff0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5FF4u;
        goto label_3a5ff4;
    }
    ctx->pc = 0x3A5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A5FF4u);
        ctx->pc = 0x3A5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5FECu;
        // 0x3a5ff0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5FECu, 0x3A5FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A5FF4u;
label_3a5ff4:
    // 0x3a5ff4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a5ff8:
    // 0x3a5ff8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3a5ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a5ffc:
    // 0x3a5ffc: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x3a5ffcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_3a6000:
    // 0x3a6000: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x3a6000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_3a6004:
    // 0x3a6004: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a6004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a6008:
    // 0x3a6008: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a6008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a600c:
    // 0x3a600c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a600cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6010:
    // 0x3a6010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6014:
    // 0x3a6014: 0x3e00008  jr          $ra
label_3a6018:
    if (ctx->pc == 0x3A6018u) {
        ctx->pc = 0x3A6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6014u;
        // 0x3a6018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A601Cu;
        goto label_3a601c;
    }
    ctx->pc = 0x3A6014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6014u;
        // 0x3a6018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A601Cu;
label_3a601c:
    // 0x3a601c: 0x0  nop
    ctx->pc = 0x3a601cu;
    // NOP
    ctx->pc = 0x3a6020u;
}
