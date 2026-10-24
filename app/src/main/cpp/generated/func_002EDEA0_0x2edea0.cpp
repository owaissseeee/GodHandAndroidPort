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

// Function: func_002EDEA0
// Address: 0x2edea0 - 0x2edf70
void func_002EDEA0_0x2edea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EDEA0_0x2edea0");
#endif

    switch (ctx->pc) {
        case 0x2edf0cu: goto label_2edf0c;
        case 0x2edf1cu: goto label_2edf1c;
        case 0x2edf3cu: goto label_2edf3c;
        case 0x2edf54u: goto label_2edf54;
        default: break;
    }

    ctx->pc = 0x2edea0u;

    // 0x2edea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2edea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2edea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2edea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2edea8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2edea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2edeac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2edeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edeb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2edeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2edeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edeb8: 0x8c8202e4  lw          $v0, 0x2E4($a0)
    ctx->pc = 0x2edeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x2edebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2edebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edec0: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2edec0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2edec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2edec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edec8: 0x0  nop
    ctx->pc = 0x2edec8u;
    // NOP
    // 0x2edecc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2edeccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eded0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDED0u;
    {
        const bool branch_taken_0x2eded0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eded0) {
            ctx->pc = 0x2EDED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDED0u;
            // 0x2eded4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDED8u;
            goto label_2eded8;
        }
    }
    ctx->pc = 0x2EDED8u;
label_2eded8:
    // 0x2eded8: 0x1810  mfhi        $v1
    ctx->pc = 0x2eded8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ededc: 0x2812  mflo        $a1
    ctx->pc = 0x2ededcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2edee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2edee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edee4: 0x0  nop
    ctx->pc = 0x2edee4u;
    // NOP
    // 0x2edee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edeec: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2edeecu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2edef0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EDEF0u;
    {
        const bool branch_taken_0x2edef0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEF0u;
        // 0x2edef4: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edef0) {
            ctx->pc = 0x2EDF24u;
            goto label_2edf24;
        }
    }
    ctx->pc = 0x2EDEF8u;
    // 0x2edef8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2edef8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2edefc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2edefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf00: 0x261046c0  addiu       $s0, $s0, 0x46C0
    ctx->pc = 0x2edf00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18112));
    // 0x2edf04: 0xc0b5372  jal         func_2D4DC8
    ctx->pc = 0x2EDF04u;
    SET_GPR_U32(ctx, 31, 0x2EDF0Cu);
    ctx->pc = 0x2EDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF04u;
    // 0x2edf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DC8u, 0x2EDF04u, 0x2EDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF0Cu;
label_2edf0c:
    // 0x2edf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf14: 0xc0b53be  jal         func_2D4EF8
    ctx->pc = 0x2EDF14u;
    SET_GPR_U32(ctx, 31, 0x2EDF1Cu);
    ctx->pc = 0x2EDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF14u;
    // 0x2edf18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4EF8u, 0x2EDF14u, 0x2EDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF1Cu;
label_2edf1c:
    // 0x2edf1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EDF1Cu;
    {
        const bool branch_taken_0x2edf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF1Cu;
        // 0x2edf20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf1c) {
            ctx->pc = 0x2EDF58u;
            goto label_2edf58;
        }
    }
    ctx->pc = 0x2EDF24u;
label_2edf24:
    // 0x2edf24: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2edf24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2edf28: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2edf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2edf2c: 0x261046c0  addiu       $s0, $s0, 0x46C0
    ctx->pc = 0x2edf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18112));
    // 0x2edf30: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2edf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2edf34: 0xc0b5372  jal         func_2D4DC8
    ctx->pc = 0x2EDF34u;
    SET_GPR_U32(ctx, 31, 0x2EDF3Cu);
    ctx->pc = 0x2EDF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF34u;
    // 0x2edf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DC8u, 0x2EDF34u, 0x2EDF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF3Cu;
label_2edf3c:
    // 0x2edf3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2edf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2edf40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2edf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2edf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2edf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2edf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf4c: 0xc0b53be  jal         func_2D4EF8
    ctx->pc = 0x2EDF4Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF54u);
    ctx->pc = 0x2EDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF4Cu;
    // 0x2edf50: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4EF8u, 0x2EDF4Cu, 0x2EDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF54u;
label_2edf54:
    // 0x2edf54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2edf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2edf58:
    // 0x2edf58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2edf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edf60: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2edf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2edf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF64u;
        // 0x2edf68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDF6Cu;
    // 0x2edf6c: 0x0  nop
    ctx->pc = 0x2edf6cu;
    // NOP
    ctx->pc = 0x2edf70u;
}
