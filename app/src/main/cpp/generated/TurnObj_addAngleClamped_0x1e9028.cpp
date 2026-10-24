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

// Function: TurnObj_addAngleClamped
// Address: 0x1e9028 - 0x1e9078
void TurnObj_addAngleClamped_0x1e9028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TurnObj_addAngleClamped_0x1e9028");
#endif

    switch (ctx->pc) {
        case 0x1e906cu: goto label_1e906c;
        default: break;
    }

    ctx->pc = 0x1e9028u;

    // 0x1e9028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e902c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e902cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9034: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x1e9034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9038: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1e9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e903c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x1e903cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x1e9040: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9040u;
    {
        const bool branch_taken_0x1e9040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9040u;
        // 0x1e9044: 0xe48100b8  swc1        $f1, 0xB8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9040) {
            ctx->pc = 0x1E9054u;
            goto label_1e9054;
        }
    }
    ctx->pc = 0x1E9048u;
    // 0x1e9048: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x1e9048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e904c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E904Cu;
    {
        const bool branch_taken_0x1e904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e904c) {
            ctx->pc = 0x1E9058u;
            goto label_1e9058;
        }
    }
    ctx->pc = 0x1E9054u;
label_1e9054:
    // 0x1e9054: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1e9054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e9058:
    // 0x1e9058: 0x0  nop
    ctx->pc = 0x1e9058u;
    // NOP
    // 0x1e905c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E905Cu;
    {
        const bool branch_taken_0x1e905c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e905c) {
            ctx->pc = 0x1E9060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E905Cu;
            // 0x1e9060: 0xe48d00b8  swc1        $f13, 0xB8($a0) (Delay Slot)
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9064u;
            goto label_1e9064;
        }
    }
    ctx->pc = 0x1E9064u;
label_1e9064:
    // 0x1e9064: 0xc07a3de  jal         func_1E8F78
    ctx->pc = 0x1E9064u;
    SET_GPR_U32(ctx, 31, 0x1E906Cu);
    ctx->pc = 0x1E9068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9064u;
    // 0x1e9068: 0xc48c00b8  lwc1        $f12, 0xB8($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F78u, 0x1E9064u, 0x1E906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E906Cu;
label_1e906c:
    // 0x1e906c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e906cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9070: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9070u;
        // 0x1e9074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9078u;
}
