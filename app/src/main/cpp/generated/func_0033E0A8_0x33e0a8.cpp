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

// Function: func_0033E0A8
// Address: 0x33e0a8 - 0x33e220
void func_0033E0A8_0x33e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E0A8_0x33e0a8");
#endif

    switch (ctx->pc) {
        case 0x33e0a8u: goto label_33e0a8;
        case 0x33e0acu: goto label_33e0ac;
        case 0x33e0b0u: goto label_33e0b0;
        case 0x33e0b4u: goto label_33e0b4;
        case 0x33e0b8u: goto label_33e0b8;
        case 0x33e0bcu: goto label_33e0bc;
        case 0x33e0c0u: goto label_33e0c0;
        case 0x33e0c4u: goto label_33e0c4;
        case 0x33e0c8u: goto label_33e0c8;
        case 0x33e0ccu: goto label_33e0cc;
        case 0x33e0d0u: goto label_33e0d0;
        case 0x33e0d4u: goto label_33e0d4;
        case 0x33e0d8u: goto label_33e0d8;
        case 0x33e0dcu: goto label_33e0dc;
        case 0x33e0e0u: goto label_33e0e0;
        case 0x33e0e4u: goto label_33e0e4;
        case 0x33e0e8u: goto label_33e0e8;
        case 0x33e0ecu: goto label_33e0ec;
        case 0x33e0f0u: goto label_33e0f0;
        case 0x33e0f4u: goto label_33e0f4;
        case 0x33e0f8u: goto label_33e0f8;
        case 0x33e0fcu: goto label_33e0fc;
        case 0x33e100u: goto label_33e100;
        case 0x33e104u: goto label_33e104;
        case 0x33e108u: goto label_33e108;
        case 0x33e10cu: goto label_33e10c;
        case 0x33e110u: goto label_33e110;
        case 0x33e114u: goto label_33e114;
        case 0x33e118u: goto label_33e118;
        case 0x33e11cu: goto label_33e11c;
        case 0x33e120u: goto label_33e120;
        case 0x33e124u: goto label_33e124;
        case 0x33e128u: goto label_33e128;
        case 0x33e12cu: goto label_33e12c;
        case 0x33e130u: goto label_33e130;
        case 0x33e134u: goto label_33e134;
        case 0x33e138u: goto label_33e138;
        case 0x33e13cu: goto label_33e13c;
        case 0x33e140u: goto label_33e140;
        case 0x33e144u: goto label_33e144;
        case 0x33e148u: goto label_33e148;
        case 0x33e14cu: goto label_33e14c;
        case 0x33e150u: goto label_33e150;
        case 0x33e154u: goto label_33e154;
        case 0x33e158u: goto label_33e158;
        case 0x33e15cu: goto label_33e15c;
        case 0x33e160u: goto label_33e160;
        case 0x33e164u: goto label_33e164;
        case 0x33e168u: goto label_33e168;
        case 0x33e16cu: goto label_33e16c;
        case 0x33e170u: goto label_33e170;
        case 0x33e174u: goto label_33e174;
        case 0x33e178u: goto label_33e178;
        case 0x33e17cu: goto label_33e17c;
        case 0x33e180u: goto label_33e180;
        case 0x33e184u: goto label_33e184;
        case 0x33e188u: goto label_33e188;
        case 0x33e18cu: goto label_33e18c;
        case 0x33e190u: goto label_33e190;
        case 0x33e194u: goto label_33e194;
        case 0x33e198u: goto label_33e198;
        case 0x33e19cu: goto label_33e19c;
        case 0x33e1a0u: goto label_33e1a0;
        case 0x33e1a4u: goto label_33e1a4;
        case 0x33e1a8u: goto label_33e1a8;
        case 0x33e1acu: goto label_33e1ac;
        case 0x33e1b0u: goto label_33e1b0;
        case 0x33e1b4u: goto label_33e1b4;
        case 0x33e1b8u: goto label_33e1b8;
        case 0x33e1bcu: goto label_33e1bc;
        case 0x33e1c0u: goto label_33e1c0;
        case 0x33e1c4u: goto label_33e1c4;
        case 0x33e1c8u: goto label_33e1c8;
        case 0x33e1ccu: goto label_33e1cc;
        case 0x33e1d0u: goto label_33e1d0;
        case 0x33e1d4u: goto label_33e1d4;
        case 0x33e1d8u: goto label_33e1d8;
        case 0x33e1dcu: goto label_33e1dc;
        case 0x33e1e0u: goto label_33e1e0;
        case 0x33e1e4u: goto label_33e1e4;
        case 0x33e1e8u: goto label_33e1e8;
        case 0x33e1ecu: goto label_33e1ec;
        case 0x33e1f0u: goto label_33e1f0;
        case 0x33e1f4u: goto label_33e1f4;
        case 0x33e1f8u: goto label_33e1f8;
        case 0x33e1fcu: goto label_33e1fc;
        case 0x33e200u: goto label_33e200;
        case 0x33e204u: goto label_33e204;
        case 0x33e208u: goto label_33e208;
        case 0x33e20cu: goto label_33e20c;
        case 0x33e210u: goto label_33e210;
        case 0x33e214u: goto label_33e214;
        case 0x33e218u: goto label_33e218;
        case 0x33e21cu: goto label_33e21c;
        default: break;
    }

    ctx->pc = 0x33e0a8u;

label_33e0a8:
    // 0x33e0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e0ac:
    // 0x33e0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e0b0:
    // 0x33e0b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e0b4:
    // 0x33e0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e0b8:
    // 0x33e0b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e0bc:
    // 0x33e0bc: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x33e0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_33e0c0:
    // 0x33e0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e0c4:
    // 0x33e0c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e0c8:
    // 0x33e0c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33e0cc:
    // 0x33e0cc: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_33e0d0:
    if (ctx->pc == 0x33E0D0u) {
        ctx->pc = 0x33E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0CCu;
        // 0x33e0d0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0D4u;
        goto label_33e0d4;
    }
    ctx->pc = 0x33E0CCu;
    {
        const bool branch_taken_0x33e0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0CCu;
        // 0x33e0d0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0cc) {
            ctx->pc = 0x33E1DCu;
            goto label_33e1dc;
        }
    }
    ctx->pc = 0x33E0D4u;
label_33e0d4:
    // 0x33e0d4: 0xc0cfe9a  jal         func_33FA68
label_33e0d8:
    if (ctx->pc == 0x33E0D8u) {
        ctx->pc = 0x33E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0D4u;
        // 0x33e0d8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0DCu;
        goto label_33e0dc;
    }
    ctx->pc = 0x33E0D4u;
    SET_GPR_U32(ctx, 31, 0x33E0DCu);
    ctx->pc = 0x33E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0D4u;
    // 0x33e0d8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33E0D4u, 0x33E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0DCu;
label_33e0dc:
    // 0x33e0dc: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_33e0e0:
    if (ctx->pc == 0x33E0E0u) {
        ctx->pc = 0x33E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0DCu;
        // 0x33e0e0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0E4u;
        goto label_33e0e4;
    }
    ctx->pc = 0x33E0DCu;
    {
        const bool branch_taken_0x33e0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e0dc) {
            ctx->pc = 0x33E0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E0DCu;
            // 0x33e0e0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E1DCu;
            goto label_33e1dc;
        }
    }
    ctx->pc = 0x33E0E4u;
label_33e0e4:
    // 0x33e0e4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x33e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_33e0e8:
    // 0x33e0e8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x33e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_33e0ec:
    // 0x33e0ec: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x33e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_33e0f0:
    // 0x33e0f0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x33e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_33e0f4:
    // 0x33e0f4: 0x40f809  jalr        $v0
label_33e0f8:
    if (ctx->pc == 0x33E0F8u) {
        ctx->pc = 0x33E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0F4u;
        // 0x33e0f8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E0FCu;
        goto label_33e0fc;
    }
    ctx->pc = 0x33E0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E0FCu);
        ctx->pc = 0x33E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0F4u;
        // 0x33e0f8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E0F4u, 0x33E0FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E0FCu;
label_33e0fc:
    // 0x33e0fc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33e100:
    // 0x33e100: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x33e100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33e104:
    // 0x33e104: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33e104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e108:
    // 0x33e108: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33e10c:
    // 0x33e10c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x33e10cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33e110:
    // 0x33e110: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x33e110u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e114:
    // 0x33e114: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x33e114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e118:
    // 0x33e118: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x33e118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33e11c:
    // 0x33e11c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x33e11cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_33e120:
    // 0x33e120: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33e120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_33e124:
    // 0x33e124: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x33e124u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33e128:
    // 0x33e128: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x33e128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e12c:
    // 0x33e12c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x33e12cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_33e130:
    // 0x33e130: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x33e130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_33e134:
    // 0x33e134: 0x14860016  bne         $a0, $a2, . + 4 + (0x16 << 2)
label_33e138:
    if (ctx->pc == 0x33E138u) {
        ctx->pc = 0x33E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E134u;
        // 0x33e138: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E13Cu;
        goto label_33e13c;
    }
    ctx->pc = 0x33E134u;
    {
        const bool branch_taken_0x33e134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x33E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E134u;
        // 0x33e138: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e134) {
            ctx->pc = 0x33E190u;
            goto label_33e190;
        }
    }
    ctx->pc = 0x33E13Cu;
label_33e13c:
    // 0x33e13c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33e140:
    // 0x33e140: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33e140u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e144:
    // 0x33e144: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33e144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33e148:
    // 0x33e148: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33e148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e14c:
    // 0x33e14c: 0x1920001b  blez        $t1, . + 4 + (0x1B << 2)
label_33e150:
    if (ctx->pc == 0x33E150u) {
        ctx->pc = 0x33E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E14Cu;
        // 0x33e150: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E154u;
        goto label_33e154;
    }
    ctx->pc = 0x33E14Cu;
    {
        const bool branch_taken_0x33e14c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E14Cu;
        // 0x33e150: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e14c) {
            ctx->pc = 0x33E1BCu;
            goto label_33e1bc;
        }
    }
    ctx->pc = 0x33E154u;
label_33e154:
    // 0x33e154: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33e154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e158:
    // 0x33e158: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x33e158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33e15c:
    // 0x33e15c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e160:
    // 0x33e160: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x33e160u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_33e164:
    // 0x33e164: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_33e168:
    // 0x33e168: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x33e168u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e16c:
    // 0x33e16c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_33e170:
    // 0x33e170: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x33e170u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_33e174:
    // 0x33e174: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x33e174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_33e178:
    // 0x33e178: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x33e178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_33e17c:
    // 0x33e17c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
label_33e180:
    if (ctx->pc == 0x33E180u) {
        ctx->pc = 0x33E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E17Cu;
        // 0x33e180: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E184u;
        goto label_33e184;
    }
    ctx->pc = 0x33E17Cu;
    {
        const bool branch_taken_0x33e17c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E17Cu;
        // 0x33e180: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e17c) {
            ctx->pc = 0x33E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e158;
        }
    }
    ctx->pc = 0x33E184u;
label_33e184:
    // 0x33e184: 0x1000000d  b           . + 4 + (0xD << 2)
label_33e188:
    if (ctx->pc == 0x33E188u) {
        ctx->pc = 0x33E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E184u;
        // 0x33e188: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E18Cu;
        goto label_33e18c;
    }
    ctx->pc = 0x33E184u;
    {
        const bool branch_taken_0x33e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E184u;
        // 0x33e188: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e184) {
            ctx->pc = 0x33E1BCu;
            goto label_33e1bc;
        }
    }
    ctx->pc = 0x33E18Cu;
label_33e18c:
    // 0x33e18c: 0x0  nop
    ctx->pc = 0x33e18cu;
    // NOP
label_33e190:
    // 0x33e190: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_33e194:
    if (ctx->pc == 0x33E194u) {
        ctx->pc = 0x33E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E190u;
        // 0x33e194: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E198u;
        goto label_33e198;
    }
    ctx->pc = 0x33E190u;
    {
        const bool branch_taken_0x33e190 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E190u;
        // 0x33e194: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e190) {
            ctx->pc = 0x33E1BCu;
            goto label_33e1bc;
        }
    }
    ctx->pc = 0x33E198u;
label_33e198:
    // 0x33e198: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x33e198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33e19c:
    // 0x33e19c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e1a0:
    // 0x33e1a0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x33e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_33e1a4:
    // 0x33e1a4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x33e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_33e1a8:
    // 0x33e1a8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x33e1a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e1ac:
    // 0x33e1ac: 0x109282a  slt         $a1, $t0, $t1
    ctx->pc = 0x33e1acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e1b0:
    // 0x33e1b0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_33e1b4:
    if (ctx->pc == 0x33E1B4u) {
        ctx->pc = 0x33E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1B0u;
        // 0x33e1b4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1B8u;
        goto label_33e1b8;
    }
    ctx->pc = 0x33E1B0u;
    {
        const bool branch_taken_0x33e1b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1B0u;
        // 0x33e1b4: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1b0) {
            ctx->pc = 0x33E198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e198;
        }
    }
    ctx->pc = 0x33E1B8u;
label_33e1b8:
    // 0x33e1b8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x33e1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e1bc:
    // 0x33e1bc: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x33e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_33e1c0:
    // 0x33e1c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e1c4:
    // 0x33e1c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_33e1c8:
    // 0x33e1c8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e1cc:
    // 0x33e1cc: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x33e1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33e1d0:
    // 0x33e1d0: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x33e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_33e1d4:
    // 0x33e1d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e1d8:
    // 0x33e1d8: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x33e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_33e1dc:
    // 0x33e1dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e1e0:
    // 0x33e1e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33e1e4:
    if (ctx->pc == 0x33E1E4u) {
        ctx->pc = 0x33E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1E0u;
        // 0x33e1e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1E8u;
        goto label_33e1e8;
    }
    ctx->pc = 0x33E1E0u;
    {
        const bool branch_taken_0x33e1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e1e0) {
            ctx->pc = 0x33E1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E1E0u;
            // 0x33e1e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E208u;
            goto label_33e208;
        }
    }
    ctx->pc = 0x33E1E8u;
label_33e1e8:
    // 0x33e1e8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33e1ec:
    // 0x33e1ec: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33e1f0:
    // 0x33e1f0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33e1f4:
    // 0x33e1f4: 0x60f809  jalr        $v1
label_33e1f8:
    if (ctx->pc == 0x33E1F8u) {
        ctx->pc = 0x33E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1F4u;
        // 0x33e1f8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E1FCu;
        goto label_33e1fc;
    }
    ctx->pc = 0x33E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E1FCu);
        ctx->pc = 0x33E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1F4u;
        // 0x33e1f8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E1F4u, 0x33E1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E1FCu;
label_33e1fc:
    // 0x33e1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e200:
    // 0x33e200: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33e200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33e204:
    // 0x33e204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e208:
    // 0x33e208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e20c:
    // 0x33e20c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e20cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e210:
    // 0x33e210: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e214:
    // 0x33e214: 0x3e00008  jr          $ra
label_33e218:
    if (ctx->pc == 0x33E218u) {
        ctx->pc = 0x33E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E214u;
        // 0x33e218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E21Cu;
        goto label_33e21c;
    }
    ctx->pc = 0x33E214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E214u;
        // 0x33e218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E21Cu;
label_33e21c:
    // 0x33e21c: 0x0  nop
    ctx->pc = 0x33e21cu;
    // NOP
    ctx->pc = 0x33e220u;
}
