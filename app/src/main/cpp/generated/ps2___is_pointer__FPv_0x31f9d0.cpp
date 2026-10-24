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

// Function: __is_pointer__FPv
// Address: 0x31f9d0 - 0x31fa20
void ps2___is_pointer__FPv_0x31f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___is_pointer__FPv_0x31f9d0");
#endif

    switch (ctx->pc) {
        case 0x31fa10u: goto label_31fa10;
        default: break;
    }

    ctx->pc = 0x31f9d0u;

    // 0x31f9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f9d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x31f9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f9dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31F9DCu;
    {
        const bool branch_taken_0x31f9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9DCu;
        // 0x31f9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9dc) {
            ctx->pc = 0x31FA10u;
            goto label_31fa10;
        }
    }
    ctx->pc = 0x31F9E4u;
    // 0x31f9e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31f9e8: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31f9ec: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31f9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31f9f0: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x31f9f4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31f9f8: 0x2508f4a0  addiu       $t0, $t0, -0xB60
    ctx->pc = 0x31f9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964384));
    // 0x31f9fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31fa00: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x31fa00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa04: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x31fa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x31fa08: 0xc0c7eba  jal         func_31FAE8
    ctx->pc = 0x31FA08u;
    SET_GPR_U32(ctx, 31, 0x31FA10u);
    ctx->pc = 0x31FA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA08u;
    // 0x31fa0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FAE8u, 0x31FA08u, 0x31FA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA10u;
label_31fa10:
    // 0x31fa10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fa14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31fa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31fa18: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA18u;
        // 0x31fa1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FA20u;
}
