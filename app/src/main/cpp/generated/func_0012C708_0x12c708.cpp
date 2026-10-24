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

// Function: func_0012C708
// Address: 0x12c708 - 0x12c748
void func_0012C708_0x12c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C708_0x12c708");
#endif

    switch (ctx->pc) {
        case 0x12c738u: goto label_12c738;
        default: break;
    }

    ctx->pc = 0x12c708u;

    // 0x12c708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c70c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x12c710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c714: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12c714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c718: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12c71c: 0xac8205fc  sw          $v0, 0x5FC($a0)
    ctx->pc = 0x12c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1532), GPR_U32(ctx, 2));
    // 0x12c720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c724: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x12c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12c728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12c728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c72c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x12c72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12c730: 0xc0c194a  jal         func_306528
    ctx->pc = 0x12C730u;
    SET_GPR_U32(ctx, 31, 0x12C738u);
    ctx->pc = 0x12C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C730u;
    // 0x12c734: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x12C730u, 0x12C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C738u;
label_12c738:
    // 0x12c738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c73c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C73Cu;
        // 0x12c740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C744u;
    // 0x12c744: 0x0  nop
    ctx->pc = 0x12c744u;
    // NOP
    ctx->pc = 0x12c748u;
}
