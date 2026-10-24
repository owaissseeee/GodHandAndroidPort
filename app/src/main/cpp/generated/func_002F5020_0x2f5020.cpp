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

// Function: func_002F5020
// Address: 0x2f5020 - 0x2f5328
void func_002F5020_0x2f5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5020_0x2f5020");
#endif

    switch (ctx->pc) {
        case 0x2f5064u: goto label_2f5064;
        case 0x2f5074u: goto label_2f5074;
        case 0x2f50a0u: goto label_2f50a0;
        case 0x2f50acu: goto label_2f50ac;
        case 0x2f50d0u: goto label_2f50d0;
        case 0x2f50f0u: goto label_2f50f0;
        case 0x2f51a8u: goto label_2f51a8;
        case 0x2f5300u: goto label_2f5300;
        default: break;
    }

    ctx->pc = 0x2f5020u;

    // 0x2f5020: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f5024: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2f5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2f5028: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2f5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2f502c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5030: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2f5030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2f5034: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2f5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2f5038: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f5038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f503c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2f503cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2f5040: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f5040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2f5044: 0x864302bc  lh          $v1, 0x2BC($s2)
    ctx->pc = 0x2f5044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x2f5048: 0x8642022e  lh          $v0, 0x22E($s2)
    ctx->pc = 0x2f5048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 558)));
    // 0x2f504c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F504Cu;
    {
        const bool branch_taken_0x2f504c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f504c) {
            ctx->pc = 0x2F50A4u;
            goto label_2f50a4;
        }
    }
    ctx->pc = 0x2F5054u;
    // 0x2f5054: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f5054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f5058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f505c: 0xc0bd372  jal         func_2F4DC8
    ctx->pc = 0x2F505Cu;
    SET_GPR_U32(ctx, 31, 0x2F5064u);
    ctx->pc = 0x2F5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F505Cu;
    // 0x2f5060: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DC8u, 0x2F505Cu, 0x2F5064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5064u;
label_2f5064:
    // 0x2f5064: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f5064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f5068: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f5068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f506c: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F506Cu;
    SET_GPR_U32(ctx, 31, 0x2F5074u);
    ctx->pc = 0x2F5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F506Cu;
    // 0x2f5070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F506Cu, 0x2F5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5074u;
label_2f5074:
    // 0x2f5074: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f5078: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2f5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f507c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2f507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5080: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f5080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5084: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2f5084u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5088: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f508c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5090: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5094: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5098: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2F5098u;
    SET_GPR_U32(ctx, 31, 0x2F50A0u);
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2F5098u, 0x2F50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50A0u;
label_2f50a0:
    // 0x2f50a0: 0xe64002b0  swc1        $f0, 0x2B0($s2)
    ctx->pc = 0x2f50a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 688), bits); }
label_2f50a4:
    // 0x2f50a4: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F50A4u;
    SET_GPR_U32(ctx, 31, 0x2F50ACu);
    ctx->pc = 0x2F50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50A4u;
    // 0x2f50a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F50A4u, 0x2F50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50ACu;
label_2f50ac:
    // 0x2f50ac: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x2f50acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x2f50b0: 0x8643022e  lh          $v1, 0x22E($s2)
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 558)));
    // 0x2f50b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2f50b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f50b8: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2F50B8u;
    {
        const bool branch_taken_0x2f50b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50B8u;
        // 0x2f50bc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50b8) {
            ctx->pc = 0x2F5304u;
            goto label_2f5304;
        }
    }
    ctx->pc = 0x2F50C0u;
    // 0x2f50c0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f50c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f50c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50c8: 0xc0bd372  jal         func_2F4DC8
    ctx->pc = 0x2F50C8u;
    SET_GPR_U32(ctx, 31, 0x2F50D0u);
    ctx->pc = 0x2F50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50C8u;
    // 0x2f50cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4DC8u, 0x2F50C8u, 0x2F50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50D0u;
label_2f50d0:
    // 0x2f50d0: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2f50d4: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x2f50d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2f50d8: 0xa64302bc  sh          $v1, 0x2BC($s2)
    ctx->pc = 0x2f50d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 700), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f50dc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2f50dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f50e0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2f50e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f50e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f50e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f50e8: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x2F50E8u;
    SET_GPR_U32(ctx, 31, 0x2F50F0u);
    ctx->pc = 0x2F50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50E8u;
    // 0x2f50ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x2F50E8u, 0x2F50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50F0u;
label_2f50f0:
    // 0x2f50f0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f50f4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2f50f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f50f8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2f50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f50fc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f50fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5100: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2f5100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5104: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5108: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f5108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f510c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f510cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5110: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f5110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5114: 0x86430238  lh          $v1, 0x238($s2)
    ctx->pc = 0x2f5114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x2f5118: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x2f5118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x2f511c: 0x8644022e  lh          $a0, 0x22E($s2)
    ctx->pc = 0x2f511cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 558)));
    // 0x2f5120: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f5120u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5128: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f5128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f512c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f512cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f5130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5134: 0x0  nop
    ctx->pc = 0x2f5134u;
    // NOP
    // 0x2f5138: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f5138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f513c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f513cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5140: 0x0  nop
    ctx->pc = 0x2f5140u;
    // NOP
    // 0x2f5144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5148: 0xc64502b0  lwc1        $f5, 0x2B0($s2)
    ctx->pc = 0x2f5148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f514c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x2f514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f5150: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2f5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5154: 0x0  nop
    ctx->pc = 0x2f5154u;
    // NOP
    // 0x2f5158: 0x0  nop
    ctx->pc = 0x2f5158u;
    // NOP
    // 0x2f515c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f515cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f5160: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2f5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f5164: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2f5164u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f5168: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2f5168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f516c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2f516cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f5170: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f5170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2f5174: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2f5174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2f5178: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2f5178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2f517c: 0x46002d42  mul.s       $f21, $f5, $f0
    ctx->pc = 0x2f517cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2f5180: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2f5180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f5184: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f5184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f5188: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2f5188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f518c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f518cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5190: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5194: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f5194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5198: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f519c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2f519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f51a0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2F51A0u;
    SET_GPR_U32(ctx, 31, 0x2F51A8u);
    ctx->pc = 0x2F51A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51A0u;
    // 0x2f51a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2F51A0u, 0x2F51A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51A8u;
label_2f51a8:
    // 0x2f51a8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2f51a8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2f51ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f51acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51b0: 0x0  nop
    ctx->pc = 0x2f51b0u;
    // NOP
    // 0x2f51b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f51b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f51b8: 0x0  nop
    ctx->pc = 0x2f51b8u;
    // NOP
    // 0x2f51bc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2F51BCu;
    {
        const bool branch_taken_0x2f51bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51BCu;
        // 0x2f51c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51bc) {
            ctx->pc = 0x2F51FCu;
            goto label_2f51fc;
        }
    }
    ctx->pc = 0x2F51C4u;
    // 0x2f51c4: 0x0  nop
    ctx->pc = 0x2f51c4u;
    // NOP
    // 0x2f51c8: 0x0  nop
    ctx->pc = 0x2f51c8u;
    // NOP
    // 0x2f51cc: 0x4602a083  div.s       $f2, $f20, $f2
    ctx->pc = 0x2f51ccu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[2]);
    // 0x2f51d0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2f51d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f51d4: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x2f51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f51d8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f51d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f51dc: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2f51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f51e0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f51e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f51e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f51e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f51e8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2f51e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2f51ec: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2f51ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2f51f0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2f51f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f51f4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2f51f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f51f8: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2f51f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f51fc:
    // 0x2f51fc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2f51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f5200: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5204: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f5204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5208: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f5208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f520c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5210: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2f5210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5214: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2f5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5218: 0x924202be  lbu         $v0, 0x2BE($s2)
    ctx->pc = 0x2f5218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 702)));
    // 0x2f521c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f5220: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2f5220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f5224: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F5224u;
    {
        const bool branch_taken_0x2f5224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5224u;
        // 0x2f5228: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5224) {
            ctx->pc = 0x2F5298u;
            goto label_2f5298;
        }
    }
    ctx->pc = 0x2F522Cu;
    // 0x2f522c: 0x924402be  lbu         $a0, 0x2BE($s2)
    ctx->pc = 0x2f522cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 702)));
    // 0x2f5230: 0x8643022e  lh          $v1, 0x22E($s2)
    ctx->pc = 0x2f5230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 558)));
    // 0x2f5234: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f5234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5238: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F5238u;
    {
        const bool branch_taken_0x2f5238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5238u;
        // 0x2f523c: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5238) {
            ctx->pc = 0x2F5298u;
            goto label_2f5298;
        }
    }
    ctx->pc = 0x2F5240u;
    // 0x2f5240: 0xc64202b4  lwc1        $f2, 0x2B4($s2)
    ctx->pc = 0x2f5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5248: 0x0  nop
    ctx->pc = 0x2f5248u;
    // NOP
    // 0x2f524c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f524cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5250: 0xc64102b8  lwc1        $f1, 0x2B8($s2)
    ctx->pc = 0x2f5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5254: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f5254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f5258: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f525c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f525cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f5260: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f5260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5264: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f5264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f5268: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f5268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f526c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f526cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f5270: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f5270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f5274: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f5274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5278: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2f5278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f527c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5280: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f5280u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5284: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2f5284u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f5288: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f5288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f528c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f5290: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F5290u;
    {
        const bool branch_taken_0x2f5290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5290) {
            ctx->pc = 0x2F52F8u;
            goto label_2f52f8;
        }
    }
    ctx->pc = 0x2F5298u;
label_2f5298:
    // 0x2f5298: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2f5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f529c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2f529cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f52a0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52a4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f52a8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2f52a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f52ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f52acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f52b0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f52b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f52b4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f52b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f52bc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f52bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52c0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f52c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f52c4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52c8: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f52cc: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x2f52ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f52d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f52d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f52d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f52d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f52dc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f52dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f52e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f52e4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2f52e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f52e8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2f52e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f52ec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f52ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f52f0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f52f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2f52f4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2f52f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f52f8:
    // 0x2f52f8: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F52F8u;
    SET_GPR_U32(ctx, 31, 0x2F5300u);
    ctx->pc = 0x2F52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52F8u;
    // 0x2f52fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F52F8u, 0x2F5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5300u;
label_2f5300:
    // 0x2f5300: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2f5300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f5304:
    // 0x2f5304: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2f5304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f5308: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2f5308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f530c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2f530cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f5310: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f5310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f5314: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2f5314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f5318: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f531c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F531Cu;
        // 0x2f5320: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5324u;
    // 0x2f5324: 0x0  nop
    ctx->pc = 0x2f5324u;
    // NOP
    ctx->pc = 0x2f5328u;
}
