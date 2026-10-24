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

// Function: func_00328200
// Address: 0x328200 - 0x328240
void func_00328200_0x328200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328200_0x328200");
#endif

    switch (ctx->pc) {
        case 0x328214u: goto label_328214;
        case 0x32821cu: goto label_32821c;
        case 0x32822cu: goto label_32822c;
        default: break;
    }

    ctx->pc = 0x328200u;

    // 0x328200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x328204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32820c: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x32820Cu;
    SET_GPR_U32(ctx, 31, 0x328214u);
    ctx->pc = 0x328210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32820Cu;
    // 0x328210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x32820Cu, 0x328214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328214u;
label_328214:
    // 0x328214: 0xc0ca064  jal         func_328190
    ctx->pc = 0x328214u;
    SET_GPR_U32(ctx, 31, 0x32821Cu);
    ctx->pc = 0x328218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328214u;
    // 0x328218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328190u, 0x328214u, 0x32821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32821Cu;
label_32821c:
    // 0x32821c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x32821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x328220: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x328220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x328224: 0xc0ca410  jal         func_329040
    ctx->pc = 0x328224u;
    SET_GPR_U32(ctx, 31, 0x32822Cu);
    ctx->pc = 0x328228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328224u;
    // 0x328228: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x328224u, 0x32822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32822Cu;
label_32822c:
    // 0x32822c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328238: 0x3e00008  jr          $ra
    ctx->pc = 0x328238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328238u;
        // 0x32823c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328240u;
}
