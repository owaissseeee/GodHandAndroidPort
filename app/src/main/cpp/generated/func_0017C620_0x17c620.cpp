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

// Function: func_0017C620
// Address: 0x17c620 - 0x17c6a8
void func_0017C620_0x17c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C620_0x17c620");
#endif

    switch (ctx->pc) {
        case 0x17c648u: goto label_17c648;
        case 0x17c658u: goto label_17c658;
        case 0x17c678u: goto label_17c678;
        default: break;
    }

    ctx->pc = 0x17c620u;

    // 0x17c620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17c624: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17c628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c62c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17c630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17c634: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17c638: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x17c638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c640: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x17C640u;
    SET_GPR_U32(ctx, 31, 0x17C648u);
    ctx->pc = 0x17C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C640u;
    // 0x17c644: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x17C640u, 0x17C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C648u;
label_17c648:
    // 0x17c648: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17c648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c64c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17c650: 0x24421d68  addiu       $v0, $v0, 0x1D68
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7528));
    // 0x17c654: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x17c654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_17c658:
    // 0x17c658: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x17c658u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c65c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x17c65cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c660: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x17c660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c664: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x17c664u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c668: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x17c668u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17c66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c670: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17C670u;
    SET_GPR_U32(ctx, 31, 0x17C678u);
    ctx->pc = 0x17C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C670u;
    // 0x17c674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17C670u, 0x17C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C678u;
label_17c678:
    // 0x17c678: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17c678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17c67c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17C67Cu;
    {
        const bool branch_taken_0x17c67c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x17C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C67Cu;
        // 0x17c680: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c67c) {
            ctx->pc = 0x17C658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c658;
        }
    }
    ctx->pc = 0x17C684u;
    // 0x17c684: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17c684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c688: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17c688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c68c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17c68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17c690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c694: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17c694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c69c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C69Cu;
        // 0x17c6a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C6A4u;
    // 0x17c6a4: 0x0  nop
    ctx->pc = 0x17c6a4u;
    // NOP
    ctx->pc = 0x17c6a8u;
}
