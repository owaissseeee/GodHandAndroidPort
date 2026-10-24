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

// Function: CutCmd_isInRange
// Address: 0x2b47c8 - 0x2b4850
void CutCmd_isInRange_0x2b47c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CutCmd_isInRange_0x2b47c8");
#endif

    switch (ctx->pc) {
        case 0x2b47ecu: goto label_2b47ec;
        case 0x2b4804u: goto label_2b4804;
        case 0x2b481cu: goto label_2b481c;
        default: break;
    }

    ctx->pc = 0x2b47c8u;

    // 0x2b47c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b47c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b47cc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2b47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2b47d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b47d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b47d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b47d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47dc: 0x24516af0  addiu       $s1, $v0, 0x6AF0
    ctx->pc = 0x2b47dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x2b47e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b47e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b47e4: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B47E4u;
    SET_GPR_U32(ctx, 31, 0x2B47ECu);
    ctx->pc = 0x2B47E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47E4u;
    // 0x2b47e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B47E4u, 0x2B47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47ECu;
label_2b47ec:
    // 0x2b47ec: 0x92030044  lbu         $v1, 0x44($s0)
    ctx->pc = 0x2b47ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b47f0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b47f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b47f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B47F4u;
    {
        const bool branch_taken_0x2b47f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47F4u;
        // 0x2b47f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47f4) {
            ctx->pc = 0x2B4838u;
            goto label_2b4838;
        }
    }
    ctx->pc = 0x2B47FCu;
    // 0x2b47fc: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B47FCu;
    SET_GPR_U32(ctx, 31, 0x2B4804u);
    ctx->pc = 0x2B4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47FCu;
    // 0x2b4800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B47FCu, 0x2B4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4804u;
label_2b4804:
    // 0x2b4804: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x2b4804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b4808: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b4808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b480c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B480Cu;
    {
        const bool branch_taken_0x2b480c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B480Cu;
        // 0x2b4810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b480c) {
            ctx->pc = 0x2B4838u;
            goto label_2b4838;
        }
    }
    ctx->pc = 0x2B4814u;
    // 0x2b4814: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2B4814u;
    SET_GPR_U32(ctx, 31, 0x2B481Cu);
    ctx->pc = 0x2B4818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4814u;
    // 0x2b4818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2B4814u, 0x2B481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B481Cu;
label_2b481c:
    // 0x2b481c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2b481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4820: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b4820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b4824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4828: 0x0  nop
    ctx->pc = 0x2b4828u;
    // NOP
    // 0x2b482c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B482Cu;
    {
        const bool branch_taken_0x2b482c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B482Cu;
        // 0x2b4830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b482c) {
            ctx->pc = 0x2B4838u;
            goto label_2b4838;
        }
    }
    ctx->pc = 0x2B4834u;
    // 0x2b4834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4838:
    // 0x2b4838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b4838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b483c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b483cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4844: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4844u;
        // 0x2b4848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B484Cu;
    // 0x2b484c: 0x0  nop
    ctx->pc = 0x2b484cu;
    // NOP
    ctx->pc = 0x2b4850u;
}
