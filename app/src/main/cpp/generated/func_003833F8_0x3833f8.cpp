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

// Function: func_003833F8
// Address: 0x3833f8 - 0x383438
void func_003833F8_0x3833f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003833F8_0x3833f8");
#endif

    switch (ctx->pc) {
        case 0x383418u: goto label_383418;
        case 0x383428u: goto label_383428;
        default: break;
    }

    ctx->pc = 0x3833f8u;

    // 0x3833f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3833f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3833fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3833fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383400: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x383400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x383404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x383408u;
    {
        const bool branch_taken_0x383408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383408u;
        // 0x38340c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383408) {
            ctx->pc = 0x383420u;
            goto label_383420;
        }
    }
    ctx->pc = 0x383410u;
    // 0x383410: 0xc0e0770  jal         func_381DC0
    ctx->pc = 0x383410u;
    SET_GPR_U32(ctx, 31, 0x383418u);
    ctx->pc = 0x383414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383410u;
    // 0x383414: 0x24a500a4  addiu       $a1, $a1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381DC0u, 0x383410u, 0x383418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383418u;
label_383418:
    // 0x383418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x383418u;
    {
        const bool branch_taken_0x383418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383418u;
        // 0x38341c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383418) {
            ctx->pc = 0x38342Cu;
            goto label_38342c;
        }
    }
    ctx->pc = 0x383420u;
label_383420:
    // 0x383420: 0xc0e03c4  jal         func_380F10
    ctx->pc = 0x383420u;
    SET_GPR_U32(ctx, 31, 0x383428u);
    ctx->pc = 0x383424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383420u;
    // 0x383424: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F10u, 0x383420u, 0x383428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383428u;
label_383428:
    // 0x383428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38342c:
    // 0x38342c: 0x3e00008  jr          $ra
    ctx->pc = 0x38342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38342Cu;
        // 0x383430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383434u;
    // 0x383434: 0x0  nop
    ctx->pc = 0x383434u;
    // NOP
    ctx->pc = 0x383438u;
}
