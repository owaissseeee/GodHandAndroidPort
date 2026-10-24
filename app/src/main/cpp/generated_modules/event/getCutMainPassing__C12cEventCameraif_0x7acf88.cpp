#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getCutMainPassing__C12cEventCameraif
// Address: 0x7acf88 - 0x7ad040
void getCutMainPassing__C12cEventCameraif_0x7acf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getCutMainPassing__C12cEventCameraif_0x7acf88");
#endif

    switch (ctx->pc) {
        case 0x7acfa0u: goto label_7acfa0;
        default: break;
    }

    ctx->pc = 0x7acf88u;

    // 0x7acf88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7acf88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7acf8c: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7ACF8Cu;
    {
        const bool branch_taken_0x7acf8c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x7ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACF8Cu;
        // 0x7acf90: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acf8c) {
            ctx->pc = 0x7ACFD0u;
            goto label_7acfd0;
        }
    }
    ctx->pc = 0x7ACF94u;
    // 0x7acf94: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7acf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7acf98: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x7acf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acf9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7acf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7acfa0:
    // 0x7acfa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7acfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7acfa4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7ACFA4u;
    {
        const bool branch_taken_0x7acfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acfa4) {
            ctx->pc = 0x7ACFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACFA4u;
            // 0x7acfa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACFB0u;
            goto label_7acfb0;
        }
    }
    ctx->pc = 0x7ACFACu;
    // 0x7acfac: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x7acfacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_7acfb0:
    // 0x7acfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x7acfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7acfb4: 0x0  nop
    ctx->pc = 0x7acfb4u;
    // NOP
    // 0x7acfb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7acfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7acfbc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x7acfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x7acfc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x7acfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x7acfc4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x7ACFC4u;
    {
        const bool branch_taken_0x7acfc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACFC4u;
        // 0x7acfc8: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acfc4) {
            ctx->pc = 0x7ACFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7acfa0;
        }
    }
    ctx->pc = 0x7ACFCCu;
    // 0x7acfcc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x7acfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_7acfd0:
    // 0x7acfd0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x7acfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7acfd4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x7acfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7acfd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7acfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7acfdc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x7acfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7acfe0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7ACFE0u;
    {
        const bool branch_taken_0x7acfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acfe0) {
            ctx->pc = 0x7ACFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACFE0u;
            // 0x7acfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACFECu;
            goto label_7acfec;
        }
    }
    ctx->pc = 0x7ACFE8u;
    // 0x7acfe8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x7acfe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_7acfec:
    // 0x7acfec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x7acfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7acff0: 0x0  nop
    ctx->pc = 0x7acff0u;
    // NOP
    // 0x7acff4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7acff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7acff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7acff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7acffc: 0x0  nop
    ctx->pc = 0x7acffcu;
    // NOP
    // 0x7ad000: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7ad000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ad004: 0x0  nop
    ctx->pc = 0x7ad004u;
    // NOP
    // 0x7ad008: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x7AD008u;
    {
        const bool branch_taken_0x7ad008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ad008) {
            ctx->pc = 0x7AD034u;
            goto label_7ad034;
        }
    }
    ctx->pc = 0x7AD010u;
    // 0x7ad010: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ad010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ad014: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ad014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad018: 0x0  nop
    ctx->pc = 0x7ad018u;
    // NOP
    // 0x7ad01c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7ad01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7ad020: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x7ad020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ad024: 0x0  nop
    ctx->pc = 0x7ad024u;
    // NOP
    // 0x7ad028: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7AD028u;
    {
        const bool branch_taken_0x7ad028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ad028) {
            ctx->pc = 0x7AD02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD028u;
            // 0x7ad02c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD030u;
            goto label_7ad030;
        }
    }
    ctx->pc = 0x7AD030u;
label_7ad030:
    // 0x7ad030: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x7ad030u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_7ad034:
    // 0x7ad034: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD034u;
        // 0x7ad038: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD03Cu;
    // 0x7ad03c: 0x0  nop
    ctx->pc = 0x7ad03cu;
    // NOP
    ctx->pc = 0x7ad040u;
}
} // namespace gh_event
