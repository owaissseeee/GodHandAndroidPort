#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: SetMove__15cR305_Chihuahua
// Address: 0x79a378 - 0x79a470
void SetMove__15cR305_Chihuahua_0x79a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMove__15cR305_Chihuahua_0x79a378");
#endif

    switch (ctx->pc) {
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a42cu: goto label_79a42c;
        default: break;
    }

    ctx->pc = 0x79a378u;

    // 0x79a378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a37c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a388: 0x9e020014  lwu         $v0, 0x14($s0)
    ctx->pc = 0x79a388u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x79a38c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a390: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79A390u;
    {
        const bool branch_taken_0x79a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A390u;
        // 0x79a394: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a390) {
            ctx->pc = 0x79A45Cu;
            goto label_79a45c;
        }
    }
    ctx->pc = 0x79A398u;
    // 0x79a398: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x79a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a39c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x79a3a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79a3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a3a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79a3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3b0: 0x0  nop
    ctx->pc = 0x79a3b0u;
    // NOP
    // 0x79a3b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x79A3B4u;
    {
        const bool branch_taken_0x79a3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B4u;
        // 0x79a3b8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b4) {
            ctx->pc = 0x79A3D8u;
            goto label_79a3d8;
        }
    }
    ctx->pc = 0x79A3BCu;
    // 0x79a3bc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x79A3BCu;
    SET_GPR_U32(ctx, 31, 0x79A3C4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x79A3BCu, 0x79A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C4u;
label_79a3c4:
    // 0x79a3c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a3c8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3C8u;
            // 0x79a3cc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A3D0u;
    // 0x79a3d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79A3D0u;
    {
        const bool branch_taken_0x79a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d0) {
            ctx->pc = 0x79A454u;
            goto label_79a454;
        }
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x79a3dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a3e0: 0x0  nop
    ctx->pc = 0x79a3e0u;
    // NOP
    // 0x79a3e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79a3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3e8: 0x0  nop
    ctx->pc = 0x79a3e8u;
    // NOP
    // 0x79a3ec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3F4u;
    // 0x79a3f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x79A3F4u;
    SET_GPR_U32(ctx, 31, 0x79A3FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x79A3F4u, 0x79A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3FCu;
label_79a3fc:
    // 0x79a3fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a400: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x79a400u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79a404: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79A404u;
    {
        const bool branch_taken_0x79a404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a404) {
            ctx->pc = 0x79A408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A404u;
            // 0x79a408: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A40Cu;
            goto label_79a40c;
        }
    }
    ctx->pc = 0x79A40Cu;
label_79a40c:
    // 0x79a40c: 0x2010  mfhi        $a0
    ctx->pc = 0x79a40cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79a410: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A454u;
            goto label_79a454;
        }
    }
    ctx->pc = 0x79A418u;
    // 0x79a418: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_79a41c:
    // 0x79a41c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A45Cu;
            goto label_79a45c;
        }
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A424u;
    SET_GPR_U32(ctx, 31, 0x79A42Cu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A424u, 0x79A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A42Cu;
label_79a42c:
    // 0x79a42c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a430: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x79a430u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x79a434: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79A434u;
    {
        const bool branch_taken_0x79a434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a434) {
            ctx->pc = 0x79A438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A434u;
            // 0x79a438: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A43Cu;
            goto label_79a43c;
        }
    }
    ctx->pc = 0x79A43Cu;
label_79a43c:
    // 0x79a43c: 0x1810  mfhi        $v1
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x79a440: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A440u;
    {
        const bool branch_taken_0x79a440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a440) {
            ctx->pc = 0x79A454u;
            goto label_79a454;
        }
    }
    ctx->pc = 0x79A448u;
    // 0x79a448: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x79a448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x79a44c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A44Cu;
    {
        const bool branch_taken_0x79a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A44Cu;
        // 0x79a450: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a44c) {
            ctx->pc = 0x79A45Cu;
            goto label_79a45c;
        }
    }
    ctx->pc = 0x79A454u;
label_79a454:
    // 0x79a454: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x79a458: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x79a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_79a45c:
    // 0x79a45c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a464: 0x3e00008  jr          $ra
    ctx->pc = 0x79A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A464u;
        // 0x79a468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A46Cu;
    // 0x79a46c: 0x0  nop
    ctx->pc = 0x79a46cu;
    // NOP
    ctx->pc = 0x79a470u;
}
} // namespace gh_r305
