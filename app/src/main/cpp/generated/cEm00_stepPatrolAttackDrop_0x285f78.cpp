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

// Function: cEm00_stepPatrolAttackDrop
// Address: 0x285f78 - 0x2865f0
void cEm00_stepPatrolAttackDrop_0x285f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepPatrolAttackDrop_0x285f78");
#endif

    switch (ctx->pc) {
        case 0x286008u: goto label_286008;
        case 0x28603cu: goto label_28603c;
        case 0x286050u: goto label_286050;
        case 0x2860a4u: goto label_2860a4;
        case 0x2860b8u: goto label_2860b8;
        case 0x2860fcu: goto label_2860fc;
        case 0x28612cu: goto label_28612c;
        case 0x286134u: goto label_286134;
        case 0x28613cu: goto label_28613c;
        case 0x2861c8u: goto label_2861c8;
        case 0x2861fcu: goto label_2861fc;
        case 0x286220u: goto label_286220;
        case 0x286240u: goto label_286240;
        case 0x286248u: goto label_286248;
        case 0x28628cu: goto label_28628c;
        case 0x286308u: goto label_286308;
        case 0x286328u: goto label_286328;
        case 0x286344u: goto label_286344;
        case 0x286364u: goto label_286364;
        case 0x28638cu: goto label_28638c;
        case 0x286394u: goto label_286394;
        case 0x28639cu: goto label_28639c;
        case 0x2863d0u: goto label_2863d0;
        case 0x2863e4u: goto label_2863e4;
        case 0x286404u: goto label_286404;
        case 0x28640cu: goto label_28640c;
        case 0x286428u: goto label_286428;
        case 0x286430u: goto label_286430;
        case 0x286464u: goto label_286464;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864ecu: goto label_2864ec;
        case 0x286500u: goto label_286500;
        case 0x286520u: goto label_286520;
        case 0x286528u: goto label_286528;
        case 0x286530u: goto label_286530;
        case 0x286538u: goto label_286538;
        case 0x286580u: goto label_286580;
        case 0x286594u: goto label_286594;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865d0u: goto label_2865d0;
        case 0x2865d8u: goto label_2865d8;
        default: break;
    }

    ctx->pc = 0x285f78u;

    // 0x285f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x285f7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x285f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x285f80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x285f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x285f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285f88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285f8c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x285f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x285f90: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x285F90u;
    {
        const bool branch_taken_0x285f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f90) {
            ctx->pc = 0x285F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285F90u;
            // 0x285f94: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x285F98u;
    // 0x285f98: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x285f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x285f9c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x285f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x285fa0: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x285FA0u;
    {
        const bool branch_taken_0x285fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285fa0) {
            ctx->pc = 0x285FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285FA0u;
            // 0x285fa4: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x285FA8u;
    // 0x285fa8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x285fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285fac: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x285fb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285fb4: 0x0  nop
    ctx->pc = 0x285fb4u;
    // NOP
    // 0x285fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285fbc: 0x0  nop
    ctx->pc = 0x285fbcu;
    // NOP
    // 0x285fc0: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x285FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285FC0u;
            // 0x285fc4: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x285FC8u;
    // 0x285fc8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x285fcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x285fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285fd0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x285fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x285fd4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x285fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x285fd8: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x285fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x285fdc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x285fe0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x285fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x285fe4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x285fe8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x285fec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x285fecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x285ff0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x285ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x285ff4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x285ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ffc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x285ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286000: 0xc0a4404  jal         func_291010
    ctx->pc = 0x286000u;
    SET_GPR_U32(ctx, 31, 0x286008u);
    ctx->pc = 0x286004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286000u;
    // 0x286004: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x286000u, 0x286008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286008u;
label_286008:
    // 0x286008: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x286008u;
    {
        const bool branch_taken_0x286008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286008) {
            ctx->pc = 0x28600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286008u;
            // 0x28600c: 0x8e0415c4  lw          $a0, 0x15C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x286010u;
    // 0x286010: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286014: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x286014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x286018: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x286018u;
    {
        const bool branch_taken_0x286018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286018u;
        // 0x28601c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286018) {
            ctx->pc = 0x286024u;
            goto label_286024;
        }
    }
    ctx->pc = 0x286020u;
    // 0x286020: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x286020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_286024:
    // 0x286024: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x286028: 0x8e0415c4  lw          $a0, 0x15C4($s0)
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
label_28602c:
    // 0x28602c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28602Cu;
    {
        const bool branch_taken_0x28602c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28602c) {
            ctx->pc = 0x286030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28602Cu;
            // 0x286030: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286054u;
            goto label_286054;
        }
    }
    ctx->pc = 0x286034u;
    // 0x286034: 0xc070924  jal         func_1C2490
    ctx->pc = 0x286034u;
    SET_GPR_U32(ctx, 31, 0x28603Cu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x286034u, 0x28603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28603Cu;
label_28603c:
    // 0x28603c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28603Cu;
    {
        const bool branch_taken_0x28603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28603c) {
            ctx->pc = 0x286040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28603Cu;
            // 0x286040: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286054u;
            goto label_286054;
        }
    }
    ctx->pc = 0x286044u;
    // 0x286044: 0xae0015c4  sw          $zero, 0x15C4($s0)
    ctx->pc = 0x286044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 0));
    // 0x286048: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x286048u;
    SET_GPR_U32(ctx, 31, 0x286050u);
    ctx->pc = 0x28604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286048u;
    // 0x28604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x286048u, 0x286050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286050u;
label_286050:
    // 0x286050: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x286050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_286054:
    // 0x286054: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x286054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x286058: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x286058u;
    {
        const bool branch_taken_0x286058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286058u;
        // 0x28605c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286058) {
            ctx->pc = 0x2865D8u;
            goto label_2865d8;
        }
    }
    ctx->pc = 0x286060u;
    // 0x286060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286064: 0x24428bb0  addiu       $v0, $v0, -0x7450
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937520));
    // 0x286068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28606c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286070: 0x800008  jr          $a0
    ctx->pc = 0x286070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286078u: goto label_286078;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860D0u: goto label_2860d0;
            case 0x286108u: goto label_286108;
            case 0x2861D0u: goto label_2861d0;
            case 0x286208u: goto label_286208;
            case 0x28626Cu: goto label_28626c;
            case 0x286334u: goto label_286334;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863DCu: goto label_2863dc;
            case 0x2864C0u: goto label_2864c0;
            case 0x2864F8u: goto label_2864f8;
            case 0x286554u: goto label_286554;
            case 0x28658Cu: goto label_28658c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286078u;
label_286078:
    // 0x286078: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x286080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286084: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286088: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x286088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28608c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28608cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286090: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x286094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286098: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28609c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28609Cu;
    SET_GPR_U32(ctx, 31, 0x2860A4u);
    ctx->pc = 0x2860A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28609Cu;
    // 0x2860a0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28609Cu, 0x2860A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860A4u;
label_2860a4:
    // 0x2860a4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2860a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2860a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2860ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2860acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2860b0:
    // 0x2860b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2860B0u;
    SET_GPR_U32(ctx, 31, 0x2860B8u);
    ctx->pc = 0x2860B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860B0u;
    // 0x2860b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2860B0u, 0x2860B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860B8u;
label_2860b8:
    // 0x2860b8: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2860B8u;
    {
        const bool branch_taken_0x2860b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860b8) {
            ctx->pc = 0x28638Cu;
            goto label_28638c;
        }
    }
    ctx->pc = 0x2860C0u;
    // 0x2860c0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2860c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2860c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2860c8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2860C8u;
    {
        const bool branch_taken_0x2860c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860C8u;
        // 0x2860cc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860c8) {
            ctx->pc = 0x28638Cu;
            goto label_28638c;
        }
    }
    ctx->pc = 0x2860D0u;
label_2860d0:
    // 0x2860d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2860d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2860d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2860d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2860dc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2860e0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2860e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2860e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860e8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x2860e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2860ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2860ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2860f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2860f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2860F4u;
    SET_GPR_U32(ctx, 31, 0x2860FCu);
    ctx->pc = 0x2860F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860F4u;
    // 0x2860f8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2860F4u, 0x2860FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2860FCu;
label_2860fc:
    // 0x2860fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2860fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286104: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_286108:
    // 0x286108: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x286108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28610c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28610cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286110: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286114: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x286114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286118: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28611c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x28611Cu;
    {
        const bool branch_taken_0x28611c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28611Cu;
        // 0x286120: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28611c) {
            ctx->pc = 0x28613Cu;
            goto label_28613c;
        }
    }
    ctx->pc = 0x286124u;
    // 0x286124: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286124u;
    SET_GPR_U32(ctx, 31, 0x28612Cu);
    ctx->pc = 0x286128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286124u;
    // 0x286128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286124u, 0x28612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28612Cu;
label_28612c:
    // 0x28612c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28612Cu;
    SET_GPR_U32(ctx, 31, 0x286134u);
    ctx->pc = 0x286130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28612Cu;
    // 0x286130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28612Cu, 0x286134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286134u;
label_286134:
    // 0x286134: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286134u;
    SET_GPR_U32(ctx, 31, 0x28613Cu);
    ctx->pc = 0x286138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286134u;
    // 0x286138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286134u, 0x28613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28613Cu;
label_28613c:
    // 0x28613c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286140: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x286140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x286144: 0x54400125  bnel        $v0, $zero, . + 4 + (0x125 << 2)
    ctx->pc = 0x286144u;
    {
        const bool branch_taken_0x286144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286144) {
            ctx->pc = 0x286148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286144u;
            // 0x286148: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x28614Cu;
    // 0x28614c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x286150: 0x920302fc  lbu         $v1, 0x2FC($s0)
    ctx->pc = 0x286150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x286154: 0x8c8276b0  lw          $v0, 0x76B0($a0)
    ctx->pc = 0x286154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x286158: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x286158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x28615c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x28615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x286160: 0x5443011e  bnel        $v0, $v1, . + 4 + (0x11E << 2)
    ctx->pc = 0x286160u;
    {
        const bool branch_taken_0x286160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x286160) {
            ctx->pc = 0x286164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286160u;
            // 0x286164: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x286168u;
    // 0x286168: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x286168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28616c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x28616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x286170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x286170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286174: 0x0  nop
    ctx->pc = 0x286174u;
    // NOP
    // 0x286178: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28617c: 0x0  nop
    ctx->pc = 0x28617cu;
    // NOP
    // 0x286180: 0x45020116  bc1fl       . + 4 + (0x116 << 2)
    ctx->pc = 0x286180u;
    {
        const bool branch_taken_0x286180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286180) {
            ctx->pc = 0x286184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286180u;
            // 0x286184: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x286188u;
    // 0x286188: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x286188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28618c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x28618cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286190: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x286190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x286194: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x286194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x286198: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x286198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28619c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x28619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2861a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2861a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2861a4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2861a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x2861a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2861a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2861ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2861acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2861b0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2861b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2861b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2861b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2861b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2861bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2861c0: 0xc0a4404  jal         func_291010
    ctx->pc = 0x2861C0u;
    SET_GPR_U32(ctx, 31, 0x2861C8u);
    ctx->pc = 0x2861C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861C0u;
    // 0x2861c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x2861C0u, 0x2861C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861C8u;
label_2861c8:
    // 0x2861c8: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x2861C8u;
    {
        const bool branch_taken_0x2861c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2861c8) {
            ctx->pc = 0x28653Cu;
            goto label_28653c;
        }
    }
    ctx->pc = 0x2861D0u;
label_2861d0:
    // 0x2861d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2861d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2861d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2861d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2861dc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2861dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2861e0: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2861e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861e8: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x2861e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2861ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2861ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2861f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2861f4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2861F4u;
    SET_GPR_U32(ctx, 31, 0x2861FCu);
    ctx->pc = 0x2861F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2861F4u;
    // 0x2861f8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2861F4u, 0x2861FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861FCu;
label_2861fc:
    // 0x2861fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2861fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286204: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_286208:
    // 0x286208: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x286208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28620c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x286210: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286210u;
    {
        const bool branch_taken_0x286210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286210) {
            ctx->pc = 0x286240u;
            goto label_286240;
        }
    }
    ctx->pc = 0x286218u;
    // 0x286218: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x286218u;
    SET_GPR_U32(ctx, 31, 0x286220u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x286218u, 0x286220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286220u;
label_286220:
    // 0x286220: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x286220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286228: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x28622c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28622cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286230: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286234: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x286234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x286238: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x286238u;
    SET_GPR_U32(ctx, 31, 0x286240u);
    ctx->pc = 0x28623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286238u;
    // 0x28623c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x286238u, 0x286240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286240u;
label_286240:
    // 0x286240: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286240u;
    SET_GPR_U32(ctx, 31, 0x286248u);
    ctx->pc = 0x286244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286240u;
    // 0x286244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286240u, 0x286248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286248u;
label_286248:
    // 0x286248: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x286248u;
    {
        const bool branch_taken_0x286248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286248) {
            ctx->pc = 0x28638Cu;
            goto label_28638c;
        }
    }
    ctx->pc = 0x286250u;
    // 0x286250: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286254: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x286254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x286258: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x286258u;
    {
        const bool branch_taken_0x286258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286258u;
        // 0x28625c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286258) {
            ctx->pc = 0x286264u;
            goto label_286264;
        }
    }
    ctx->pc = 0x286260u;
    // 0x286260: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x286260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_286264:
    // 0x286264: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x286264u;
    {
        const bool branch_taken_0x286264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286264u;
        // 0x286268: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286264) {
            ctx->pc = 0x28638Cu;
            goto label_28638c;
        }
    }
    ctx->pc = 0x28626Cu;
label_28626c:
    // 0x28626c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x286270: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x286274: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x286274u;
    {
        const bool branch_taken_0x286274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286274u;
        // 0x286278: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286274) {
            ctx->pc = 0x2862D4u;
            goto label_2862d4;
        }
    }
    ctx->pc = 0x28627Cu;
    // 0x28627c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28627Cu;
    {
        const bool branch_taken_0x28627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28627c) {
            ctx->pc = 0x286280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28627Cu;
            // 0x286280: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862D8u;
            goto label_2862d8;
        }
    }
    ctx->pc = 0x286284u;
    // 0x286284: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x286284u;
    SET_GPR_U32(ctx, 31, 0x28628Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x286284u, 0x28628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28628Cu;
label_28628c:
    // 0x28628c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286294: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x286294u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x286298: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286298u;
    {
        const bool branch_taken_0x286298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286298) {
            ctx->pc = 0x28629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286298u;
            // 0x28629c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862A0u;
            goto label_2862a0;
        }
    }
    ctx->pc = 0x2862A0u;
label_2862a0:
    // 0x2862a0: 0x2810  mfhi        $a1
    ctx->pc = 0x2862a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2862a4: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2862A4u;
    {
        const bool branch_taken_0x2862a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2862a4) {
            ctx->pc = 0x2862A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2862A4u;
            // 0x2862a8: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2862C4u;
            goto label_2862c4;
        }
    }
    ctx->pc = 0x2862ACu;
    // 0x2862ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2862ACu;
    {
        const bool branch_taken_0x2862ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862ACu;
        // 0x2862b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862ac) {
            ctx->pc = 0x2862D4u;
            goto label_2862d4;
        }
    }
    ctx->pc = 0x2862B4u;
    // 0x2862b4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2862B4u;
    {
        const bool branch_taken_0x2862b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2862B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862B4u;
        // 0x2862b8: 0x8e030304  lw          $v1, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862b4) {
            ctx->pc = 0x2862CCu;
            goto label_2862cc;
        }
    }
    ctx->pc = 0x2862BCu;
    // 0x2862bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2862BCu;
    {
        const bool branch_taken_0x2862bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862BCu;
        // 0x2862c0: 0x8c6200e0  lw          $v0, 0xE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862bc) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x2862C4u;
label_2862c4:
    // 0x2862c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2862C4u;
    {
        const bool branch_taken_0x2862c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862C4u;
        // 0x2862c8: 0x8c6200e8  lw          $v0, 0xE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862c4) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x2862CCu;
label_2862cc:
    // 0x2862cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2862CCu;
    {
        const bool branch_taken_0x2862cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2862D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862CCu;
        // 0x2862d0: 0x8c6200f0  lw          $v0, 0xF0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862cc) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x2862D4u;
label_2862d4:
    // 0x2862d4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_2862d8:
    // 0x2862d8: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x2862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
label_2862dc:
    // 0x2862dc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2862e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2862e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2862e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2862e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2862e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2862e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2862ec: 0x2406005d  addiu       $a2, $zero, 0x5D
    ctx->pc = 0x2862ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x2862f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2862f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2862f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2862fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286300: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x286300u;
    SET_GPR_U32(ctx, 31, 0x286308u);
    ctx->pc = 0x286304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286300u;
    // 0x286304: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x286300u, 0x286308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286308u;
label_286308:
    // 0x286308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x286308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28630c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28630cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286314: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x286314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286318: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28631c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28631cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286320: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286320u;
    SET_GPR_U32(ctx, 31, 0x286328u);
    ctx->pc = 0x286324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286320u;
    // 0x286324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286320u, 0x286328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286328u;
label_286328:
    // 0x286328: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28632c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286330: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_286334:
    // 0x286334: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x286338: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28633c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28633Cu;
    SET_GPR_U32(ctx, 31, 0x286344u);
    ctx->pc = 0x286340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28633Cu;
    // 0x286340: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28633Cu, 0x286344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286344u;
label_286344:
    // 0x286344: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x286344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28634c: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x286350: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x286350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286354: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286358: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x28635c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x28635Cu;
    SET_GPR_U32(ctx, 31, 0x286364u);
    ctx->pc = 0x286360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28635Cu;
    // 0x286360: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x28635Cu, 0x286364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286364u;
label_286364:
    // 0x286364: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x286364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286368: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x286368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x28636c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28636cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286370: 0x0  nop
    ctx->pc = 0x286370u;
    // NOP
    // 0x286374: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x286374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286378: 0x0  nop
    ctx->pc = 0x286378u;
    // NOP
    // 0x28637c: 0x45030097  bc1tl       . + 4 + (0x97 << 2)
    ctx->pc = 0x28637Cu;
    {
        const bool branch_taken_0x28637c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28637c) {
            ctx->pc = 0x286380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28637Cu;
            // 0x286380: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x286384u;
    // 0x286384: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286384u;
    SET_GPR_U32(ctx, 31, 0x28638Cu);
    ctx->pc = 0x286388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286384u;
    // 0x286388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286384u, 0x28638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28638Cu;
label_28638c:
    // 0x28638c: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x28638Cu;
    SET_GPR_U32(ctx, 31, 0x286394u);
    ctx->pc = 0x286390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28638Cu;
    // 0x286390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x28638Cu, 0x286394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286394u;
label_286394:
    // 0x286394: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286394u;
    SET_GPR_U32(ctx, 31, 0x28639Cu);
    ctx->pc = 0x286398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286394u;
    // 0x286398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286394u, 0x28639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28639Cu;
label_28639c:
    // 0x28639c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x28639Cu;
    {
        const bool branch_taken_0x28639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28639Cu;
        // 0x2863a0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28639c) {
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x2863A4u;
label_2863a4:
    // 0x2863a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2863a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2863a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2863acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2863b0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2863b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2863b4: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x2863b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x2863b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2863b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863bc: 0x8c4600fc  lw          $a2, 0xFC($v0)
    ctx->pc = 0x2863bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x2863c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2863c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2863c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2863C8u;
    SET_GPR_U32(ctx, 31, 0x2863D0u);
    ctx->pc = 0x2863CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863C8u;
    // 0x2863cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2863C8u, 0x2863D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863D0u;
label_2863d0:
    // 0x2863d0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2863d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2863d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2863d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2863d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2863dc:
    // 0x2863dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2863DCu;
    SET_GPR_U32(ctx, 31, 0x2863E4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2863DCu, 0x2863E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863E4u;
label_2863e4:
    // 0x2863e4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2863e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2863e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2863e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863ec: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x2863ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x2863f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2863f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2863f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2863f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2863f8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2863f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2863fc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2863FCu;
    SET_GPR_U32(ctx, 31, 0x286404u);
    ctx->pc = 0x286400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863FCu;
    // 0x286400: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2863FCu, 0x286404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286404u;
label_286404:
    // 0x286404: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286404u;
    SET_GPR_U32(ctx, 31, 0x28640Cu);
    ctx->pc = 0x286408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286404u;
    // 0x286408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286404u, 0x28640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28640Cu;
label_28640c:
    // 0x28640c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28640Cu;
    {
        const bool branch_taken_0x28640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28640c) {
            ctx->pc = 0x286420u;
            goto label_286420;
        }
    }
    ctx->pc = 0x286414u;
    // 0x286414: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28641c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28641cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_286420:
    // 0x286420: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286420u;
    SET_GPR_U32(ctx, 31, 0x286428u);
    ctx->pc = 0x286424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286420u;
    // 0x286424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286420u, 0x286428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286428u;
label_286428:
    // 0x286428: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286428u;
    SET_GPR_U32(ctx, 31, 0x286430u);
    ctx->pc = 0x28642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286428u;
    // 0x28642c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286428u, 0x286430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286430u;
label_286430:
    // 0x286430: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x286430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x286434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286438: 0x50400068  beql        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x286438u;
    {
        const bool branch_taken_0x286438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286438) {
            ctx->pc = 0x28643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286438u;
            // 0x28643c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x286440u;
    // 0x286440: 0x8e0215c4  lw          $v0, 0x15C4($s0)
    ctx->pc = 0x286440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
    // 0x286444: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x286444u;
    {
        const bool branch_taken_0x286444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286444) {
            ctx->pc = 0x286448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286444u;
            // 0x286448: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x28644Cu;
    // 0x28644c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28644cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x286450: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x286450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x286454: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x286454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x286458: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x28645c: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x28645Cu;
    SET_GPR_U32(ctx, 31, 0x286464u);
    ctx->pc = 0x286460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28645Cu;
    // 0x286460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x28645Cu, 0x286464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286464u;
label_286464:
    // 0x286464: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286464u;
    {
        const bool branch_taken_0x286464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286464u;
        // 0x286468: 0xae0215c4  sw          $v0, 0x15C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286464) {
            ctx->pc = 0x2864A4u;
            goto label_2864a4;
        }
    }
    ctx->pc = 0x28646Cu;
    // 0x28646c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28646cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x286470: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x286470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x286474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286478: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x286478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28647c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x286480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286484: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x286484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x286488: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28648c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x286490: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x286490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286494: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x286494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x286498: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x286498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28649c: 0xc0708a0  jal         func_1C2280
    ctx->pc = 0x28649Cu;
    SET_GPR_U32(ctx, 31, 0x2864A4u);
    ctx->pc = 0x2864A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28649Cu;
    // 0x2864a0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2280u, 0x28649Cu, 0x2864A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864A4u;
label_2864a4:
    // 0x2864a4: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2864a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2864a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864ac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2864acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2864b0: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x2864B0u;
    SET_GPR_U32(ctx, 31, 0x2864B8u);
    ctx->pc = 0x2864B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864B0u;
    // 0x2864b4: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x2864B0u, 0x2864B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864B8u;
label_2864b8:
    // 0x2864b8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864B8u;
        // 0x2864bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2864c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2864c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2864c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2864c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2864cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2864d0: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2864d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2864d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864d8: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2864dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2864dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2864e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2864E4u;
    SET_GPR_U32(ctx, 31, 0x2864ECu);
    ctx->pc = 0x2864E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864E4u;
    // 0x2864e8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2864E4u, 0x2864ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864ECu;
label_2864ec:
    // 0x2864ec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2864ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2864f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2864f4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2864f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2864f8:
    // 0x2864f8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2864F8u;
    SET_GPR_U32(ctx, 31, 0x286500u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2864F8u, 0x286500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286500u;
label_286500:
    // 0x286500: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x286500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286508: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x28650c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28650cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x286510: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x286510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286514: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x286514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x286518: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x286518u;
    SET_GPR_U32(ctx, 31, 0x286520u);
    ctx->pc = 0x28651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286518u;
    // 0x28651c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x286518u, 0x286520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286520u;
label_286520:
    // 0x286520: 0xc055f06  jal         func_157C18
    ctx->pc = 0x286520u;
    SET_GPR_U32(ctx, 31, 0x286528u);
    ctx->pc = 0x286524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286520u;
    // 0x286524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x286520u, 0x286528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286528u;
label_286528:
    // 0x286528: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x286528u;
    SET_GPR_U32(ctx, 31, 0x286530u);
    ctx->pc = 0x28652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286528u;
    // 0x28652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x286528u, 0x286530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286530u;
label_286530:
    // 0x286530: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x286530u;
    SET_GPR_U32(ctx, 31, 0x286538u);
    ctx->pc = 0x286534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286530u;
    // 0x286534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x286530u, 0x286538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286538u;
label_286538:
    // 0x286538: 0x8e0215c4  lw          $v0, 0x15C4($s0)
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5572)));
label_28653c:
    // 0x28653c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x28653Cu;
    {
        const bool branch_taken_0x28653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28653c) {
            ctx->pc = 0x286540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28653Cu;
            // 0x286540: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2865DCu;
            goto label_2865dc;
        }
    }
    ctx->pc = 0x286544u;
    // 0x286544: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28654c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x2865D8u;
            goto label_2865d8;
        }
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x286554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x286558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28655c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28655cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286560: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x286560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x286564: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x286568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28656c: 0x8c46010c  lw          $a2, 0x10C($v0)
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x286570: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286574: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x286574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286578: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x286578u;
    SET_GPR_U32(ctx, 31, 0x286580u);
    ctx->pc = 0x28657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286578u;
    // 0x28657c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x286578u, 0x286580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286580u;
label_286580:
    // 0x286580: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x286580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x286584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286588: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x286588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28658c:
    // 0x28658c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x28658Cu;
    SET_GPR_U32(ctx, 31, 0x286594u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28658Cu, 0x286594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286594u;
label_286594:
    // 0x286594: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x286594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28659c: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x28659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x2865a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2865a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2865a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2865a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2865a8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2865ac: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2865ACu;
    SET_GPR_U32(ctx, 31, 0x2865B4u);
    ctx->pc = 0x2865B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865ACu;
    // 0x2865b0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2865ACu, 0x2865B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865B4u;
label_2865b4:
    // 0x2865b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2865B4u;
    SET_GPR_U32(ctx, 31, 0x2865BCu);
    ctx->pc = 0x2865B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865B4u;
    // 0x2865b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2865B4u, 0x2865BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865BCu;
label_2865bc:
    // 0x2865bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2865BCu;
    {
        const bool branch_taken_0x2865bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865BCu;
        // 0x2865c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865bc) {
            ctx->pc = 0x2865C8u;
            goto label_2865c8;
        }
    }
    ctx->pc = 0x2865C4u;
    // 0x2865c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2865c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2865c8:
    // 0x2865c8: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2865C8u;
    SET_GPR_U32(ctx, 31, 0x2865D0u);
    ctx->pc = 0x2865CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865C8u;
    // 0x2865cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2865C8u, 0x2865D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D0u;
label_2865d0:
    // 0x2865d0: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2865D0u;
    SET_GPR_U32(ctx, 31, 0x2865D8u);
    ctx->pc = 0x2865D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865D0u;
    // 0x2865d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2865D0u, 0x2865D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D8u;
label_2865d8:
    // 0x2865d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2865d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2865dc:
    // 0x2865dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2865dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2865e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2865e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2865e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2865E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865E4u;
        // 0x2865e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865ECu;
    // 0x2865ec: 0x0  nop
    ctx->pc = 0x2865ecu;
    // NOP
    ctx->pc = 0x2865f0u;
}
