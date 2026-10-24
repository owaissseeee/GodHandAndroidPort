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

// Function: CountdownObj_tickIsSpent
// Address: 0x1b1a80 - 0x1b1ae8
void CountdownObj_tickIsSpent_0x1b1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountdownObj_tickIsSpent_0x1b1a80");
#endif

    switch (ctx->pc) {
        case 0x1b1a9cu: goto label_1b1a9c;
        default: break;
    }

    ctx->pc = 0x1b1a80u;

    // 0x1b1a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1a84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1a90: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b1a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b1a94: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B1A94u;
    SET_GPR_U32(ctx, 31, 0x1B1A9Cu);
    ctx->pc = 0x1B1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A94u;
    // 0x1b1a98: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B1A94u, 0x1B1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A9Cu;
label_1b1a9c:
    // 0x1b1a9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b1a9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b1aa0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b1aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1aa4: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1b1aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1aa8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b1aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1aac: 0x0  nop
    ctx->pc = 0x1b1aacu;
    // NOP
    // 0x1b1ab0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1AB0u;
    {
        const bool branch_taken_0x1b1ab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1ab0) {
            ctx->pc = 0x1B1AC4u;
            goto label_1b1ac4;
        }
    }
    ctx->pc = 0x1B1AB8u;
    // 0x1b1ab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b1abc: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1b1abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1b1ac0: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1b1ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1ac4:
    // 0x1b1ac4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b1ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1ac8: 0x0  nop
    ctx->pc = 0x1b1ac8u;
    // NOP
    // 0x1b1acc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1ACCu;
    {
        const bool branch_taken_0x1b1acc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1ACCu;
        // 0x1b1ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1acc) {
            ctx->pc = 0x1B1AD8u;
            goto label_1b1ad8;
        }
    }
    ctx->pc = 0x1B1AD4u;
    // 0x1b1ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ad8:
    // 0x1b1ad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1AE0u;
        // 0x1b1ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1AE8u;
}
