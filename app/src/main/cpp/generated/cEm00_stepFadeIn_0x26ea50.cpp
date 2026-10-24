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

// Function: cEm00_stepFadeIn
// Address: 0x26ea50 - 0x26eb00
void cEm00_stepFadeIn_0x26ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepFadeIn_0x26ea50");
#endif

    switch (ctx->pc) {
        case 0x26ea8cu: goto label_26ea8c;
        default: break;
    }

    ctx->pc = 0x26ea50u;

    // 0x26ea50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ea54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26ea54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26ea5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ea5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ea60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ea60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea64: 0xc6001704  lwc1        $f0, 0x1704($s0)
    ctx->pc = 0x26ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26ea68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea6c: 0x0  nop
    ctx->pc = 0x26ea6cu;
    // NOP
    // 0x26ea70: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x26EA70u;
    {
        const bool branch_taken_0x26ea70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA70u;
        // 0x26ea74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea70) {
            ctx->pc = 0x26EAECu;
            goto label_26eaec;
        }
    }
    ctx->pc = 0x26EA78u;
    // 0x26ea78: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x26ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x26ea7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ea7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea80: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x26ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x26ea84: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x26EA84u;
    SET_GPR_U32(ctx, 31, 0x26EA8Cu);
    ctx->pc = 0x26EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA84u;
    // 0x26ea88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x26EA84u, 0x26EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA8Cu;
label_26ea8c:
    // 0x26ea8c: 0xc6001704  lwc1        $f0, 0x1704($s0)
    ctx->pc = 0x26ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea90: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x26ea94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26ea98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ea98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ea9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26eaa0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26eaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26eaa4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26eaa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26eaa8: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x26eaa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26eaac: 0xe6001704  swc1        $f0, 0x1704($s0)
    ctx->pc = 0x26eaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5892), bits); }
    // 0x26eab0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x26eab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eab4: 0x0  nop
    ctx->pc = 0x26eab4u;
    // NOP
    // 0x26eab8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26EAB8u;
    {
        const bool branch_taken_0x26eab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAB8u;
        // 0x26eabc: 0xe602024c  swc1        $f2, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eab8) {
            ctx->pc = 0x26EADCu;
            goto label_26eadc;
        }
    }
    ctx->pc = 0x26EAC0u;
    // 0x26eac0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x26eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x26eac4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26eac8: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x26eac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x26eacc: 0xe603024c  swc1        $f3, 0x24C($s0)
    ctx->pc = 0x26eaccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x26ead0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26ead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26ead4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EAD4u;
    {
        const bool branch_taken_0x26ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAD4u;
        // 0x26ead8: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ead4) {
            ctx->pc = 0x26EAE8u;
            goto label_26eae8;
        }
    }
    ctx->pc = 0x26EADCu;
label_26eadc:
    // 0x26eadc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x26eae0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x26eae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x26eae4: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x26eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_26eae8:
    // 0x26eae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26eaec:
    // 0x26eaec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26eaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26eaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26eaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EAF4u;
        // 0x26eaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EAFCu;
    // 0x26eafc: 0x0  nop
    ctx->pc = 0x26eafcu;
    // NOP
    ctx->pc = 0x26eb00u;
}
