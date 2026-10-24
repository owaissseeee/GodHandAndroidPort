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

// Function: func_001FCA38
// Address: 0x1fca38 - 0x1fcae8
void func_001FCA38_0x1fca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FCA38_0x1fca38");
#endif

    switch (ctx->pc) {
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca7cu: goto label_1fca7c;
        default: break;
    }

    ctx->pc = 0x1fca38u;

    // 0x1fca38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fca3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fca40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fca40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fca44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fca48: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1fca48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1fca4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fca50: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1fca50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca54: 0xc0ae77c  jal         func_2B9DF0
    ctx->pc = 0x1FCA54u;
    SET_GPR_U32(ctx, 31, 0x1FCA5Cu);
    ctx->pc = 0x1FCA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA54u;
    // 0x1fca58: 0x24848040  addiu       $a0, $a0, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9DF0u, 0x1FCA54u, 0x1FCA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA5Cu;
label_1fca5c:
    // 0x1fca5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCA5Cu;
    {
        const bool branch_taken_0x1fca5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA5Cu;
        // 0x1fca60: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca5c) {
            ctx->pc = 0x1FCA6Cu;
            goto label_1fca6c;
        }
    }
    ctx->pc = 0x1FCA64u;
    // 0x1fca64: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FCA64u;
    {
        const bool branch_taken_0x1fca64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA64u;
        // 0x1fca68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca64) {
            ctx->pc = 0x1FCAD4u;
            goto label_1fcad4;
        }
    }
    ctx->pc = 0x1FCA6Cu;
label_1fca6c:
    // 0x1fca6c: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1fca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1fca70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fca70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca74: 0xc0aec32  jal         func_2BB0C8
    ctx->pc = 0x1FCA74u;
    SET_GPR_U32(ctx, 31, 0x1FCA7Cu);
    ctx->pc = 0x1FCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA74u;
    // 0x1fca78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB0C8u, 0x1FCA74u, 0x1FCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA7Cu;
label_1fca7c:
    // 0x1fca7c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1fca80: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1fca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fca84: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fca88: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1fca8c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCA8Cu;
    {
        const bool branch_taken_0x1fca8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fca8c) {
            ctx->pc = 0x1FCAACu;
            goto label_1fcaac;
        }
    }
    ctx->pc = 0x1FCA94u;
    // 0x1fca94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fca98: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1fca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1fca9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcaa0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1fcaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fcaa4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1fcaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcaa8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fcaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1fcaac:
    // 0x1fcaac: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCAACu;
    {
        const bool branch_taken_0x1fcaac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAACu;
        // 0x1fcab0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaac) {
            ctx->pc = 0x1FCACCu;
            goto label_1fcacc;
        }
    }
    ctx->pc = 0x1FCAB4u;
    // 0x1fcab4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1fcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcab8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1fcab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1fcabc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1fcabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcac0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1fcac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1fcac4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fcac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcac8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1fcac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1fcacc:
    // 0x1fcacc: 0x8602002c  lh          $v0, 0x2C($s0)
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fcad0: 0xa203002e  sb          $v1, 0x2E($s0)
    ctx->pc = 0x1fcad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 3));
label_1fcad4:
    // 0x1fcad4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fcad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAE0u;
        // 0x1fcae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCAE8u;
}
