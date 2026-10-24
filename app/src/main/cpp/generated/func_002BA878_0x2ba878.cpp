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

// Function: func_002BA878
// Address: 0x2ba878 - 0x2ba8d0
void func_002BA878_0x2ba878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA878_0x2ba878");
#endif

    switch (ctx->pc) {
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba8b8u: goto label_2ba8b8;
        default: break;
    }

    ctx->pc = 0x2ba878u;

    // 0x2ba878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba87c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba888: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BA888u;
    SET_GPR_U32(ctx, 31, 0x2BA890u);
    ctx->pc = 0x2BA88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA888u;
    // 0x2ba88c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BA888u, 0x2BA890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA890u;
label_2ba890:
    // 0x2ba890: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ba890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ba894: 0x0  nop
    ctx->pc = 0x2ba894u;
    // NOP
    // 0x2ba898: 0x0  nop
    ctx->pc = 0x2ba898u;
    // NOP
    // 0x2ba89c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2ba89cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x2ba8a0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2ba8a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba8a4: 0x0  nop
    ctx->pc = 0x2ba8a4u;
    // NOP
    // 0x2ba8a8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA8A8u;
    {
        const bool branch_taken_0x2ba8a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba8a8) {
            ctx->pc = 0x2BA8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA8A8u;
            // 0x2ba8ac: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA8B0u;
    // 0x2ba8b0: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2BA8B0u;
    SET_GPR_U32(ctx, 31, 0x2BA8B8u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2BA8B0u, 0x2BA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8B8u;
label_2ba8b8:
    // 0x2ba8b8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x2ba8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_2ba8bc:
    // 0x2ba8bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C4u;
        // 0x2ba8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA8CCu;
    // 0x2ba8cc: 0x0  nop
    ctx->pc = 0x2ba8ccu;
    // NOP
    ctx->pc = 0x2ba8d0u;
}
