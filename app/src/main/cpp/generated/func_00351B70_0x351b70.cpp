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

// Function: func_00351B70
// Address: 0x351b70 - 0x351bb8
void func_00351B70_0x351b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351B70_0x351b70");
#endif

    switch (ctx->pc) {
        case 0x351b94u: goto label_351b94;
        default: break;
    }

    ctx->pc = 0x351b70u;

    // 0x351b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x351b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x351b78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x351b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x351b80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x351b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x351b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351b8c: 0xc0d323c  jal         func_34C8F0
    ctx->pc = 0x351B8Cu;
    SET_GPR_U32(ctx, 31, 0x351B94u);
    ctx->pc = 0x351B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351B8Cu;
    // 0x351b90: 0x8e051fc8  lw          $a1, 0x1FC8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C8F0u, 0x351B8Cu, 0x351B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B94u;
label_351b94:
    // 0x351b94: 0xde0209a8  ld          $v0, 0x9A8($s0)
    ctx->pc = 0x351b94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2472)));
    // 0x351b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351b9c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x351b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x351ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x351ba4: 0xfe0209a8  sd          $v0, 0x9A8($s0)
    ctx->pc = 0x351ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2472), GPR_U64(ctx, 2));
    // 0x351ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x351ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351bac: 0x3e00008  jr          $ra
    ctx->pc = 0x351BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BACu;
        // 0x351bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351BB4u;
    // 0x351bb4: 0x0  nop
    ctx->pc = 0x351bb4u;
    // NOP
    ctx->pc = 0x351bb8u;
}
