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

// Function: SetGlobalToggle_375700
// Address: 0x375700 - 0x375748
void SetGlobalToggle_375700_0x375700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGlobalToggle_375700_0x375700");
#endif

    switch (ctx->pc) {
        case 0x37571cu: goto label_37571c;
        case 0x37572cu: goto label_37572c;
        default: break;
    }

    ctx->pc = 0x375700u;

    // 0x375700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375704: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375708: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x375708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37570c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37570Cu;
    {
        const bool branch_taken_0x37570c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x375710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37570Cu;
        // 0x375710: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37570c) {
            ctx->pc = 0x375724u;
            goto label_375724;
        }
    }
    ctx->pc = 0x375714u;
    // 0x375714: 0xc0cae8c  jal         func_32BA30
    ctx->pc = 0x375714u;
    SET_GPR_U32(ctx, 31, 0x37571Cu);
    ctx->pc = 0x375718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375714u;
    // 0x375718: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BA30u, 0x375714u, 0x37571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37571Cu;
label_37571c:
    // 0x37571c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37571Cu;
    {
        const bool branch_taken_0x37571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37571Cu;
        // 0x375720: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37571c) {
            ctx->pc = 0x375730u;
            goto label_375730;
        }
    }
    ctx->pc = 0x375724u;
label_375724:
    // 0x375724: 0xc0cae8c  jal         func_32BA30
    ctx->pc = 0x375724u;
    SET_GPR_U32(ctx, 31, 0x37572Cu);
    ctx->pc = 0x375728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375724u;
    // 0x375728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BA30u, 0x375724u, 0x37572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37572Cu;
label_37572c:
    // 0x37572c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
label_375730:
    // 0x375730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375734: 0xac50a7a4  sw          $s0, -0x585C($v0)
    ctx->pc = 0x375734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944676), GPR_U32(ctx, 16));
    // 0x375738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37573c: 0x3e00008  jr          $ra
    ctx->pc = 0x37573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37573Cu;
        // 0x375740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375744u;
    // 0x375744: 0x0  nop
    ctx->pc = 0x375744u;
    // NOP
    ctx->pc = 0x375748u;
}
