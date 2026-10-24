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

// Function: cOmDoor_releaseObjCollision
// Address: 0x1bd3f0 - 0x1bd430
void cOmDoor_releaseObjCollision_0x1bd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_releaseObjCollision_0x1bd3f0");
#endif

    switch (ctx->pc) {
        case 0x1bd418u: goto label_1bd418;
        default: break;
    }

    ctx->pc = 0x1bd3f0u;

    // 0x1bd3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd3f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bd3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bd3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd3fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd400: 0x8e050644  lw          $a1, 0x644($s0)
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x1bd404: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD404u;
    {
        const bool branch_taken_0x1bd404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd404) {
            ctx->pc = 0x1BD408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD404u;
            // 0x1bd408: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD420u;
            goto label_1bd420;
        }
    }
    ctx->pc = 0x1BD40Cu;
    // 0x1bd40c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bd410: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x1BD410u;
    SET_GPR_U32(ctx, 31, 0x1BD418u);
    ctx->pc = 0x1BD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD410u;
    // 0x1bd414: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1BD410u, 0x1BD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD418u;
label_1bd418:
    // 0x1bd418: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x1bd418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x1bd41c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bd41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd420:
    // 0x1bd420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd424: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD424u;
        // 0x1bd428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD42Cu;
    // 0x1bd42c: 0x0  nop
    ctx->pc = 0x1bd42cu;
    // NOP
    ctx->pc = 0x1bd430u;
}
