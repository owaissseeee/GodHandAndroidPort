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

// Function: func_002CA8C8
// Address: 0x2ca8c8 - 0x2ca910
void func_002CA8C8_0x2ca8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CA8C8_0x2ca8c8");
#endif

    switch (ctx->pc) {
        case 0x2ca8e0u: goto label_2ca8e0;
        default: break;
    }

    ctx->pc = 0x2ca8c8u;

    // 0x2ca8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca8cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca8d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ca8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ca8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca8d8: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x2CA8D8u;
    SET_GPR_U32(ctx, 31, 0x2CA8E0u);
    ctx->pc = 0x2CA8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA8D8u;
    // 0x2ca8dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x2CA8D8u, 0x2CA8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA8E0u;
label_2ca8e0:
    // 0x2ca8e0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x2ca8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ca8e4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x2ca8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x2ca8e8: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x2ca8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ca8ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ca8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ca8f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2ca8f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ca8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca8f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ca8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ca8fc: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x2ca8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x2ca900: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x2ca900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x2ca904: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca908: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA908u;
        // 0x2ca90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA910u;
}
