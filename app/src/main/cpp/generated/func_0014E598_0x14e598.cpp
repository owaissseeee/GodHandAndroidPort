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

// Function: func_0014E598
// Address: 0x14e598 - 0x14e5d0
void func_0014E598_0x14e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014E598_0x14e598");
#endif

    switch (ctx->pc) {
        case 0x14e5acu: goto label_14e5ac;
        default: break;
    }

    ctx->pc = 0x14e598u;

    // 0x14e598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e59c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e5a4: 0xc052568  jal         func_1495A0
    ctx->pc = 0x14E5A4u;
    SET_GPR_U32(ctx, 31, 0x14E5ACu);
    ctx->pc = 0x14E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5A4u;
    // 0x14e5a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1495A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1495A0u, 0x14E5A4u, 0x14E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5ACu;
label_14e5ac:
    // 0x14e5ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14e5b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5b4: 0x2463eaf0  addiu       $v1, $v1, -0x1510
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961904));
    // 0x14e5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e5bc: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x14e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x14e5c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C4u;
        // 0x14e5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E5CCu;
    // 0x14e5cc: 0x0  nop
    ctx->pc = 0x14e5ccu;
    // NOP
    ctx->pc = 0x14e5d0u;
}
