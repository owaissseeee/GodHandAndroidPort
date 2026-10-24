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

// Function: func_002F2A00
// Address: 0x2f2a00 - 0x2f2fa0
void func_002F2A00_0x2f2a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2A00_0x2f2a00");
#endif

    switch (ctx->pc) {
        case 0x2f2a58u: goto label_2f2a58;
        case 0x2f2aa8u: goto label_2f2aa8;
        case 0x2f2b58u: goto label_2f2b58;
        case 0x2f2b64u: goto label_2f2b64;
        case 0x2f2b6cu: goto label_2f2b6c;
        case 0x2f2b88u: goto label_2f2b88;
        case 0x2f2bb0u: goto label_2f2bb0;
        case 0x2f2bc4u: goto label_2f2bc4;
        case 0x2f2be8u: goto label_2f2be8;
        case 0x2f2bf4u: goto label_2f2bf4;
        case 0x2f2c20u: goto label_2f2c20;
        case 0x2f2c6cu: goto label_2f2c6c;
        case 0x2f2c98u: goto label_2f2c98;
        case 0x2f2d30u: goto label_2f2d30;
        case 0x2f2d3cu: goto label_2f2d3c;
        case 0x2f2d44u: goto label_2f2d44;
        case 0x2f2d60u: goto label_2f2d60;
        case 0x2f2d88u: goto label_2f2d88;
        case 0x2f2d9cu: goto label_2f2d9c;
        case 0x2f2dc0u: goto label_2f2dc0;
        case 0x2f2dccu: goto label_2f2dcc;
        case 0x2f2df0u: goto label_2f2df0;
        case 0x2f2e00u: goto label_2f2e00;
        case 0x2f2f18u: goto label_2f2f18;
        case 0x2f2f3cu: goto label_2f2f3c;
        case 0x2f2f48u: goto label_2f2f48;
        case 0x2f2f6cu: goto label_2f2f6c;
        default: break;
    }

    ctx->pc = 0x2f2a00u;

    // 0x2f2a00: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2f2a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2f2a04: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2f2a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2f2a08: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2f2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2f2a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f2a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a10: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2f2a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2f2a14: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2f2a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2f2a18: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2f2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2f2a1c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2f2a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2f2a20: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2f2a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2f2a24: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2f2a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2f2a28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f2a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f2a2c: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2f2a2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2f2a30: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2f2a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2f2a34: 0x8e0202b0  lw          $v0, 0x2B0($s0)
    ctx->pc = 0x2f2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f2a38: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2F2A38u;
    {
        const bool branch_taken_0x2f2a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A38u;
        // 0x2f2a3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a38) {
            ctx->pc = 0x2F2DF8u;
            goto label_2f2df8;
        }
    }
    ctx->pc = 0x2F2A40u;
    // 0x2f2a40: 0x8e1102b4  lw          $s1, 0x2B4($s0)
    ctx->pc = 0x2f2a40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x2f2a44: 0x16200071  bnez        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2F2A44u;
    {
        const bool branch_taken_0x2f2a44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A44u;
        // 0x2f2a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a44) {
            ctx->pc = 0x2F2C0Cu;
            goto label_2f2c0c;
        }
    }
    ctx->pc = 0x2F2A4Cu;
    // 0x2f2a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a50: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F2A50u;
    SET_GPR_U32(ctx, 31, 0x2F2A58u);
    ctx->pc = 0x2F2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2A50u;
    // 0x2f2a54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F2A50u, 0x2F2A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2A58u;
label_2f2a58:
    // 0x2f2a58: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2f2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2f2a5c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2a60: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f2a60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2a64: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2f2a64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2a68: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2a68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2a6c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2a70: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f2a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2a74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f2a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2a78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2a7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2a80: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x2f2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x2f2a84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f2a84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a88: 0x920502d0  lbu         $a1, 0x2D0($s0)
    ctx->pc = 0x2f2a88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2f2a8c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f2a8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2a94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f2a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f2a98: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2A98u;
    {
        const bool branch_taken_0x2f2a98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2A98u;
        // 0x2f2a9c: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2a98) {
            ctx->pc = 0x2F2AC0u;
            goto label_2f2ac0;
        }
    }
    ctx->pc = 0x2F2AA0u;
    // 0x2f2aa0: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2AA0u;
    SET_GPR_U32(ctx, 31, 0x2F2AA8u);
    ctx->pc = 0x2F2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2AA0u;
    // 0x2f2aa4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2AA0u, 0x2F2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2AA8u;
label_2f2aa8:
    // 0x2f2aa8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f2aac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2ab4: 0x0  nop
    ctx->pc = 0x2f2ab4u;
    // NOP
    // 0x2f2ab8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f2ab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f2abc: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2f2abcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2f2ac0:
    // 0x2f2ac0: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x2f2ac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f2ac4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f2ac8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2f2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2f2acc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f2accu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ad0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2f2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2f2ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2adc: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x2f2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2ae0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2AE0u;
    {
        const bool branch_taken_0x2f2ae0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AE0u;
        // 0x2f2ae4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ae0) {
            ctx->pc = 0x2F2AFCu;
            goto label_2f2afc;
        }
    }
    ctx->pc = 0x2F2AE8u;
    // 0x2f2ae8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f2ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2aec: 0x0  nop
    ctx->pc = 0x2f2aecu;
    // NOP
    // 0x2f2af0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2af4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2AF4u;
    {
        const bool branch_taken_0x2f2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2af4) {
            ctx->pc = 0x2F2B18u;
            goto label_2f2b18;
        }
    }
    ctx->pc = 0x2F2AFCu;
label_2f2afc:
    // 0x2f2afc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2f2b00: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f2b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f2b04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f2b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f2b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2b0c: 0x0  nop
    ctx->pc = 0x2f2b0cu;
    // NOP
    // 0x2f2b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2b14: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f2b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f2b18:
    // 0x2f2b18: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f2b1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f2b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b28: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2b2c: 0x0  nop
    ctx->pc = 0x2f2b2cu;
    // NOP
    // 0x2f2b30: 0x0  nop
    ctx->pc = 0x2f2b30u;
    // NOP
    // 0x2f2b34: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f2b34u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f2b38: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2F2B38u;
    {
        const bool branch_taken_0x2f2b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B38u;
        // 0x2f2b3c: 0x27b30080  addiu       $s3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b38) {
            ctx->pc = 0x2F2DDCu;
            goto label_2f2ddc;
        }
    }
    ctx->pc = 0x2F2B40u;
    // 0x2f2b40: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f2b44: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2b48: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f2b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f2b4c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x2f2b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f2b50: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f2b50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2b54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f2b58:
    // 0x2f2b58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f2b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b5c: 0xc051dca  jal         func_147728
    ctx->pc = 0x2F2B5Cu;
    SET_GPR_U32(ctx, 31, 0x2F2B64u);
    ctx->pc = 0x2F2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B5Cu;
    // 0x2f2b60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2F2B5Cu, 0x2F2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B64u;
label_2f2b64:
    // 0x2f2b64: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2B64u;
    SET_GPR_U32(ctx, 31, 0x2F2B6Cu);
    ctx->pc = 0x2F2B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B64u;
    // 0x2f2b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2B64u, 0x2F2B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B6Cu;
label_2f2b6c:
    // 0x2f2b6c: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x2f2b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2b70: 0x920202d0  lbu         $v0, 0x2D0($s0)
    ctx->pc = 0x2f2b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2f2b74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f2b74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2b78: 0x14550008  bne         $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2B78u;
    {
        const bool branch_taken_0x2f2b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B78u;
        // 0x2f2b7c: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b78) {
            ctx->pc = 0x2F2B9Cu;
            goto label_2f2b9c;
        }
    }
    ctx->pc = 0x2F2B80u;
    // 0x2f2b80: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2B80u;
    SET_GPR_U32(ctx, 31, 0x2F2B88u);
    ctx->pc = 0x2F2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B80u;
    // 0x2f2b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2B80u, 0x2F2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2B88u;
label_2f2b88:
    // 0x2f2b88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f2b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f2b8c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2f2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2b90: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f2b90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f2b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2B94u;
    {
        const bool branch_taken_0x2f2b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B94u;
        // 0x2f2b98: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b94) {
            ctx->pc = 0x2F2BA8u;
            goto label_2f2ba8;
        }
    }
    ctx->pc = 0x2F2B9Cu;
label_2f2b9c:
    // 0x2f2b9c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f2b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2ba0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2f2ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2f2ba4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f2ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2f2ba8:
    // 0x2f2ba8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F2BA8u;
    SET_GPR_U32(ctx, 31, 0x2F2BB0u);
    ctx->pc = 0x2F2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BA8u;
    // 0x2f2bac: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F2BA8u, 0x2F2BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BB0u;
label_2f2bb0:
    // 0x2f2bb0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f2bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f2bb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2bb8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f2bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f2bbc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F2BBCu;
    SET_GPR_U32(ctx, 31, 0x2F2BC4u);
    ctx->pc = 0x2F2BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BBCu;
    // 0x2f2bc0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F2BBCu, 0x2F2BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BC4u;
label_2f2bc4:
    // 0x2f2bc4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2bc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2bc8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f2bc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f2bcc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2bd0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2bd4: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2f2bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2f2bd8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f2bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2be0: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F2BE0u;
    SET_GPR_U32(ctx, 31, 0x2F2BE8u);
    ctx->pc = 0x2F2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BE0u;
    // 0x2f2be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F2BE0u, 0x2F2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BE8u;
label_2f2be8:
    // 0x2f2be8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f2bec: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F2BECu;
    SET_GPR_U32(ctx, 31, 0x2F2BF4u);
    ctx->pc = 0x2F2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2BECu;
    // 0x2f2bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F2BECu, 0x2F2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2BF4u;
label_2f2bf4:
    // 0x2f2bf4: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2bf8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2bfc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2F2BFCu;
    {
        const bool branch_taken_0x2f2bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2BFCu;
        // 0x2f2c00: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2bfc) {
            ctx->pc = 0x2F2B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2C04u;
    // 0x2f2c04: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2F2C04u;
    {
        const bool branch_taken_0x2f2c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2c04) {
            ctx->pc = 0x2F2DDCu;
            goto label_2f2ddc;
        }
    }
    ctx->pc = 0x2F2C0Cu;
label_2f2c0c:
    // 0x2f2c0c: 0x562200d8  bnel        $s1, $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2F2C0Cu;
    {
        const bool branch_taken_0x2f2c0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2c0c) {
            ctx->pc = 0x2F2C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2C0Cu;
            // 0x2f2c10: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2F70u;
            goto label_2f2f70;
        }
    }
    ctx->pc = 0x2F2C14u;
    // 0x2f2c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c18: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F2C18u;
    SET_GPR_U32(ctx, 31, 0x2F2C20u);
    ctx->pc = 0x2F2C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C18u;
    // 0x2f2c1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F2C18u, 0x2F2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C20u;
label_2f2c20:
    // 0x2f2c20: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x2f2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2f2c24: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2c28: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f2c28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2c2c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2f2c2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2c30: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2c30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2c34: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2c38: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2c3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f2c3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2c40: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f2c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2c44: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2c48: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x2f2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x2f2c4c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f2c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c50: 0x920402d0  lbu         $a0, 0x2D0($s0)
    ctx->pc = 0x2f2c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2f2c54: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f2c54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f2c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f2c5c: 0x14910009  bne         $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2C5Cu;
    {
        const bool branch_taken_0x2f2c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2C5Cu;
        // 0x2f2c60: 0xafa30094  sw          $v1, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2c5c) {
            ctx->pc = 0x2F2C84u;
            goto label_2f2c84;
        }
    }
    ctx->pc = 0x2F2C64u;
    // 0x2f2c64: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2C64u;
    SET_GPR_U32(ctx, 31, 0x2F2C6Cu);
    ctx->pc = 0x2F2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C64u;
    // 0x2f2c68: 0x27a40094  addiu       $a0, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2C64u, 0x2F2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C6Cu;
label_2f2c6c:
    // 0x2f2c6c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f2c70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2c78: 0x0  nop
    ctx->pc = 0x2f2c78u;
    // NOP
    // 0x2f2c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f2c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f2c80: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2f2c80u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2f2c84:
    // 0x2f2c84: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2f2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f2c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2c90: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2F2C90u;
    SET_GPR_U32(ctx, 31, 0x2F2C98u);
    ctx->pc = 0x2F2C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2C90u;
    // 0x2f2c94: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2F2C90u, 0x2F2C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2C98u;
label_2f2c98:
    // 0x2f2c98: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2f2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2c9c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f2ca0: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x2f2ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2ca4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f2ca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2cb0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f2cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f2cb4: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2f2cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f2cb8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2f2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2f2cbc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2CBCu;
    {
        const bool branch_taken_0x2f2cbc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2CBCu;
        // 0x2f2cc0: 0xe441000c  swc1        $f1, 0xC($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2cbc) {
            ctx->pc = 0x2F2CD8u;
            goto label_2f2cd8;
        }
    }
    ctx->pc = 0x2F2CC4u;
    // 0x2f2cc4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f2cc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2cc8: 0x0  nop
    ctx->pc = 0x2f2cc8u;
    // NOP
    // 0x2f2ccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2cd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2CD0u;
    {
        const bool branch_taken_0x2f2cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2cd0) {
            ctx->pc = 0x2F2CF4u;
            goto label_2f2cf4;
        }
    }
    ctx->pc = 0x2F2CD8u;
label_2f2cd8:
    // 0x2f2cd8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2f2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2f2cdc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f2cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f2ce0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f2ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f2ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2ce8: 0x0  nop
    ctx->pc = 0x2f2ce8u;
    // NOP
    // 0x2f2cec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2cf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f2cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f2cf4:
    // 0x2f2cf4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f2cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2f2cf8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2cfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2d00: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2d04: 0x0  nop
    ctx->pc = 0x2f2d04u;
    // NOP
    // 0x2f2d08: 0x0  nop
    ctx->pc = 0x2f2d08u;
    // NOP
    // 0x2f2d0c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f2d0cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f2d10: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F2D10u;
    {
        const bool branch_taken_0x2f2d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D10u;
        // 0x2f2d14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d10) {
            ctx->pc = 0x2F2DDCu;
            goto label_2f2ddc;
        }
    }
    ctx->pc = 0x2F2D18u;
    // 0x2f2d18: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2f2d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2f2d1c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f2d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2f2d20: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f2d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f2d24: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x2f2d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2f2d28: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f2d28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2d2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f2d30:
    // 0x2f2d30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2f2d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2d34: 0xc051dca  jal         func_147728
    ctx->pc = 0x2F2D34u;
    SET_GPR_U32(ctx, 31, 0x2F2D3Cu);
    ctx->pc = 0x2F2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D34u;
    // 0x2f2d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x2F2D34u, 0x2F2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D3Cu;
label_2f2d3c:
    // 0x2f2d3c: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F2D44u);
    ctx->pc = 0x2F2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D3Cu;
    // 0x2f2d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2D3Cu, 0x2F2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D44u;
label_2f2d44:
    // 0x2f2d44: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x2f2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2d48: 0x920202d0  lbu         $v0, 0x2D0($s0)
    ctx->pc = 0x2f2d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2f2d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f2d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f2d50: 0x14550008  bne         $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2D50u;
    {
        const bool branch_taken_0x2f2d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D50u;
        // 0x2f2d54: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d50) {
            ctx->pc = 0x2F2D74u;
            goto label_2f2d74;
        }
    }
    ctx->pc = 0x2F2D58u;
    // 0x2f2d58: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x2F2D58u;
    SET_GPR_U32(ctx, 31, 0x2F2D60u);
    ctx->pc = 0x2F2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D58u;
    // 0x2f2d5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F2D58u, 0x2F2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D60u;
label_2f2d60:
    // 0x2f2d60: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2f2d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2f2d64: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f2d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2d68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f2d68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f2d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2D6Cu;
    {
        const bool branch_taken_0x2f2d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2D6Cu;
        // 0x2f2d70: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2d6c) {
            ctx->pc = 0x2F2D80u;
            goto label_2f2d80;
        }
    }
    ctx->pc = 0x2F2D74u;
label_2f2d74:
    // 0x2f2d74: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2d78: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2f2d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2f2d7c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f2d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2f2d80:
    // 0x2f2d80: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F2D80u;
    SET_GPR_U32(ctx, 31, 0x2F2D88u);
    ctx->pc = 0x2F2D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D80u;
    // 0x2f2d84: 0xc7ac0078  lwc1        $f12, 0x78($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F2D80u, 0x2F2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D88u;
label_2f2d88:
    // 0x2f2d88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f2d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f2d8c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2d90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f2d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f2d94: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2F2D94u;
    SET_GPR_U32(ctx, 31, 0x2F2D9Cu);
    ctx->pc = 0x2F2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2D94u;
    // 0x2f2d98: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2F2D94u, 0x2F2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2D9Cu;
label_2f2d9c:
    // 0x2f2d9c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2d9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2da0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2f2da0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f2da4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2da8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2dac: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x2f2dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2f2db0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2db8: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F2DB8u;
    SET_GPR_U32(ctx, 31, 0x2F2DC0u);
    ctx->pc = 0x2F2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DB8u;
    // 0x2f2dbc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F2DB8u, 0x2F2DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DC0u;
label_2f2dc0:
    // 0x2f2dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f2dc4: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F2DC4u;
    SET_GPR_U32(ctx, 31, 0x2F2DCCu);
    ctx->pc = 0x2F2DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DC4u;
    // 0x2f2dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F2DC4u, 0x2F2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DCCu;
label_2f2dcc:
    // 0x2f2dcc: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2dd0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2f2dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2dd4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2F2DD4u;
    {
        const bool branch_taken_0x2f2dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DD4u;
        // 0x2f2dd8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2dd4) {
            ctx->pc = 0x2F2D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2d30;
        }
    }
    ctx->pc = 0x2F2DDCu;
label_2f2ddc:
    // 0x2f2ddc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f2ddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2de0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2f2de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2de8: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F2DE8u;
    SET_GPR_U32(ctx, 31, 0x2F2DF0u);
    ctx->pc = 0x2F2DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DE8u;
    // 0x2f2dec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F2DE8u, 0x2F2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DF0u;
label_2f2df0:
    // 0x2f2df0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2F2DF0u;
    {
        const bool branch_taken_0x2f2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2DF0u;
        // 0x2f2df4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2df0) {
            ctx->pc = 0x2F2F70u;
            goto label_2f2f70;
        }
    }
    ctx->pc = 0x2F2DF8u;
label_2f2df8:
    // 0x2f2df8: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F2DF8u;
    SET_GPR_U32(ctx, 31, 0x2F2E00u);
    ctx->pc = 0x2F2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2DF8u;
    // 0x2f2dfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F2DF8u, 0x2F2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E00u;
label_2f2e00:
    // 0x2f2e00: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2e04: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2f2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2e08: 0x260302e0  addiu       $v1, $s0, 0x2E0
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x2f2e0c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2f2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f2e10: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f2e10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2e14: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f2e14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2e18: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2e18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2e1c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2e20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f2e24: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f2e24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2e28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2e2c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2f2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2e30: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f2e34: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2f2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2e38: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f2e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2e3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2f2e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f2e40: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f2e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2e48: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2f2e48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f2e4c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2f2e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f2e50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f2e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2e54: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2e58: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2e58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2e5c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f2e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f2e60: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f2e60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f2e64: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f2e64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2e68: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2e6c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f2e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f2e70: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f2e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2e74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f2e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2e78: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2e7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2E7Cu;
    {
        const bool branch_taken_0x2f2e7c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2E7Cu;
        // 0x2f2e80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2e7c) {
            ctx->pc = 0x2F2E98u;
            goto label_2f2e98;
        }
    }
    ctx->pc = 0x2F2E84u;
    // 0x2f2e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2e88: 0x0  nop
    ctx->pc = 0x2f2e88u;
    // NOP
    // 0x2f2e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2e90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2E90u;
    {
        const bool branch_taken_0x2f2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2e90) {
            ctx->pc = 0x2F2EB0u;
            goto label_2f2eb0;
        }
    }
    ctx->pc = 0x2F2E98u;
label_2f2e98:
    // 0x2f2e98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f2e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f2e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f2e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f2ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2ea4: 0x0  nop
    ctx->pc = 0x2f2ea4u;
    // NOP
    // 0x2f2ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2eac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f2eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f2eb0:
    // 0x2f2eb0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f2eb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2eb4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f2ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f2ec0: 0x0  nop
    ctx->pc = 0x2f2ec0u;
    // NOP
    // 0x2f2ec4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f2ec4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f2ec8: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2ec8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2ecc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f2eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f2ed0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f2ed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f2ed4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f2ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2ed8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f2ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2edc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f2edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f2ee0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f2ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2ee4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2f2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2ee8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f2eec: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2f2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2ef0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f2ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2ef4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f2ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2ef8: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2efc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2f2efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f2f00: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2f2f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f2f04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F2F04u;
    {
        const bool branch_taken_0x2f2f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F04u;
        // 0x2f2f08: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2f04) {
            ctx->pc = 0x2F2F58u;
            goto label_2f2f58;
        }
    }
    ctx->pc = 0x2F2F0Cu;
    // 0x2f2f0c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2f2f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f2f10: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2f2f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2f14: 0x0  nop
    ctx->pc = 0x2f2f14u;
    // NOP
label_2f2f18:
    // 0x2f2f18: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f2f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2f1c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f2f1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f2f20: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f2f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f2f24: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f2f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2f28: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2f2f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f2f2c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f2f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f34: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F2F34u;
    SET_GPR_U32(ctx, 31, 0x2F2F3Cu);
    ctx->pc = 0x2F2F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F34u;
    // 0x2f2f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F2F34u, 0x2F2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F3Cu;
label_2f2f3c:
    // 0x2f2f3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f2f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f2f40: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F2F40u;
    SET_GPR_U32(ctx, 31, 0x2F2F48u);
    ctx->pc = 0x2F2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F40u;
    // 0x2f2f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F2F40u, 0x2F2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F48u;
label_2f2f48:
    // 0x2f2f48: 0x8e0202b8  lw          $v0, 0x2B8($s0)
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x2f2f4c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2f2f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f2f50: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2F2F50u;
    {
        const bool branch_taken_0x2f2f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2f50) {
            ctx->pc = 0x2F2F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2f18;
        }
    }
    ctx->pc = 0x2F2F58u;
label_2f2f58:
    // 0x2f2f58: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f2f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2f5c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f2f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2f64: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F2F64u;
    SET_GPR_U32(ctx, 31, 0x2F2F6Cu);
    ctx->pc = 0x2F2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2F64u;
    // 0x2f2f68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F2F64u, 0x2F2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F6Cu;
label_2f2f6c:
    // 0x2f2f6c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2f2f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2f2f70:
    // 0x2f2f70: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2f2f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2f2f74: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2f2f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2f2f78: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2f2f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f2f7c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2f2f7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f2f80: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2f2f80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f2f84: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2f2f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2f88: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2f2f88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f2f8c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f2f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2f90: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2f2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f2f94: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2f2f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f2f98: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2F98u;
        // 0x2f2f9c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2FA0u;
}
