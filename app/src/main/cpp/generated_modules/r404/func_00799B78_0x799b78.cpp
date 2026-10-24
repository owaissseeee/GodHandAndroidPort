#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_00799B78
// Address: 0x799b78 - 0x799d08
void func_00799B78_0x799b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B78_0x799b78");
#endif

    switch (ctx->pc) {
        case 0x799b78u: goto label_799b78;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b80u: goto label_799b80;
        case 0x799b84u: goto label_799b84;
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        default: break;
    }

    ctx->pc = 0x799b78u;

label_799b78:
    // 0x799b78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_799b7c:
    // 0x799b7c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_799b80:
    // 0x799b80: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_799b84:
    // 0x799b84: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x799b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_799b88:
    // 0x799b88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_799b8c:
    // 0x799b8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_799b90:
    // 0x799b90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_799b94:
    // 0x799b94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799b98:
    // 0x799b98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_799b9c:
    // 0x799b9c: 0xc0b6dac  jal         func_2DB6B0
label_799ba0:
    if (ctx->pc == 0x799BA0u) {
        ctx->pc = 0x799BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B9Cu;
        // 0x799ba0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BA4u;
        goto label_799ba4;
    }
    ctx->pc = 0x799B9Cu;
    SET_GPR_U32(ctx, 31, 0x799BA4u);
    ctx->pc = 0x799BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B9Cu;
    // 0x799ba0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799B9Cu, 0x799BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA4u;
label_799ba4:
    // 0x799ba4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799ba8:
    // 0x799ba8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799bac:
    // 0x799bac: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799bb0:
    // 0x799bb0: 0xa0f809  jalr        $a1
label_799bb4:
    if (ctx->pc == 0x799BB4u) {
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BB8u;
        goto label_799bb8;
    }
    ctx->pc = 0x799BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799BB8u);
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BB0u, 0x799BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_799bbc:
    // 0x799bbc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x799bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_799bc0:
    // 0x799bc0: 0xc0b6dac  jal         func_2DB6B0
label_799bc4:
    if (ctx->pc == 0x799BC4u) {
        ctx->pc = 0x799BC8u;
        goto label_799bc8;
    }
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799bcc:
    // 0x799bcc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_799bd0:
    // 0x799bd0: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_799bd4:
    // 0x799bd4: 0xa0f809  jalr        $a1
label_799bd8:
    if (ctx->pc == 0x799BD8u) {
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BDCu;
        goto label_799bdc;
    }
    ctx->pc = 0x799BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799BDCu);
        ctx->pc = 0x799BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD4u;
        // 0x799bd8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BD4u, 0x799BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799BDCu;
label_799bdc:
    // 0x799bdc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799bdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_799be0:
    // 0x799be0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_799be4:
    // 0x799be4: 0x3c014136  lui         $at, 0x4136
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16694 << 16));
label_799be8:
    // 0x799be8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x799be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_799bec:
    // 0x799bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799bf0:
    // 0x799bf0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799bf4:
    // 0x799bf4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_799bf8:
    // 0x799bf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799bfc:
    // 0x799bfc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_799c00:
    // 0x799c00: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x799c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_799c04:
    // 0x799c04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799c08:
    // 0x799c08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_799c0c:
    // 0x799c0c: 0x3c01c15e  lui         $at, 0xC15E
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49502 << 16));
label_799c10:
    // 0x799c10: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x799c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_799c14:
    // 0x799c14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799c18:
    // 0x799c18: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x799c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_799c1c:
    // 0x799c1c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x799c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_799c20:
    // 0x799c20: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x799c20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_799c24:
    // 0x799c24: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
label_799c28:
    // 0x799c28: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_799c2c:
    // 0x799c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799c30:
    // 0x799c30: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x799c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_799c34:
    // 0x799c34: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x799c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_799c38:
    // 0x799c38: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x799c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_799c3c:
    // 0x799c3c: 0xc0b6dac  jal         func_2DB6B0
label_799c40:
    if (ctx->pc == 0x799C40u) {
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C44u;
        goto label_799c44;
    }
    ctx->pc = 0x799C3Cu;
    SET_GPR_U32(ctx, 31, 0x799C44u);
    ctx->pc = 0x799C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C3Cu;
    // 0x799c40: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C3Cu, 0x799C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C44u;
label_799c44:
    // 0x799c44: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799c48:
    // 0x799c48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799c4c:
    // 0x799c4c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799c50:
    // 0x799c50: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799c54:
    // 0x799c54: 0xc0f809  jalr        $a2
label_799c58:
    if (ctx->pc == 0x799C58u) {
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C5Cu;
        goto label_799c5c;
    }
    ctx->pc = 0x799C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799C5Cu);
        ctx->pc = 0x799C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C54u;
        // 0x799c58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C54u, 0x799C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C5Cu;
label_799c5c:
    // 0x799c5c: 0xc0b6dac  jal         func_2DB6B0
label_799c60:
    if (ctx->pc == 0x799C60u) {
        ctx->pc = 0x799C64u;
        goto label_799c64;
    }
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799c68:
    // 0x799c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799c6c:
    // 0x799c6c: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_799c70:
    // 0x799c70: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_799c74:
    // 0x799c74: 0xc0f809  jalr        $a2
label_799c78:
    if (ctx->pc == 0x799C78u) {
        ctx->pc = 0x799C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C74u;
        // 0x799c78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C7Cu;
        goto label_799c7c;
    }
    ctx->pc = 0x799C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799C7Cu);
        ctx->pc = 0x799C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C74u;
        // 0x799c78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C74u, 0x799C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799C7Cu;
label_799c7c:
    // 0x799c7c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799c80:
    // 0x799c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c84:
    // 0x799c84: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_799c88:
    // 0x799c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c8c:
    // 0x799c8c: 0xc0b016c  jal         func_2C05B0
label_799c90:
    if (ctx->pc == 0x799C90u) {
        ctx->pc = 0x799C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C8Cu;
        // 0x799c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C94u;
        goto label_799c94;
    }
    ctx->pc = 0x799C8Cu;
    SET_GPR_U32(ctx, 31, 0x799C94u);
    ctx->pc = 0x799C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C8Cu;
    // 0x799c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799C8Cu, 0x799C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C94u;
label_799c94:
    // 0x799c94: 0xc0b6dac  jal         func_2DB6B0
label_799c98:
    if (ctx->pc == 0x799C98u) {
        ctx->pc = 0x799C9Cu;
        goto label_799c9c;
    }
    ctx->pc = 0x799C94u;
    SET_GPR_U32(ctx, 31, 0x799C9Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C94u, 0x799C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C9Cu;
label_799c9c:
    // 0x799c9c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799ca0:
    // 0x799ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799ca4:
    // 0x799ca4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799ca8:
    // 0x799ca8: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799cac:
    // 0x799cac: 0xc0f809  jalr        $a2
label_799cb0:
    if (ctx->pc == 0x799CB0u) {
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CB4u;
        goto label_799cb4;
    }
    ctx->pc = 0x799CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799CB4u);
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CACu, 0x799CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CB4u;
label_799cb4:
    // 0x799cb4: 0xc0b6dac  jal         func_2DB6B0
label_799cb8:
    if (ctx->pc == 0x799CB8u) {
        ctx->pc = 0x799CBCu;
        goto label_799cbc;
    }
    ctx->pc = 0x799CB4u;
    SET_GPR_U32(ctx, 31, 0x799CBCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799CB4u, 0x799CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CBCu;
label_799cbc:
    // 0x799cbc: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799cc0:
    // 0x799cc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799cc4:
    // 0x799cc4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x799cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_799cc8:
    // 0x799cc8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_799ccc:
    // 0x799ccc: 0xc0f809  jalr        $a2
label_799cd0:
    if (ctx->pc == 0x799CD0u) {
        ctx->pc = 0x799CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CCCu;
        // 0x799cd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CD4u;
        goto label_799cd4;
    }
    ctx->pc = 0x799CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x799CD4u);
        ctx->pc = 0x799CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CCCu;
        // 0x799cd0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CCCu, 0x799CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CD4u;
label_799cd4:
    // 0x799cd4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799cd8:
    // 0x799cd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799cdc:
    // 0x799cdc: 0xc0b0a7e  jal         func_2C29F8
label_799ce0:
    if (ctx->pc == 0x799CE0u) {
        ctx->pc = 0x799CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CDCu;
        // 0x799ce0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CE4u;
        goto label_799ce4;
    }
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799ce8:
    // 0x799ce8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799cec:
    // 0x799cec: 0xc0b5692  jal         func_2D5A48
label_799cf0:
    if (ctx->pc == 0x799CF0u) {
        ctx->pc = 0x799CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CECu;
        // 0x799cf0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CF4u;
        goto label_799cf4;
    }
    ctx->pc = 0x799CECu;
    SET_GPR_U32(ctx, 31, 0x799CF4u);
    ctx->pc = 0x799CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CECu;
    // 0x799cf0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799CECu, 0x799CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF4u;
label_799cf4:
    // 0x799cf4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799cf8:
    // 0x799cf8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799cfc:
    // 0x799cfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_799d00:
    // 0x799d00: 0x3e00008  jr          $ra
label_799d04:
    if (ctx->pc == 0x799D04u) {
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D08u;
        goto label_fallthrough_0x799d00;
    }
    ctx->pc = 0x799D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799d00:
    ctx->pc = 0x799D08u;
}
} // namespace gh_r404
