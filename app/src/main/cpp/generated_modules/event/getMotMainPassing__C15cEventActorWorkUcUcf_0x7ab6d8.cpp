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
// Function: getMotMainPassing__C15cEventActorWorkUcUcf
// Address: 0x7ab6d8 - 0x7ab7d0
void getMotMainPassing__C15cEventActorWorkUcUcf_0x7ab6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getMotMainPassing__C15cEventActorWorkUcUcf_0x7ab6d8");
#endif

    switch (ctx->pc) {
        case 0x7ab6f8u: goto label_7ab6f8;
        default: break;
    }

    ctx->pc = 0x7ab6d8u;

    // 0x7ab6d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x7ab6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7ab6dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7ab6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7ab6e0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AB6E0u;
    {
        const bool branch_taken_0x7ab6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB6E0u;
        // 0x7ab6e4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab6e0) {
            ctx->pc = 0x7AB724u;
            goto label_7ab724;
        }
    }
    ctx->pc = 0x7AB6E8u;
    // 0x7ab6e8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x7ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x7ab6ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x7ab6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ab6f0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x7ab6f4: 0x0  nop
    ctx->pc = 0x7ab6f4u;
    // NOP
label_7ab6f8:
    // 0x7ab6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7ab6fc: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB6FCu;
    {
        const bool branch_taken_0x7ab6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab6fc) {
            ctx->pc = 0x7AB700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB6FCu;
            // 0x7ab700: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB708u;
            goto label_7ab708;
        }
    }
    ctx->pc = 0x7AB704u;
    // 0x7ab704: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x7ab704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_7ab708:
    // 0x7ab708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x7ab708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab70c: 0x0  nop
    ctx->pc = 0x7ab70cu;
    // NOP
    // 0x7ab710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ab710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ab714: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x7ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x7ab718: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x7ab718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x7ab71c: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x7AB71Cu;
    {
        const bool branch_taken_0x7ab71c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB71Cu;
        // 0x7ab720: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab71c) {
            ctx->pc = 0x7AB6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ab6f8;
        }
    }
    ctx->pc = 0x7AB724u;
label_7ab724:
    // 0x7ab724: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7ab724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7ab728: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x7ab728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x7ab72c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x7ab72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7ab730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ab730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ab734: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x7ab734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7ab738: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7AB738u;
    {
        const bool branch_taken_0x7ab738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ab738) {
            ctx->pc = 0x7AB73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB738u;
            // 0x7ab73c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB744u;
            goto label_7ab744;
        }
    }
    ctx->pc = 0x7AB740u;
    // 0x7ab740: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x7ab740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_7ab744:
    // 0x7ab744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x7ab744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ab748: 0x0  nop
    ctx->pc = 0x7ab748u;
    // NOP
    // 0x7ab74c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7ab74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7ab750: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x7AB750u;
    {
        const bool branch_taken_0x7ab750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ab750) {
            ctx->pc = 0x7AB798u;
            goto label_7ab798;
        }
    }
    ctx->pc = 0x7AB758u;
    // 0x7ab758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7ab758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab75c: 0x0  nop
    ctx->pc = 0x7ab75cu;
    // NOP
    // 0x7ab760: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7ab760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab764: 0x0  nop
    ctx->pc = 0x7ab764u;
    // NOP
    // 0x7ab768: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x7AB768u;
    {
        const bool branch_taken_0x7ab768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab768) {
            ctx->pc = 0x7AB7C4u;
            goto label_7ab7c4;
        }
    }
    ctx->pc = 0x7AB770u;
    // 0x7ab770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ab774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab778: 0x0  nop
    ctx->pc = 0x7ab778u;
    // NOP
    // 0x7ab77c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7ab77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7ab780: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x7ab780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab784: 0x0  nop
    ctx->pc = 0x7ab784u;
    // NOP
    // 0x7ab788: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7AB788u;
    {
        const bool branch_taken_0x7ab788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab788) {
            ctx->pc = 0x7AB78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AB788u;
            // 0x7ab78c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AB790u;
            goto label_7ab790;
        }
    }
    ctx->pc = 0x7AB790u;
label_7ab790:
    // 0x7ab790: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7AB790u;
    {
        const bool branch_taken_0x7ab790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB790u;
        // 0x7ab794: 0x460c1080  add.s       $f2, $f2, $f12 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ab790) {
            ctx->pc = 0x7AB7C4u;
            goto label_7ab7c4;
        }
    }
    ctx->pc = 0x7AB798u;
label_7ab798:
    // 0x7ab798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x7ab798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab79c: 0x0  nop
    ctx->pc = 0x7ab79cu;
    // NOP
    // 0x7ab7a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7ab7a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ab7a4: 0x0  nop
    ctx->pc = 0x7ab7a4u;
    // NOP
    // 0x7ab7a8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x7AB7A8u;
    {
        const bool branch_taken_0x7ab7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ab7a8) {
            ctx->pc = 0x7AB7C4u;
            goto label_7ab7c4;
        }
    }
    ctx->pc = 0x7AB7B0u;
    // 0x7ab7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ab7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ab7b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ab7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ab7b8: 0x0  nop
    ctx->pc = 0x7ab7b8u;
    // NOP
    // 0x7ab7bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7ab7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7ab7c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x7ab7c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_7ab7c4:
    // 0x7ab7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7AB7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AB7C4u;
        // 0x7ab7c8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AB7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AB7CCu;
    // 0x7ab7cc: 0x0  nop
    ctx->pc = 0x7ab7ccu;
    // NOP
    ctx->pc = 0x7ab7d0u;
}
} // namespace gh_event
