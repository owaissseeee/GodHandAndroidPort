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

// Function: func_0019A998
// Address: 0x19a998 - 0x19aa20
void func_0019A998_0x19a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A998_0x19a998");
#endif

    switch (ctx->pc) {
        case 0x19a9c0u: goto label_19a9c0;
        case 0x19a9d0u: goto label_19a9d0;
        case 0x19a9f0u: goto label_19a9f0;
        default: break;
    }

    ctx->pc = 0x19a998u;

    // 0x19a998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a99c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19a9a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19a9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a9ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19a9b0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19a9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a9b8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19A9B8u;
    SET_GPR_U32(ctx, 31, 0x19A9C0u);
    ctx->pc = 0x19A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9B8u;
    // 0x19a9bc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19A9B8u, 0x19A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9C0u;
label_19a9c0:
    // 0x19a9c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a9c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a9c8: 0x24425630  addiu       $v0, $v0, 0x5630
    ctx->pc = 0x19a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22064));
    // 0x19a9cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19a9d0:
    // 0x19a9d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a9d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a9d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a9dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a9e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19A9E8u;
    SET_GPR_U32(ctx, 31, 0x19A9F0u);
    ctx->pc = 0x19A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9E8u;
    // 0x19a9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19A9E8u, 0x19A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9F0u;
label_19a9f0:
    // 0x19a9f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19a9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a9f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A9F4u;
    {
        const bool branch_taken_0x19a9f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9F4u;
        // 0x19a9f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9f4) {
            ctx->pc = 0x19A9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a9d0;
        }
    }
    ctx->pc = 0x19A9FCu;
    // 0x19a9fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19aa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19aa04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19aa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19aa08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aa0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19aa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA14u;
        // 0x19aa18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA1Cu;
    // 0x19aa1c: 0x0  nop
    ctx->pc = 0x19aa1cu;
    // NOP
    ctx->pc = 0x19aa20u;
}
