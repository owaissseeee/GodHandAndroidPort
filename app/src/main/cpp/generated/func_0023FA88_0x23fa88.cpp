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

// Function: func_0023FA88
// Address: 0x23fa88 - 0x240548
void func_0023FA88_0x23fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023FA88_0x23fa88");
#endif

    switch (ctx->pc) {
        case 0x23fb28u: goto label_23fb28;
        case 0x23fc00u: goto label_23fc00;
        case 0x23fc24u: goto label_23fc24;
        case 0x23fd08u: goto label_23fd08;
        case 0x23fd18u: goto label_23fd18;
        case 0x23fd44u: goto label_23fd44;
        case 0x23fe10u: goto label_23fe10;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff10u: goto label_23ff10;
        case 0x240008u: goto label_240008;
        case 0x240038u: goto label_240038;
        case 0x240118u: goto label_240118;
        case 0x240150u: goto label_240150;
        case 0x24018cu: goto label_24018c;
        case 0x24019cu: goto label_24019c;
        case 0x2401c8u: goto label_2401c8;
        case 0x2401d8u: goto label_2401d8;
        case 0x240204u: goto label_240204;
        case 0x240228u: goto label_240228;
        case 0x240250u: goto label_240250;
        case 0x24025cu: goto label_24025c;
        case 0x24027cu: goto label_24027c;
        case 0x24030cu: goto label_24030c;
        case 0x240338u: goto label_240338;
        case 0x24037cu: goto label_24037c;
        case 0x240444u: goto label_240444;
        case 0x240470u: goto label_240470;
        case 0x2404fcu: goto label_2404fc;
        case 0x24050cu: goto label_24050c;
        case 0x240518u: goto label_240518;
        case 0x240524u: goto label_240524;
        default: break;
    }

    ctx->pc = 0x23fa88u;

    // 0x23fa88: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x23fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x23fa8c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x23fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x23fa90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23fa90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa94: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x23fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x23fa98: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x23fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x23fa9c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x23fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x23faa0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x23faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x23faa4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x23faa8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x23faa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x23faac: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x23faacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23fab0: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x23fab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x23fab4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FAB4u;
    {
        const bool branch_taken_0x23fab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fab4) {
            ctx->pc = 0x23FAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAB4u;
            // 0x23fab8: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAD0u;
            goto label_23fad0;
        }
    }
    ctx->pc = 0x23FABCu;
    // 0x23fabc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23fac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23fac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fac4: 0x0  nop
    ctx->pc = 0x23fac4u;
    // NOP
    // 0x23fac8: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x23fac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x23facc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23faccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_23fad0:
    // 0x23fad0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23FAD0u;
    {
        const bool branch_taken_0x23fad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fad0) {
            ctx->pc = 0x23FAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAD0u;
            // 0x23fad4: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAFCu;
            goto label_23fafc;
        }
    }
    ctx->pc = 0x23FAD8u;
    // 0x23fad8: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x23fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x23fadc: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x23fadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x23fae0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FAE0u;
    {
        const bool branch_taken_0x23fae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAE0u;
        // 0x23fae4: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fae0) {
            ctx->pc = 0x23FAF8u;
            goto label_23faf8;
        }
    }
    ctx->pc = 0x23FAE8u;
    // 0x23fae8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FAE8u;
    {
        const bool branch_taken_0x23fae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fae8) {
            ctx->pc = 0x23FAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAE8u;
            // 0x23faec: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FAFCu;
            goto label_23fafc;
        }
    }
    ctx->pc = 0x23FAF0u;
    // 0x23faf0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23faf4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_23faf8:
    // 0x23faf8: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x23faf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_23fafc:
    // 0x23fafc: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x23fafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x23fb00: 0x10400288  beqz        $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x23FB00u;
    {
        const bool branch_taken_0x23fb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB00u;
        // 0x23fb04: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb00) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x23FB08u;
    // 0x23fb08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fb0c: 0x2442bc40  addiu       $v0, $v0, -0x43C0
    ctx->pc = 0x23fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949952));
    // 0x23fb10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fb14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fb18: 0x800008  jr          $a0
    ctx->pc = 0x23FB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FB20u: goto label_23fb20;
            case 0x23FC0Cu: goto label_23fc0c;
            case 0x23FC1Cu: goto label_23fc1c;
            case 0x23FDECu: goto label_23fdec;
            case 0x240030u: goto label_240030;
            case 0x240124u: goto label_240124;
            case 0x240194u: goto label_240194;
            case 0x240210u: goto label_240210;
            case 0x240264u: goto label_240264;
            case 0x240344u: goto label_240344;
            case 0x24043Cu: goto label_24043c;
            case 0x24047Cu: goto label_24047c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23FB20u;
label_23fb20:
    // 0x23fb20: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23FB20u;
    SET_GPR_U32(ctx, 31, 0x23FB28u);
    ctx->pc = 0x23FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB20u;
    // 0x23fb24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23FB20u, 0x23FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB28u;
label_23fb28:
    // 0x23fb28: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x23fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x23fb2c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23fb2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23fb30: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x23fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x23fb34: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x23fb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x23fb38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB38u;
    {
        const bool branch_taken_0x23fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB38u;
        // 0x23fb3c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb38) {
            ctx->pc = 0x23FB58u;
            goto label_23fb58;
        }
    }
    ctx->pc = 0x23FB40u;
    // 0x23fb40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fb44: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x23fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x23fb48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fb4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fb50: 0x800008  jr          $a0
    ctx->pc = 0x23FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FB58u: goto label_23fb58;
            case 0x23FB68u: goto label_23fb68;
            case 0x23FB78u: goto label_23fb78;
            case 0x23FB88u: goto label_23fb88;
            case 0x23FB98u: goto label_23fb98;
            case 0x23FBA8u: goto label_23fba8;
            case 0x23FBB8u: goto label_23fbb8;
            case 0x23FBC8u: goto label_23fbc8;
            case 0x23FBD8u: goto label_23fbd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23FB58u;
label_23fb58:
    // 0x23fb58: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fb5c: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x23fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x23fb60: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23FB60u;
    {
        const bool branch_taken_0x23fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB60u;
        // 0x23fb64: 0x8c4400f8  lw          $a0, 0xF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb60) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FB68u;
label_23fb68:
    // 0x23fb68: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fb6c: 0x8c430874  lw          $v1, 0x874($v0)
    ctx->pc = 0x23fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2164)));
    // 0x23fb70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23FB70u;
    {
        const bool branch_taken_0x23fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB70u;
        // 0x23fb74: 0x8c440878  lw          $a0, 0x878($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb70) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FB78u;
label_23fb78:
    // 0x23fb78: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fb7c: 0x8c431954  lw          $v1, 0x1954($v0)
    ctx->pc = 0x23fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6484)));
    // 0x23fb80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23FB80u;
    {
        const bool branch_taken_0x23fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB80u;
        // 0x23fb84: 0x8c441958  lw          $a0, 0x1958($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb80) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FB88u;
label_23fb88:
    // 0x23fb88: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fb8c: 0x8c431954  lw          $v1, 0x1954($v0)
    ctx->pc = 0x23fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6484)));
    // 0x23fb90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23FB90u;
    {
        const bool branch_taken_0x23fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB90u;
        // 0x23fb94: 0x8c441958  lw          $a0, 0x1958($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb90) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FB98u;
label_23fb98:
    // 0x23fb98: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fb9c: 0x8c430d50  lw          $v1, 0xD50($v0)
    ctx->pc = 0x23fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3408)));
    // 0x23fba0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23FBA0u;
    {
        const bool branch_taken_0x23fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBA0u;
        // 0x23fba4: 0x8c440d54  lw          $a0, 0xD54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fba0) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FBA8u;
label_23fba8:
    // 0x23fba8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fbac: 0x8c4315ac  lw          $v1, 0x15AC($v0)
    ctx->pc = 0x23fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5548)));
    // 0x23fbb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23FBB0u;
    {
        const bool branch_taken_0x23fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB0u;
        // 0x23fbb4: 0x8c4415b0  lw          $a0, 0x15B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb0) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FBB8u;
label_23fbb8:
    // 0x23fbb8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fbbc: 0x8c4315ac  lw          $v1, 0x15AC($v0)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5548)));
    // 0x23fbc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FBC0u;
    {
        const bool branch_taken_0x23fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBC0u;
        // 0x23fbc4: 0x8c4415b0  lw          $a0, 0x15B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbc0) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FBC8u;
label_23fbc8:
    // 0x23fbc8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fbcc: 0x8c4310fc  lw          $v1, 0x10FC($v0)
    ctx->pc = 0x23fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4348)));
    // 0x23fbd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23FBD0u;
    {
        const bool branch_taken_0x23fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD0u;
        // 0x23fbd4: 0x8c441100  lw          $a0, 0x1100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbd0) {
            ctx->pc = 0x23FBE4u;
            goto label_23fbe4;
        }
    }
    ctx->pc = 0x23FBD8u;
label_23fbd8:
    // 0x23fbd8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fbdc: 0x8c432e14  lw          $v1, 0x2E14($v0)
    ctx->pc = 0x23fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11796)));
    // 0x23fbe0: 0x8c442e18  lw          $a0, 0x2E18($v0)
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11800)));
label_23fbe4:
    // 0x23fbe4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fbe8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x23fbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23fbec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23fbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23fbf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fbf4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fbf8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23FBF8u;
    SET_GPR_U32(ctx, 31, 0x23FC00u);
    ctx->pc = 0x23FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBF8u;
    // 0x23fbfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23FBF8u, 0x23FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC00u;
label_23fc00:
    // 0x23fc00: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23fc00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23fc04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fc08: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_23fc0c:
    // 0x23fc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc14: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x23FC14u;
    {
        const bool branch_taken_0x23fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC14u;
        // 0x23fc18: 0xa2420617  sb          $v0, 0x617($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc14) {
            ctx->pc = 0x240220u;
            goto label_240220;
        }
    }
    ctx->pc = 0x23FC1Cu;
label_23fc1c:
    // 0x23fc1c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23FC1Cu;
    SET_GPR_U32(ctx, 31, 0x23FC24u);
    ctx->pc = 0x23FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC1Cu;
    // 0x23fc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23FC1Cu, 0x23FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC24u;
label_23fc24:
    // 0x23fc24: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x23fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x23fc28: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23fc28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23fc2c: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x23fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x23fc30: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x23fc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x23fc34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FC34u;
    {
        const bool branch_taken_0x23fc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC34u;
        // 0x23fc38: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc34) {
            ctx->pc = 0x23FC54u;
            goto label_23fc54;
        }
    }
    ctx->pc = 0x23FC3Cu;
    // 0x23fc3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23fc40: 0x2442be50  addiu       $v0, $v0, -0x41B0
    ctx->pc = 0x23fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
    // 0x23fc44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fc48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fc4c: 0x800008  jr          $a0
    ctx->pc = 0x23FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FC54u: goto label_23fc54;
            case 0x23FC64u: goto label_23fc64;
            case 0x23FC74u: goto label_23fc74;
            case 0x23FC84u: goto label_23fc84;
            case 0x23FC94u: goto label_23fc94;
            case 0x23FCA4u: goto label_23fca4;
            case 0x23FCB4u: goto label_23fcb4;
            case 0x23FCC4u: goto label_23fcc4;
            case 0x23FCD4u: goto label_23fcd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23FC54u;
label_23fc54:
    // 0x23fc54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fc58: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x23fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x23fc5c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23FC5Cu;
    {
        const bool branch_taken_0x23fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC5Cu;
        // 0x23fc60: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc5c) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FC64u;
label_23fc64:
    // 0x23fc64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fc68: 0x8c43087c  lw          $v1, 0x87C($v0)
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2172)));
    // 0x23fc6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23FC6Cu;
    {
        const bool branch_taken_0x23fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC6Cu;
        // 0x23fc70: 0x8c440880  lw          $a0, 0x880($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc6c) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FC74u;
label_23fc74:
    // 0x23fc74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fc78: 0x8c43195c  lw          $v1, 0x195C($v0)
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6492)));
    // 0x23fc7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23FC7Cu;
    {
        const bool branch_taken_0x23fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC7Cu;
        // 0x23fc80: 0x8c441960  lw          $a0, 0x1960($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc7c) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FC84u;
label_23fc84:
    // 0x23fc84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fc88: 0x8c43195c  lw          $v1, 0x195C($v0)
    ctx->pc = 0x23fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6492)));
    // 0x23fc8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23FC8Cu;
    {
        const bool branch_taken_0x23fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC8Cu;
        // 0x23fc90: 0x8c441960  lw          $a0, 0x1960($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc8c) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FC94u;
label_23fc94:
    // 0x23fc94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fc98: 0x8c430d58  lw          $v1, 0xD58($v0)
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3416)));
    // 0x23fc9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23FC9Cu;
    {
        const bool branch_taken_0x23fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC9Cu;
        // 0x23fca0: 0x8c440d5c  lw          $a0, 0xD5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fc9c) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FCA4u;
label_23fca4:
    // 0x23fca4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fca8: 0x8c4315b4  lw          $v1, 0x15B4($v0)
    ctx->pc = 0x23fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5556)));
    // 0x23fcac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23FCACu;
    {
        const bool branch_taken_0x23fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCACu;
        // 0x23fcb0: 0x8c4415b8  lw          $a0, 0x15B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcac) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FCB4u;
label_23fcb4:
    // 0x23fcb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fcb8: 0x8c4315b4  lw          $v1, 0x15B4($v0)
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5556)));
    // 0x23fcbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FCBCu;
    {
        const bool branch_taken_0x23fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCBCu;
        // 0x23fcc0: 0x8c4415b8  lw          $a0, 0x15B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fcbc) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FCC4u;
label_23fcc4:
    // 0x23fcc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fcc8: 0x8c431104  lw          $v1, 0x1104($v0)
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4356)));
    // 0x23fccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23FCCCu;
    {
        const bool branch_taken_0x23fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FCCCu;
        // 0x23fcd0: 0x8c441108  lw          $a0, 0x1108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fccc) {
            ctx->pc = 0x23FCE0u;
            goto label_23fce0;
        }
    }
    ctx->pc = 0x23FCD4u;
label_23fcd4:
    // 0x23fcd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x23fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x23fcd8: 0x8c432e1c  lw          $v1, 0x2E1C($v0)
    ctx->pc = 0x23fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11804)));
    // 0x23fcdc: 0x8c442e20  lw          $a0, 0x2E20($v0)
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11808)));
label_23fce0:
    // 0x23fce0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x23fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fce4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x23fce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23fce8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x23fce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x23fcec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fcf0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23fcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23fcf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23fcf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fcf8: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x23fcf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x23fcfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd00: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23FD00u;
    SET_GPR_U32(ctx, 31, 0x23FD08u);
    ctx->pc = 0x23FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD00u;
    // 0x23fd04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23FD00u, 0x23FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD08u;
label_23fd08:
    // 0x23fd08: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x23fd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23fd0c: 0xc64c06e0  lwc1        $f12, 0x6E0($s2)
    ctx->pc = 0x23fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23fd10: 0xc051e62  jal         func_147988
    ctx->pc = 0x23FD10u;
    SET_GPR_U32(ctx, 31, 0x23FD18u);
    ctx->pc = 0x23FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD10u;
    // 0x23fd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x23FD10u, 0x23FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD18u;
label_23fd18:
    // 0x23fd18: 0x3c01bf99  lui         $at, 0xBF99
    ctx->pc = 0x23fd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49049 << 16));
    // 0x23fd1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23fd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23fd20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23fd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fd24: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x23fd24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23fd28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd2c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x23fd2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23fd30: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x23fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23fd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd38: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x23fd38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23fd3c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x23FD3Cu;
    SET_GPR_U32(ctx, 31, 0x23FD44u);
    ctx->pc = 0x23FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FD3Cu;
    // 0x23fd40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x23FD3Cu, 0x23FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FD44u;
label_23fd44:
    // 0x23fd44: 0x264206d0  addiu       $v0, $s2, 0x6D0
    ctx->pc = 0x23fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x23fd48: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x23fd48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fd4c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x23fd4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fd50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23fd50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fd54: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x23fd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fd58: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x23fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x23fd5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23fd60: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x23fd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23fd64: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x23fd64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23fd68: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x23fd68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fd6c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23fd6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fd70: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x23fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fd74: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23fd78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x23fd78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fd7c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x23fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fd80: 0x26420590  addiu       $v0, $s2, 0x590
    ctx->pc = 0x23fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x23fd84: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FD84u;
    {
        const bool branch_taken_0x23fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD84u;
        // 0x23fd88: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd84) {
            ctx->pc = 0x23FDA0u;
            goto label_23fda0;
        }
    }
    ctx->pc = 0x23FD8Cu;
    // 0x23fd8c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x23fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fd90: 0xe6400590  swc1        $f0, 0x590($s2)
    ctx->pc = 0x23fd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1424), bits); }
    // 0x23fd94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x23fd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23fd98: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x23fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fd9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x23fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_23fda0:
    // 0x23fda0: 0xc6400594  lwc1        $f0, 0x594($s2)
    ctx->pc = 0x23fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fda4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23fda8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23fda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23fdac: 0x3c013bf0  lui         $at, 0x3BF0
    ctx->pc = 0x23fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15344 << 16));
    // 0x23fdb0: 0x3421f0f1  ori         $at, $at, 0xF0F1
    ctx->pc = 0x23fdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61681);
    // 0x23fdb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23fdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23fdb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23fdb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23fdbc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x23fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x23fdc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23fdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23fdc4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x23fdc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x23fdc8: 0xc64106e0  lwc1        $f1, 0x6E0($s2)
    ctx->pc = 0x23fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fdcc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23fdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23fdd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fdd4: 0xe6540594  swc1        $f20, 0x594($s2)
    ctx->pc = 0x23fdd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1428), bits); }
    // 0x23fdd8: 0xe6410104  swc1        $f1, 0x104($s2)
    ctx->pc = 0x23fdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x23fddc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x23fddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23fde0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x23fde0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23fde4: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x23fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x23fde8: 0xe6420604  swc1        $f2, 0x604($s2)
    ctx->pc = 0x23fde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
label_23fdec:
    // 0x23fdec: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x23fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x23fdf0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x23fdf4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x23fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x23fdf8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x23fdfc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23fdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23fe00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe04: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23fe08: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23FE08u;
    SET_GPR_U32(ctx, 31, 0x23FE10u);
    ctx->pc = 0x23FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE08u;
    // 0x23fe0c: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23FE08u, 0x23FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE10u;
label_23fe10:
    // 0x23fe10: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x23fe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fe14: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x23fe14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23fe18: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x23fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fe1c: 0x26430590  addiu       $v1, $s2, 0x590
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1424));
    // 0x23fe20: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x23fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x23fe24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23fe24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23fe28: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x23fe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x23fe2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23fe2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x23fe30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23fe30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23fe34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fe38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23fe38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23fe3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x23fe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23fe40: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x23fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fe44: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x23fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23fe48: 0xc6400604  lwc1        $f0, 0x604($s2)
    ctx->pc = 0x23fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fe4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23fe4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23fe50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23fe50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23fe54: 0xe6400604  swc1        $f0, 0x604($s2)
    ctx->pc = 0x23fe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1540), bits); }
    // 0x23fe58: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23fe58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fe5c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fe60: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fe64: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x23fe64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x23fe68: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x23fe68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x23fe6c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x23fe6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fe70: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fe74: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x23fe74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23fe78: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x23fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fe7c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x23fe7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23fe80: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x23fe80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23fe84: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fe88: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23fe8c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x23fe8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x23fe90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x23fe90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x23fe94: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x23fe94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fe98: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x23fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fe9c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x23fe9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23fea0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x23fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fea4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x23fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23fea8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x23fea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23feac: 0x10710006  beq         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FEACu;
    {
        const bool branch_taken_0x23feac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x23FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEACu;
        // 0x23feb0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feac) {
            ctx->pc = 0x23FEC8u;
            goto label_23fec8;
        }
    }
    ctx->pc = 0x23FEB4u;
    // 0x23feb4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x23feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23feb8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23feb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23febc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x23febcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23fec0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x23fec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fec4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x23fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_23fec8:
    // 0x23fec8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x23fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x23fecc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x23feccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23fed0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x23fed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fed4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23fed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fed8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x23fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23fedc: 0xda440590  lqc2        $vf4, 0x590($s2)
    ctx->pc = 0x23fedcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1424)));
    // 0x23fee0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x23fee0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fee4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x23fee4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23fee8: 0xfa440590  sqc2        $vf4, 0x590($s2)
    ctx->pc = 0x23fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x23feec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23fef0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23fef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23fef4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23FEF4u;
    SET_GPR_U32(ctx, 31, 0x23FEFCu);
    ctx->pc = 0x23FEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEF4u;
    // 0x23fef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23FEF4u, 0x23FEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEFCu;
label_23fefc:
    // 0x23fefc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x23ff00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23ff00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x23ff04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23ff04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ff08: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23FF08u;
    SET_GPR_U32(ctx, 31, 0x23FF10u);
    ctx->pc = 0x23FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF08u;
    // 0x23ff0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23FF08u, 0x23FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF10u;
label_23ff10:
    // 0x23ff10: 0xc6410604  lwc1        $f1, 0x604($s2)
    ctx->pc = 0x23ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ff14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ff14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ff18: 0x0  nop
    ctx->pc = 0x23ff18u;
    // NOP
    // 0x23ff1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ff1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ff20: 0x0  nop
    ctx->pc = 0x23ff20u;
    // NOP
    // 0x23ff24: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF24u;
        // 0x23ff28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x240028u;
            goto label_240028;
        }
    }
    ctx->pc = 0x23FF2Cu;
    // 0x23ff2c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x23ff2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x23ff30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FF30u;
    {
        const bool branch_taken_0x23ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff30) {
            ctx->pc = 0x23FF64u;
            goto label_23ff64;
        }
    }
    ctx->pc = 0x23FF38u;
    // 0x23ff38: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x23ff3c: 0xc64106d4  lwc1        $f1, 0x6D4($s2)
    ctx->pc = 0x23ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ff40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ff44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23ff44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ff48: 0x0  nop
    ctx->pc = 0x23ff48u;
    // NOP
    // 0x23ff4c: 0x45000176  bc1f        . + 4 + (0x176 << 2)
    ctx->pc = 0x23FF4Cu;
    {
        const bool branch_taken_0x23ff4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF4Cu;
        // 0x23ff50: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff4c) {
            ctx->pc = 0x240528u;
            goto label_240528;
        }
    }
    ctx->pc = 0x23FF54u;
    // 0x23ff54: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x23ff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x23ff58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ff5c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF5Cu;
        // 0x23ff60: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x240528u;
            goto label_240528;
        }
    }
    ctx->pc = 0x23FF64u;
label_23ff64:
    // 0x23ff64: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x23ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23ff68: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x23ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23ff6c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x23ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23ff70: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x23ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x23ff74: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FF74u;
    {
        const bool branch_taken_0x23ff74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ff74) {
            ctx->pc = 0x23FF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF74u;
            // 0x23ff78: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF98u;
            goto label_23ff98;
        }
    }
    ctx->pc = 0x23FF7Cu;
    // 0x23ff7c: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x23ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ff80: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23ff84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ff88: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x23ff88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23ff8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ff90: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23ff90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23ff94: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_23ff98:
    // 0x23ff98: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FF98u;
    {
        const bool branch_taken_0x23ff98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF98u;
        // 0x23ff9c: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff98) {
            ctx->pc = 0x23FFBCu;
            goto label_23ffbc;
        }
    }
    ctx->pc = 0x23FFA0u;
    // 0x23ffa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ffa4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23ffa8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ffac: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x23ffacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23ffb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ffb4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x23ffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x23ffb8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ffbc:
    // 0x23ffbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ffc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23ffc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23ffc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ffc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ffc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23ffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23ffd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23ffd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23ffd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x23ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x23ffdc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x23ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x23ffe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23ffe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ffe4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x23ffe8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ffec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23ffecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23fff0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23fff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fff4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x23fff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23fff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fffc: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x23fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x240000: 0xc04c784  jal         func_131E10
    ctx->pc = 0x240000u;
    SET_GPR_U32(ctx, 31, 0x240008u);
    ctx->pc = 0x240004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240000u;
    // 0x240004: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x240000u, 0x240008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240008u;
label_240008:
    // 0x240008: 0x14500147  bne         $v0, $s0, . + 4 + (0x147 << 2)
    ctx->pc = 0x240008u;
    {
        const bool branch_taken_0x240008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x24000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240008u;
        // 0x24000c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240008) {
            ctx->pc = 0x240528u;
            goto label_240528;
        }
    }
    ctx->pc = 0x240010u;
    // 0x240010: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x240010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240014: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240018: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x24001c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x240020: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x240020u;
    {
        const bool branch_taken_0x240020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240020u;
        // 0x240024: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240020) {
            ctx->pc = 0x240528u;
            goto label_240528;
        }
    }
    ctx->pc = 0x240028u;
label_240028:
    // 0x240028: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x240028u;
    {
        const bool branch_taken_0x240028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240028u;
        // 0x24002c: 0xa2420617  sb          $v0, 0x617($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240028) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240030u;
label_240030:
    // 0x240030: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240030u;
    SET_GPR_U32(ctx, 31, 0x240038u);
    ctx->pc = 0x240034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240030u;
    // 0x240034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240030u, 0x240038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240038u;
label_240038:
    // 0x240038: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x24003c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24003cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x240040: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x240044: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x240044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x240048: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240048u;
    {
        const bool branch_taken_0x240048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240048u;
        // 0x24004c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240048) {
            ctx->pc = 0x240068u;
            goto label_240068;
        }
    }
    ctx->pc = 0x240050u;
    // 0x240050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240054: 0x2442c030  addiu       $v0, $v0, -0x3FD0
    ctx->pc = 0x240054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950960));
    // 0x240058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24005c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240060: 0x800008  jr          $a0
    ctx->pc = 0x240060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240068u: goto label_240068;
            case 0x240078u: goto label_240078;
            case 0x240088u: goto label_240088;
            case 0x240098u: goto label_240098;
            case 0x2400A8u: goto label_2400a8;
            case 0x2400B8u: goto label_2400b8;
            case 0x2400C8u: goto label_2400c8;
            case 0x2400D8u: goto label_2400d8;
            case 0x2400E8u: goto label_2400e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240068u;
label_240068:
    // 0x240068: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24006c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x240070: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x240070u;
    {
        const bool branch_taken_0x240070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240070u;
        // 0x240074: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240070) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x240078u;
label_240078:
    // 0x240078: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24007c: 0x8c43088c  lw          $v1, 0x88C($v0)
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x240080: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x240080u;
    {
        const bool branch_taken_0x240080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240080u;
        // 0x240084: 0x8c440890  lw          $a0, 0x890($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240080) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x240088u;
label_240088:
    // 0x240088: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24008c: 0x8c43196c  lw          $v1, 0x196C($v0)
    ctx->pc = 0x24008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6508)));
    // 0x240090: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x240090u;
    {
        const bool branch_taken_0x240090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240090u;
        // 0x240094: 0x8c441970  lw          $a0, 0x1970($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240090) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x240098u;
label_240098:
    // 0x240098: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x240098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x24009c: 0x8c43196c  lw          $v1, 0x196C($v0)
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6508)));
    // 0x2400a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2400A0u;
    {
        const bool branch_taken_0x2400a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400A0u;
        // 0x2400a4: 0x8c441970  lw          $a0, 0x1970($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400a0) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400A8u;
label_2400a8:
    // 0x2400a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2400a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2400ac: 0x8c430d68  lw          $v1, 0xD68($v0)
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3432)));
    // 0x2400b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2400B0u;
    {
        const bool branch_taken_0x2400b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400B0u;
        // 0x2400b4: 0x8c440d6c  lw          $a0, 0xD6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400b0) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400B8u;
label_2400b8:
    // 0x2400b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2400bc: 0x8c4315c4  lw          $v1, 0x15C4($v0)
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x2400c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2400C0u;
    {
        const bool branch_taken_0x2400c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400C0u;
        // 0x2400c4: 0x8c4415c8  lw          $a0, 0x15C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400c0) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400C8u;
label_2400c8:
    // 0x2400c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2400cc: 0x8c4315c4  lw          $v1, 0x15C4($v0)
    ctx->pc = 0x2400ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5572)));
    // 0x2400d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2400D0u;
    {
        const bool branch_taken_0x2400d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400D0u;
        // 0x2400d4: 0x8c4415c8  lw          $a0, 0x15C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400d0) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400D8u;
label_2400d8:
    // 0x2400d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2400dc: 0x8c431114  lw          $v1, 0x1114($v0)
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4372)));
    // 0x2400e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2400E0u;
    {
        const bool branch_taken_0x2400e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400E0u;
        // 0x2400e4: 0x8c441118  lw          $a0, 0x1118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400e0) {
            ctx->pc = 0x2400F4u;
            goto label_2400f4;
        }
    }
    ctx->pc = 0x2400E8u;
label_2400e8:
    // 0x2400e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2400ec: 0x8c432e24  lw          $v1, 0x2E24($v0)
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11812)));
    // 0x2400f0: 0x8c442e28  lw          $a0, 0x2E28($v0)
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11816)));
label_2400f4:
    // 0x2400f4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2400f8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2400fc: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2400fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x240100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x240104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240108: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24010c: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x24010cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x240110: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240110u;
    SET_GPR_U32(ctx, 31, 0x240118u);
    ctx->pc = 0x240114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240110u;
    // 0x240114: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240110u, 0x240118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240118u;
label_240118:
    // 0x240118: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24011c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240120: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240120u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_240124:
    // 0x240124: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x240124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x240128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240128u;
    {
        const bool branch_taken_0x240128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240128u;
        // 0x24012c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240128) {
            ctx->pc = 0x240148u;
            goto label_240148;
        }
    }
    ctx->pc = 0x240130u;
    // 0x240130: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x240134: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x240134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x240138: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x24013c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x240140: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240144: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x240144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_240148:
    // 0x240148: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240148u;
    SET_GPR_U32(ctx, 31, 0x240150u);
    ctx->pc = 0x24014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240148u;
    // 0x24014c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240148u, 0x240150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240150u;
label_240150:
    // 0x240150: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x240150u;
    {
        const bool branch_taken_0x240150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240150) {
            ctx->pc = 0x24023Cu;
            goto label_24023c;
        }
    }
    ctx->pc = 0x240158u;
    // 0x240158: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x240158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x24015c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24015Cu;
    {
        const bool branch_taken_0x24015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24015Cu;
        // 0x240160: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24015c) {
            ctx->pc = 0x240184u;
            goto label_240184;
        }
    }
    ctx->pc = 0x240164u;
    // 0x240164: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x240164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x240168: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x240168u;
    {
        const bool branch_taken_0x240168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240168u;
        // 0x24016c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240168) {
            ctx->pc = 0x240184u;
            goto label_240184;
        }
    }
    ctx->pc = 0x240170u;
    // 0x240170: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x240170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x240174: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x240174u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x240178: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x240178u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24017c: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x24017Cu;
    {
        const bool branch_taken_0x24017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24017Cu;
        // 0x240180: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24017c) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240184u;
label_240184:
    // 0x240184: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x240184u;
    SET_GPR_U32(ctx, 31, 0x24018Cu);
    ctx->pc = 0x240188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240184u;
    // 0x240188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x240184u, 0x24018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24018Cu;
label_24018c:
    // 0x24018c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x24018Cu;
    {
        const bool branch_taken_0x24018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24018c) {
            ctx->pc = 0x24023Cu;
            goto label_24023c;
        }
    }
    ctx->pc = 0x240194u;
label_240194:
    // 0x240194: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240194u;
    SET_GPR_U32(ctx, 31, 0x24019Cu);
    ctx->pc = 0x240198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240194u;
    // 0x240198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240194u, 0x24019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24019Cu;
label_24019c:
    // 0x24019c: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x24019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2401a0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2401a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2401a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2401a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2401a8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2401a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2401ac: 0x8c651be8  lw          $a1, 0x1BE8($v1)
    ctx->pc = 0x2401acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7144)));
    // 0x2401b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2401b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401b4: 0x8c661bec  lw          $a2, 0x1BEC($v1)
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7148)));
    // 0x2401b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2401b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401bc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2401bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2401c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2401C0u;
    SET_GPR_U32(ctx, 31, 0x2401C8u);
    ctx->pc = 0x2401C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401C0u;
    // 0x2401c4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2401C0u, 0x2401C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401C8u;
label_2401c8:
    // 0x2401c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2401c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2401cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2401ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401d0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2401D0u;
    SET_GPR_U32(ctx, 31, 0x2401D8u);
    ctx->pc = 0x2401D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401D0u;
    // 0x2401d4: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2401D0u, 0x2401D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401D8u;
label_2401d8:
    // 0x2401d8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2401d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2401dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2401dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2401e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2401e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2401e8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2401ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2401ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2401f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2401f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2401f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401fc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2401FCu;
    SET_GPR_U32(ctx, 31, 0x240204u);
    ctx->pc = 0x240200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401FCu;
    // 0x240200: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2401FCu, 0x240204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240204u;
label_240204:
    // 0x240204: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x240204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240208: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x240208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24020c: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x24020cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_240210:
    // 0x240210: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x240210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x240214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x240214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24021c: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x24021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_240220:
    // 0x240220: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240220u;
    SET_GPR_U32(ctx, 31, 0x240228u);
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240220u, 0x240228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240228u;
label_240228:
    // 0x240228: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240228u;
    {
        const bool branch_taken_0x240228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240228) {
            ctx->pc = 0x24023Cu;
            goto label_24023c;
        }
    }
    ctx->pc = 0x240230u;
    // 0x240230: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240238: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24023c:
    // 0x24023c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240240: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x240244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240248: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x240248u;
    SET_GPR_U32(ctx, 31, 0x240250u);
    ctx->pc = 0x24024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240248u;
    // 0x24024c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x240248u, 0x240250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240250u;
label_240250:
    // 0x240250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240254: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x240254u;
    SET_GPR_U32(ctx, 31, 0x24025Cu);
    ctx->pc = 0x240258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240254u;
    // 0x240258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x240254u, 0x24025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24025Cu;
label_24025c:
    // 0x24025c: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x24025Cu;
    {
        const bool branch_taken_0x24025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24025Cu;
        // 0x240260: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24025c) {
            ctx->pc = 0x240528u;
            goto label_240528;
        }
    }
    ctx->pc = 0x240264u;
label_240264:
    // 0x240264: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x240268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24026c: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x24026cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
    // 0x240270: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x240270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x240274: 0xc09d91a  jal         func_276468
    ctx->pc = 0x240274u;
    SET_GPR_U32(ctx, 31, 0x24027Cu);
    ctx->pc = 0x240278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240274u;
    // 0x240278: 0xae420250  sw          $v0, 0x250($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x240274u, 0x24027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24027Cu;
label_24027c:
    // 0x24027c: 0xc64006e0  lwc1        $f0, 0x6E0($s2)
    ctx->pc = 0x24027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240280: 0x264406d0  addiu       $a0, $s2, 0x6D0
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x240284: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240288: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24028c: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x24028cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x240290: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x240290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x240294: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x240294u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240298: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x240298u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24029c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24029cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2402a0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2402a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2402a4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2402a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2402a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2402ac: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2402acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2402b0: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x2402b4: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2402B4u;
    {
        const bool branch_taken_0x2402b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2402B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402B4u;
        // 0x2402b8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402b4) {
            ctx->pc = 0x2402D0u;
            goto label_2402d0;
        }
    }
    ctx->pc = 0x2402BCu;
    // 0x2402bc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2402bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2402c0: 0xe6400580  swc1        $f0, 0x580($s2)
    ctx->pc = 0x2402c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1408), bits); }
    // 0x2402c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2402c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2402c8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2402c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2402cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2402ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2402d0:
    // 0x2402d0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x2402d4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2402d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2402d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2402d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2402dc: 0xda440580  lqc2        $vf4, 0x580($s2)
    ctx->pc = 0x2402dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1408)));
    // 0x2402e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2402e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2402e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2402e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2402e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2402e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2402ec: 0xfa440580  sqc2        $vf4, 0x580($s2)
    ctx->pc = 0x2402ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2402f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2402f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2402f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2402f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2402f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2402fc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2402fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x240300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240304: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x240304u;
    SET_GPR_U32(ctx, 31, 0x24030Cu);
    ctx->pc = 0x240308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240304u;
    // 0x240308: 0xe6410600  swc1        $f1, 0x600($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x240304u, 0x24030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24030Cu;
label_24030c:
    // 0x24030c: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x24030cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x240310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240314: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x240314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x240318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24031c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x240320: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x240320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240324: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x240324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240328: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24032c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24032cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240330: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x240330u;
    SET_GPR_U32(ctx, 31, 0x240338u);
    ctx->pc = 0x240334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240330u;
    // 0x240334: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x240330u, 0x240338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240338u;
label_240338:
    // 0x240338: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x240338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x24033c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x240340: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x240340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_240344:
    // 0x240344: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x240344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x240348: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x24034c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x24034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x240350: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x240354: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240358: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x240358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24035c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24035cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240360: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x240364: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x240364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x240368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24036c: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x24036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x240370: 0xae4316d0  sw          $v1, 0x16D0($s2)
    ctx->pc = 0x240370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    // 0x240374: 0xc055f06  jal         func_157C18
    ctx->pc = 0x240374u;
    SET_GPR_U32(ctx, 31, 0x24037Cu);
    ctx->pc = 0x240378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240374u;
    // 0x240378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x240374u, 0x24037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24037Cu;
label_24037c:
    // 0x24037c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240380: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x240384: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x240388: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x240388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24038c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x24038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x240390: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x240390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240394: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x240394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x240398: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x240398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x24039c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x24039cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2403a0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2403a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2403a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2403a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2403a8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2403a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2403ac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2403acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2403b0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2403b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2403B4u;
    {
        const bool branch_taken_0x2403b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2403B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403B4u;
        // 0x2403b8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403b4) {
            ctx->pc = 0x2403D0u;
            goto label_2403d0;
        }
    }
    ctx->pc = 0x2403BCu;
    // 0x2403bc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2403bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403c0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2403c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2403c4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2403c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2403c8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2403c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2403cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2403ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2403d0:
    // 0x2403d0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2403d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2403d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2403d8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2403d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2403dc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2403dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2403e0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2403e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2403e4: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x2403e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2403e8: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x2403e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2403ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2403f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2403f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2403f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2403f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2403f8: 0x0  nop
    ctx->pc = 0x2403f8u;
    // NOP
    // 0x2403fc: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x2403FCu;
    {
        const bool branch_taken_0x2403fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403FCu;
        // 0x240400: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403fc) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240404u;
    // 0x240404: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x240408: 0x264206d0  addiu       $v0, $s2, 0x6D0
    ctx->pc = 0x240408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x24040c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24040Cu;
    {
        const bool branch_taken_0x24040c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24040c) {
            ctx->pc = 0x240410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24040Cu;
            // 0x240410: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240430u;
            goto label_240430;
        }
    }
    ctx->pc = 0x240414u;
    // 0x240414: 0xc64006d0  lwc1        $f0, 0x6D0($s2)
    ctx->pc = 0x240414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240418: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x240418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24041c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240420: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x240420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x240424: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x240424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240428: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x240428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24042c: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x24042cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_240430:
    // 0x240430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240434: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x240434u;
    {
        const bool branch_taken_0x240434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240434u;
        // 0x240438: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240434) {
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24043Cu;
    SET_GPR_U32(ctx, 31, 0x240444u);
    ctx->pc = 0x240440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24043Cu;
    // 0x240440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24043Cu, 0x240444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240444u;
label_240444:
    // 0x240444: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x240444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x240448: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x240448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24044c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24044cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240454: 0x8c651bf0  lw          $a1, 0x1BF0($v1)
    ctx->pc = 0x240454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7152)));
    // 0x240458: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x240458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24045c: 0x8c661bf4  lw          $a2, 0x1BF4($v1)
    ctx->pc = 0x24045cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7156)));
    // 0x240460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240464: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x240464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x240468: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x240468u;
    SET_GPR_U32(ctx, 31, 0x240470u);
    ctx->pc = 0x24046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240468u;
    // 0x24046c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x240468u, 0x240470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240470u;
label_240470:
    // 0x240470: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x240470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x240474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240478: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x240478u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_24047c:
    // 0x24047c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x24047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240480: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x240484: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x240484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x240488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x240488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24048c: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x24048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240490: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x240490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x240494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240498: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x240498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24049c: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x2404a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2404a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2404a4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2404a8: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x2404a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x2404ac: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2404acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2404b0: 0x0  nop
    ctx->pc = 0x2404b0u;
    // NOP
    // 0x2404b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2404B4u;
    {
        const bool branch_taken_0x2404b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2404B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404B4u;
        // 0x2404b8: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404b4) {
            ctx->pc = 0x2404D0u;
            goto label_2404d0;
        }
    }
    ctx->pc = 0x2404BCu;
    // 0x2404bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2404bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2404c0: 0xe654024c  swc1        $f20, 0x24C($s2)
    ctx->pc = 0x2404c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
    // 0x2404c4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2404c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x2404c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2404c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2404cc: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x2404ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_2404d0:
    // 0x2404d0: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2404d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x2404d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2404D4u;
    {
        const bool branch_taken_0x2404d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D4u;
        // 0x2404d8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404d4) {
            ctx->pc = 0x2404F4u;
            goto label_2404f4;
        }
    }
    ctx->pc = 0x2404DCu;
    // 0x2404dc: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2404dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2404e0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2404e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2404e4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2404e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2404e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2404e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2404ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2404ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2404f0: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x2404f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_2404f4:
    // 0x2404f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2404F4u;
    SET_GPR_U32(ctx, 31, 0x2404FCu);
    ctx->pc = 0x2404F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F4u;
    // 0x2404f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2404F4u, 0x2404FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404FCu;
label_2404fc:
    // 0x2404fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2404FCu;
    {
        const bool branch_taken_0x2404fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404FCu;
        // 0x240500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404fc) {
            ctx->pc = 0x240510u;
            goto label_240510;
        }
    }
    ctx->pc = 0x240504u;
    // 0x240504: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x240504u;
    SET_GPR_U32(ctx, 31, 0x24050Cu);
    ctx->pc = 0x240508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240504u;
    // 0x240508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x240504u, 0x24050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24050Cu;
label_24050c:
    // 0x24050c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240510:
    // 0x240510: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x240510u;
    SET_GPR_U32(ctx, 31, 0x240518u);
    ctx->pc = 0x240514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240510u;
    // 0x240514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x240510u, 0x240518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240518u;
label_240518:
    // 0x240518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24051c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24051Cu;
    SET_GPR_U32(ctx, 31, 0x240524u);
    ctx->pc = 0x240520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24051Cu;
    // 0x240520: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24051Cu, 0x240524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240524u;
label_240524:
    // 0x240524: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x240524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_240528:
    // 0x240528: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x240528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24052c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x24052cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x240530: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x240530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x240534: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x240534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x240538: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x240538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24053c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x24053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240540: 0x3e00008  jr          $ra
    ctx->pc = 0x240540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240540u;
        // 0x240544: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240548u;
}
