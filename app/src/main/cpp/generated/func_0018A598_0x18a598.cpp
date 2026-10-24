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

// Function: func_0018A598
// Address: 0x18a598 - 0x18a620
void func_0018A598_0x18a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A598_0x18a598");
#endif

    switch (ctx->pc) {
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5f0u: goto label_18a5f0;
        default: break;
    }

    ctx->pc = 0x18a598u;

    // 0x18a598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a59c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18a5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18a5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a5ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18a5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18a5b0: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x18a5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18a5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a5b8: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x18A5B8u;
    SET_GPR_U32(ctx, 31, 0x18A5C0u);
    ctx->pc = 0x18A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5B8u;
    // 0x18a5bc: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x18A5B8u, 0x18A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5C0u;
label_18a5c0:
    // 0x18a5c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a5c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18a5c8: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x18a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x18a5cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_18a5d0:
    // 0x18a5d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18a5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18a5d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18a5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18a5d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18a5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18a5dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18a5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18a5e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18a5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18a5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18A5E8u;
    SET_GPR_U32(ctx, 31, 0x18A5F0u);
    ctx->pc = 0x18A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5E8u;
    // 0x18a5ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18A5E8u, 0x18A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5F0u;
label_18a5f0:
    // 0x18a5f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18a5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18a5f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18A5F4u;
    {
        const bool branch_taken_0x18a5f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5F4u;
        // 0x18a5f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5f4) {
            ctx->pc = 0x18A5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a5d0;
        }
    }
    ctx->pc = 0x18A5FCu;
    // 0x18a5fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18a5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a600: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18a600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a604: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18a604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a60c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18a60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a614: 0x3e00008  jr          $ra
    ctx->pc = 0x18A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A614u;
        // 0x18a618: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A61Cu;
    // 0x18a61c: 0x0  nop
    ctx->pc = 0x18a61cu;
    // NOP
    ctx->pc = 0x18a620u;
}
