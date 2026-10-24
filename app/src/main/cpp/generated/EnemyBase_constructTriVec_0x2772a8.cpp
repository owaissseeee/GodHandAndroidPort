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

// Function: EnemyBase_constructTriVec
// Address: 0x2772a8 - 0x2772f8
void EnemyBase_constructTriVec_0x2772a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyBase_constructTriVec_0x2772a8");
#endif

    switch (ctx->pc) {
        case 0x2772bcu: goto label_2772bc;
        default: break;
    }

    ctx->pc = 0x2772a8u;

    // 0x2772a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2772a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2772ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2772acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2772b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2772b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2772b4: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x2772B4u;
    SET_GPR_U32(ctx, 31, 0x2772BCu);
    ctx->pc = 0x2772B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2772B4u;
    // 0x2772b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x2772B4u, 0x2772BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2772BCu;
label_2772bc:
    // 0x2772bc: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x2772c0: 0x24637ba0  addiu       $v1, $v1, 0x7BA0
    ctx->pc = 0x2772c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31648));
    // 0x2772c4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x2772c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x2772c8: 0xfa001530  sqc2        $vf0, 0x1530($s0)
    ctx->pc = 0x2772c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2772cc: 0xfa001540  sqc2        $vf0, 0x1540($s0)
    ctx->pc = 0x2772ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5440), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2772d0: 0xfa001550  sqc2        $vf0, 0x1550($s0)
    ctx->pc = 0x2772d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5456), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2772d4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x2772d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x2772d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2772d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2772dc: 0x24637b88  addiu       $v1, $v1, 0x7B88
    ctx->pc = 0x2772dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31624));
    // 0x2772e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2772e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2772e4: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x2772e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x2772e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2772e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2772ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2772ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2772F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2772ECu;
        // 0x2772f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2772ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2772F4u;
    // 0x2772f4: 0x0  nop
    ctx->pc = 0x2772f4u;
    // NOP
    ctx->pc = 0x2772f8u;
}
