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

// Function: cHeatSys_UpdateHeatMax
// Address: 0x2a9bf0 - 0x2a9c58
void cHeatSys_UpdateHeatMax_0x2a9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_UpdateHeatMax_0x2a9bf0");
#endif

    switch (ctx->pc) {
        case 0x2a9c0cu: goto label_2a9c0c;
        case 0x2a9c44u: goto label_2a9c44;
        default: break;
    }

    ctx->pc = 0x2a9bf0u;

    // 0x2a9bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9bf4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a9bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9c00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a9c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2a9c04: 0xc07eba8  jal         func_1FAEA0
    ctx->pc = 0x2A9C04u;
    SET_GPR_U32(ctx, 31, 0x2A9C0Cu);
    ctx->pc = 0x2A9C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C04u;
    // 0x2a9c08: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEA0u, 0x2A9C04u, 0x2A9C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C0Cu;
label_2a9c0c:
    // 0x2a9c0c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a9c10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9c14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a9c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9c18: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2a9c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9c20: 0x0  nop
    ctx->pc = 0x2a9c20u;
    // NOP
    // 0x2a9c24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a9c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9c28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9c2c: 0x0  nop
    ctx->pc = 0x2a9c2cu;
    // NOP
    // 0x2a9c30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9C30u;
    {
        const bool branch_taken_0x2a9c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C30u;
        // 0x2a9c34: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c30) {
            ctx->pc = 0x2A9C3Cu;
            goto label_2a9c3c;
        }
    }
    ctx->pc = 0x2A9C38u;
    // 0x2a9c38: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a9c3c:
    // 0x2a9c3c: 0xc0aa6d4  jal         func_2A9B50
    ctx->pc = 0x2A9C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A9C44u);
    ctx->pc = 0x2A9C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9C3Cu;
    // 0x2a9c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B50u, 0x2A9C3Cu, 0x2A9C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9C44u;
label_2a9c44:
    // 0x2a9c44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C4Cu;
        // 0x2a9c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C54u;
    // 0x2a9c54: 0x0  nop
    ctx->pc = 0x2a9c54u;
    // NOP
    ctx->pc = 0x2a9c58u;
}
