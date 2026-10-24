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

// Function: func_001E7600
// Address: 0x1e7600 - 0x1e7660
void func_001E7600_0x1e7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7600_0x1e7600");
#endif

    switch (ctx->pc) {
        case 0x1e761cu: goto label_1e761c;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e764cu: goto label_1e764c;
        default: break;
    }

    ctx->pc = 0x1e7600u;

    // 0x1e7600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7604: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e7604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e7608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e760c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7614: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E7614u;
    SET_GPR_U32(ctx, 31, 0x1E761Cu);
    ctx->pc = 0x1E7618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7614u;
    // 0x1e7618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E7614u, 0x1E761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E761Cu;
label_1e761c:
    // 0x1e761c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7620: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7624: 0xc079d4e  jal         func_1E7538
    ctx->pc = 0x1E7624u;
    SET_GPR_U32(ctx, 31, 0x1E762Cu);
    ctx->pc = 0x1E7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7624u;
    // 0x1e7628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7538u, 0x1E7624u, 0x1E762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E762Cu;
label_1e762c:
    // 0x1e762c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e7630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7634: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E7634u;
    SET_GPR_U32(ctx, 31, 0x1E763Cu);
    ctx->pc = 0x1E7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7634u;
    // 0x1e7638: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E7634u, 0x1E763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E763Cu;
label_1e763c:
    // 0x1e763c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7640: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1e7640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e7644: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E7644u;
    SET_GPR_U32(ctx, 31, 0x1E764Cu);
    ctx->pc = 0x1E7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7644u;
    // 0x1e7648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E7644u, 0x1E764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E764Cu;
label_1e764c:
    // 0x1e764c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e764cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7654: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7654u;
        // 0x1e7658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E765Cu;
    // 0x1e765c: 0x0  nop
    ctx->pc = 0x1e765cu;
    // NOP
    ctx->pc = 0x1e7660u;
}
