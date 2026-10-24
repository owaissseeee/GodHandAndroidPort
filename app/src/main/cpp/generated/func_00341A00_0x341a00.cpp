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

// Function: func_00341A00
// Address: 0x341a00 - 0x341b98
void func_00341A00_0x341a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341A00_0x341a00");
#endif

    switch (ctx->pc) {
        case 0x341a00u: goto label_341a00;
        case 0x341a04u: goto label_341a04;
        case 0x341a08u: goto label_341a08;
        case 0x341a0cu: goto label_341a0c;
        case 0x341a10u: goto label_341a10;
        case 0x341a14u: goto label_341a14;
        case 0x341a18u: goto label_341a18;
        case 0x341a1cu: goto label_341a1c;
        case 0x341a20u: goto label_341a20;
        case 0x341a24u: goto label_341a24;
        case 0x341a28u: goto label_341a28;
        case 0x341a2cu: goto label_341a2c;
        case 0x341a30u: goto label_341a30;
        case 0x341a34u: goto label_341a34;
        case 0x341a38u: goto label_341a38;
        case 0x341a3cu: goto label_341a3c;
        case 0x341a40u: goto label_341a40;
        case 0x341a44u: goto label_341a44;
        case 0x341a48u: goto label_341a48;
        case 0x341a4cu: goto label_341a4c;
        case 0x341a50u: goto label_341a50;
        case 0x341a54u: goto label_341a54;
        case 0x341a58u: goto label_341a58;
        case 0x341a5cu: goto label_341a5c;
        case 0x341a60u: goto label_341a60;
        case 0x341a64u: goto label_341a64;
        case 0x341a68u: goto label_341a68;
        case 0x341a6cu: goto label_341a6c;
        case 0x341a70u: goto label_341a70;
        case 0x341a74u: goto label_341a74;
        case 0x341a78u: goto label_341a78;
        case 0x341a7cu: goto label_341a7c;
        case 0x341a80u: goto label_341a80;
        case 0x341a84u: goto label_341a84;
        case 0x341a88u: goto label_341a88;
        case 0x341a8cu: goto label_341a8c;
        case 0x341a90u: goto label_341a90;
        case 0x341a94u: goto label_341a94;
        case 0x341a98u: goto label_341a98;
        case 0x341a9cu: goto label_341a9c;
        case 0x341aa0u: goto label_341aa0;
        case 0x341aa4u: goto label_341aa4;
        case 0x341aa8u: goto label_341aa8;
        case 0x341aacu: goto label_341aac;
        case 0x341ab0u: goto label_341ab0;
        case 0x341ab4u: goto label_341ab4;
        case 0x341ab8u: goto label_341ab8;
        case 0x341abcu: goto label_341abc;
        case 0x341ac0u: goto label_341ac0;
        case 0x341ac4u: goto label_341ac4;
        case 0x341ac8u: goto label_341ac8;
        case 0x341accu: goto label_341acc;
        case 0x341ad0u: goto label_341ad0;
        case 0x341ad4u: goto label_341ad4;
        case 0x341ad8u: goto label_341ad8;
        case 0x341adcu: goto label_341adc;
        case 0x341ae0u: goto label_341ae0;
        case 0x341ae4u: goto label_341ae4;
        case 0x341ae8u: goto label_341ae8;
        case 0x341aecu: goto label_341aec;
        case 0x341af0u: goto label_341af0;
        case 0x341af4u: goto label_341af4;
        case 0x341af8u: goto label_341af8;
        case 0x341afcu: goto label_341afc;
        case 0x341b00u: goto label_341b00;
        case 0x341b04u: goto label_341b04;
        case 0x341b08u: goto label_341b08;
        case 0x341b0cu: goto label_341b0c;
        case 0x341b10u: goto label_341b10;
        case 0x341b14u: goto label_341b14;
        case 0x341b18u: goto label_341b18;
        case 0x341b1cu: goto label_341b1c;
        case 0x341b20u: goto label_341b20;
        case 0x341b24u: goto label_341b24;
        case 0x341b28u: goto label_341b28;
        case 0x341b2cu: goto label_341b2c;
        case 0x341b30u: goto label_341b30;
        case 0x341b34u: goto label_341b34;
        case 0x341b38u: goto label_341b38;
        case 0x341b3cu: goto label_341b3c;
        case 0x341b40u: goto label_341b40;
        case 0x341b44u: goto label_341b44;
        case 0x341b48u: goto label_341b48;
        case 0x341b4cu: goto label_341b4c;
        case 0x341b50u: goto label_341b50;
        case 0x341b54u: goto label_341b54;
        case 0x341b58u: goto label_341b58;
        case 0x341b5cu: goto label_341b5c;
        case 0x341b60u: goto label_341b60;
        case 0x341b64u: goto label_341b64;
        case 0x341b68u: goto label_341b68;
        case 0x341b6cu: goto label_341b6c;
        case 0x341b70u: goto label_341b70;
        case 0x341b74u: goto label_341b74;
        case 0x341b78u: goto label_341b78;
        case 0x341b7cu: goto label_341b7c;
        case 0x341b80u: goto label_341b80;
        case 0x341b84u: goto label_341b84;
        case 0x341b88u: goto label_341b88;
        case 0x341b8cu: goto label_341b8c;
        case 0x341b90u: goto label_341b90;
        case 0x341b94u: goto label_341b94;
        default: break;
    }

    ctx->pc = 0x341a00u;

label_341a00:
    // 0x341a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341a04:
    // 0x341a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341a08:
    // 0x341a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_341a0c:
    // 0x341a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341a10:
    // 0x341a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_341a14:
    // 0x341a14: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x341a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_341a18:
    // 0x341a18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_341a1c:
    // 0x341a1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x341a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_341a20:
    // 0x341a20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x341a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341a24:
    // 0x341a24: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_341a28:
    if (ctx->pc == 0x341A28u) {
        ctx->pc = 0x341A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A24u;
        // 0x341a28: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A2Cu;
        goto label_341a2c;
    }
    ctx->pc = 0x341A24u;
    {
        const bool branch_taken_0x341a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A24u;
        // 0x341a28: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a24) {
            ctx->pc = 0x341B58u;
            goto label_341b58;
        }
    }
    ctx->pc = 0x341A2Cu;
label_341a2c:
    // 0x341a2c: 0xc0cfe9a  jal         func_33FA68
label_341a30:
    if (ctx->pc == 0x341A30u) {
        ctx->pc = 0x341A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A2Cu;
        // 0x341a30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A34u;
        goto label_341a34;
    }
    ctx->pc = 0x341A2Cu;
    SET_GPR_U32(ctx, 31, 0x341A34u);
    ctx->pc = 0x341A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341A2Cu;
    // 0x341a30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x341A2Cu, 0x341A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341A34u;
label_341a34:
    // 0x341a34: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_341a38:
    if (ctx->pc == 0x341A38u) {
        ctx->pc = 0x341A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A34u;
        // 0x341a38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A3Cu;
        goto label_341a3c;
    }
    ctx->pc = 0x341A34u;
    {
        const bool branch_taken_0x341a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341a34) {
            ctx->pc = 0x341A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341A34u;
            // 0x341a38: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B58u;
            goto label_341b58;
        }
    }
    ctx->pc = 0x341A3Cu;
label_341a3c:
    // 0x341a3c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x341a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_341a40:
    // 0x341a40: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x341a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_341a44:
    // 0x341a44: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x341a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_341a48:
    // 0x341a48: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x341a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_341a4c:
    // 0x341a4c: 0x40f809  jalr        $v0
label_341a50:
    if (ctx->pc == 0x341A50u) {
        ctx->pc = 0x341A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A4Cu;
        // 0x341a50: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A54u;
        goto label_341a54;
    }
    ctx->pc = 0x341A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341A54u);
        ctx->pc = 0x341A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A4Cu;
        // 0x341a50: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341A4Cu, 0x341A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341A54u;
label_341a54:
    // 0x341a54: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x341a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341a58:
    // 0x341a58: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x341a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_341a5c:
    // 0x341a5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341a60:
    // 0x341a60: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x341a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_341a64:
    // 0x341a64: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x341a64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_341a68:
    // 0x341a68: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x341a68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341a6c:
    // 0x341a6c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x341a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341a70:
    // 0x341a70: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x341a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_341a74:
    // 0x341a74: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x341a74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_341a78:
    // 0x341a78: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x341a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_341a7c:
    // 0x341a7c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x341a7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341a80:
    // 0x341a80: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x341a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341a84:
    // 0x341a84: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x341a84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_341a88:
    // 0x341a88: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x341a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_341a8c:
    // 0x341a8c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_341a90:
    if (ctx->pc == 0x341A90u) {
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341A94u;
        goto label_341a94;
    }
    ctx->pc = 0x341A8Cu;
    {
        const bool branch_taken_0x341a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x341A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A8Cu;
        // 0x341a90: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a8c) {
            ctx->pc = 0x341B00u;
            goto label_341b00;
        }
    }
    ctx->pc = 0x341A94u;
label_341a94:
    // 0x341a94: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x341a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_341a98:
    // 0x341a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341a9c:
    // 0x341a9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x341a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_341aa0:
    // 0x341aa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341aa4:
    // 0x341aa4: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_341aa8:
    if (ctx->pc == 0x341AA8u) {
        ctx->pc = 0x341AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AA4u;
        // 0x341aa8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AACu;
        goto label_341aac;
    }
    ctx->pc = 0x341AA4u;
    {
        const bool branch_taken_0x341aa4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x341AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AA4u;
        // 0x341aa8: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341aa4) {
            ctx->pc = 0x341B38u;
            goto label_341b38;
        }
    }
    ctx->pc = 0x341AACu;
label_341aac:
    // 0x341aac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x341aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341ab0:
    // 0x341ab0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x341ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_341ab4:
    // 0x341ab4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x341ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_341ab8:
    // 0x341ab8: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x341ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_341abc:
    // 0x341abc: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x341abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_341ac0:
    // 0x341ac0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_341ac4:
    // 0x341ac4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x341ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_341ac8:
    // 0x341ac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x341ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_341acc:
    // 0x341acc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x341accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_341ad0:
    // 0x341ad0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x341ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_341ad4:
    // 0x341ad4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x341ad4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341ad8:
    // 0x341ad8: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x341ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_341adc:
    // 0x341adc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x341adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_341ae0:
    // 0x341ae0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x341ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_341ae4:
    // 0x341ae4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x341ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_341ae8:
    // 0x341ae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x341ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_341aec:
    // 0x341aec: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_341af0:
    if (ctx->pc == 0x341AF0u) {
        ctx->pc = 0x341AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AECu;
        // 0x341af0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AF4u;
        goto label_341af4;
    }
    ctx->pc = 0x341AECu;
    {
        const bool branch_taken_0x341aec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x341AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AECu;
        // 0x341af0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341aec) {
            ctx->pc = 0x341AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341ab0;
        }
    }
    ctx->pc = 0x341AF4u;
label_341af4:
    // 0x341af4: 0x10000010  b           . + 4 + (0x10 << 2)
label_341af8:
    if (ctx->pc == 0x341AF8u) {
        ctx->pc = 0x341AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AF4u;
        // 0x341af8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341AFCu;
        goto label_341afc;
    }
    ctx->pc = 0x341AF4u;
    {
        const bool branch_taken_0x341af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AF4u;
        // 0x341af8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341af4) {
            ctx->pc = 0x341B38u;
            goto label_341b38;
        }
    }
    ctx->pc = 0x341AFCu;
label_341afc:
    // 0x341afc: 0x0  nop
    ctx->pc = 0x341afcu;
    // NOP
label_341b00:
    // 0x341b00: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_341b04:
    if (ctx->pc == 0x341B04u) {
        ctx->pc = 0x341B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B00u;
        // 0x341b04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B08u;
        goto label_341b08;
    }
    ctx->pc = 0x341B00u;
    {
        const bool branch_taken_0x341b00 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x341B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B00u;
        // 0x341b04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b00) {
            ctx->pc = 0x341B38u;
            goto label_341b38;
        }
    }
    ctx->pc = 0x341B08u;
label_341b08:
    // 0x341b08: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x341b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_341b0c:
    // 0x341b0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x341b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_341b10:
    // 0x341b10: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x341b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_341b14:
    // 0x341b14: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x341b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_341b18:
    // 0x341b18: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x341b18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341b1c:
    // 0x341b1c: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x341b1cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341b20:
    // 0x341b20: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x341b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_341b24:
    // 0x341b24: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x341b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_341b28:
    // 0x341b28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x341b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_341b2c:
    // 0x341b2c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_341b30:
    if (ctx->pc == 0x341B30u) {
        ctx->pc = 0x341B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B2Cu;
        // 0x341b30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B34u;
        goto label_341b34;
    }
    ctx->pc = 0x341B2Cu;
    {
        const bool branch_taken_0x341b2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x341B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B2Cu;
        // 0x341b30: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b2c) {
            ctx->pc = 0x341B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341b08;
        }
    }
    ctx->pc = 0x341B34u;
label_341b34:
    // 0x341b34: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x341b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341b38:
    // 0x341b38: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x341b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_341b3c:
    // 0x341b3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341b40:
    // 0x341b40: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_341b44:
    // 0x341b44: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x341b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_341b48:
    // 0x341b48: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x341b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_341b4c:
    // 0x341b4c: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x341b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_341b50:
    // 0x341b50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341b54:
    // 0x341b54: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x341b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_341b58:
    // 0x341b58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341b5c:
    // 0x341b5c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_341b60:
    if (ctx->pc == 0x341B60u) {
        ctx->pc = 0x341B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B5Cu;
        // 0x341b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B64u;
        goto label_341b64;
    }
    ctx->pc = 0x341B5Cu;
    {
        const bool branch_taken_0x341b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341b5c) {
            ctx->pc = 0x341B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B5Cu;
            // 0x341b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B84u;
            goto label_341b84;
        }
    }
    ctx->pc = 0x341B64u;
label_341b64:
    // 0x341b64: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x341b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_341b68:
    // 0x341b68: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x341b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_341b6c:
    // 0x341b6c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x341b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_341b70:
    // 0x341b70: 0x60f809  jalr        $v1
label_341b74:
    if (ctx->pc == 0x341B74u) {
        ctx->pc = 0x341B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B70u;
        // 0x341b74: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B78u;
        goto label_341b78;
    }
    ctx->pc = 0x341B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341B78u);
        ctx->pc = 0x341B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B70u;
        // 0x341b74: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B70u, 0x341B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341B78u;
label_341b78:
    // 0x341b78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341b7c:
    // 0x341b7c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x341b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_341b80:
    // 0x341b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341b84:
    // 0x341b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_341b88:
    // 0x341b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_341b8c:
    // 0x341b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x341b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_341b90:
    // 0x341b90: 0x3e00008  jr          $ra
label_341b94:
    if (ctx->pc == 0x341B94u) {
        ctx->pc = 0x341B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B90u;
        // 0x341b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341B98u;
        goto label_fallthrough_0x341b90;
    }
    ctx->pc = 0x341B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B90u;
        // 0x341b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341b90:
    ctx->pc = 0x341B98u;
}
