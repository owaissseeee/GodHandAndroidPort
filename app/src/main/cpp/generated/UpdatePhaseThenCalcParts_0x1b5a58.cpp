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

// Function: UpdatePhaseThenCalcParts
// Address: 0x1b5a58 - 0x1b5b30
void UpdatePhaseThenCalcParts_0x1b5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseThenCalcParts_0x1b5a58");
#endif

    switch (ctx->pc) {
        case 0x1b5a58u: goto label_1b5a58;
        case 0x1b5a5cu: goto label_1b5a5c;
        case 0x1b5a60u: goto label_1b5a60;
        case 0x1b5a64u: goto label_1b5a64;
        case 0x1b5a68u: goto label_1b5a68;
        case 0x1b5a6cu: goto label_1b5a6c;
        case 0x1b5a70u: goto label_1b5a70;
        case 0x1b5a74u: goto label_1b5a74;
        case 0x1b5a78u: goto label_1b5a78;
        case 0x1b5a7cu: goto label_1b5a7c;
        case 0x1b5a80u: goto label_1b5a80;
        case 0x1b5a84u: goto label_1b5a84;
        case 0x1b5a88u: goto label_1b5a88;
        case 0x1b5a8cu: goto label_1b5a8c;
        case 0x1b5a90u: goto label_1b5a90;
        case 0x1b5a94u: goto label_1b5a94;
        case 0x1b5a98u: goto label_1b5a98;
        case 0x1b5a9cu: goto label_1b5a9c;
        case 0x1b5aa0u: goto label_1b5aa0;
        case 0x1b5aa4u: goto label_1b5aa4;
        case 0x1b5aa8u: goto label_1b5aa8;
        case 0x1b5aacu: goto label_1b5aac;
        case 0x1b5ab0u: goto label_1b5ab0;
        case 0x1b5ab4u: goto label_1b5ab4;
        case 0x1b5ab8u: goto label_1b5ab8;
        case 0x1b5abcu: goto label_1b5abc;
        case 0x1b5ac0u: goto label_1b5ac0;
        case 0x1b5ac4u: goto label_1b5ac4;
        case 0x1b5ac8u: goto label_1b5ac8;
        case 0x1b5accu: goto label_1b5acc;
        case 0x1b5ad0u: goto label_1b5ad0;
        case 0x1b5ad4u: goto label_1b5ad4;
        case 0x1b5ad8u: goto label_1b5ad8;
        case 0x1b5adcu: goto label_1b5adc;
        case 0x1b5ae0u: goto label_1b5ae0;
        case 0x1b5ae4u: goto label_1b5ae4;
        case 0x1b5ae8u: goto label_1b5ae8;
        case 0x1b5aecu: goto label_1b5aec;
        case 0x1b5af0u: goto label_1b5af0;
        case 0x1b5af4u: goto label_1b5af4;
        case 0x1b5af8u: goto label_1b5af8;
        case 0x1b5afcu: goto label_1b5afc;
        case 0x1b5b00u: goto label_1b5b00;
        case 0x1b5b04u: goto label_1b5b04;
        case 0x1b5b08u: goto label_1b5b08;
        case 0x1b5b0cu: goto label_1b5b0c;
        case 0x1b5b10u: goto label_1b5b10;
        case 0x1b5b14u: goto label_1b5b14;
        case 0x1b5b18u: goto label_1b5b18;
        case 0x1b5b1cu: goto label_1b5b1c;
        case 0x1b5b20u: goto label_1b5b20;
        case 0x1b5b24u: goto label_1b5b24;
        case 0x1b5b28u: goto label_1b5b28;
        case 0x1b5b2cu: goto label_1b5b2c;
        default: break;
    }

    ctx->pc = 0x1b5a58u;

label_1b5a58:
    // 0x1b5a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5a5c:
    // 0x1b5a5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b5a60:
    // 0x1b5a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b5a64:
    // 0x1b5a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b5a68:
    // 0x1b5a68: 0xc06ddac  jal         func_1B76B0
label_1b5a6c:
    if (ctx->pc == 0x1B5A6Cu) {
        ctx->pc = 0x1B5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A68u;
        // 0x1b5a6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A70u;
        goto label_1b5a70;
    }
    ctx->pc = 0x1B5A68u;
    SET_GPR_U32(ctx, 31, 0x1B5A70u);
    ctx->pc = 0x1B5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5A68u;
    // 0x1b5a6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B5A68u, 0x1B5A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5A70u;
label_1b5a70:
    // 0x1b5a70: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1b5a74:
    if (ctx->pc == 0x1B5A74u) {
        ctx->pc = 0x1B5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A70u;
        // 0x1b5a74: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A78u;
        goto label_1b5a78;
    }
    ctx->pc = 0x1B5A70u;
    {
        const bool branch_taken_0x1b5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A70u;
        // 0x1b5a74: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a70) {
            ctx->pc = 0x1B5B1Cu;
            goto label_1b5b1c;
        }
    }
    ctx->pc = 0x1B5A78u;
label_1b5a78:
    // 0x1b5a78: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b5a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b5a7c:
    // 0x1b5a7c: 0x2446dd60  addiu       $a2, $v0, -0x22A0
    ctx->pc = 0x1b5a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958432));
label_1b5a80:
    // 0x1b5a80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b5a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5a84:
    // 0x1b5a84: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b5a88:
    // 0x1b5a88: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b5a8c:
    // 0x1b5a8c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b5a8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b5a90:
    // 0x1b5a90: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b5a94:
    if (ctx->pc == 0x1B5A94u) {
        ctx->pc = 0x1B5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A90u;
        // 0x1b5a94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5A98u;
        goto label_1b5a98;
    }
    ctx->pc = 0x1B5A90u;
    {
        const bool branch_taken_0x1b5a90 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A90u;
        // 0x1b5a94: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a90) {
            ctx->pc = 0x1B5ABCu;
            goto label_1b5abc;
        }
    }
    ctx->pc = 0x1B5A98u;
label_1b5a98:
    // 0x1b5a98: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b5a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b5a9c:
    // 0x1b5a9c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b5aa0:
    // 0x1b5aa0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b5aa4:
    // 0x1b5aa4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5aa8:
    // 0x1b5aa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b5aac:
    // 0x1b5aac: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b5ab0:
    // 0x1b5ab0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b5ab0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b5ab4:
    // 0x1b5ab4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b5ab8:
    if (ctx->pc == 0x1B5AB8u) {
        ctx->pc = 0x1B5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AB4u;
        // 0x1b5ab8: 0x2503dd60  addiu       $v1, $t0, -0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5ABCu;
        goto label_1b5abc;
    }
    ctx->pc = 0x1B5AB4u;
    {
        const bool branch_taken_0x1b5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AB4u;
        // 0x1b5ab8: 0x2503dd60  addiu       $v1, $t0, -0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ab4) {
            ctx->pc = 0x1B5AC8u;
            goto label_1b5ac8;
        }
    }
    ctx->pc = 0x1B5ABCu;
label_1b5abc:
    // 0x1b5abc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b5ac0:
    // 0x1b5ac0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b5ac4:
    // 0x1b5ac4: 0x2503dd60  addiu       $v1, $t0, -0x22A0
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958432));
label_1b5ac8:
    // 0x1b5ac8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b5acc:
    // 0x1b5acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5ad0:
    // 0x1b5ad0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b5ad4:
    if (ctx->pc == 0x1B5AD4u) {
        ctx->pc = 0x1B5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD0u;
        // 0x1b5ad4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AD8u;
        goto label_1b5ad8;
    }
    ctx->pc = 0x1B5AD0u;
    {
        const bool branch_taken_0x1b5ad0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AD0u;
        // 0x1b5ad4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ad0) {
            ctx->pc = 0x1B5AECu;
            goto label_1b5aec;
        }
    }
    ctx->pc = 0x1B5AD8u;
label_1b5ad8:
    // 0x1b5ad8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b5ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b5adc:
    // 0x1b5adc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b5ae0:
    // 0x1b5ae0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b5ae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b5ae4:
    // 0x1b5ae4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b5ae8:
    if (ctx->pc == 0x1B5AE8u) {
        ctx->pc = 0x1B5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AE4u;
        // 0x1b5ae8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AECu;
        goto label_1b5aec;
    }
    ctx->pc = 0x1B5AE4u;
    {
        const bool branch_taken_0x1b5ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AE4u;
        // 0x1b5ae8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ae4) {
            ctx->pc = 0x1B5AF0u;
            goto label_1b5af0;
        }
    }
    ctx->pc = 0x1B5AECu;
label_1b5aec:
    // 0x1b5aec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b5aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b5af0:
    // 0x1b5af0: 0xc0f809  jalr        $a2
label_1b5af4:
    if (ctx->pc == 0x1B5AF4u) {
        ctx->pc = 0x1B5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AF0u;
        // 0x1b5af4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5AF8u;
        goto label_1b5af8;
    }
    ctx->pc = 0x1B5AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B5AF8u);
        ctx->pc = 0x1B5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AF0u;
        // 0x1b5af4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5AF0u, 0x1B5AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5AF8u;
label_1b5af8:
    // 0x1b5af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5afc:
    // 0x1b5afc: 0xc0aa1fa  jal         func_2A87E8
label_1b5b00:
    if (ctx->pc == 0x1B5B00u) {
        ctx->pc = 0x1B5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AFCu;
        // 0x1b5b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B04u;
        goto label_1b5b04;
    }
    ctx->pc = 0x1B5AFCu;
    SET_GPR_U32(ctx, 31, 0x1B5B04u);
    ctx->pc = 0x1B5B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5AFCu;
    // 0x1b5b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B5AFCu, 0x1B5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B04u;
label_1b5b04:
    // 0x1b5b04: 0xc0527ae  jal         func_149EB8
label_1b5b08:
    if (ctx->pc == 0x1B5B08u) {
        ctx->pc = 0x1B5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B04u;
        // 0x1b5b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B0Cu;
        goto label_1b5b0c;
    }
    ctx->pc = 0x1B5B04u;
    SET_GPR_U32(ctx, 31, 0x1B5B0Cu);
    ctx->pc = 0x1B5B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B04u;
    // 0x1b5b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1B5B04u, 0x1B5B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B0Cu;
label_1b5b0c:
    // 0x1b5b0c: 0xc05280e  jal         func_14A038
label_1b5b10:
    if (ctx->pc == 0x1B5B10u) {
        ctx->pc = 0x1B5B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B0Cu;
        // 0x1b5b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B14u;
        goto label_1b5b14;
    }
    ctx->pc = 0x1B5B0Cu;
    SET_GPR_U32(ctx, 31, 0x1B5B14u);
    ctx->pc = 0x1B5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B0Cu;
    // 0x1b5b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x1B5B0Cu, 0x1B5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B14u;
label_1b5b14:
    // 0x1b5b14: 0xc06ddb6  jal         func_1B76D8
label_1b5b18:
    if (ctx->pc == 0x1B5B18u) {
        ctx->pc = 0x1B5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B14u;
        // 0x1b5b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B1Cu;
        goto label_1b5b1c;
    }
    ctx->pc = 0x1B5B14u;
    SET_GPR_U32(ctx, 31, 0x1B5B1Cu);
    ctx->pc = 0x1B5B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5B14u;
    // 0x1b5b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B5B14u, 0x1B5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5B1Cu;
label_1b5b1c:
    // 0x1b5b1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b5b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5b20:
    // 0x1b5b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5b24:
    // 0x1b5b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5b28:
    // 0x1b5b28: 0x3e00008  jr          $ra
label_1b5b2c:
    if (ctx->pc == 0x1B5B2Cu) {
        ctx->pc = 0x1B5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B28u;
        // 0x1b5b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5B30u;
        goto label_fallthrough_0x1b5b28;
    }
    ctx->pc = 0x1B5B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B28u;
        // 0x1b5b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5b28:
    ctx->pc = 0x1B5B30u;
}
