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

// Function: func_001A8A70
// Address: 0x1a8a70 - 0x1a8b38
void func_001A8A70_0x1a8a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8A70_0x1a8a70");
#endif

    switch (ctx->pc) {
        case 0x1a8a70u: goto label_1a8a70;
        case 0x1a8a74u: goto label_1a8a74;
        case 0x1a8a78u: goto label_1a8a78;
        case 0x1a8a7cu: goto label_1a8a7c;
        case 0x1a8a80u: goto label_1a8a80;
        case 0x1a8a84u: goto label_1a8a84;
        case 0x1a8a88u: goto label_1a8a88;
        case 0x1a8a8cu: goto label_1a8a8c;
        case 0x1a8a90u: goto label_1a8a90;
        case 0x1a8a94u: goto label_1a8a94;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8a9cu: goto label_1a8a9c;
        case 0x1a8aa0u: goto label_1a8aa0;
        case 0x1a8aa4u: goto label_1a8aa4;
        case 0x1a8aa8u: goto label_1a8aa8;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8ab0u: goto label_1a8ab0;
        case 0x1a8ab4u: goto label_1a8ab4;
        case 0x1a8ab8u: goto label_1a8ab8;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8ac0u: goto label_1a8ac0;
        case 0x1a8ac4u: goto label_1a8ac4;
        case 0x1a8ac8u: goto label_1a8ac8;
        case 0x1a8accu: goto label_1a8acc;
        case 0x1a8ad0u: goto label_1a8ad0;
        case 0x1a8ad4u: goto label_1a8ad4;
        case 0x1a8ad8u: goto label_1a8ad8;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8ae0u: goto label_1a8ae0;
        case 0x1a8ae4u: goto label_1a8ae4;
        case 0x1a8ae8u: goto label_1a8ae8;
        case 0x1a8aecu: goto label_1a8aec;
        case 0x1a8af0u: goto label_1a8af0;
        case 0x1a8af4u: goto label_1a8af4;
        case 0x1a8af8u: goto label_1a8af8;
        case 0x1a8afcu: goto label_1a8afc;
        case 0x1a8b00u: goto label_1a8b00;
        case 0x1a8b04u: goto label_1a8b04;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b0cu: goto label_1a8b0c;
        case 0x1a8b10u: goto label_1a8b10;
        case 0x1a8b14u: goto label_1a8b14;
        case 0x1a8b18u: goto label_1a8b18;
        case 0x1a8b1cu: goto label_1a8b1c;
        case 0x1a8b20u: goto label_1a8b20;
        case 0x1a8b24u: goto label_1a8b24;
        case 0x1a8b28u: goto label_1a8b28;
        case 0x1a8b2cu: goto label_1a8b2c;
        case 0x1a8b30u: goto label_1a8b30;
        case 0x1a8b34u: goto label_1a8b34;
        default: break;
    }

    ctx->pc = 0x1a8a70u;

label_1a8a70:
    // 0x1a8a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a8a74:
    // 0x1a8a74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a8a78:
    // 0x1a8a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a8a7c:
    // 0x1a8a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8a80:
    // 0x1a8a80: 0xc06ddac  jal         func_1B76B0
label_1a8a84:
    if (ctx->pc == 0x1A8A84u) {
        ctx->pc = 0x1A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A80u;
        // 0x1a8a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A88u;
        goto label_1a8a88;
    }
    ctx->pc = 0x1A8A80u;
    SET_GPR_U32(ctx, 31, 0x1A8A88u);
    ctx->pc = 0x1A8A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A80u;
    // 0x1a8a84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A8A80u, 0x1A8A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A88u;
label_1a8a88:
    // 0x1a8a88: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1a8a8c:
    if (ctx->pc == 0x1A8A8Cu) {
        ctx->pc = 0x1A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A88u;
        // 0x1a8a8c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A90u;
        goto label_1a8a90;
    }
    ctx->pc = 0x1A8A88u;
    {
        const bool branch_taken_0x1a8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A88u;
        // 0x1a8a8c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8a88) {
            ctx->pc = 0x1A8B24u;
            goto label_1a8b24;
        }
    }
    ctx->pc = 0x1A8A90u;
label_1a8a90:
    // 0x1a8a90: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a8a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a8a94:
    // 0x1a8a94: 0x2446dbf0  addiu       $a2, $v0, -0x2410
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
label_1a8a98:
    // 0x1a8a98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a8a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a9c:
    // 0x1a8a9c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8aa0:
    // 0x1a8aa0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a8aa4:
    // 0x1a8aa4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a8aa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a8aa8:
    // 0x1a8aa8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a8aac:
    if (ctx->pc == 0x1A8AACu) {
        ctx->pc = 0x1A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AA8u;
        // 0x1a8aac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AB0u;
        goto label_1a8ab0;
    }
    ctx->pc = 0x1A8AA8u;
    {
        const bool branch_taken_0x1a8aa8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AA8u;
        // 0x1a8aac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8aa8) {
            ctx->pc = 0x1A8AD4u;
            goto label_1a8ad4;
        }
    }
    ctx->pc = 0x1A8AB0u;
label_1a8ab0:
    // 0x1a8ab0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a8ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a8ab4:
    // 0x1a8ab4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a8ab8:
    // 0x1a8ab8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8abc:
    // 0x1a8abc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8ac0:
    // 0x1a8ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8ac4:
    // 0x1a8ac4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a8ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a8ac8:
    // 0x1a8ac8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a8ac8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a8acc:
    // 0x1a8acc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8ad0:
    if (ctx->pc == 0x1A8AD0u) {
        ctx->pc = 0x1A8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ACCu;
        // 0x1a8ad0: 0x2503dbf0  addiu       $v1, $t0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AD4u;
        goto label_1a8ad4;
    }
    ctx->pc = 0x1A8ACCu;
    {
        const bool branch_taken_0x1a8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8ACCu;
        // 0x1a8ad0: 0x2503dbf0  addiu       $v1, $t0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8acc) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A8AD4u;
label_1a8ad4:
    // 0x1a8ad4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a8ad8:
    // 0x1a8ad8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a8ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8adc:
    // 0x1a8adc: 0x2503dbf0  addiu       $v1, $t0, -0x2410
    ctx->pc = 0x1a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958064));
label_1a8ae0:
    // 0x1a8ae0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a8ae4:
    // 0x1a8ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8ae8:
    // 0x1a8ae8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a8aec:
    if (ctx->pc == 0x1A8AECu) {
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8AF0u;
        goto label_1a8af0;
    }
    ctx->pc = 0x1A8AE8u;
    {
        const bool branch_taken_0x1a8ae8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AE8u;
        // 0x1a8aec: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ae8) {
            ctx->pc = 0x1A8B04u;
            goto label_1a8b04;
        }
    }
    ctx->pc = 0x1A8AF0u;
label_1a8af0:
    // 0x1a8af0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a8af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a8af4:
    // 0x1a8af4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a8af8:
    // 0x1a8af8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a8af8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a8afc:
    // 0x1a8afc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a8b00:
    if (ctx->pc == 0x1A8B00u) {
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B04u;
        goto label_1a8b04;
    }
    ctx->pc = 0x1A8AFCu;
    {
        const bool branch_taken_0x1a8afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AFCu;
        // 0x1a8b00: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8afc) {
            ctx->pc = 0x1A8B08u;
            goto label_1a8b08;
        }
    }
    ctx->pc = 0x1A8B04u;
label_1a8b04:
    // 0x1a8b04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a8b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b08:
    // 0x1a8b08: 0xc0f809  jalr        $a2
label_1a8b0c:
    if (ctx->pc == 0x1A8B0Cu) {
        ctx->pc = 0x1A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B08u;
        // 0x1a8b0c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B10u;
        goto label_1a8b10;
    }
    ctx->pc = 0x1A8B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A8B10u);
        ctx->pc = 0x1A8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B08u;
        // 0x1a8b0c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B08u, 0x1A8B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8B10u;
label_1a8b10:
    // 0x1a8b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b14:
    // 0x1a8b14: 0xc0aa1fa  jal         func_2A87E8
label_1a8b18:
    if (ctx->pc == 0x1A8B18u) {
        ctx->pc = 0x1A8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B14u;
        // 0x1a8b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B1Cu;
        goto label_1a8b1c;
    }
    ctx->pc = 0x1A8B14u;
    SET_GPR_U32(ctx, 31, 0x1A8B1Cu);
    ctx->pc = 0x1A8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B14u;
    // 0x1a8b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1A8B14u, 0x1A8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B1Cu;
label_1a8b1c:
    // 0x1a8b1c: 0xc06ddb6  jal         func_1B76D8
label_1a8b20:
    if (ctx->pc == 0x1A8B20u) {
        ctx->pc = 0x1A8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B1Cu;
        // 0x1a8b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B24u;
        goto label_1a8b24;
    }
    ctx->pc = 0x1A8B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B24u);
    ctx->pc = 0x1A8B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B1Cu;
    // 0x1a8b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A8B1Cu, 0x1A8B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B24u;
label_1a8b24:
    // 0x1a8b24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a8b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8b28:
    // 0x1a8b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8b2c:
    // 0x1a8b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8b30:
    // 0x1a8b30: 0x3e00008  jr          $ra
label_1a8b34:
    if (ctx->pc == 0x1A8B34u) {
        ctx->pc = 0x1A8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B30u;
        // 0x1a8b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8B38u;
        goto label_fallthrough_0x1a8b30;
    }
    ctx->pc = 0x1A8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B30u;
        // 0x1a8b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a8b30:
    ctx->pc = 0x1A8B38u;
}
