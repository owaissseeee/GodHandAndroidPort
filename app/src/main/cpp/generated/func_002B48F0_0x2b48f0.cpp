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

// Function: func_002B48F0
// Address: 0x2b48f0 - 0x2b4960
void func_002B48F0_0x2b48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B48F0_0x2b48f0");
#endif

    switch (ctx->pc) {
        case 0x2b4928u: goto label_2b4928;
        case 0x2b4934u: goto label_2b4934;
        default: break;
    }

    ctx->pc = 0x2b48f0u;

    // 0x2b48f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b48f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b48f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b48fc: 0x24427e30  addiu       $v0, $v0, 0x7E30
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32304));
    // 0x2b4900: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b4900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b4904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4908: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b4908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b490c: 0x2650001c  addiu       $s0, $s2, 0x1C
    ctx->pc = 0x2b490cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2b4910: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b4910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b4914: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x2b4914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2b4918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b491c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2b491cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4920: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2b4920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b4924: 0x0  nop
    ctx->pc = 0x2b4924u;
    // NOP
label_2b4928:
    // 0x2b4928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b492c: 0xc0ad6ba  jal         func_2B5AE8
    ctx->pc = 0x2B492Cu;
    SET_GPR_U32(ctx, 31, 0x2B4934u);
    ctx->pc = 0x2B4930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B492Cu;
    // 0x2b4930: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AE8u, 0x2B492Cu, 0x2B4934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4934u;
label_2b4934:
    // 0x2b4934: 0x0  nop
    ctx->pc = 0x2b4934u;
    // NOP
    // 0x2b4938: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B4938u;
    {
        const bool branch_taken_0x2b4938 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4938u;
        // 0x2b493c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4938) {
            ctx->pc = 0x2B4928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4928;
        }
    }
    ctx->pc = 0x2B4940u;
    // 0x2b4940: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b4940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4944: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b4944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4948: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b4948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b494c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b494cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4950: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b4950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4958: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4958u;
        // 0x2b495c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4960u;
}
