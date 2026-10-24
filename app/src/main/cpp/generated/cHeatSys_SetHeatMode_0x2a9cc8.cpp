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

// Function: cHeatSys_SetHeatMode
// Address: 0x2a9cc8 - 0x2a9d28
void cHeatSys_SetHeatMode_0x2a9cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_SetHeatMode_0x2a9cc8");
#endif

    switch (ctx->pc) {
        case 0x2a9d0cu: goto label_2a9d0c;
        case 0x2a9d1cu: goto label_2a9d1c;
        default: break;
    }

    ctx->pc = 0x2a9cc8u;

    // 0x2a9cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9ccc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a9cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9cd4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a9cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a9cd8: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x2a9cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a9cdc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a9cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9ce0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2a9ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ce4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a9ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a9ce8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a9ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9cec: 0x0  nop
    ctx->pc = 0x2a9cecu;
    // NOP
    // 0x2a9cf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9CF0u;
    {
        const bool branch_taken_0x2a9cf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CF0u;
        // 0x2a9cf4: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cf0) {
            ctx->pc = 0x2A9CFCu;
            goto label_2a9cfc;
        }
    }
    ctx->pc = 0x2A9CF8u;
    // 0x2a9cf8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2a9cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2a9cfc:
    // 0x2a9cfc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9CFCu;
    {
        const bool branch_taken_0x2a9cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9CFCu;
        // 0x2a9d00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9cfc) {
            ctx->pc = 0x2A9D20u;
            goto label_2a9d20;
        }
    }
    ctx->pc = 0x2A9D04u;
    // 0x2a9d04: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2A9D04u;
    SET_GPR_U32(ctx, 31, 0x2A9D0Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2A9D04u, 0x2A9D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D0Cu;
label_2a9d0c:
    // 0x2a9d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9d10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9d14: 0xc0c1880  jal         func_306200
    ctx->pc = 0x2A9D14u;
    SET_GPR_U32(ctx, 31, 0x2A9D1Cu);
    ctx->pc = 0x2A9D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D14u;
    // 0x2a9d18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x2A9D14u, 0x2A9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D1Cu;
label_2a9d1c:
    // 0x2a9d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9d20:
    // 0x2a9d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D20u;
        // 0x2a9d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9D28u;
}
