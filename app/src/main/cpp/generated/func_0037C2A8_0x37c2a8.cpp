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

// Function: func_0037C2A8
// Address: 0x37c2a8 - 0x37c2e0
void func_0037C2A8_0x37c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C2A8_0x37c2a8");
#endif

    switch (ctx->pc) {
        case 0x37c2d0u: goto label_37c2d0;
        default: break;
    }

    ctx->pc = 0x37c2a8u;

    // 0x37c2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c2ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c2b4: 0x94a30034  lhu         $v1, 0x34($a1)
    ctx->pc = 0x37c2b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x37c2b8: 0xa4c30040  sh          $v1, 0x40($a2)
    ctx->pc = 0x37c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c2bc: 0x94a20036  lhu         $v0, 0x36($a1)
    ctx->pc = 0x37c2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x37c2c0: 0xa4c20042  sh          $v0, 0x42($a2)
    ctx->pc = 0x37c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c2c4: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x37c2c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x37c2c8: 0xc0df5a0  jal         func_37D680
    ctx->pc = 0x37C2C8u;
    SET_GPR_U32(ctx, 31, 0x37C2D0u);
    ctx->pc = 0x37C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2C8u;
    // 0x37c2cc: 0xa4c3002c  sh          $v1, 0x2C($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D680u, 0x37C2C8u, 0x37C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2D0u;
label_37c2d0:
    // 0x37c2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x37C2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C2D4u;
        // 0x37c2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C2DCu;
    // 0x37c2dc: 0x0  nop
    ctx->pc = 0x37c2dcu;
    // NOP
    ctx->pc = 0x37c2e0u;
}
