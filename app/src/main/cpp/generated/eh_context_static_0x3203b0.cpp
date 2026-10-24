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

// Function: eh_context_static
// Address: 0x3203b0 - 0x320418
void eh_context_static_0x3203b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_context_static_0x3203b0");
#endif

    switch (ctx->pc) {
        case 0x3203ecu: goto label_3203ec;
        default: break;
    }

    ctx->pc = 0x3203b0u;

    // 0x3203b0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x3203b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3203b8: 0x8c625c08  lw          $v0, 0x5C08($v1)
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x755C08u));
    // 0x3203bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3203bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3203c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3203c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3203c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3203C4u;
    {
        const bool branch_taken_0x3203c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3203C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203C4u;
        // 0x3203c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203c4) {
            ctx->pc = 0x3203FCu;
            goto label_3203fc;
        }
    }
    ctx->pc = 0x3203CCu;
    // 0x3203cc: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x3203ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x3203d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3203d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3203d4: 0x26305bf8  addiu       $s0, $s1, 0x5BF8
    ctx->pc = 0x3203d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23544));
    // 0x3203d8: 0xac625c08  sw          $v0, 0x5C08($v1)
    ctx->pc = 0x3203d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23560), GPR_U32(ctx, 2));
    // 0x3203dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3203dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3203e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3203e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3203E4u;
    SET_GPR_U32(ctx, 31, 0x3203ECu);
    ctx->pc = 0x3203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203E4u;
    // 0x3203e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3203E4u, 0x3203ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203ECu;
label_3203ec:
    // 0x3203ec: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x3203ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x3203f0: 0x24635c10  addiu       $v1, $v1, 0x5C10
    ctx->pc = 0x3203f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23568));
    // 0x3203f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3203F4u;
    {
        const bool branch_taken_0x3203f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203F4u;
        // 0x3203f8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203f4) {
            ctx->pc = 0x320400u;
            goto label_320400;
        }
    }
    ctx->pc = 0x3203FCu;
label_3203fc:
    // 0x3203fc: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x3203fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
label_320400:
    // 0x320400: 0x26225bf8  addiu       $v0, $s1, 0x5BF8
    ctx->pc = 0x320400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 23544));
    // 0x320404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x320404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320408: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x320408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320410: 0x3e00008  jr          $ra
    ctx->pc = 0x320410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320410u;
        // 0x320414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320418u;
}
