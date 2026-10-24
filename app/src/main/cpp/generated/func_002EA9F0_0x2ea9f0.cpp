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

// Function: func_002EA9F0
// Address: 0x2ea9f0 - 0x2eaaa8
void func_002EA9F0_0x2ea9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EA9F0_0x2ea9f0");
#endif

    switch (ctx->pc) {
        case 0x2eaa98u: goto label_2eaa98;
        default: break;
    }

    ctx->pc = 0x2ea9f0u;

    // 0x2ea9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ea9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ea9f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ea9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ea9f8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ea9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ea9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eaa00: 0xc48302b8  lwc1        $f3, 0x2B8($a0)
    ctx->pc = 0x2eaa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eaa04: 0xc48202c0  lwc1        $f2, 0x2C0($a0)
    ctx->pc = 0x2eaa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eaa08: 0xc48102bc  lwc1        $f1, 0x2BC($a0)
    ctx->pc = 0x2eaa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaa0c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2eaa0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2eaa10: 0xc48002c4  lwc1        $f0, 0x2C4($a0)
    ctx->pc = 0x2eaa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2eaa14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa18: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x2eaa18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaa1c: 0xe48302b8  swc1        $f3, 0x2B8($a0)
    ctx->pc = 0x2eaa1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
    // 0x2eaa20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAA20u;
    {
        const bool branch_taken_0x2eaa20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA20u;
        // 0x2eaa24: 0xe48102bc  swc1        $f1, 0x2BC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaa20) {
            ctx->pc = 0x2EAA30u;
            goto label_2eaa30;
        }
    }
    ctx->pc = 0x2EAA28u;
    // 0x2eaa28: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x2eaa28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2eaa2c: 0xe48002b8  swc1        $f0, 0x2B8($a0)
    ctx->pc = 0x2eaa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
label_2eaa30:
    // 0x2eaa30: 0xc48002bc  lwc1        $f0, 0x2BC($a0)
    ctx->pc = 0x2eaa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa34: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2eaa34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaa38: 0x0  nop
    ctx->pc = 0x2eaa38u;
    // NOP
    // 0x2eaa3c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAA3Cu;
    {
        const bool branch_taken_0x2eaa3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaa3c) {
            ctx->pc = 0x2EAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA3Cu;
            // 0x2eaa40: 0xc48002b8  lwc1        $f0, 0x2B8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA50u;
            goto label_2eaa50;
        }
    }
    ctx->pc = 0x2EAA44u;
    // 0x2eaa44: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2eaa44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2eaa48: 0xe48002bc  swc1        $f0, 0x2BC($a0)
    ctx->pc = 0x2eaa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
    // 0x2eaa4c: 0xc48002b8  lwc1        $f0, 0x2B8($a0)
    ctx->pc = 0x2eaa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eaa50:
    // 0x2eaa50: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2eaa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2eaa54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eaa54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa58: 0x0  nop
    ctx->pc = 0x2eaa58u;
    // NOP
    // 0x2eaa5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eaa5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaa60: 0x0  nop
    ctx->pc = 0x2eaa60u;
    // NOP
    // 0x2eaa64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EAA64u;
    {
        const bool branch_taken_0x2eaa64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaa64) {
            ctx->pc = 0x2EAA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAA64u;
            // 0x2eaa68: 0xc48002bc  lwc1        $f0, 0x2BC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAA78u;
            goto label_2eaa78;
        }
    }
    ctx->pc = 0x2EAA6Cu;
    // 0x2eaa6c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2eaa6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2eaa70: 0xe48002b8  swc1        $f0, 0x2B8($a0)
    ctx->pc = 0x2eaa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
    // 0x2eaa74: 0xc48002bc  lwc1        $f0, 0x2BC($a0)
    ctx->pc = 0x2eaa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eaa78:
    // 0x2eaa78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eaa78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaa7c: 0x0  nop
    ctx->pc = 0x2eaa7cu;
    // NOP
    // 0x2eaa80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAA80u;
    {
        const bool branch_taken_0x2eaa80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaa80) {
            ctx->pc = 0x2EAA90u;
            goto label_2eaa90;
        }
    }
    ctx->pc = 0x2EAA88u;
    // 0x2eaa88: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2eaa88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2eaa8c: 0xe48002bc  swc1        $f0, 0x2BC($a0)
    ctx->pc = 0x2eaa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
label_2eaa90:
    // 0x2eaa90: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2EAA90u;
    SET_GPR_U32(ctx, 31, 0x2EAA98u);
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2EAA90u, 0x2EAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA98u;
label_2eaa98:
    // 0x2eaa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eaa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAA9Cu;
        // 0x2eaaa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAAA4u;
    // 0x2eaaa4: 0x0  nop
    ctx->pc = 0x2eaaa4u;
    // NOP
    ctx->pc = 0x2eaaa8u;
}
