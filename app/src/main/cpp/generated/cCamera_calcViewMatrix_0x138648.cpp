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

// Function: cCamera_calcViewMatrix
// Address: 0x138648 - 0x138740
void cCamera_calcViewMatrix_0x138648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_calcViewMatrix_0x138648");
#endif

    switch (ctx->pc) {
        case 0x13869cu: goto label_13869c;
        case 0x1386b4u: goto label_1386b4;
        case 0x138720u: goto label_138720;
        default: break;
    }

    ctx->pc = 0x138648u;

    // 0x138648: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13864c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x13864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x138650: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138654: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x138654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x138658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13865c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x13865cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x138660: 0x26120180  addiu       $s2, $s0, 0x180
    ctx->pc = 0x138660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x138664: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x138664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x138668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x138668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13866c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x138670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x138678: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13867c: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x13867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138680: 0xc6020214  lwc1        $f2, 0x214($s0)
    ctx->pc = 0x138680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138684: 0xc6000218  lwc1        $f0, 0x218($s0)
    ctx->pc = 0x138684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138688: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x138688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13868c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x13868cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x138690: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x138690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x138694: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x138694u;
    SET_GPR_U32(ctx, 31, 0x13869Cu);
    ctx->pc = 0x138698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138694u;
    // 0x138698: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x138694u, 0x13869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13869Cu;
label_13869c:
    // 0x13869c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x13869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1386a0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1386a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1386a4: 0x26060200  addiu       $a2, $s0, 0x200
    ctx->pc = 0x1386a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x1386a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1386a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386ac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1386ACu;
    SET_GPR_U32(ctx, 31, 0x1386B4u);
    ctx->pc = 0x1386B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1386ACu;
    // 0x1386b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1386ACu, 0x1386B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1386B4u;
label_1386b4:
    // 0x1386b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1386b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1386b8: 0x26020210  addiu       $v0, $s0, 0x210
    ctx->pc = 0x1386b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1386bc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1386bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1386c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1386c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1386c4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1386c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1386c8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1386c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1386cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1386ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1386d0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1386d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1386d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1386d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1386d8: 0xc6020240  lwc1        $f2, 0x240($s0)
    ctx->pc = 0x1386d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1386dc: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1386dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1386e0: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x1386e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1386e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1386e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1386e8: 0xc6010248  lwc1        $f1, 0x248($s0)
    ctx->pc = 0x1386e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1386ec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1386f0: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x1386f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1386f4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1386f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1386f8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1386f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1386fc: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x1386fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x138700: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x138700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x138704: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x138704u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x138708: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x138708u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13870c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x13870cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x138710: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x138710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x138714: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x138714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x138718: 0xc0c2a32  jal         func_30A8C8
    ctx->pc = 0x138718u;
    SET_GPR_U32(ctx, 31, 0x138720u);
    ctx->pc = 0x13871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138718u;
    // 0x13871c: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8C8u, 0x138718u, 0x138720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138720u;
label_138720:
    // 0x138720: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x138720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138724: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x138724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138728: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x138728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13872c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13872cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138730: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x138730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138734: 0x3e00008  jr          $ra
    ctx->pc = 0x138734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138734u;
        // 0x138738: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13873Cu;
    // 0x13873c: 0x0  nop
    ctx->pc = 0x13873cu;
    // NOP
    ctx->pc = 0x138740u;
}
