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

// Function: Entry_releaseIfReady
// Address: 0x201a00 - 0x201a50
void Entry_releaseIfReady_0x201a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Entry_releaseIfReady_0x201a00");
#endif

    switch (ctx->pc) {
        case 0x201a10u: goto label_201a10;
        case 0x201a2cu: goto label_201a2c;
        case 0x201a3cu: goto label_201a3c;
        default: break;
    }

    ctx->pc = 0x201a00u;

    // 0x201a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201a08: 0xc0e666a  jal         func_3999A8
    ctx->pc = 0x201A08u;
    SET_GPR_U32(ctx, 31, 0x201A10u);
    ctx->pc = 0x3999A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999A8u, 0x201A08u, 0x201A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A10u;
label_201a10:
    // 0x201a10: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x201a14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x201A14u;
    {
        const bool branch_taken_0x201a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A14u;
        // 0x201a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a14) {
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x201A1Cu;
    // 0x201a1c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x201a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x201a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a24: 0xc0c8d86  jal         func_323618
    ctx->pc = 0x201A24u;
    SET_GPR_U32(ctx, 31, 0x201A2Cu);
    ctx->pc = 0x201A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A24u;
    // 0x201a28: 0x2484c780  addiu       $a0, $a0, -0x3880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323618u, 0x201A24u, 0x201A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A2Cu;
label_201a2c:
    // 0x201a2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x201A2Cu;
    {
        const bool branch_taken_0x201a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a2c) {
            ctx->pc = 0x201A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A2Cu;
            // 0x201a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x201A34u;
    // 0x201a34: 0xc0c8e9c  jal         func_323A70
    ctx->pc = 0x201A34u;
    SET_GPR_U32(ctx, 31, 0x201A3Cu);
    ctx->pc = 0x201A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A34u;
    // 0x201a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A70u, 0x201A34u, 0x201A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201A3Cu;
label_201a3c:
    // 0x201a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201a40:
    // 0x201a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a44: 0x3e00008  jr          $ra
    ctx->pc = 0x201A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A44u;
        // 0x201a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A4Cu;
    // 0x201a4c: 0x0  nop
    ctx->pc = 0x201a4cu;
    // NOP
    ctx->pc = 0x201a50u;
}
