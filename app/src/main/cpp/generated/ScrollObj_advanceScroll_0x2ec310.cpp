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

// Function: ScrollObj_advanceScroll
// Address: 0x2ec310 - 0x2ec398
void ScrollObj_advanceScroll_0x2ec310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrollObj_advanceScroll_0x2ec310");
#endif

    switch (ctx->pc) {
        case 0x2ec324u: goto label_2ec324;
        default: break;
    }

    ctx->pc = 0x2ec310u;

    // 0x2ec310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec31c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2EC31Cu;
    SET_GPR_U32(ctx, 31, 0x2EC324u);
    ctx->pc = 0x2EC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC31Cu;
    // 0x2ec320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2EC31Cu, 0x2EC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC324u;
label_2ec324:
    // 0x2ec324: 0xc60102dc  lwc1        $f1, 0x2DC($s0)
    ctx->pc = 0x2ec324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec328: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2ec328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ec32c: 0x0  nop
    ctx->pc = 0x2ec32cu;
    // NOP
    // 0x2ec330: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2ec330u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec334: 0x0  nop
    ctx->pc = 0x2ec334u;
    // NOP
    // 0x2ec338: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC338u;
    {
        const bool branch_taken_0x2ec338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec338) {
            ctx->pc = 0x2EC33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC338u;
            // 0x2ec33c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC388u;
            goto label_2ec388;
        }
    }
    ctx->pc = 0x2EC340u;
    // 0x2ec340: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ec340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec348: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ec348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec34c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec350: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ec350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec354: 0x0  nop
    ctx->pc = 0x2ec354u;
    // NOP
    // 0x2ec358: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC358u;
    {
        const bool branch_taken_0x2ec358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC358u;
        // 0x2ec35c: 0xe60002d8  swc1        $f0, 0x2D8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec358) {
            ctx->pc = 0x2EC368u;
            goto label_2ec368;
        }
    }
    ctx->pc = 0x2EC360u;
    // 0x2ec360: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2ec360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2ec364: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ec364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2ec368:
    // 0x2ec368: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ec368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec36c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2ec36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec370: 0x0  nop
    ctx->pc = 0x2ec370u;
    // NOP
    // 0x2ec374: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC374u;
    {
        const bool branch_taken_0x2ec374 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec374) {
            ctx->pc = 0x2EC378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC374u;
            // 0x2ec378: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC388u;
            goto label_2ec388;
        }
    }
    ctx->pc = 0x2EC37Cu;
    // 0x2ec37c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ec37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ec380: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2ec380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2ec384: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ec388:
    // 0x2ec388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec38c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC38Cu;
        // 0x2ec390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC394u;
    // 0x2ec394: 0x0  nop
    ctx->pc = 0x2ec394u;
    // NOP
    ctx->pc = 0x2ec398u;
}
