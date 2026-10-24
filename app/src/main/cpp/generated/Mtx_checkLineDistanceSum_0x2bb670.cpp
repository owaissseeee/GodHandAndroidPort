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

// Function: Mtx_checkLineDistanceSum
// Address: 0x2bb670 - 0x2bb760
void Mtx_checkLineDistanceSum_0x2bb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Mtx_checkLineDistanceSum_0x2bb670");
#endif

    switch (ctx->pc) {
        case 0x2bb6ccu: goto label_2bb6cc;
        case 0x2bb6e8u: goto label_2bb6e8;
        case 0x2bb71cu: goto label_2bb71c;
        default: break;
    }

    ctx->pc = 0x2bb670u;

    // 0x2bb670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bb674: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bb674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2bb678: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2bb67c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb680: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2bb680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2bb684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bb684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb688: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bb688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bb68c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bb68cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bb690: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bb690u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bb694: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bb694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2bb698: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bb698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2bb69c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bb69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2bb6a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bb6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb6a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bb6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bb6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb6ac: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2bb6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb6b0: 0xe7ae0014  swc1        $f14, 0x14($sp)
    ctx->pc = 0x2bb6b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb6b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2bb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2bb6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2bb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2bb6c4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BB6C4u;
    SET_GPR_U32(ctx, 31, 0x2BB6CCu);
    ctx->pc = 0x2BB6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6C4u;
    // 0x2bb6c8: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BB6C4u, 0x2BB6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6CCu;
label_2bb6cc:
    // 0x2bb6cc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bb6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bb6d0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bb6d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb6d4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bb6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb6d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bb6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6e0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BB6E0u;
    SET_GPR_U32(ctx, 31, 0x2BB6E8u);
    ctx->pc = 0x2BB6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB6E0u;
    // 0x2bb6e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BB6E0u, 0x2BB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6E8u;
label_2bb6e8:
    // 0x2bb6e8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bb6e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb6ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bb6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb6f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2bb6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb6f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bb6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb6f8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bb6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb6fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bb6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb700: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bb700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb704: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb708: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bb708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bb70c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bb70cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb710: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2bb710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bb714: 0xc0559b0  jal         func_1566C0
    ctx->pc = 0x2BB714u;
    SET_GPR_U32(ctx, 31, 0x2BB71Cu);
    ctx->pc = 0x2BB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB714u;
    // 0x2bb718: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1566C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566C0u, 0x2BB714u, 0x2BB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB71Cu;
label_2bb71c:
    // 0x2bb71c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2bb71cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2bb720: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bb720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bb724: 0x0  nop
    ctx->pc = 0x2bb724u;
    // NOP
    // 0x2bb728: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB728u;
    {
        const bool branch_taken_0x2bb728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB728u;
        // 0x2bb72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb728) {
            ctx->pc = 0x2BB734u;
            goto label_2bb734;
        }
    }
    ctx->pc = 0x2BB730u;
    // 0x2bb730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb734:
    // 0x2bb734: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bb734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bb738: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bb738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bb73c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bb73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bb740: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bb740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb744: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb748: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2bb748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bb74c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bb74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb750: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB750u;
        // 0x2bb754: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB758u;
    // 0x2bb758: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bb758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb75c: 0x0  nop
    ctx->pc = 0x2bb75cu;
    // NOP
    ctx->pc = 0x2bb760u;
}
