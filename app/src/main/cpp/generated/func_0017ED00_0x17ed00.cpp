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

// Function: func_0017ED00
// Address: 0x17ed00 - 0x17edc8
void func_0017ED00_0x17ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017ED00_0x17ed00");
#endif

    switch (ctx->pc) {
        case 0x17ed00u: goto label_17ed00;
        case 0x17ed04u: goto label_17ed04;
        case 0x17ed08u: goto label_17ed08;
        case 0x17ed0cu: goto label_17ed0c;
        case 0x17ed10u: goto label_17ed10;
        case 0x17ed14u: goto label_17ed14;
        case 0x17ed18u: goto label_17ed18;
        case 0x17ed1cu: goto label_17ed1c;
        case 0x17ed20u: goto label_17ed20;
        case 0x17ed24u: goto label_17ed24;
        case 0x17ed28u: goto label_17ed28;
        case 0x17ed2cu: goto label_17ed2c;
        case 0x17ed30u: goto label_17ed30;
        case 0x17ed34u: goto label_17ed34;
        case 0x17ed38u: goto label_17ed38;
        case 0x17ed3cu: goto label_17ed3c;
        case 0x17ed40u: goto label_17ed40;
        case 0x17ed44u: goto label_17ed44;
        case 0x17ed48u: goto label_17ed48;
        case 0x17ed4cu: goto label_17ed4c;
        case 0x17ed50u: goto label_17ed50;
        case 0x17ed54u: goto label_17ed54;
        case 0x17ed58u: goto label_17ed58;
        case 0x17ed5cu: goto label_17ed5c;
        case 0x17ed60u: goto label_17ed60;
        case 0x17ed64u: goto label_17ed64;
        case 0x17ed68u: goto label_17ed68;
        case 0x17ed6cu: goto label_17ed6c;
        case 0x17ed70u: goto label_17ed70;
        case 0x17ed74u: goto label_17ed74;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed7cu: goto label_17ed7c;
        case 0x17ed80u: goto label_17ed80;
        case 0x17ed84u: goto label_17ed84;
        case 0x17ed88u: goto label_17ed88;
        case 0x17ed8cu: goto label_17ed8c;
        case 0x17ed90u: goto label_17ed90;
        case 0x17ed94u: goto label_17ed94;
        case 0x17ed98u: goto label_17ed98;
        case 0x17ed9cu: goto label_17ed9c;
        case 0x17eda0u: goto label_17eda0;
        case 0x17eda4u: goto label_17eda4;
        case 0x17eda8u: goto label_17eda8;
        case 0x17edacu: goto label_17edac;
        case 0x17edb0u: goto label_17edb0;
        case 0x17edb4u: goto label_17edb4;
        case 0x17edb8u: goto label_17edb8;
        case 0x17edbcu: goto label_17edbc;
        case 0x17edc0u: goto label_17edc0;
        case 0x17edc4u: goto label_17edc4;
        default: break;
    }

    ctx->pc = 0x17ed00u;

label_17ed00:
    // 0x17ed00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17ed04:
    // 0x17ed04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17ed04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17ed08:
    // 0x17ed08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ed0c:
    // 0x17ed0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17ed10:
    // 0x17ed10: 0xc06ddac  jal         func_1B76B0
label_17ed14:
    if (ctx->pc == 0x17ED14u) {
        ctx->pc = 0x17ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED10u;
        // 0x17ed14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED18u;
        goto label_17ed18;
    }
    ctx->pc = 0x17ED10u;
    SET_GPR_U32(ctx, 31, 0x17ED18u);
    ctx->pc = 0x17ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED10u;
    // 0x17ed14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17ED10u, 0x17ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED18u;
label_17ed18:
    // 0x17ed18: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_17ed1c:
    if (ctx->pc == 0x17ED1Cu) {
        ctx->pc = 0x17ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED18u;
        // 0x17ed1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED20u;
        goto label_17ed20;
    }
    ctx->pc = 0x17ED18u;
    {
        const bool branch_taken_0x17ed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED18u;
        // 0x17ed1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed18) {
            ctx->pc = 0x17EDB4u;
            goto label_17edb4;
        }
    }
    ctx->pc = 0x17ED20u;
label_17ed20:
    // 0x17ed20: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17ed20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17ed24:
    // 0x17ed24: 0x2446da88  addiu       $a2, $v0, -0x2578
    ctx->pc = 0x17ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957704));
label_17ed28:
    // 0x17ed28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ed28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ed2c:
    // 0x17ed2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17ed30:
    // 0x17ed30: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17ed34:
    // 0x17ed34: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17ed34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17ed38:
    // 0x17ed38: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17ed3c:
    if (ctx->pc == 0x17ED3Cu) {
        ctx->pc = 0x17ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED38u;
        // 0x17ed3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED40u;
        goto label_17ed40;
    }
    ctx->pc = 0x17ED38u;
    {
        const bool branch_taken_0x17ed38 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED38u;
        // 0x17ed3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed38) {
            ctx->pc = 0x17ED64u;
            goto label_17ed64;
        }
    }
    ctx->pc = 0x17ED40u;
label_17ed40:
    // 0x17ed40: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17ed44:
    // 0x17ed44: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17ed48:
    // 0x17ed48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17ed4c:
    // 0x17ed4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17ed50:
    // 0x17ed50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ed54:
    // 0x17ed54: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17ed54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17ed58:
    // 0x17ed58: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17ed58u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17ed5c:
    // 0x17ed5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17ed60:
    if (ctx->pc == 0x17ED60u) {
        ctx->pc = 0x17ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED5Cu;
        // 0x17ed60: 0x2503da88  addiu       $v1, $t0, -0x2578 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED64u;
        goto label_17ed64;
    }
    ctx->pc = 0x17ED5Cu;
    {
        const bool branch_taken_0x17ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED5Cu;
        // 0x17ed60: 0x2503da88  addiu       $v1, $t0, -0x2578 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed5c) {
            ctx->pc = 0x17ED70u;
            goto label_17ed70;
        }
    }
    ctx->pc = 0x17ED64u;
label_17ed64:
    // 0x17ed64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17ed68:
    // 0x17ed68: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17ed6c:
    // 0x17ed6c: 0x2503da88  addiu       $v1, $t0, -0x2578
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957704));
label_17ed70:
    // 0x17ed70: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17ed74:
    // 0x17ed74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ed78:
    // 0x17ed78: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17ed7c:
    if (ctx->pc == 0x17ED7Cu) {
        ctx->pc = 0x17ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED78u;
        // 0x17ed7c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED80u;
        goto label_17ed80;
    }
    ctx->pc = 0x17ED78u;
    {
        const bool branch_taken_0x17ed78 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED78u;
        // 0x17ed7c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed78) {
            ctx->pc = 0x17ED94u;
            goto label_17ed94;
        }
    }
    ctx->pc = 0x17ED80u;
label_17ed80:
    // 0x17ed80: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17ed84:
    // 0x17ed84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17ed88:
    // 0x17ed88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17ed8c:
    // 0x17ed8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17ed90:
    if (ctx->pc == 0x17ED90u) {
        ctx->pc = 0x17ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED8Cu;
        // 0x17ed90: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ED94u;
        goto label_17ed94;
    }
    ctx->pc = 0x17ED8Cu;
    {
        const bool branch_taken_0x17ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED8Cu;
        // 0x17ed90: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed8c) {
            ctx->pc = 0x17ED98u;
            goto label_17ed98;
        }
    }
    ctx->pc = 0x17ED94u;
label_17ed94:
    // 0x17ed94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17ed94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17ed98:
    // 0x17ed98: 0xc0f809  jalr        $a2
label_17ed9c:
    if (ctx->pc == 0x17ED9Cu) {
        ctx->pc = 0x17ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED98u;
        // 0x17ed9c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EDA0u;
        goto label_17eda0;
    }
    ctx->pc = 0x17ED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17EDA0u);
        ctx->pc = 0x17ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED98u;
        // 0x17ed9c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED98u, 0x17EDA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17EDA0u;
label_17eda0:
    // 0x17eda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17eda4:
    // 0x17eda4: 0xc0aa1fa  jal         func_2A87E8
label_17eda8:
    if (ctx->pc == 0x17EDA8u) {
        ctx->pc = 0x17EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDA4u;
        // 0x17eda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EDACu;
        goto label_17edac;
    }
    ctx->pc = 0x17EDA4u;
    SET_GPR_U32(ctx, 31, 0x17EDACu);
    ctx->pc = 0x17EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDA4u;
    // 0x17eda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x17EDA4u, 0x17EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDACu;
label_17edac:
    // 0x17edac: 0xc06ddb6  jal         func_1B76D8
label_17edb0:
    if (ctx->pc == 0x17EDB0u) {
        ctx->pc = 0x17EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDACu;
        // 0x17edb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EDB4u;
        goto label_17edb4;
    }
    ctx->pc = 0x17EDACu;
    SET_GPR_U32(ctx, 31, 0x17EDB4u);
    ctx->pc = 0x17EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDACu;
    // 0x17edb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17EDACu, 0x17EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDB4u;
label_17edb4:
    // 0x17edb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17edb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17edb8:
    // 0x17edb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17edb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17edbc:
    // 0x17edbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17edbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17edc0:
    // 0x17edc0: 0x3e00008  jr          $ra
label_17edc4:
    if (ctx->pc == 0x17EDC4u) {
        ctx->pc = 0x17EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDC0u;
        // 0x17edc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EDC8u;
        goto label_fallthrough_0x17edc0;
    }
    ctx->pc = 0x17EDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDC0u;
        // 0x17edc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17edc0:
    ctx->pc = 0x17EDC8u;
}
