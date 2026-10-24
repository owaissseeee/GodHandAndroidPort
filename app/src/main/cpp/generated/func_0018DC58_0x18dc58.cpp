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

// Function: func_0018DC58
// Address: 0x18dc58 - 0x18dce0
void func_0018DC58_0x18dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018DC58_0x18dc58");
#endif

    switch (ctx->pc) {
        case 0x18dc80u: goto label_18dc80;
        case 0x18dc90u: goto label_18dc90;
        case 0x18dcb0u: goto label_18dcb0;
        default: break;
    }

    ctx->pc = 0x18dc58u;

    // 0x18dc58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18dc5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18dc60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18dc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18dc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18dc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18dc6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18dc70: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18dc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dc78: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x18DC78u;
    SET_GPR_U32(ctx, 31, 0x18DC80u);
    ctx->pc = 0x18DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC78u;
    // 0x18dc7c: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x18DC78u, 0x18DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC80u;
label_18dc80:
    // 0x18dc80: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18dc80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18dc84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18dc88: 0x24423ab8  addiu       $v0, $v0, 0x3AB8
    ctx->pc = 0x18dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15032));
    // 0x18dc8c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_18dc90:
    // 0x18dc90: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18dc94: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18dc98: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18dc9c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18dca0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18dca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dca8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18DCA8u;
    SET_GPR_U32(ctx, 31, 0x18DCB0u);
    ctx->pc = 0x18DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DCA8u;
    // 0x18dcac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18DCA8u, 0x18DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DCB0u;
label_18dcb0:
    // 0x18dcb0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18dcb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18dcb4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18DCB4u;
    {
        const bool branch_taken_0x18dcb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCB4u;
        // 0x18dcb8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dcb4) {
            ctx->pc = 0x18DC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dc90;
        }
    }
    ctx->pc = 0x18DCBCu;
    // 0x18dcbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18dcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18dcc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18dcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18dcc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18dcc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dccc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18dcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DCD4u;
        // 0x18dcd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DCDCu;
    // 0x18dcdc: 0x0  nop
    ctx->pc = 0x18dcdcu;
    // NOP
    ctx->pc = 0x18dce0u;
}
