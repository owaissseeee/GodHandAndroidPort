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

// Function: func_003735E0
// Address: 0x3735e0 - 0x373690
void func_003735E0_0x3735e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003735E0_0x3735e0");
#endif

    switch (ctx->pc) {
        case 0x37360cu: goto label_37360c;
        case 0x373640u: goto label_373640;
        case 0x37365cu: goto label_37365c;
        case 0x373670u: goto label_373670;
        default: break;
    }

    ctx->pc = 0x3735e0u;

    // 0x3735e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3735e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3735e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3735e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3735e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3735ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3735ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735f0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x3735f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3735f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3735f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735f8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3735f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3735fc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3735fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x373600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373604: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373604u;
    SET_GPR_U32(ctx, 31, 0x37360Cu);
    ctx->pc = 0x373608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373604u;
    // 0x373608: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373604u, 0x37360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37360Cu;
label_37360c:
    // 0x37360c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x37360Cu;
    {
        const bool branch_taken_0x37360c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37360c) {
            ctx->pc = 0x373610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37360Cu;
            // 0x373610: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373674u;
            goto label_373674;
        }
    }
    ctx->pc = 0x373614u;
    // 0x373614: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x373614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x373618: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x373618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x37361c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37361cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373620: 0x0  nop
    ctx->pc = 0x373620u;
    // NOP
    // 0x373624: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x373624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373628: 0x0  nop
    ctx->pc = 0x373628u;
    // NOP
    // 0x37362c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x37362Cu;
    {
        const bool branch_taken_0x37362c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37362c) {
            ctx->pc = 0x373638u;
            goto label_373638;
        }
    }
    ctx->pc = 0x373634u;
    // 0x373634: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x373634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_373638:
    // 0x373638: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x373638u;
    SET_GPR_U32(ctx, 31, 0x373640u);
    ctx->pc = 0x37363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373638u;
    // 0x37363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x373638u, 0x373640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373640u;
label_373640:
    // 0x373640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373644: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x373644u;
    {
        const bool branch_taken_0x373644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x373648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373644u;
        // 0x373648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373644) {
            ctx->pc = 0x373664u;
            goto label_373664;
        }
    }
    ctx->pc = 0x37364Cu;
    // 0x37364c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37364cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373650: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x373650u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x373654: 0xc0dd1c8  jal         func_374720
    ctx->pc = 0x373654u;
    SET_GPR_U32(ctx, 31, 0x37365Cu);
    ctx->pc = 0x373658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373654u;
    // 0x373658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374720u, 0x373654u, 0x37365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37365Cu;
label_37365c:
    // 0x37365c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37365Cu;
    {
        const bool branch_taken_0x37365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37365Cu;
        // 0x373660: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37365c) {
            ctx->pc = 0x373674u;
            goto label_373674;
        }
    }
    ctx->pc = 0x373664u;
label_373664:
    // 0x373664: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x373664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x373668: 0xc0dd032  jal         func_3740C8
    ctx->pc = 0x373668u;
    SET_GPR_U32(ctx, 31, 0x373670u);
    ctx->pc = 0x37366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373668u;
    // 0x37366c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3740C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3740C8u, 0x373668u, 0x373670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373670u;
label_373670:
    // 0x373670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x373670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_373674:
    // 0x373674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x373674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37367c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x37367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x373680: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x373680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373684: 0x3e00008  jr          $ra
    ctx->pc = 0x373684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373684u;
        // 0x373688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37368Cu;
    // 0x37368c: 0x0  nop
    ctx->pc = 0x37368cu;
    // NOP
    ctx->pc = 0x373690u;
}
