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

// Function: Mtx_checkLineDistance
// Address: 0x2bd3d8 - 0x2bd4b0
void Mtx_checkLineDistance_0x2bd3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mtx_checkLineDistance_0x2bd3d8");
#endif

    switch (ctx->pc) {
        case 0x2bd42cu: goto label_2bd42c;
        case 0x2bd448u: goto label_2bd448;
        case 0x2bd47cu: goto label_2bd47c;
        default: break;
    }

    ctx->pc = 0x2bd3d8u;

    // 0x2bd3d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bd3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bd3dc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bd3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2bd3e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bd3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2bd3e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3e8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bd3e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bd3ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bd3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3f0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bd3f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd3f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bd3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2bd3f8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bd3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2bd3fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bd3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bd400: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bd400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd40c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2bd40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd410: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2bd410u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bd414: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd418: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2bd418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2bd41c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd420: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2bd420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2bd424: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BD424u;
    SET_GPR_U32(ctx, 31, 0x2BD42Cu);
    ctx->pc = 0x2BD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD424u;
    // 0x2bd428: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BD424u, 0x2BD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD42Cu;
label_2bd42c:
    // 0x2bd42c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bd42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd430: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd434: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bd434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd440: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD440u;
    SET_GPR_U32(ctx, 31, 0x2BD448u);
    ctx->pc = 0x2BD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD440u;
    // 0x2bd444: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD440u, 0x2BD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD448u;
label_2bd448:
    // 0x2bd448: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd44c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bd44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd450: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2bd450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bd454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd458: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd45c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bd45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd460: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd468: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bd468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bd46c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd470: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bd470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bd474: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BD474u;
    SET_GPR_U32(ctx, 31, 0x2BD47Cu);
    ctx->pc = 0x2BD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD474u;
    // 0x2bd478: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BD474u, 0x2BD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD47Cu;
label_2bd47c:
    // 0x2bd47c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bd47cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd480: 0x0  nop
    ctx->pc = 0x2bd480u;
    // NOP
    // 0x2bd484: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BD484u;
    {
        const bool branch_taken_0x2bd484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD484u;
        // 0x2bd488: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd484) {
            ctx->pc = 0x2BD490u;
            goto label_2bd490;
        }
    }
    ctx->pc = 0x2BD48Cu;
    // 0x2bd48c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bd48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bd490:
    // 0x2bd490: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bd490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd494: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bd494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd498: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bd498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd49c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bd49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bd4a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bd4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bd4a4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bd4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD4A8u;
        // 0x2bd4ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD4B0u;
}
