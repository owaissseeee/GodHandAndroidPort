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

// Function: cNode_setLocalTranslation
// Address: 0x2b6288 - 0x2b62e0
void cNode_setLocalTranslation_0x2b6288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNode_setLocalTranslation_0x2b6288");
#endif

    switch (ctx->pc) {
        case 0x2b62a4u: goto label_2b62a4;
        default: break;
    }

    ctx->pc = 0x2b6288u;

    // 0x2b6288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b628c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b6290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b629c: 0xc0ad900  jal         func_2B6400
    ctx->pc = 0x2B629Cu;
    SET_GPR_U32(ctx, 31, 0x2B62A4u);
    ctx->pc = 0x2B62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B629Cu;
    // 0x2b62a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6400u, 0x2B629Cu, 0x2B62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62A4u;
label_2b62a4:
    // 0x2b62a4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2b62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b62a8: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B62A8u;
    {
        const bool branch_taken_0x2b62a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b62a8) {
            ctx->pc = 0x2B62ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B62A8u;
            // 0x2b62ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62CCu;
            goto label_2b62cc;
        }
    }
    ctx->pc = 0x2B62B0u;
    // 0x2b62b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b62b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b62b4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2b62b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2b62b8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b62b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b62bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b62bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b62c0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b62c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b62c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b62c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b62c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b62cc:
    // 0x2b62cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b62ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b62d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b62d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b62d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62D4u;
        // 0x2b62d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62DCu;
    // 0x2b62dc: 0x0  nop
    ctx->pc = 0x2b62dcu;
    // NOP
    ctx->pc = 0x2b62e0u;
}
