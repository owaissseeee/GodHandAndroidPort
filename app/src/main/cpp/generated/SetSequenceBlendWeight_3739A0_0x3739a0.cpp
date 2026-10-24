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

// Function: SetSequenceBlendWeight_3739A0
// Address: 0x3739a0 - 0x373a18
void SetSequenceBlendWeight_3739A0_0x3739a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSequenceBlendWeight_3739A0_0x3739a0");
#endif

    switch (ctx->pc) {
        case 0x3739c4u: goto label_3739c4;
        case 0x3739d4u: goto label_3739d4;
        default: break;
    }

    ctx->pc = 0x3739a0u;

    // 0x3739a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3739a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3739a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3739a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3739a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3739a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3739ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3739acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3739b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3739b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3739b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3739b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3739bc: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3739BCu;
    SET_GPR_U32(ctx, 31, 0x3739C4u);
    ctx->pc = 0x3739C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739BCu;
    // 0x3739c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3739BCu, 0x3739C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739C4u;
label_3739c4:
    // 0x3739c4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3739C4u;
    {
        const bool branch_taken_0x3739c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3739c4) {
            ctx->pc = 0x3739C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3739C4u;
            // 0x3739c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A00u;
            goto label_373a00;
        }
    }
    ctx->pc = 0x3739CCu;
    // 0x3739cc: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x3739CCu;
    SET_GPR_U32(ctx, 31, 0x3739D4u);
    ctx->pc = 0x3739D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739CCu;
    // 0x3739d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x3739CCu, 0x3739D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739D4u;
label_3739d4:
    // 0x3739d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3739d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3739d8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3739D8u;
    {
        const bool branch_taken_0x3739d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3739d8) {
            ctx->pc = 0x3739F0u;
            goto label_3739f0;
        }
    }
    ctx->pc = 0x3739E0u;
    // 0x3739e0: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3739E0u;
    {
        const bool branch_taken_0x3739e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3739E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739E0u;
        // 0x3739e4: 0xe6140040  swc1        $f20, 0x40($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739e0) {
            ctx->pc = 0x3739FCu;
            goto label_3739fc;
        }
    }
    ctx->pc = 0x3739E8u;
    // 0x3739e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3739E8u;
    {
        const bool branch_taken_0x3739e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3739ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739E8u;
        // 0x3739ec: 0xe614003c  swc1        $f20, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739e8) {
            ctx->pc = 0x3739FCu;
            goto label_3739fc;
        }
    }
    ctx->pc = 0x3739F0u;
label_3739f0:
    // 0x3739f0: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3739F0u;
    {
        const bool branch_taken_0x3739f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3739F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739F0u;
        // 0x3739f4: 0xe6140030  swc1        $f20, 0x30($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739f0) {
            ctx->pc = 0x3739FCu;
            goto label_3739fc;
        }
    }
    ctx->pc = 0x3739F8u;
    // 0x3739f8: 0xe614002c  swc1        $f20, 0x2C($s0)
    ctx->pc = 0x3739f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_3739fc:
    // 0x3739fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3739fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373a00:
    // 0x373a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a08: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x373a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x373A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A0Cu;
        // 0x373a10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A14u;
    // 0x373a14: 0x0  nop
    ctx->pc = 0x373a14u;
    // NOP
    ctx->pc = 0x373a18u;
}
