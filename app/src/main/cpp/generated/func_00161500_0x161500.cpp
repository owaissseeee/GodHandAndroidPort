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

// Function: func_00161500
// Address: 0x161500 - 0x161590
void func_00161500_0x161500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00161500_0x161500");
#endif

    switch (ctx->pc) {
        case 0x161538u: goto label_161538;
        case 0x161568u: goto label_161568;
        case 0x161578u: goto label_161578;
        default: break;
    }

    ctx->pc = 0x161500u;

    // 0x161500: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x161504: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x161504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x161508: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x161508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16150c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161510: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x161510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x161514: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x161514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x161518: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x161518u;
    {
        const bool branch_taken_0x161518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161518u;
        // 0x16151c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161518) {
            ctx->pc = 0x161580u;
            goto label_161580;
        }
    }
    ctx->pc = 0x161520u;
    // 0x161520: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x161520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x161524: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x161524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161528: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x161528u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x16152c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161530: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x161530u;
    SET_GPR_U32(ctx, 31, 0x161538u);
    ctx->pc = 0x161534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161530u;
    // 0x161534: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x161530u, 0x161538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161538u;
label_161538:
    // 0x161538: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x161538u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x16153c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x16153cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x161540: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x161544: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16154c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16154cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161550: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x161550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161554: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x161554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161558: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x161558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16155c: 0x24e74230  addiu       $a3, $a3, 0x4230
    ctx->pc = 0x16155cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16944));
    // 0x161560: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x161560u;
    SET_GPR_U32(ctx, 31, 0x161568u);
    ctx->pc = 0x161564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161560u;
    // 0x161564: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x161560u, 0x161568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161568u;
label_161568:
    // 0x161568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16156c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16156cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161570: 0xc080458  jal         func_201160
    ctx->pc = 0x161570u;
    SET_GPR_U32(ctx, 31, 0x161578u);
    ctx->pc = 0x161574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161570u;
    // 0x161574: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x161570u, 0x161578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161578u;
label_161578:
    // 0x161578: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x161578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x16157c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16157cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_161580:
    // 0x161580: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x161580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161584: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x161584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161588: 0x3e00008  jr          $ra
    ctx->pc = 0x161588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161588u;
        // 0x16158c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161590u;
}
