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

// Function: Owner_spawnEffect
// Address: 0x129ba0 - 0x129cc8
void Owner_spawnEffect_0x129ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Owner_spawnEffect_0x129ba0");
#endif

    switch (ctx->pc) {
        case 0x129ba0u: goto label_129ba0;
        case 0x129ba4u: goto label_129ba4;
        case 0x129ba8u: goto label_129ba8;
        case 0x129bacu: goto label_129bac;
        case 0x129bb0u: goto label_129bb0;
        case 0x129bb4u: goto label_129bb4;
        case 0x129bb8u: goto label_129bb8;
        case 0x129bbcu: goto label_129bbc;
        case 0x129bc0u: goto label_129bc0;
        case 0x129bc4u: goto label_129bc4;
        case 0x129bc8u: goto label_129bc8;
        case 0x129bccu: goto label_129bcc;
        case 0x129bd0u: goto label_129bd0;
        case 0x129bd4u: goto label_129bd4;
        case 0x129bd8u: goto label_129bd8;
        case 0x129bdcu: goto label_129bdc;
        case 0x129be0u: goto label_129be0;
        case 0x129be4u: goto label_129be4;
        case 0x129be8u: goto label_129be8;
        case 0x129becu: goto label_129bec;
        case 0x129bf0u: goto label_129bf0;
        case 0x129bf4u: goto label_129bf4;
        case 0x129bf8u: goto label_129bf8;
        case 0x129bfcu: goto label_129bfc;
        case 0x129c00u: goto label_129c00;
        case 0x129c04u: goto label_129c04;
        case 0x129c08u: goto label_129c08;
        case 0x129c0cu: goto label_129c0c;
        case 0x129c10u: goto label_129c10;
        case 0x129c14u: goto label_129c14;
        case 0x129c18u: goto label_129c18;
        case 0x129c1cu: goto label_129c1c;
        case 0x129c20u: goto label_129c20;
        case 0x129c24u: goto label_129c24;
        case 0x129c28u: goto label_129c28;
        case 0x129c2cu: goto label_129c2c;
        case 0x129c30u: goto label_129c30;
        case 0x129c34u: goto label_129c34;
        case 0x129c38u: goto label_129c38;
        case 0x129c3cu: goto label_129c3c;
        case 0x129c40u: goto label_129c40;
        case 0x129c44u: goto label_129c44;
        case 0x129c48u: goto label_129c48;
        case 0x129c4cu: goto label_129c4c;
        case 0x129c50u: goto label_129c50;
        case 0x129c54u: goto label_129c54;
        case 0x129c58u: goto label_129c58;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c60u: goto label_129c60;
        case 0x129c64u: goto label_129c64;
        case 0x129c68u: goto label_129c68;
        case 0x129c6cu: goto label_129c6c;
        case 0x129c70u: goto label_129c70;
        case 0x129c74u: goto label_129c74;
        case 0x129c78u: goto label_129c78;
        case 0x129c7cu: goto label_129c7c;
        case 0x129c80u: goto label_129c80;
        case 0x129c84u: goto label_129c84;
        case 0x129c88u: goto label_129c88;
        case 0x129c8cu: goto label_129c8c;
        case 0x129c90u: goto label_129c90;
        case 0x129c94u: goto label_129c94;
        case 0x129c98u: goto label_129c98;
        case 0x129c9cu: goto label_129c9c;
        case 0x129ca0u: goto label_129ca0;
        case 0x129ca4u: goto label_129ca4;
        case 0x129ca8u: goto label_129ca8;
        case 0x129cacu: goto label_129cac;
        case 0x129cb0u: goto label_129cb0;
        case 0x129cb4u: goto label_129cb4;
        case 0x129cb8u: goto label_129cb8;
        case 0x129cbcu: goto label_129cbc;
        case 0x129cc0u: goto label_129cc0;
        case 0x129cc4u: goto label_129cc4;
        default: break;
    }

    ctx->pc = 0x129ba0u;

label_129ba0:
    // 0x129ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_129ba4:
    // 0x129ba4: 0x240503bf  addiu       $a1, $zero, 0x3BF
    ctx->pc = 0x129ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 959));
label_129ba8:
    // 0x129ba8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x129ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_129bac:
    // 0x129bac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x129bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_129bb0:
    // 0x129bb0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x129bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_129bb4:
    // 0x129bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x129bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129bb8:
    // 0x129bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x129bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_129bbc:
    // 0x129bbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x129bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_129bc0:
    // 0x129bc0: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x129bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_129bc4:
    // 0x129bc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x129bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_129bc8:
    // 0x129bc8: 0x8c460310  lw          $a2, 0x310($v0)
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
label_129bcc:
    // 0x129bcc: 0xc07fb38  jal         func_1FECE0
label_129bd0:
    if (ctx->pc == 0x129BD0u) {
        ctx->pc = 0x129BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BCCu;
        // 0x129bd0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BD4u;
        goto label_129bd4;
    }
    ctx->pc = 0x129BCCu;
    SET_GPR_U32(ctx, 31, 0x129BD4u);
    ctx->pc = 0x129BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BCCu;
    // 0x129bd0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x129BCCu, 0x129BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BD4u;
label_129bd4:
    // 0x129bd4: 0x240403bf  addiu       $a0, $zero, 0x3BF
    ctx->pc = 0x129bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 959));
label_129bd8:
    // 0x129bd8: 0xc0c3ea6  jal         func_30FA98
label_129bdc:
    if (ctx->pc == 0x129BDCu) {
        ctx->pc = 0x129BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BD8u;
        // 0x129bdc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BE0u;
        goto label_129be0;
    }
    ctx->pc = 0x129BD8u;
    SET_GPR_U32(ctx, 31, 0x129BE0u);
    ctx->pc = 0x129BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BD8u;
    // 0x129bdc: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x129BD8u, 0x129BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BE0u;
label_129be0:
    // 0x129be0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129be4:
    // 0x129be4: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_129be8:
    if (ctx->pc == 0x129BE8u) {
        ctx->pc = 0x129BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE4u;
        // 0x129be8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129BECu;
        goto label_129bec;
    }
    ctx->pc = 0x129BE4u;
    {
        const bool branch_taken_0x129be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BE4u;
        // 0x129be8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129be4) {
            ctx->pc = 0x129CB0u;
            goto label_129cb0;
        }
    }
    ctx->pc = 0x129BECu;
label_129bec:
    // 0x129bec: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x129becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_129bf0:
    // 0x129bf0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_129bf4:
    // 0x129bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129bf8:
    // 0x129bf8: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_129bfc:
    // 0x129bfc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x129bfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_129c00:
    // 0x129c00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129c04:
    // 0x129c04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x129c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_129c08:
    // 0x129c08: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x129c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_129c0c:
    // 0x129c0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x129c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_129c10:
    // 0x129c10: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x129c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_129c14:
    // 0x129c14: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_129c18:
    // 0x129c18: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_129c1c:
    // 0x129c1c: 0x40f809  jalr        $v0
label_129c20:
    if (ctx->pc == 0x129C20u) {
        ctx->pc = 0x129C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C1Cu;
        // 0x129c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C24u;
        goto label_129c24;
    }
    ctx->pc = 0x129C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129C24u);
        ctx->pc = 0x129C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C1Cu;
        // 0x129c20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C1Cu, 0x129C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129C24u;
label_129c24:
    // 0x129c24: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_129c28:
    // 0x129c28: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x129c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_129c2c:
    // 0x129c2c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x129c2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129c30:
    // 0x129c30: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x129c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_129c34:
    // 0x129c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129c38:
    // 0x129c38: 0xc0c28ac  jal         func_30A2B0
label_129c3c:
    if (ctx->pc == 0x129C3Cu) {
        ctx->pc = 0x129C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C38u;
        // 0x129c3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C40u;
        goto label_129c40;
    }
    ctx->pc = 0x129C38u;
    SET_GPR_U32(ctx, 31, 0x129C40u);
    ctx->pc = 0x129C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129C38u;
    // 0x129c3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x129C38u, 0x129C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129C40u;
label_129c40:
    // 0x129c40: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x129c40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_129c44:
    // 0x129c44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x129c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_129c48:
    // 0x129c48: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_129c4c:
    // 0x129c4c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x129c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_129c50:
    // 0x129c50: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_129c54:
    if (ctx->pc == 0x129C54u) {
        ctx->pc = 0x129C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C50u;
        // 0x129c54: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129C58u;
        goto label_129c58;
    }
    ctx->pc = 0x129C50u;
    {
        const bool branch_taken_0x129c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x129C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C50u;
        // 0x129c54: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c50) {
            ctx->pc = 0x129C6Cu;
            goto label_129c6c;
        }
    }
    ctx->pc = 0x129C58u;
label_129c58:
    // 0x129c58: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x129c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_129c5c:
    // 0x129c5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x129c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129c60:
    // 0x129c60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x129c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_129c64:
    // 0x129c64: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x129c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129c68:
    // 0x129c68: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x129c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_129c6c:
    // 0x129c6c: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_129c70:
    // 0x129c70: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x129c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_129c74:
    // 0x129c74: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_129c78:
    if (ctx->pc == 0x129C78u) {
        ctx->pc = 0x129C7Cu;
        goto label_129c7c;
    }
    ctx->pc = 0x129C74u;
    {
        const bool branch_taken_0x129c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x129c74) {
            ctx->pc = 0x129C94u;
            goto label_129c94;
        }
    }
    ctx->pc = 0x129C7Cu;
label_129c7c:
    // 0x129c7c: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x129c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129c80:
    // 0x129c80: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x129c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_129c84:
    // 0x129c84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x129c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129c88:
    // 0x129c88: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x129c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_129c8c:
    // 0x129c8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x129c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129c90:
    // 0x129c90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x129c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_129c94:
    // 0x129c94: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x129c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
label_129c98:
    // 0x129c98: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x129c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_129c9c:
    // 0x129c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129ca0:
    // 0x129ca0: 0x0  nop
    ctx->pc = 0x129ca0u;
    // NOP
label_129ca4:
    // 0x129ca4: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x129ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
label_129ca8:
    // 0x129ca8: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x129ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_129cac:
    // 0x129cac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x129cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_129cb0:
    // 0x129cb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x129cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_129cb4:
    // 0x129cb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x129cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_129cb8:
    // 0x129cb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_129cbc:
    // 0x129cbc: 0x3e00008  jr          $ra
label_129cc0:
    if (ctx->pc == 0x129CC0u) {
        ctx->pc = 0x129CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CBCu;
        // 0x129cc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CC4u;
        goto label_129cc4;
    }
    ctx->pc = 0x129CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CBCu;
        // 0x129cc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129CC4u;
label_129cc4:
    // 0x129cc4: 0x0  nop
    ctx->pc = 0x129cc4u;
    // NOP
    ctx->pc = 0x129cc8u;
}
