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

// Function: func_00341B98
// Address: 0x341b98 - 0x341d18
void func_00341B98_0x341b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00341B98_0x341b98");
#endif

    switch (ctx->pc) {
        case 0x341b98u: goto label_341b98;
        case 0x341b9cu: goto label_341b9c;
        case 0x341ba0u: goto label_341ba0;
        case 0x341ba4u: goto label_341ba4;
        case 0x341ba8u: goto label_341ba8;
        case 0x341bacu: goto label_341bac;
        case 0x341bb0u: goto label_341bb0;
        case 0x341bb4u: goto label_341bb4;
        case 0x341bb8u: goto label_341bb8;
        case 0x341bbcu: goto label_341bbc;
        case 0x341bc0u: goto label_341bc0;
        case 0x341bc4u: goto label_341bc4;
        case 0x341bc8u: goto label_341bc8;
        case 0x341bccu: goto label_341bcc;
        case 0x341bd0u: goto label_341bd0;
        case 0x341bd4u: goto label_341bd4;
        case 0x341bd8u: goto label_341bd8;
        case 0x341bdcu: goto label_341bdc;
        case 0x341be0u: goto label_341be0;
        case 0x341be4u: goto label_341be4;
        case 0x341be8u: goto label_341be8;
        case 0x341becu: goto label_341bec;
        case 0x341bf0u: goto label_341bf0;
        case 0x341bf4u: goto label_341bf4;
        case 0x341bf8u: goto label_341bf8;
        case 0x341bfcu: goto label_341bfc;
        case 0x341c00u: goto label_341c00;
        case 0x341c04u: goto label_341c04;
        case 0x341c08u: goto label_341c08;
        case 0x341c0cu: goto label_341c0c;
        case 0x341c10u: goto label_341c10;
        case 0x341c14u: goto label_341c14;
        case 0x341c18u: goto label_341c18;
        case 0x341c1cu: goto label_341c1c;
        case 0x341c20u: goto label_341c20;
        case 0x341c24u: goto label_341c24;
        case 0x341c28u: goto label_341c28;
        case 0x341c2cu: goto label_341c2c;
        case 0x341c30u: goto label_341c30;
        case 0x341c34u: goto label_341c34;
        case 0x341c38u: goto label_341c38;
        case 0x341c3cu: goto label_341c3c;
        case 0x341c40u: goto label_341c40;
        case 0x341c44u: goto label_341c44;
        case 0x341c48u: goto label_341c48;
        case 0x341c4cu: goto label_341c4c;
        case 0x341c50u: goto label_341c50;
        case 0x341c54u: goto label_341c54;
        case 0x341c58u: goto label_341c58;
        case 0x341c5cu: goto label_341c5c;
        case 0x341c60u: goto label_341c60;
        case 0x341c64u: goto label_341c64;
        case 0x341c68u: goto label_341c68;
        case 0x341c6cu: goto label_341c6c;
        case 0x341c70u: goto label_341c70;
        case 0x341c74u: goto label_341c74;
        case 0x341c78u: goto label_341c78;
        case 0x341c7cu: goto label_341c7c;
        case 0x341c80u: goto label_341c80;
        case 0x341c84u: goto label_341c84;
        case 0x341c88u: goto label_341c88;
        case 0x341c8cu: goto label_341c8c;
        case 0x341c90u: goto label_341c90;
        case 0x341c94u: goto label_341c94;
        case 0x341c98u: goto label_341c98;
        case 0x341c9cu: goto label_341c9c;
        case 0x341ca0u: goto label_341ca0;
        case 0x341ca4u: goto label_341ca4;
        case 0x341ca8u: goto label_341ca8;
        case 0x341cacu: goto label_341cac;
        case 0x341cb0u: goto label_341cb0;
        case 0x341cb4u: goto label_341cb4;
        case 0x341cb8u: goto label_341cb8;
        case 0x341cbcu: goto label_341cbc;
        case 0x341cc0u: goto label_341cc0;
        case 0x341cc4u: goto label_341cc4;
        case 0x341cc8u: goto label_341cc8;
        case 0x341cccu: goto label_341ccc;
        case 0x341cd0u: goto label_341cd0;
        case 0x341cd4u: goto label_341cd4;
        case 0x341cd8u: goto label_341cd8;
        case 0x341cdcu: goto label_341cdc;
        case 0x341ce0u: goto label_341ce0;
        case 0x341ce4u: goto label_341ce4;
        case 0x341ce8u: goto label_341ce8;
        case 0x341cecu: goto label_341cec;
        case 0x341cf0u: goto label_341cf0;
        case 0x341cf4u: goto label_341cf4;
        case 0x341cf8u: goto label_341cf8;
        case 0x341cfcu: goto label_341cfc;
        case 0x341d00u: goto label_341d00;
        case 0x341d04u: goto label_341d04;
        case 0x341d08u: goto label_341d08;
        case 0x341d0cu: goto label_341d0c;
        case 0x341d10u: goto label_341d10;
        case 0x341d14u: goto label_341d14;
        default: break;
    }

    ctx->pc = 0x341b98u;

label_341b98:
    // 0x341b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341b9c:
    // 0x341b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341ba0:
    // 0x341ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_341ba4:
    // 0x341ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341ba8:
    // 0x341ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_341bac:
    // 0x341bac: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x341bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_341bb0:
    // 0x341bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_341bb4:
    // 0x341bb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x341bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_341bb8:
    // 0x341bb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x341bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341bbc:
    // 0x341bbc: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_341bc0:
    if (ctx->pc == 0x341BC0u) {
        ctx->pc = 0x341BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BBCu;
        // 0x341bc0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BC4u;
        goto label_341bc4;
    }
    ctx->pc = 0x341BBCu;
    {
        const bool branch_taken_0x341bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BBCu;
        // 0x341bc0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341bbc) {
            ctx->pc = 0x341CD8u;
            goto label_341cd8;
        }
    }
    ctx->pc = 0x341BC4u;
label_341bc4:
    // 0x341bc4: 0xc0cfe9a  jal         func_33FA68
label_341bc8:
    if (ctx->pc == 0x341BC8u) {
        ctx->pc = 0x341BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BC4u;
        // 0x341bc8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BCCu;
        goto label_341bcc;
    }
    ctx->pc = 0x341BC4u;
    SET_GPR_U32(ctx, 31, 0x341BCCu);
    ctx->pc = 0x341BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BC4u;
    // 0x341bc8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x341BC4u, 0x341BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BCCu;
label_341bcc:
    // 0x341bcc: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_341bd0:
    if (ctx->pc == 0x341BD0u) {
        ctx->pc = 0x341BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BCCu;
        // 0x341bd0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BD4u;
        goto label_341bd4;
    }
    ctx->pc = 0x341BCCu;
    {
        const bool branch_taken_0x341bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341bcc) {
            ctx->pc = 0x341BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341BCCu;
            // 0x341bd0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341CD8u;
            goto label_341cd8;
        }
    }
    ctx->pc = 0x341BD4u;
label_341bd4:
    // 0x341bd4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x341bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_341bd8:
    // 0x341bd8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x341bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_341bdc:
    // 0x341bdc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x341bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_341be0:
    // 0x341be0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x341be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_341be4:
    // 0x341be4: 0x40f809  jalr        $v0
label_341be8:
    if (ctx->pc == 0x341BE8u) {
        ctx->pc = 0x341BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BE4u;
        // 0x341be8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341BECu;
        goto label_341bec;
    }
    ctx->pc = 0x341BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341BECu);
        ctx->pc = 0x341BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BE4u;
        // 0x341be8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341BE4u, 0x341BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341BECu;
label_341bec:
    // 0x341bec: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x341becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341bf0:
    // 0x341bf0: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x341bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_341bf4:
    // 0x341bf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x341bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341bf8:
    // 0x341bf8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x341bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_341bfc:
    // 0x341bfc: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x341bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_341c00:
    // 0x341c00: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x341c00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341c04:
    // 0x341c04: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x341c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_341c08:
    // 0x341c08: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x341c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_341c0c:
    // 0x341c0c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x341c0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_341c10:
    // 0x341c10: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x341c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_341c14:
    // 0x341c14: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x341c14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_341c18:
    // 0x341c18: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x341c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_341c1c:
    // 0x341c1c: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x341c1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_341c20:
    // 0x341c20: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x341c20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_341c24:
    // 0x341c24: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_341c28:
    if (ctx->pc == 0x341C28u) {
        ctx->pc = 0x341C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C24u;
        // 0x341c28: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C2Cu;
        goto label_341c2c;
    }
    ctx->pc = 0x341C24u;
    {
        const bool branch_taken_0x341c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x341C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C24u;
        // 0x341c28: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c24) {
            ctx->pc = 0x341C88u;
            goto label_341c88;
        }
    }
    ctx->pc = 0x341C2Cu;
label_341c2c:
    // 0x341c2c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x341c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_341c30:
    // 0x341c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341c34:
    // 0x341c34: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x341c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_341c38:
    // 0x341c38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x341c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341c3c:
    // 0x341c3c: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_341c40:
    if (ctx->pc == 0x341C40u) {
        ctx->pc = 0x341C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C3Cu;
        // 0x341c40: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C44u;
        goto label_341c44;
    }
    ctx->pc = 0x341C3Cu;
    {
        const bool branch_taken_0x341c3c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x341C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C3Cu;
        // 0x341c40: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c3c) {
            ctx->pc = 0x341CBCu;
            goto label_341cbc;
        }
    }
    ctx->pc = 0x341C44u;
label_341c44:
    // 0x341c44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x341c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_341c48:
    // 0x341c48: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x341c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_341c4c:
    // 0x341c4c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x341c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_341c50:
    // 0x341c50: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x341c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_341c54:
    // 0x341c54: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x341c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_341c58:
    // 0x341c58: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x341c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_341c5c:
    // 0x341c5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x341c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_341c60:
    // 0x341c60: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x341c60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_341c64:
    // 0x341c64: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x341c64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_341c68:
    // 0x341c68: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x341c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_341c6c:
    // 0x341c6c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x341c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_341c70:
    // 0x341c70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x341c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_341c74:
    // 0x341c74: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_341c78:
    if (ctx->pc == 0x341C78u) {
        ctx->pc = 0x341C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C74u;
        // 0x341c78: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C7Cu;
        goto label_341c7c;
    }
    ctx->pc = 0x341C74u;
    {
        const bool branch_taken_0x341c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x341C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C74u;
        // 0x341c78: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c74) {
            ctx->pc = 0x341C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c48;
        }
    }
    ctx->pc = 0x341C7Cu;
label_341c7c:
    // 0x341c7c: 0x1000000f  b           . + 4 + (0xF << 2)
label_341c80:
    if (ctx->pc == 0x341C80u) {
        ctx->pc = 0x341C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C7Cu;
        // 0x341c80: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C84u;
        goto label_341c84;
    }
    ctx->pc = 0x341C7Cu;
    {
        const bool branch_taken_0x341c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C7Cu;
        // 0x341c80: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c7c) {
            ctx->pc = 0x341CBCu;
            goto label_341cbc;
        }
    }
    ctx->pc = 0x341C84u;
label_341c84:
    // 0x341c84: 0x0  nop
    ctx->pc = 0x341c84u;
    // NOP
label_341c88:
    // 0x341c88: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_341c8c:
    if (ctx->pc == 0x341C8Cu) {
        ctx->pc = 0x341C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C88u;
        // 0x341c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341C90u;
        goto label_341c90;
    }
    ctx->pc = 0x341C88u;
    {
        const bool branch_taken_0x341c88 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x341C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C88u;
        // 0x341c8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c88) {
            ctx->pc = 0x341CBCu;
            goto label_341cbc;
        }
    }
    ctx->pc = 0x341C90u;
label_341c90:
    // 0x341c90: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x341c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_341c94:
    // 0x341c94: 0x0  nop
    ctx->pc = 0x341c94u;
    // NOP
label_341c98:
    // 0x341c98: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x341c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_341c9c:
    // 0x341c9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x341c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_341ca0:
    // 0x341ca0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x341ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_341ca4:
    // 0x341ca4: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x341ca4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_341ca8:
    // 0x341ca8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_341cac:
    // 0x341cac: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x341cacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_341cb0:
    // 0x341cb0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_341cb4:
    if (ctx->pc == 0x341CB4u) {
        ctx->pc = 0x341CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CB0u;
        // 0x341cb4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CB8u;
        goto label_341cb8;
    }
    ctx->pc = 0x341CB0u;
    {
        const bool branch_taken_0x341cb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CB0u;
        // 0x341cb4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cb0) {
            ctx->pc = 0x341C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341c98;
        }
    }
    ctx->pc = 0x341CB8u;
label_341cb8:
    // 0x341cb8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x341cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341cbc:
    // 0x341cbc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x341cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_341cc0:
    // 0x341cc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341cc4:
    // 0x341cc4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x341cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_341cc8:
    // 0x341cc8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x341cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_341ccc:
    // 0x341ccc: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x341cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_341cd0:
    // 0x341cd0: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x341cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_341cd4:
    // 0x341cd4: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x341cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_341cd8:
    // 0x341cd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341cdc:
    // 0x341cdc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_341ce0:
    if (ctx->pc == 0x341CE0u) {
        ctx->pc = 0x341CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CDCu;
        // 0x341ce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CE4u;
        goto label_341ce4;
    }
    ctx->pc = 0x341CDCu;
    {
        const bool branch_taken_0x341cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341cdc) {
            ctx->pc = 0x341CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341CDCu;
            // 0x341ce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D04u;
            goto label_341d04;
        }
    }
    ctx->pc = 0x341CE4u;
label_341ce4:
    // 0x341ce4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x341ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_341ce8:
    // 0x341ce8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_341cec:
    // 0x341cec: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x341cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_341cf0:
    // 0x341cf0: 0x60f809  jalr        $v1
label_341cf4:
    if (ctx->pc == 0x341CF4u) {
        ctx->pc = 0x341CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CF0u;
        // 0x341cf4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341CF8u;
        goto label_341cf8;
    }
    ctx->pc = 0x341CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341CF8u);
        ctx->pc = 0x341CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CF0u;
        // 0x341cf4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341CF0u, 0x341CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341CF8u;
label_341cf8:
    // 0x341cf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x341cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_341cfc:
    // 0x341cfc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x341cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_341d00:
    // 0x341d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341d04:
    // 0x341d04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x341d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_341d08:
    // 0x341d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x341d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_341d0c:
    // 0x341d0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x341d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_341d10:
    // 0x341d10: 0x3e00008  jr          $ra
label_341d14:
    if (ctx->pc == 0x341D14u) {
        ctx->pc = 0x341D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D10u;
        // 0x341d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D18u;
        goto label_fallthrough_0x341d10;
    }
    ctx->pc = 0x341D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D10u;
        // 0x341d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341d10:
    ctx->pc = 0x341D18u;
}
