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

// Function: func_0034A9B8
// Address: 0x34a9b8 - 0x34aa00
void func_0034A9B8_0x34a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A9B8_0x34a9b8");
#endif

    switch (ctx->pc) {
        case 0x34a9dcu: goto label_34a9dc;
        default: break;
    }

    ctx->pc = 0x34a9b8u;

    // 0x34a9b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a9bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34a9c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34a9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9c4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34a9c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34a9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34a9d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a9d4: 0xc0d30ae  jal         func_34C2B8
    ctx->pc = 0x34A9D4u;
    SET_GPR_U32(ctx, 31, 0x34A9DCu);
    ctx->pc = 0x34A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9D4u;
    // 0x34a9d8: 0x8c85200c  lw          $a1, 0x200C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x34A9D4u, 0x34A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9DCu;
label_34a9dc:
    // 0x34a9dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a9e0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x34a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a9e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x34a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x34a9e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x34a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x34a9ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34a9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a9f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a9f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9F8u;
        // 0x34a9fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AA00u;
}
