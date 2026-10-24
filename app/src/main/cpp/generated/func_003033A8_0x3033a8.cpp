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

// Function: func_003033A8
// Address: 0x3033a8 - 0x3034a8
void func_003033A8_0x3033a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003033A8_0x3033a8");
#endif

    switch (ctx->pc) {
        case 0x303418u: goto label_303418;
        case 0x30342cu: goto label_30342c;
        case 0x30343cu: goto label_30343c;
        case 0x30344cu: goto label_30344c;
        default: break;
    }

    ctx->pc = 0x3033a8u;

    // 0x3033a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3033ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3033acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3033b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3033b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3033b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3033b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3033b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3033b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3033bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3033bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3033c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3033c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3033c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3033c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3033c8: 0xc62c0174  lwc1        $f12, 0x174($s1)
    ctx->pc = 0x3033c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3033cc: 0xc621011c  lwc1        $f1, 0x11C($s1)
    ctx->pc = 0x3033ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3033d0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3033d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3033d4: 0xc6220124  lwc1        $f2, 0x124($s1)
    ctx->pc = 0x3033d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3033d8: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x3033d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3033dc: 0xc6230134  lwc1        $f3, 0x134($s1)
    ctx->pc = 0x3033dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3033e0: 0xc6240138  lwc1        $f4, 0x138($s1)
    ctx->pc = 0x3033e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3033e4: 0xc625013c  lwc1        $f5, 0x13C($s1)
    ctx->pc = 0x3033e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3033e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3033e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3033ec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3033ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3033f0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3033f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3033f4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3033f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3033f8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3033f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3033fc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x3033fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x303400: 0xe7a6001c  swc1        $f6, 0x1C($sp)
    ctx->pc = 0x303400u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x303404: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303404u;
    {
        const bool branch_taken_0x303404 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303404u;
        // 0x303408: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303404) {
            ctx->pc = 0x303418u;
            goto label_303418;
        }
    }
    ctx->pc = 0x30340Cu;
    // 0x30340c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303410: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x303410u;
    SET_GPR_U32(ctx, 31, 0x303418u);
    ctx->pc = 0x303414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303410u;
    // 0x303414: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x303410u, 0x303418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303418u;
label_303418:
    // 0x303418: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x303418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30341c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x30341cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x303420: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x303420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303424: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x303424u;
    SET_GPR_U32(ctx, 31, 0x30342Cu);
    ctx->pc = 0x303428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303424u;
    // 0x303428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x303424u, 0x30342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30342Cu;
label_30342c:
    // 0x30342c: 0xc62c0170  lwc1        $f12, 0x170($s1)
    ctx->pc = 0x30342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303434: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x303434u;
    SET_GPR_U32(ctx, 31, 0x30343Cu);
    ctx->pc = 0x303438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303434u;
    // 0x303438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x303434u, 0x30343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30343Cu;
label_30343c:
    // 0x30343c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30343cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303444: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x303444u;
    SET_GPR_U32(ctx, 31, 0x30344Cu);
    ctx->pc = 0x303448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303444u;
    // 0x303448: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x303444u, 0x30344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30344Cu;
label_30344c:
    // 0x30344c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x30344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303450: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x303450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303454: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x303454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x303458: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x303458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30345c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x30345cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303460: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x303460u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303464: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x303464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x303468: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x303468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30346c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x30346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303470: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x303470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x303474: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x303474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x303478: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x303478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30347c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x30347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303480: 0xe621011c  swc1        $f1, 0x11C($s1)
    ctx->pc = 0x303480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x303484: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x303484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x303488: 0xe6220120  swc1        $f2, 0x120($s1)
    ctx->pc = 0x303488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x30348c: 0xe6230124  swc1        $f3, 0x124($s1)
    ctx->pc = 0x30348cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x303490: 0xe6240138  swc1        $f4, 0x138($s1)
    ctx->pc = 0x303490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x303494: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x303494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303498: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x303498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30349c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3034a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3034A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3034A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3034A0u;
        // 0x3034a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3034A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3034A8u;
}
