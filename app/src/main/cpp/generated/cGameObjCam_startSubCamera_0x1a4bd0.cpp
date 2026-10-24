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

// Function: cGameObjCam_startSubCamera
// Address: 0x1a4bd0 - 0x1a4cf8
void cGameObjCam_startSubCamera_0x1a4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjCam_startSubCamera_0x1a4bd0");
#endif

    switch (ctx->pc) {
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        case 0x1a4cc0u: goto label_1a4cc0;
        case 0x1a4cc4u: goto label_1a4cc4;
        case 0x1a4cc8u: goto label_1a4cc8;
        case 0x1a4cccu: goto label_1a4ccc;
        case 0x1a4cd0u: goto label_1a4cd0;
        case 0x1a4cd4u: goto label_1a4cd4;
        case 0x1a4cd8u: goto label_1a4cd8;
        case 0x1a4cdcu: goto label_1a4cdc;
        case 0x1a4ce0u: goto label_1a4ce0;
        case 0x1a4ce4u: goto label_1a4ce4;
        case 0x1a4ce8u: goto label_1a4ce8;
        case 0x1a4cecu: goto label_1a4cec;
        case 0x1a4cf0u: goto label_1a4cf0;
        case 0x1a4cf4u: goto label_1a4cf4;
        default: break;
    }

    ctx->pc = 0x1a4bd0u;

label_1a4bd0:
    // 0x1a4bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a4bd4:
    // 0x1a4bd4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a4bd8:
    // 0x1a4bd8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a4bdc:
    // 0x1a4bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4be0:
    // 0x1a4be0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a4be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a4be4:
    // 0x1a4be4: 0x92020763  lbu         $v0, 0x763($s0)
    ctx->pc = 0x1a4be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1891)));
label_1a4be8:
    // 0x1a4be8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        const bool branch_taken_0x1a4be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4be8) {
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4bf4:
    // 0x1a4bf4: 0xc0b0e6c  jal         func_2C39B0
label_1a4bf8:
    if (ctx->pc == 0x1A4BF8u) {
        ctx->pc = 0x1A4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BF4u;
        // 0x1a4bf8: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BFCu;
        goto label_1a4bfc;
    }
    ctx->pc = 0x1A4BF4u;
    SET_GPR_U32(ctx, 31, 0x1A4BFCu);
    ctx->pc = 0x1A4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BF4u;
    // 0x1a4bf8: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1A4BF4u, 0x1A4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BFCu;
label_1a4bfc:
    // 0x1a4bfc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1a4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_1a4c00:
    // 0x1a4c00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1a4c04:
    // 0x1a4c04: 0x8c827a78  lw          $v0, 0x7A78($a0)
    ctx->pc = 0x1a4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31352)));
label_1a4c08:
    // 0x1a4c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4c0c:
    // 0x1a4c0c: 0xac827a78  sw          $v0, 0x7A78($a0)
    ctx->pc = 0x1a4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31352), GPR_U32(ctx, 2));
label_1a4c10:
    // 0x1a4c10: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1a4c14:
    // 0x1a4c14: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a4c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a4c18:
    // 0x1a4c18: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a4c1c:
    // 0x1a4c1c: 0x40f809  jalr        $v0
label_1a4c20:
    if (ctx->pc == 0x1A4C20u) {
        ctx->pc = 0x1A4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C1Cu;
        // 0x1a4c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C24u;
        goto label_1a4c24;
    }
    ctx->pc = 0x1A4C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4C24u);
        ctx->pc = 0x1A4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C1Cu;
        // 0x1a4c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C1Cu, 0x1A4C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4C24u;
label_1a4c24:
    // 0x1a4c24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a4c24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4c28:
    // 0x1a4c28: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4c2c:
    // 0x1a4c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a4c30:
    // 0x1a4c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4c34:
    // 0x1a4c34: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1a4c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a4c38:
    // 0x1a4c38: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a4c3c:
    // 0x1a4c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4c40:
    // 0x1a4c40: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1a4c44:
    // 0x1a4c44: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a4c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a4c48:
    // 0x1a4c48: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1a4c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4c4c:
    // 0x1a4c4c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1a4c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a4c50:
    // 0x1a4c50: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1a4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1a4c54:
    // 0x1a4c54: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1a4c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a4c58:
    // 0x1a4c58: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a4c58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4c5c:
    // 0x1a4c5c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1a4c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4c60:
    // 0x1a4c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a4c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c64:
    // 0x1a4c64: 0xc0c28ac  jal         func_30A2B0
label_1a4c68:
    if (ctx->pc == 0x1A4C68u) {
        ctx->pc = 0x1A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C64u;
        // 0x1a4c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4C6Cu;
        goto label_1a4c6c;
    }
    ctx->pc = 0x1A4C64u;
    SET_GPR_U32(ctx, 31, 0x1A4C6Cu);
    ctx->pc = 0x1A4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C64u;
    // 0x1a4c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1A4C64u, 0x1A4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C6Cu;
label_1a4c6c:
    // 0x1a4c6c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a4c6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4c70:
    // 0x1a4c70: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1a4c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a4c74:
    // 0x1a4c74: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1a4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1a4c78:
    // 0x1a4c78: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a4c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4c7c:
    // 0x1a4c7c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a4c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4c80:
    // 0x1a4c80: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1a4c84:
    // 0x1a4c84: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a4c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4c88:
    // 0x1a4c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c8c:
    // 0x1a4c8c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1a4c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a4c90:
    // 0x1a4c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4c94:
    // 0x1a4c94: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a4c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a4c98:
    // 0x1a4c98: 0xc04e3ae  jal         func_138EB8
label_1a4c9c:
    if (ctx->pc == 0x1A4C9Cu) {
        ctx->pc = 0x1A4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4C98u;
        // 0x1a4c9c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CA0u;
        goto label_1a4ca0;
    }
    ctx->pc = 0x1A4C98u;
    SET_GPR_U32(ctx, 31, 0x1A4CA0u);
    ctx->pc = 0x1A4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4C98u;
    // 0x1a4c9c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x1A4C98u, 0x1A4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CA0u;
label_1a4ca0:
    // 0x1a4ca0: 0x26020e90  addiu       $v0, $s0, 0xE90
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3728));
label_1a4ca4:
    // 0x1a4ca4: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
label_1a4ca8:
    if (ctx->pc == 0x1A4CA8u) {
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CACu;
        goto label_1a4cac;
    }
    ctx->pc = 0x1A4CA4u;
    {
        const bool branch_taken_0x1a4ca4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ca4) {
            ctx->pc = 0x1A4CC0u;
            goto label_1a4cc0;
        }
    }
    ctx->pc = 0x1A4CACu;
label_1a4cac:
    // 0x1a4cac: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a4cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4cb0:
    // 0x1a4cb0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1a4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4cb4:
    // 0x1a4cb4: 0xe6000e90  swc1        $f0, 0xE90($s0)
    ctx->pc = 0x1a4cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3728), bits); }
label_1a4cb8:
    // 0x1a4cb8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1a4cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a4cbc:
    // 0x1a4cbc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1a4cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a4cc0:
    // 0x1a4cc0: 0x26020ea0  addiu       $v0, $s0, 0xEA0
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
label_1a4cc4:
    // 0x1a4cc4: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_1a4cc8:
    if (ctx->pc == 0x1A4CC8u) {
        ctx->pc = 0x1A4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC4u;
        // 0x1a4cc8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CCCu;
        goto label_1a4ccc;
    }
    ctx->pc = 0x1A4CC4u;
    {
        const bool branch_taken_0x1a4cc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CC4u;
        // 0x1a4cc8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4cc4) {
            ctx->pc = 0x1A4CE0u;
            goto label_1a4ce0;
        }
    }
    ctx->pc = 0x1A4CCCu;
label_1a4ccc:
    // 0x1a4ccc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1a4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4cd0:
    // 0x1a4cd0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1a4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4cd4:
    // 0x1a4cd4: 0xe6000ea0  swc1        $f0, 0xEA0($s0)
    ctx->pc = 0x1a4cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3744), bits); }
label_1a4cd8:
    // 0x1a4cd8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1a4cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a4cdc:
    // 0x1a4cdc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1a4cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a4ce0:
    // 0x1a4ce0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4ce4:
    // 0x1a4ce4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a4ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4ce8:
    // 0x1a4ce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4cec:
    // 0x1a4cec: 0x3e00008  jr          $ra
label_1a4cf0:
    if (ctx->pc == 0x1A4CF0u) {
        ctx->pc = 0x1A4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CECu;
        // 0x1a4cf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CF4u;
        goto label_1a4cf4;
    }
    ctx->pc = 0x1A4CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CECu;
        // 0x1a4cf0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CF4u;
label_1a4cf4:
    // 0x1a4cf4: 0x0  nop
    ctx->pc = 0x1a4cf4u;
    // NOP
    ctx->pc = 0x1a4cf8u;
}
