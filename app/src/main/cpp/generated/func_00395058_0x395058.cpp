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

// Function: func_00395058
// Address: 0x395058 - 0x3950f8
void func_00395058_0x395058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00395058_0x395058");
#endif

    switch (ctx->pc) {
        case 0x395094u: goto label_395094;
        default: break;
    }

    ctx->pc = 0x395058u;

    // 0x395058: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39505c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x39505cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395060: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x395060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x395064: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395068: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x395068u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 7));
    // 0x39506c: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x39506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x395070: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x395070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395074: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x395074u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 2));
    // 0x395078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x395078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39507c: 0xf  sync
    ctx->pc = 0x39507cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x395080: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x395080u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
    // 0x395084: 0x0  nop
    ctx->pc = 0x395084u;
    // NOP
    // 0x395088: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x395088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x39508c: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x39508cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x395090: 0x40f  sync.p
    ctx->pc = 0x395090u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_395094:
    // 0x395094: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x395094u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x395098: 0x0  nop
    ctx->pc = 0x395098u;
    // NOP
    // 0x39509c: 0x0  nop
    ctx->pc = 0x39509cu;
    // NOP
    // 0x3950a0: 0x0  nop
    ctx->pc = 0x3950a0u;
    // NOP
    // 0x3950a4: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x3950a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x3950a8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3950A8u;
    {
        const bool branch_taken_0x3950a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3950a8) {
            ctx->pc = 0x395094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395094;
        }
    }
    ctx->pc = 0x3950B0u;
    // 0x3950b0: 0x24040404  addiu       $a0, $zero, 0x404
    ctx->pc = 0x3950b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x3950b4: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x3950b4u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x3950b8: 0x0  nop
    ctx->pc = 0x3950b8u;
    // NOP
    // 0x3950bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3950bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3950c0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3950c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3950c4: 0x24428530  addiu       $v0, $v0, -0x7AD0
    ctx->pc = 0x3950c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935856));
    // 0x3950c8: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x3950c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x3950cc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3950ccu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3F8530u));
    // 0x3950d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3950d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3950d4: 0x24638540  addiu       $v1, $v1, -0x7AC0
    ctx->pc = 0x3950d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935872));
    // 0x3950d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3950d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3950dc: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x3950dcu;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 6));
    // 0x3950e0: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x3950e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x3950e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3950e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3F8540u));
    // 0x3950e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3950e8u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 2));
    // 0x3950ec: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x3950ecu;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 7));
    // 0x3950f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3950F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3950F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3950F8u;
}
