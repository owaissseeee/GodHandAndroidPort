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

// Function: func_00341D18
// Address: 0x341d18 - 0x341ec0
void func_00341D18_0x341d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341D18_0x341d18");
#endif

    switch (ctx->pc) {
        case 0x341d18u: goto label_341d18;
        case 0x341d1cu: goto label_341d1c;
        case 0x341d20u: goto label_341d20;
        case 0x341d24u: goto label_341d24;
        case 0x341d28u: goto label_341d28;
        case 0x341d2cu: goto label_341d2c;
        case 0x341d30u: goto label_341d30;
        case 0x341d34u: goto label_341d34;
        case 0x341d38u: goto label_341d38;
        case 0x341d3cu: goto label_341d3c;
        case 0x341d40u: goto label_341d40;
        case 0x341d44u: goto label_341d44;
        case 0x341d48u: goto label_341d48;
        case 0x341d4cu: goto label_341d4c;
        case 0x341d50u: goto label_341d50;
        case 0x341d54u: goto label_341d54;
        case 0x341d58u: goto label_341d58;
        case 0x341d5cu: goto label_341d5c;
        case 0x341d60u: goto label_341d60;
        case 0x341d64u: goto label_341d64;
        case 0x341d68u: goto label_341d68;
        case 0x341d6cu: goto label_341d6c;
        case 0x341d70u: goto label_341d70;
        case 0x341d74u: goto label_341d74;
        case 0x341d78u: goto label_341d78;
        case 0x341d7cu: goto label_341d7c;
        case 0x341d80u: goto label_341d80;
        case 0x341d84u: goto label_341d84;
        case 0x341d88u: goto label_341d88;
        case 0x341d8cu: goto label_341d8c;
        case 0x341d90u: goto label_341d90;
        case 0x341d94u: goto label_341d94;
        case 0x341d98u: goto label_341d98;
        case 0x341d9cu: goto label_341d9c;
        case 0x341da0u: goto label_341da0;
        case 0x341da4u: goto label_341da4;
        case 0x341da8u: goto label_341da8;
        case 0x341dacu: goto label_341dac;
        case 0x341db0u: goto label_341db0;
        case 0x341db4u: goto label_341db4;
        case 0x341db8u: goto label_341db8;
        case 0x341dbcu: goto label_341dbc;
        case 0x341dc0u: goto label_341dc0;
        case 0x341dc4u: goto label_341dc4;
        case 0x341dc8u: goto label_341dc8;
        case 0x341dccu: goto label_341dcc;
        case 0x341dd0u: goto label_341dd0;
        case 0x341dd4u: goto label_341dd4;
        case 0x341dd8u: goto label_341dd8;
        case 0x341ddcu: goto label_341ddc;
        case 0x341de0u: goto label_341de0;
        case 0x341de4u: goto label_341de4;
        case 0x341de8u: goto label_341de8;
        case 0x341decu: goto label_341dec;
        case 0x341df0u: goto label_341df0;
        case 0x341df4u: goto label_341df4;
        case 0x341df8u: goto label_341df8;
        case 0x341dfcu: goto label_341dfc;
        case 0x341e00u: goto label_341e00;
        case 0x341e04u: goto label_341e04;
        case 0x341e08u: goto label_341e08;
        case 0x341e0cu: goto label_341e0c;
        case 0x341e10u: goto label_341e10;
        case 0x341e14u: goto label_341e14;
        case 0x341e18u: goto label_341e18;
        case 0x341e1cu: goto label_341e1c;
        case 0x341e20u: goto label_341e20;
        case 0x341e24u: goto label_341e24;
        case 0x341e28u: goto label_341e28;
        case 0x341e2cu: goto label_341e2c;
        case 0x341e30u: goto label_341e30;
        case 0x341e34u: goto label_341e34;
        case 0x341e38u: goto label_341e38;
        case 0x341e3cu: goto label_341e3c;
        case 0x341e40u: goto label_341e40;
        case 0x341e44u: goto label_341e44;
        case 0x341e48u: goto label_341e48;
        case 0x341e4cu: goto label_341e4c;
        case 0x341e50u: goto label_341e50;
        case 0x341e54u: goto label_341e54;
        case 0x341e58u: goto label_341e58;
        case 0x341e5cu: goto label_341e5c;
        case 0x341e60u: goto label_341e60;
        case 0x341e64u: goto label_341e64;
        case 0x341e68u: goto label_341e68;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e70u: goto label_341e70;
        case 0x341e74u: goto label_341e74;
        case 0x341e78u: goto label_341e78;
        case 0x341e7cu: goto label_341e7c;
        case 0x341e80u: goto label_341e80;
        case 0x341e84u: goto label_341e84;
        case 0x341e88u: goto label_341e88;
        case 0x341e8cu: goto label_341e8c;
        case 0x341e90u: goto label_341e90;
        case 0x341e94u: goto label_341e94;
        case 0x341e98u: goto label_341e98;
        case 0x341e9cu: goto label_341e9c;
        case 0x341ea0u: goto label_341ea0;
        case 0x341ea4u: goto label_341ea4;
        case 0x341ea8u: goto label_341ea8;
        case 0x341eacu: goto label_341eac;
        case 0x341eb0u: goto label_341eb0;
        case 0x341eb4u: goto label_341eb4;
        case 0x341eb8u: goto label_341eb8;
        case 0x341ebcu: goto label_341ebc;
        default: break;
    }

    ctx->pc = 0x341d18u;

label_341d18:
    // 0x341d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341d1c:
    // 0x341d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341d20:
    // 0x341d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_341d24:
    // 0x341d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341d28:
    // 0x341d28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_341d2c:
    // 0x341d2c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x341d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_341d30:
    // 0x341d30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_341d34:
    // 0x341d34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x341d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_341d38:
    // 0x341d38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x341d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341d3c:
    // 0x341d3c: 0x14620050  bne         $v1, $v0, . + 4 + (0x50 << 2)
label_341d40:
    if (ctx->pc == 0x341D40u) {
        ctx->pc = 0x341D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D3Cu;
        // 0x341d40: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D44u;
        goto label_341d44;
    }
    ctx->pc = 0x341D3Cu;
    {
        const bool branch_taken_0x341d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D3Cu;
        // 0x341d40: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d3c) {
            ctx->pc = 0x341E80u;
            goto label_341e80;
        }
    }
    ctx->pc = 0x341D44u;
label_341d44:
    // 0x341d44: 0xc0cfe9a  jal         func_33FA68
label_341d48:
    if (ctx->pc == 0x341D48u) {
        ctx->pc = 0x341D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D44u;
        // 0x341d48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D4Cu;
        goto label_341d4c;
    }
    ctx->pc = 0x341D44u;
    SET_GPR_U32(ctx, 31, 0x341D4Cu);
    ctx->pc = 0x341D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D44u;
    // 0x341d48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x341D44u, 0x341D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D4Cu;
label_341d4c:
    // 0x341d4c: 0x5440004c  bnel        $v0, $zero, . + 4 + (0x4C << 2)
label_341d50:
    if (ctx->pc == 0x341D50u) {
        ctx->pc = 0x341D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D4Cu;
        // 0x341d50: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D54u;
        goto label_341d54;
    }
    ctx->pc = 0x341D4Cu;
    {
        const bool branch_taken_0x341d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341d4c) {
            ctx->pc = 0x341D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341D4Cu;
            // 0x341d50: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341E80u;
            goto label_341e80;
        }
    }
    ctx->pc = 0x341D54u;
label_341d54:
    // 0x341d54: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x341d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_341d58:
    // 0x341d58: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x341d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_341d5c:
    // 0x341d5c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x341d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_341d60:
    // 0x341d60: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x341d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_341d64:
    // 0x341d64: 0x40f809  jalr        $v0
label_341d68:
    if (ctx->pc == 0x341D68u) {
        ctx->pc = 0x341D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D64u;
        // 0x341d68: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D6Cu;
        goto label_341d6c;
    }
    ctx->pc = 0x341D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341D6Cu);
        ctx->pc = 0x341D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D64u;
        // 0x341d68: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D64u, 0x341D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341D6Cu;
label_341d6c:
    // 0x341d6c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x341d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341d70:
    // 0x341d70: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x341d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_341d74:
    // 0x341d74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341d78:
    // 0x341d78: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x341d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_341d7c:
    // 0x341d7c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x341d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_341d80:
    // 0x341d80: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x341d80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341d84:
    // 0x341d84: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x341d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341d88:
    // 0x341d88: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x341d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_341d8c:
    // 0x341d8c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x341d8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_341d90:
    // 0x341d90: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x341d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_341d94:
    // 0x341d94: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x341d94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341d98:
    // 0x341d98: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x341d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341d9c:
    // 0x341d9c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x341d9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_341da0:
    // 0x341da0: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x341da0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_341da4:
    // 0x341da4: 0x1486001e  bne         $a0, $a2, . + 4 + (0x1E << 2)
label_341da8:
    if (ctx->pc == 0x341DA8u) {
        ctx->pc = 0x341DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DA4u;
        // 0x341da8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DACu;
        goto label_341dac;
    }
    ctx->pc = 0x341DA4u;
    {
        const bool branch_taken_0x341da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x341DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DA4u;
        // 0x341da8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341da4) {
            ctx->pc = 0x341E20u;
            goto label_341e20;
        }
    }
    ctx->pc = 0x341DACu;
label_341dac:
    // 0x341dac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_341db0:
    // 0x341db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341db4:
    // 0x341db4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x341db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_341db8:
    // 0x341db8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341dbc:
    // 0x341dbc: 0x19200029  blez        $t1, . + 4 + (0x29 << 2)
label_341dc0:
    if (ctx->pc == 0x341DC0u) {
        ctx->pc = 0x341DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DBCu;
        // 0x341dc0: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DC4u;
        goto label_341dc4;
    }
    ctx->pc = 0x341DBCu;
    {
        const bool branch_taken_0x341dbc = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x341DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DBCu;
        // 0x341dc0: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341dbc) {
            ctx->pc = 0x341E64u;
            goto label_341e64;
        }
    }
    ctx->pc = 0x341DC4u;
label_341dc4:
    // 0x341dc4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_341dc8:
    // 0x341dc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x341dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341dcc:
    // 0x341dcc: 0x244ac460  addiu       $t2, $v0, -0x3BA0
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952032));
label_341dd0:
    // 0x341dd0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x341dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_341dd4:
    // 0x341dd4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x341dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_341dd8:
    // 0x341dd8: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x341dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_341ddc:
    // 0x341ddc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x341ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_341de0:
    // 0x341de0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341de4:
    // 0x341de4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x341de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_341de8:
    // 0x341de8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x341de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_341dec:
    // 0x341dec: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x341decu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341df0:
    // 0x341df0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x341df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341df4:
    // 0x341df4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x341df4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_341df8:
    // 0x341df8: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x341df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_341dfc:
    // 0x341dfc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x341dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_341e00:
    // 0x341e00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341e04:
    // 0x341e04: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_341e08:
    // 0x341e08: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x341e08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341e0c:
    // 0x341e0c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_341e10:
    if (ctx->pc == 0x341E10u) {
        ctx->pc = 0x341E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E0Cu;
        // 0x341e10: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E14u;
        goto label_341e14;
    }
    ctx->pc = 0x341E0Cu;
    {
        const bool branch_taken_0x341e0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E0Cu;
        // 0x341e10: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e0c) {
            ctx->pc = 0x341DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341dd0;
        }
    }
    ctx->pc = 0x341E14u;
label_341e14:
    // 0x341e14: 0x10000013  b           . + 4 + (0x13 << 2)
label_341e18:
    if (ctx->pc == 0x341E18u) {
        ctx->pc = 0x341E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E14u;
        // 0x341e18: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E1Cu;
        goto label_341e1c;
    }
    ctx->pc = 0x341E14u;
    {
        const bool branch_taken_0x341e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E14u;
        // 0x341e18: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e14) {
            ctx->pc = 0x341E64u;
            goto label_341e64;
        }
    }
    ctx->pc = 0x341E1Cu;
label_341e1c:
    // 0x341e1c: 0x0  nop
    ctx->pc = 0x341e1cu;
    // NOP
label_341e20:
    // 0x341e20: 0x19200010  blez        $t1, . + 4 + (0x10 << 2)
label_341e24:
    if (ctx->pc == 0x341E24u) {
        ctx->pc = 0x341E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E20u;
        // 0x341e24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E28u;
        goto label_341e28;
    }
    ctx->pc = 0x341E20u;
    {
        const bool branch_taken_0x341e20 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x341E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E20u;
        // 0x341e24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e20) {
            ctx->pc = 0x341E64u;
            goto label_341e64;
        }
    }
    ctx->pc = 0x341E28u;
label_341e28:
    // 0x341e28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x341e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_341e2c:
    // 0x341e2c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x341e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_341e30:
    // 0x341e30: 0x2446c460  addiu       $a2, $v0, -0x3BA0
    ctx->pc = 0x341e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952032));
label_341e34:
    // 0x341e34: 0x0  nop
    ctx->pc = 0x341e34u;
    // NOP
label_341e38:
    // 0x341e38: 0x2481821  addu        $v1, $s2, $t0
    ctx->pc = 0x341e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_341e3c:
    // 0x341e3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x341e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_341e40:
    // 0x341e40: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x341e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_341e44:
    // 0x341e44: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x341e44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_341e48:
    // 0x341e48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341e4c:
    // 0x341e4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_341e50:
    // 0x341e50: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x341e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341e54:
    // 0x341e54: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x341e54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_341e58:
    // 0x341e58: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_341e5c:
    if (ctx->pc == 0x341E5Cu) {
        ctx->pc = 0x341E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E58u;
        // 0x341e5c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E60u;
        goto label_341e60;
    }
    ctx->pc = 0x341E58u;
    {
        const bool branch_taken_0x341e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E58u;
        // 0x341e5c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e58) {
            ctx->pc = 0x341E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341e38;
        }
    }
    ctx->pc = 0x341E60u;
label_341e60:
    // 0x341e60: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x341e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341e64:
    // 0x341e64: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x341e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_341e68:
    // 0x341e68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341e6c:
    // 0x341e6c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x341e6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_341e70:
    // 0x341e70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x341e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_341e74:
    // 0x341e74: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x341e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_341e78:
    // 0x341e78: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x341e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_341e7c:
    // 0x341e7c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x341e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_341e80:
    // 0x341e80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341e84:
    // 0x341e84: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_341e88:
    if (ctx->pc == 0x341E88u) {
        ctx->pc = 0x341E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E84u;
        // 0x341e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341E8Cu;
        goto label_341e8c;
    }
    ctx->pc = 0x341E84u;
    {
        const bool branch_taken_0x341e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341e84) {
            ctx->pc = 0x341E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341E84u;
            // 0x341e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341EACu;
            goto label_341eac;
        }
    }
    ctx->pc = 0x341E8Cu;
label_341e8c:
    // 0x341e8c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x341e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_341e90:
    // 0x341e90: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x341e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_341e94:
    // 0x341e94: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x341e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_341e98:
    // 0x341e98: 0x60f809  jalr        $v1
label_341e9c:
    if (ctx->pc == 0x341E9Cu) {
        ctx->pc = 0x341E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E98u;
        // 0x341e9c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EA0u;
        goto label_341ea0;
    }
    ctx->pc = 0x341E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341EA0u);
        ctx->pc = 0x341E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E98u;
        // 0x341e9c: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E98u, 0x341EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341EA0u;
label_341ea0:
    // 0x341ea0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x341ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341ea4:
    // 0x341ea4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x341ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_341ea8:
    // 0x341ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341eac:
    // 0x341eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_341eb0:
    // 0x341eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_341eb4:
    // 0x341eb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x341eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_341eb8:
    // 0x341eb8: 0x3e00008  jr          $ra
label_341ebc:
    if (ctx->pc == 0x341EBCu) {
        ctx->pc = 0x341EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EB8u;
        // 0x341ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341EC0u;
        goto label_fallthrough_0x341eb8;
    }
    ctx->pc = 0x341EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EB8u;
        // 0x341ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341eb8:
    ctx->pc = 0x341EC0u;
}
