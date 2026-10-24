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

// Function: func_0028ED78
// Address: 0x28ed78 - 0x28edd0
void func_0028ED78_0x28ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028ED78_0x28ed78");
#endif

    ctx->pc = 0x28ed78u;

    // 0x28ed78: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x28ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x28ed7c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28ED7Cu;
    {
        const bool branch_taken_0x28ed7c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x28ed7c) {
            ctx->pc = 0x28EDC4u;
            goto label_28edc4;
        }
    }
    ctx->pc = 0x28ED84u;
    // 0x28ed84: 0xc48005b8  lwc1        $f0, 0x5B8($a0)
    ctx->pc = 0x28ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ed88: 0xc48105a8  lwc1        $f1, 0x5A8($a0)
    ctx->pc = 0x28ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ed8c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x28ed8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28ed90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28ed90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28ed94: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x28ed94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28ed98: 0x0  nop
    ctx->pc = 0x28ed98u;
    // NOP
    // 0x28ed9c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28ED9Cu;
    {
        const bool branch_taken_0x28ed9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED9Cu;
        // 0x28eda0: 0xe48005b8  swc1        $f0, 0x5B8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed9c) {
            ctx->pc = 0x28EDB8u;
            goto label_28edb8;
        }
    }
    ctx->pc = 0x28EDA4u;
    // 0x28eda4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28eda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x28eda8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28eda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28edac: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x28edb0: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x28edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
    // 0x28edb4: 0xe48005b8  swc1        $f0, 0x5B8($a0)
    ctx->pc = 0x28edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
label_28edb8:
    // 0x28edb8: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x28edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x28edbc: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28EDBCu;
    {
        const bool branch_taken_0x28edbc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x28edbc) {
            ctx->pc = 0x28EDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EDBCu;
            // 0x28edc0: 0xac8005b4  sw          $zero, 0x5B4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EDC4u;
            goto label_28edc4;
        }
    }
    ctx->pc = 0x28EDC4u;
label_28edc4:
    // 0x28edc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EDCCu;
    // 0x28edcc: 0x0  nop
    ctx->pc = 0x28edccu;
    // NOP
    ctx->pc = 0x28edd0u;
}
