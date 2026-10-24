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

// Function: cArea_HitCheckQuad
// Address: 0x1f8488 - 0x1f8550
void cArea_HitCheckQuad_0x1f8488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cArea_HitCheckQuad_0x1f8488");
#endif

    switch (ctx->pc) {
        case 0x1f8538u: goto label_1f8538;
        default: break;
    }

    ctx->pc = 0x1f8488u;

    // 0x1f8488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f848c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f848cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f8490: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f8498: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1f8498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f849c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1f849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f84a0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1f84a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f84a4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1f84a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f84a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f84a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f84ac: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1f84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f84b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f84b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f84b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f84b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f84b8: 0x0  nop
    ctx->pc = 0x1f84b8u;
    // NOP
    // 0x1f84bc: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1F84BCu;
    {
        const bool branch_taken_0x1f84bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84BCu;
        // 0x1f84c0: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84bc) {
            ctx->pc = 0x1F8540u;
            goto label_1f8540;
        }
    }
    ctx->pc = 0x1F84C4u;
    // 0x1f84c4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1f84c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f84c8: 0x0  nop
    ctx->pc = 0x1f84c8u;
    // NOP
    // 0x1f84cc: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x1F84CCu;
    {
        const bool branch_taken_0x1f84cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f84cc) {
            ctx->pc = 0x1F84D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F84CCu;
            // 0x1f84d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8544u;
            goto label_1f8544;
        }
    }
    ctx->pc = 0x1F84D4u;
    // 0x1f84d4: 0xc447002c  lwc1        $f7, 0x2C($v0)
    ctx->pc = 0x1f84d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f84d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f84d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84dc: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x1f84dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f84e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1f84e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f84e4: 0xc4450014  lwc1        $f5, 0x14($v0)
    ctx->pc = 0x1f84e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f84e8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f84ec: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x1f84ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f84f0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1f84f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f84f4: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x1f84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f84f8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1f84f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f84fc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1f84fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8500: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x1f8500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8504: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x1f8504u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f8508: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x1f8508u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f850c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1f850cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f8510: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1f8510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f8514: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f8514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f8518: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1f8518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f851c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x1f851cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f8520: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x1f8520u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f8524: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f8524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f8528: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f8528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f852c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f8530: 0xc055cf2  jal         func_1573C8
    ctx->pc = 0x1F8530u;
    SET_GPR_U32(ctx, 31, 0x1F8538u);
    ctx->pc = 0x1F8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8530u;
    // 0x1f8534: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573C8u, 0x1F8530u, 0x1F8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8538u;
label_1f8538:
    // 0x1f8538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8538u;
    {
        const bool branch_taken_0x1f8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8538u;
        // 0x1f853c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8538) {
            ctx->pc = 0x1F8544u;
            goto label_1f8544;
        }
    }
    ctx->pc = 0x1F8540u;
label_1f8540:
    // 0x1f8540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8544:
    // 0x1f8544: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f8544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8548: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8548u;
        // 0x1f854c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8550u;
}
