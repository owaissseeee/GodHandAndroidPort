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

// Function: func_0026A018
// Address: 0x26a018 - 0x26a200
void func_0026A018_0x26a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A018_0x26a018");
#endif

    switch (ctx->pc) {
        case 0x26a050u: goto label_26a050;
        case 0x26a0dcu: goto label_26a0dc;
        case 0x26a13cu: goto label_26a13c;
        case 0x26a168u: goto label_26a168;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a190u: goto label_26a190;
        case 0x26a1a8u: goto label_26a1a8;
        case 0x26a1c8u: goto label_26a1c8;
        default: break;
    }

    ctx->pc = 0x26a018u;

    // 0x26a018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26a018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x26a01c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x26a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x26a020: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26a024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a028: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26a02c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x26a02cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x26a030: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x26a030u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x26a034: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x26a034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x26a038: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x26a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x26a03c: 0x38420264  xori        $v0, $v0, 0x264
    ctx->pc = 0x26a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)612);
    // 0x26a040: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x26A040u;
    {
        const bool branch_taken_0x26a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A040u;
        // 0x26a044: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a040) {
            ctx->pc = 0x26A1E4u;
            goto label_26a1e4;
        }
    }
    ctx->pc = 0x26A048u;
    // 0x26a048: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26A048u;
    SET_GPR_U32(ctx, 31, 0x26A050u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26A048u, 0x26A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A050u;
label_26a050:
    // 0x26a050: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a054: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a058: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a05c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26a060: 0x13a20008  beq         $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A060u;
    {
        const bool branch_taken_0x26a060 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A060u;
        // 0x26a064: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a060) {
            ctx->pc = 0x26A084u;
            goto label_26a084;
        }
    }
    ctx->pc = 0x26A068u;
    // 0x26a068: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a06c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26a070: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a074: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26a074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26a078: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a07c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26a07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26a080: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x26a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a084:
    // 0x26a084: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x26a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x26a088: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x26a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x26a08c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26a08cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26a090: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a094: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x26a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x26a098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a09c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26a0a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x26a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x26a0a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A0A4u;
    {
        const bool branch_taken_0x26a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0A4u;
        // 0x26a0a8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0a4) {
            ctx->pc = 0x26A0B8u;
            goto label_26a0b8;
        }
    }
    ctx->pc = 0x26A0ACu;
    // 0x26a0ac: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x26a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x26a0b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A0B0u;
    {
        const bool branch_taken_0x26a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0B0u;
        // 0x26a0b4: 0x8c500094  lw          $s0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b0) {
            ctx->pc = 0x26A0BCu;
            goto label_26a0bc;
        }
    }
    ctx->pc = 0x26A0B8u;
label_26a0b8:
    // 0x26a0b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26a0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a0bc:
    // 0x26a0bc: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x26A0BCu;
    {
        const bool branch_taken_0x26a0bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0bc) {
            ctx->pc = 0x26A0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A0BCu;
            // 0x26a0c0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1E4u;
            goto label_26a1e4;
        }
    }
    ctx->pc = 0x26A0C4u;
    // 0x26a0c4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x26a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a0c8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26a0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26a0cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26a0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26a0d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a0d4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x26A0D4u;
    SET_GPR_U32(ctx, 31, 0x26A0DCu);
    ctx->pc = 0x26A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0D4u;
    // 0x26a0d8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26A0D4u, 0x26A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0DCu;
label_26a0dc:
    // 0x26a0dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26a0dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26a0e0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x26a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26a0e4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a0e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x26a0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a0ec: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x26a0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a0f0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26a0f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26a0f4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26a0f8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x26a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a0fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26a0fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a100: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26a104: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a108: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x26a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a10c: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x26a10cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26a110: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x26a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a114: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x26a114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26a118: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26a11c: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x26a11cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26a120: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26a120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26a124: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x26a124u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x26a128: 0x0  nop
    ctx->pc = 0x26a128u;
    // NOP
    // 0x26a12c: 0x0  nop
    ctx->pc = 0x26a12cu;
    // NOP
    // 0x26a130: 0x460d0344  c1          0xD0344
    ctx->pc = 0x26a130u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x26a134: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26A134u;
    SET_GPR_U32(ctx, 31, 0x26A13Cu);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26A134u, 0x26A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A13Cu;
label_26a13c:
    // 0x26a13c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x26a13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x26a140: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26a140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26a144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26a148: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26a148u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26a14c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x26a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a150: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x26a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a154: 0x3c013d56  lui         $at, 0x3D56
    ctx->pc = 0x26a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15702 << 16));
    // 0x26a158: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x26a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x26a15c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26a15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26a160: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26A160u;
    SET_GPR_U32(ctx, 31, 0x26A168u);
    ctx->pc = 0x26A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A160u;
    // 0x26a164: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26A160u, 0x26A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A168u;
label_26a168:
    // 0x26a168: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x26a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a16c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x26a16cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x26a170: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26a170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26a174: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x26A174u;
    SET_GPR_U32(ctx, 31, 0x26A17Cu);
    ctx->pc = 0x26A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A174u;
    // 0x26a178: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26A174u, 0x26A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A17Cu;
label_26a17c:
    // 0x26a17c: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x26a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a180: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x26a180u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x26a184: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26a184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26a188: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x26A188u;
    SET_GPR_U32(ctx, 31, 0x26A190u);
    ctx->pc = 0x26A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A188u;
    // 0x26a18c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26A188u, 0x26A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A190u;
label_26a190:
    // 0x26a190: 0xc62e05a8  lwc1        $f14, 0x5A8($s1)
    ctx->pc = 0x26a190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a194: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26a194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26a198: 0x46157382  mul.s       $f14, $f14, $f21
    ctx->pc = 0x26a198u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    // 0x26a19c: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x26a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a1a0: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x26A1A0u;
    SET_GPR_U32(ctx, 31, 0x26A1A8u);
    ctx->pc = 0x26A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1A0u;
    // 0x26a1a4: 0xc60c0100  lwc1        $f12, 0x100($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26A1A0u, 0x26A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1A8u;
label_26a1a8:
    // 0x26a1a8: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x26a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a1ac: 0xc60c0150  lwc1        $f12, 0x150($s0)
    ctx->pc = 0x26a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a1b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26a1b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a1b4: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x26a1b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x26a1b8: 0xc62e05a8  lwc1        $f14, 0x5A8($s1)
    ctx->pc = 0x26a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x26a1bc: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x26a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26a1c0: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x26A1C0u;
    SET_GPR_U32(ctx, 31, 0x26A1C8u);
    ctx->pc = 0x26A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1C0u;
    // 0x26a1c4: 0x46157382  mul.s       $f14, $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x26A1C0u, 0x26A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1C8u;
label_26a1c8:
    // 0x26a1c8: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x26a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a1cc: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x26a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x26a1d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26a1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a1d4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26a1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26a1d8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x26a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x26a1dc: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x26a1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x26a1e0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x26a1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26a1e4:
    // 0x26a1e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26a1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a1e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26a1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1ec: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x26a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a1f0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x26a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a1f4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x26a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x26A1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1F8u;
        // 0x26a1fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A200u;
}
