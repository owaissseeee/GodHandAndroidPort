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

// Function: func_0033DBD8
// Address: 0x33dbd8 - 0x33dd50
void func_0033DBD8_0x33dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033DBD8_0x33dbd8");
#endif

    switch (ctx->pc) {
        case 0x33dbd8u: goto label_33dbd8;
        case 0x33dbdcu: goto label_33dbdc;
        case 0x33dbe0u: goto label_33dbe0;
        case 0x33dbe4u: goto label_33dbe4;
        case 0x33dbe8u: goto label_33dbe8;
        case 0x33dbecu: goto label_33dbec;
        case 0x33dbf0u: goto label_33dbf0;
        case 0x33dbf4u: goto label_33dbf4;
        case 0x33dbf8u: goto label_33dbf8;
        case 0x33dbfcu: goto label_33dbfc;
        case 0x33dc00u: goto label_33dc00;
        case 0x33dc04u: goto label_33dc04;
        case 0x33dc08u: goto label_33dc08;
        case 0x33dc0cu: goto label_33dc0c;
        case 0x33dc10u: goto label_33dc10;
        case 0x33dc14u: goto label_33dc14;
        case 0x33dc18u: goto label_33dc18;
        case 0x33dc1cu: goto label_33dc1c;
        case 0x33dc20u: goto label_33dc20;
        case 0x33dc24u: goto label_33dc24;
        case 0x33dc28u: goto label_33dc28;
        case 0x33dc2cu: goto label_33dc2c;
        case 0x33dc30u: goto label_33dc30;
        case 0x33dc34u: goto label_33dc34;
        case 0x33dc38u: goto label_33dc38;
        case 0x33dc3cu: goto label_33dc3c;
        case 0x33dc40u: goto label_33dc40;
        case 0x33dc44u: goto label_33dc44;
        case 0x33dc48u: goto label_33dc48;
        case 0x33dc4cu: goto label_33dc4c;
        case 0x33dc50u: goto label_33dc50;
        case 0x33dc54u: goto label_33dc54;
        case 0x33dc58u: goto label_33dc58;
        case 0x33dc5cu: goto label_33dc5c;
        case 0x33dc60u: goto label_33dc60;
        case 0x33dc64u: goto label_33dc64;
        case 0x33dc68u: goto label_33dc68;
        case 0x33dc6cu: goto label_33dc6c;
        case 0x33dc70u: goto label_33dc70;
        case 0x33dc74u: goto label_33dc74;
        case 0x33dc78u: goto label_33dc78;
        case 0x33dc7cu: goto label_33dc7c;
        case 0x33dc80u: goto label_33dc80;
        case 0x33dc84u: goto label_33dc84;
        case 0x33dc88u: goto label_33dc88;
        case 0x33dc8cu: goto label_33dc8c;
        case 0x33dc90u: goto label_33dc90;
        case 0x33dc94u: goto label_33dc94;
        case 0x33dc98u: goto label_33dc98;
        case 0x33dc9cu: goto label_33dc9c;
        case 0x33dca0u: goto label_33dca0;
        case 0x33dca4u: goto label_33dca4;
        case 0x33dca8u: goto label_33dca8;
        case 0x33dcacu: goto label_33dcac;
        case 0x33dcb0u: goto label_33dcb0;
        case 0x33dcb4u: goto label_33dcb4;
        case 0x33dcb8u: goto label_33dcb8;
        case 0x33dcbcu: goto label_33dcbc;
        case 0x33dcc0u: goto label_33dcc0;
        case 0x33dcc4u: goto label_33dcc4;
        case 0x33dcc8u: goto label_33dcc8;
        case 0x33dcccu: goto label_33dccc;
        case 0x33dcd0u: goto label_33dcd0;
        case 0x33dcd4u: goto label_33dcd4;
        case 0x33dcd8u: goto label_33dcd8;
        case 0x33dcdcu: goto label_33dcdc;
        case 0x33dce0u: goto label_33dce0;
        case 0x33dce4u: goto label_33dce4;
        case 0x33dce8u: goto label_33dce8;
        case 0x33dcecu: goto label_33dcec;
        case 0x33dcf0u: goto label_33dcf0;
        case 0x33dcf4u: goto label_33dcf4;
        case 0x33dcf8u: goto label_33dcf8;
        case 0x33dcfcu: goto label_33dcfc;
        case 0x33dd00u: goto label_33dd00;
        case 0x33dd04u: goto label_33dd04;
        case 0x33dd08u: goto label_33dd08;
        case 0x33dd0cu: goto label_33dd0c;
        case 0x33dd10u: goto label_33dd10;
        case 0x33dd14u: goto label_33dd14;
        case 0x33dd18u: goto label_33dd18;
        case 0x33dd1cu: goto label_33dd1c;
        case 0x33dd20u: goto label_33dd20;
        case 0x33dd24u: goto label_33dd24;
        case 0x33dd28u: goto label_33dd28;
        case 0x33dd2cu: goto label_33dd2c;
        case 0x33dd30u: goto label_33dd30;
        case 0x33dd34u: goto label_33dd34;
        case 0x33dd38u: goto label_33dd38;
        case 0x33dd3cu: goto label_33dd3c;
        case 0x33dd40u: goto label_33dd40;
        case 0x33dd44u: goto label_33dd44;
        case 0x33dd48u: goto label_33dd48;
        case 0x33dd4cu: goto label_33dd4c;
        default: break;
    }

    ctx->pc = 0x33dbd8u;

label_33dbd8:
    // 0x33dbd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33dbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33dbdc:
    // 0x33dbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dbe0:
    // 0x33dbe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33dbe4:
    // 0x33dbe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33dbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33dbe8:
    // 0x33dbe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33dbec:
    // 0x33dbec: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x33dbecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_33dbf0:
    // 0x33dbf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33dbf4:
    // 0x33dbf4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33dbf8:
    // 0x33dbf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33dbfc:
    // 0x33dbfc: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_33dc00:
    if (ctx->pc == 0x33DC00u) {
        ctx->pc = 0x33DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBFCu;
        // 0x33dc00: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC04u;
        goto label_33dc04;
    }
    ctx->pc = 0x33DBFCu;
    {
        const bool branch_taken_0x33dbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBFCu;
        // 0x33dc00: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dbfc) {
            ctx->pc = 0x33DD0Cu;
            goto label_33dd0c;
        }
    }
    ctx->pc = 0x33DC04u;
label_33dc04:
    // 0x33dc04: 0xc0cfe9a  jal         func_33FA68
label_33dc08:
    if (ctx->pc == 0x33DC08u) {
        ctx->pc = 0x33DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC04u;
        // 0x33dc08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC0Cu;
        goto label_33dc0c;
    }
    ctx->pc = 0x33DC04u;
    SET_GPR_U32(ctx, 31, 0x33DC0Cu);
    ctx->pc = 0x33DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DC04u;
    // 0x33dc08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33DC04u, 0x33DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DC0Cu;
label_33dc0c:
    // 0x33dc0c: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_33dc10:
    if (ctx->pc == 0x33DC10u) {
        ctx->pc = 0x33DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC0Cu;
        // 0x33dc10: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC14u;
        goto label_33dc14;
    }
    ctx->pc = 0x33DC0Cu;
    {
        const bool branch_taken_0x33dc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dc0c) {
            ctx->pc = 0x33DC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DC0Cu;
            // 0x33dc10: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DD0Cu;
            goto label_33dd0c;
        }
    }
    ctx->pc = 0x33DC14u;
label_33dc14:
    // 0x33dc14: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x33dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_33dc18:
    // 0x33dc18: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x33dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_33dc1c:
    // 0x33dc1c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x33dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_33dc20:
    // 0x33dc20: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x33dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_33dc24:
    // 0x33dc24: 0x40f809  jalr        $v0
label_33dc28:
    if (ctx->pc == 0x33DC28u) {
        ctx->pc = 0x33DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC24u;
        // 0x33dc28: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC2Cu;
        goto label_33dc2c;
    }
    ctx->pc = 0x33DC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33DC2Cu);
        ctx->pc = 0x33DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC24u;
        // 0x33dc28: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC24u, 0x33DC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC2Cu;
label_33dc2c:
    // 0x33dc2c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33dc30:
    // 0x33dc30: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33dc34:
    // 0x33dc34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33dc38:
    // 0x33dc38: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33dc3c:
    // 0x33dc3c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x33dc3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33dc40:
    // 0x33dc40: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x33dc40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33dc44:
    // 0x33dc44: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x33dc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33dc48:
    // 0x33dc48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x33dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33dc4c:
    // 0x33dc4c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x33dc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_33dc50:
    // 0x33dc50: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_33dc54:
    // 0x33dc54: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x33dc54u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33dc58:
    // 0x33dc58: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x33dc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33dc5c:
    // 0x33dc5c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x33dc5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_33dc60:
    // 0x33dc60: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x33dc60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_33dc64:
    // 0x33dc64: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_33dc68:
    if (ctx->pc == 0x33DC68u) {
        ctx->pc = 0x33DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC64u;
        // 0x33dc68: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC6Cu;
        goto label_33dc6c;
    }
    ctx->pc = 0x33DC64u;
    {
        const bool branch_taken_0x33dc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x33DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC64u;
        // 0x33dc68: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc64) {
            ctx->pc = 0x33DCC0u;
            goto label_33dcc0;
        }
    }
    ctx->pc = 0x33DC6Cu;
label_33dc6c:
    // 0x33dc6c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33dc70:
    // 0x33dc70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33dc70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33dc74:
    // 0x33dc74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33dc78:
    // 0x33dc78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33dc7c:
    // 0x33dc7c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_33dc80:
    if (ctx->pc == 0x33DC80u) {
        ctx->pc = 0x33DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC7Cu;
        // 0x33dc80: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC84u;
        goto label_33dc84;
    }
    ctx->pc = 0x33DC7Cu;
    {
        const bool branch_taken_0x33dc7c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC7Cu;
        // 0x33dc80: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc7c) {
            ctx->pc = 0x33DCECu;
            goto label_33dcec;
        }
    }
    ctx->pc = 0x33DC84u;
label_33dc84:
    // 0x33dc84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33dc84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33dc88:
    // 0x33dc88: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x33dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33dc8c:
    // 0x33dc8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33dc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33dc90:
    // 0x33dc90: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x33dc90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_33dc94:
    // 0x33dc94: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x33dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_33dc98:
    // 0x33dc98: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x33dc98u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33dc9c:
    // 0x33dc9c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x33dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_33dca0:
    // 0x33dca0: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x33dca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_33dca4:
    // 0x33dca4: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x33dca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_33dca8:
    // 0x33dca8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x33dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_33dcac:
    // 0x33dcac: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_33dcb0:
    if (ctx->pc == 0x33DCB0u) {
        ctx->pc = 0x33DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCACu;
        // 0x33dcb0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCB4u;
        goto label_33dcb4;
    }
    ctx->pc = 0x33DCACu;
    {
        const bool branch_taken_0x33dcac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCACu;
        // 0x33dcb0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcac) {
            ctx->pc = 0x33DC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dc88;
        }
    }
    ctx->pc = 0x33DCB4u;
label_33dcb4:
    // 0x33dcb4: 0x1000000d  b           . + 4 + (0xD << 2)
label_33dcb8:
    if (ctx->pc == 0x33DCB8u) {
        ctx->pc = 0x33DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCB4u;
        // 0x33dcb8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCBCu;
        goto label_33dcbc;
    }
    ctx->pc = 0x33DCB4u;
    {
        const bool branch_taken_0x33dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCB4u;
        // 0x33dcb8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcb4) {
            ctx->pc = 0x33DCECu;
            goto label_33dcec;
        }
    }
    ctx->pc = 0x33DCBCu;
label_33dcbc:
    // 0x33dcbc: 0x0  nop
    ctx->pc = 0x33dcbcu;
    // NOP
label_33dcc0:
    // 0x33dcc0: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_33dcc4:
    if (ctx->pc == 0x33DCC4u) {
        ctx->pc = 0x33DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCC0u;
        // 0x33dcc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCC8u;
        goto label_33dcc8;
    }
    ctx->pc = 0x33DCC0u;
    {
        const bool branch_taken_0x33dcc0 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCC0u;
        // 0x33dcc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcc0) {
            ctx->pc = 0x33DCECu;
            goto label_33dcec;
        }
    }
    ctx->pc = 0x33DCC8u;
label_33dcc8:
    // 0x33dcc8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x33dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33dccc:
    // 0x33dccc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33dcccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33dcd0:
    // 0x33dcd0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x33dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_33dcd4:
    // 0x33dcd4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x33dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_33dcd8:
    // 0x33dcd8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x33dcd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33dcdc:
    // 0x33dcdc: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x33dcdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33dce0:
    // 0x33dce0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_33dce4:
    if (ctx->pc == 0x33DCE4u) {
        ctx->pc = 0x33DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCE0u;
        // 0x33dce4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DCE8u;
        goto label_33dce8;
    }
    ctx->pc = 0x33DCE0u;
    {
        const bool branch_taken_0x33dce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCE0u;
        // 0x33dce4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dce0) {
            ctx->pc = 0x33DCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dcc8;
        }
    }
    ctx->pc = 0x33DCE8u;
label_33dce8:
    // 0x33dce8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x33dce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33dcec:
    // 0x33dcec: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x33dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_33dcf0:
    // 0x33dcf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33dcf4:
    // 0x33dcf4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33dcf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_33dcf8:
    // 0x33dcf8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33dcfc:
    // 0x33dcfc: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x33dcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33dd00:
    // 0x33dd00: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x33dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_33dd04:
    // 0x33dd04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33dd08:
    // 0x33dd08: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x33dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_33dd0c:
    // 0x33dd0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33dd10:
    // 0x33dd10: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33dd14:
    if (ctx->pc == 0x33DD14u) {
        ctx->pc = 0x33DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD10u;
        // 0x33dd14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DD18u;
        goto label_33dd18;
    }
    ctx->pc = 0x33DD10u;
    {
        const bool branch_taken_0x33dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33dd10) {
            ctx->pc = 0x33DD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DD10u;
            // 0x33dd14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DD38u;
            goto label_33dd38;
        }
    }
    ctx->pc = 0x33DD18u;
label_33dd18:
    // 0x33dd18: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33dd1c:
    // 0x33dd1c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x33dd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33dd20:
    // 0x33dd20: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33dd24:
    // 0x33dd24: 0x60f809  jalr        $v1
label_33dd28:
    if (ctx->pc == 0x33DD28u) {
        ctx->pc = 0x33DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD24u;
        // 0x33dd28: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DD2Cu;
        goto label_33dd2c;
    }
    ctx->pc = 0x33DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DD2Cu);
        ctx->pc = 0x33DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD24u;
        // 0x33dd28: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD24u, 0x33DD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DD2Cu;
label_33dd2c:
    // 0x33dd2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33dd30:
    // 0x33dd30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33dd34:
    // 0x33dd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33dd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33dd38:
    // 0x33dd38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33dd38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33dd3c:
    // 0x33dd3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33dd3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33dd40:
    // 0x33dd40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33dd44:
    // 0x33dd44: 0x3e00008  jr          $ra
label_33dd48:
    if (ctx->pc == 0x33DD48u) {
        ctx->pc = 0x33DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD44u;
        // 0x33dd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DD4Cu;
        goto label_33dd4c;
    }
    ctx->pc = 0x33DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD44u;
        // 0x33dd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DD4Cu;
label_33dd4c:
    // 0x33dd4c: 0x0  nop
    ctx->pc = 0x33dd4cu;
    // NOP
    ctx->pc = 0x33dd50u;
}
