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

// Function: dtx_destroy_rmt
// Address: 0x332090 - 0x3320e0
void dtx_destroy_rmt_0x332090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dtx_destroy_rmt_0x332090");
#endif

    switch (ctx->pc) {
        case 0x3320d0u: goto label_3320d0;
        default: break;
    }

    ctx->pc = 0x332090u;

    // 0x332090: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x332090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x332094: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332098: 0x24e761c0  addiu       $a3, $a3, 0x61C0
    ctx->pc = 0x332098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25024));
    // 0x33209c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33209cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3320a0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3320a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3320a4: 0x3c090075  lui         $t1, 0x75
    ctx->pc = 0x3320a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)117 << 16));
    // 0x3320a8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3320a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7561C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7561C0u, _value); } while (0);
    // 0x3320ac: 0x24448d40  addiu       $a0, $v0, -0x72C0
    ctx->pc = 0x3320acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937920));
    // 0x3320b0: 0x252962c0  addiu       $t1, $t1, 0x62C0
    ctx->pc = 0x3320b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25280));
    // 0x3320b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3320b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3320b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3320b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3320bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3320c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3320c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3320c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320c8: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3320C8u;
    SET_GPR_U32(ctx, 31, 0x3320D0u);
    ctx->pc = 0x3320CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3320C8u;
    // 0x3320cc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3320C8u, 0x3320D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320D0u;
label_3320d0:
    // 0x3320d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3320d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3320d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3320D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3320D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3320D4u;
        // 0x3320d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3320D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3320DCu;
    // 0x3320dc: 0x0  nop
    ctx->pc = 0x3320dcu;
    // NOP
    ctx->pc = 0x3320e0u;
}
