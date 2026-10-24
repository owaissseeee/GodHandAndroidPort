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

// Function: func_001A6E00
// Address: 0x1a6e00 - 0x1a6ec0
void func_001A6E00_0x1a6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6E00_0x1a6e00");
#endif

    switch (ctx->pc) {
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e04u: goto label_1a6e04;
        case 0x1a6e08u: goto label_1a6e08;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e14u: goto label_1a6e14;
        case 0x1a6e18u: goto label_1a6e18;
        case 0x1a6e1cu: goto label_1a6e1c;
        case 0x1a6e20u: goto label_1a6e20;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e28u: goto label_1a6e28;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e34u: goto label_1a6e34;
        case 0x1a6e38u: goto label_1a6e38;
        case 0x1a6e3cu: goto label_1a6e3c;
        case 0x1a6e40u: goto label_1a6e40;
        case 0x1a6e44u: goto label_1a6e44;
        case 0x1a6e48u: goto label_1a6e48;
        case 0x1a6e4cu: goto label_1a6e4c;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        default: break;
    }

    ctx->pc = 0x1a6e00u;

label_1a6e00:
    // 0x1a6e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a6e04:
    // 0x1a6e04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a6e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a6e08:
    // 0x1a6e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a6e0c:
    // 0x1a6e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e10:
    // 0x1a6e10: 0xc06ddac  jal         func_1B76B0
label_1a6e14:
    if (ctx->pc == 0x1A6E14u) {
        ctx->pc = 0x1A6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E10u;
        // 0x1a6e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E18u;
        goto label_1a6e18;
    }
    ctx->pc = 0x1A6E10u;
    SET_GPR_U32(ctx, 31, 0x1A6E18u);
    ctx->pc = 0x1A6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E10u;
    // 0x1a6e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A6E10u, 0x1A6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E18u;
label_1a6e18:
    // 0x1a6e18: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1a6e1c:
    if (ctx->pc == 0x1A6E1Cu) {
        ctx->pc = 0x1A6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E18u;
        // 0x1a6e1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E20u;
        goto label_1a6e20;
    }
    ctx->pc = 0x1A6E18u;
    {
        const bool branch_taken_0x1a6e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E18u;
        // 0x1a6e1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e18) {
            ctx->pc = 0x1A6EA8u;
            goto label_1a6ea8;
        }
    }
    ctx->pc = 0x1A6E20u;
label_1a6e20:
    // 0x1a6e20: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a6e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a6e24:
    // 0x1a6e24: 0x2446dbb0  addiu       $a2, $v0, -0x2450
    ctx->pc = 0x1a6e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958000));
label_1a6e28:
    // 0x1a6e28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a6e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e2c:
    // 0x1a6e2c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a6e30:
    // 0x1a6e30: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a6e34:
    // 0x1a6e34: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a6e34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a6e38:
    // 0x1a6e38: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a6e3c:
    if (ctx->pc == 0x1A6E3Cu) {
        ctx->pc = 0x1A6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E38u;
        // 0x1a6e3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E40u;
        goto label_1a6e40;
    }
    ctx->pc = 0x1A6E38u;
    {
        const bool branch_taken_0x1a6e38 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E38u;
        // 0x1a6e3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e38) {
            ctx->pc = 0x1A6E64u;
            goto label_1a6e64;
        }
    }
    ctx->pc = 0x1A6E40u;
label_1a6e40:
    // 0x1a6e40: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a6e44:
    // 0x1a6e44: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a6e48:
    // 0x1a6e48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a6e4c:
    // 0x1a6e4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6e50:
    // 0x1a6e50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a6e54:
    // 0x1a6e54: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a6e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a6e58:
    // 0x1a6e58: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a6e58u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a6e5c:
    // 0x1a6e5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6e60:
    if (ctx->pc == 0x1A6E60u) {
        ctx->pc = 0x1A6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E5Cu;
        // 0x1a6e60: 0x2503dbb0  addiu       $v1, $t0, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E64u;
        goto label_1a6e64;
    }
    ctx->pc = 0x1A6E5Cu;
    {
        const bool branch_taken_0x1a6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E5Cu;
        // 0x1a6e60: 0x2503dbb0  addiu       $v1, $t0, -0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e5c) {
            ctx->pc = 0x1A6E70u;
            goto label_1a6e70;
        }
    }
    ctx->pc = 0x1A6E64u;
label_1a6e64:
    // 0x1a6e64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a6e68:
    // 0x1a6e68: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6e6c:
    // 0x1a6e6c: 0x2503dbb0  addiu       $v1, $t0, -0x2450
    ctx->pc = 0x1a6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958000));
label_1a6e70:
    // 0x1a6e70: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a6e74:
    // 0x1a6e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6e78:
    // 0x1a6e78: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a6e7c:
    if (ctx->pc == 0x1A6E7Cu) {
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E80u;
        goto label_1a6e80;
    }
    ctx->pc = 0x1A6E78u;
    {
        const bool branch_taken_0x1a6e78 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e78) {
            ctx->pc = 0x1A6E94u;
            goto label_1a6e94;
        }
    }
    ctx->pc = 0x1A6E80u;
label_1a6e80:
    // 0x1a6e80: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a6e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a6e84:
    // 0x1a6e84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a6e88:
    // 0x1a6e88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a6e8c:
    // 0x1a6e8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6e90:
    if (ctx->pc == 0x1A6E90u) {
        ctx->pc = 0x1A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E8Cu;
        // 0x1a6e90: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E94u;
        goto label_1a6e94;
    }
    ctx->pc = 0x1A6E8Cu;
    {
        const bool branch_taken_0x1a6e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E8Cu;
        // 0x1a6e90: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e8c) {
            ctx->pc = 0x1A6E98u;
            goto label_1a6e98;
        }
    }
    ctx->pc = 0x1A6E94u;
label_1a6e94:
    // 0x1a6e94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a6e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e98:
    // 0x1a6e98: 0xc0f809  jalr        $a2
label_1a6e9c:
    if (ctx->pc == 0x1A6E9Cu) {
        ctx->pc = 0x1A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E98u;
        // 0x1a6e9c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EA0u;
        goto label_1a6ea0;
    }
    ctx->pc = 0x1A6E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6EA0u);
        ctx->pc = 0x1A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E98u;
        // 0x1a6e9c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E98u, 0x1A6EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6EA0u;
label_1a6ea0:
    // 0x1a6ea0: 0xc06ddb6  jal         func_1B76D8
label_1a6ea4:
    if (ctx->pc == 0x1A6EA4u) {
        ctx->pc = 0x1A6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EA0u;
        // 0x1a6ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EA8u;
        goto label_1a6ea8;
    }
    ctx->pc = 0x1A6EA0u;
    SET_GPR_U32(ctx, 31, 0x1A6EA8u);
    ctx->pc = 0x1A6EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6EA0u;
    // 0x1a6ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A6EA0u, 0x1A6EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EA8u;
label_1a6ea8:
    // 0x1a6ea8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a6ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6eac:
    // 0x1a6eac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6eb0:
    // 0x1a6eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6eb4:
    // 0x1a6eb4: 0x3e00008  jr          $ra
label_1a6eb8:
    if (ctx->pc == 0x1A6EB8u) {
        ctx->pc = 0x1A6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB4u;
        // 0x1a6eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EBCu;
        goto label_1a6ebc;
    }
    ctx->pc = 0x1A6EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB4u;
        // 0x1a6eb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6EBCu;
label_1a6ebc:
    // 0x1a6ebc: 0x0  nop
    ctx->pc = 0x1a6ebcu;
    // NOP
    ctx->pc = 0x1a6ec0u;
}
