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

// Function: _alarm_rdata
// Address: 0x3b2cd0 - 0x3b2d10
void _alarm_rdata_0x3b2cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alarm_rdata_0x3b2cd0");
#endif

    switch (ctx->pc) {
        case 0x3b2cf8u: goto label_3b2cf8;
        default: break;
    }

    ctx->pc = 0x3b2cd0u;

    // 0x3b2cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2cd4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3b2cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b2cdc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2ce0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3b2ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3b2ce4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b2ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2ce8: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x3b2ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3b2cec: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x3b2cecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3b2cf0: 0xc0ec9b2  jal         func_3B26C8
    ctx->pc = 0x3B2CF0u;
    SET_GPR_U32(ctx, 31, 0x3B2CF8u);
    ctx->pc = 0x3B2CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2CF0u;
    // 0x3b2cf4: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B26C8u, 0x3B2CF0u, 0x3B2CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2CF8u;
label_3b2cf8:
    // 0x3b2cf8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3b2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3b2cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2d00: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3b2d00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3b2d04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3b2d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2d08: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D08u;
        // 0x3b2d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2D10u;
}
