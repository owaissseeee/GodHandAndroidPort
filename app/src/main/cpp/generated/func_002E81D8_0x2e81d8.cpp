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

// Function: func_002E81D8
// Address: 0x2e81d8 - 0x2e8210
void func_002E81D8_0x2e81d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E81D8_0x2e81d8");
#endif

    switch (ctx->pc) {
        case 0x2e81ecu: goto label_2e81ec;
        default: break;
    }

    ctx->pc = 0x2e81d8u;

    // 0x2e81d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e81d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e81dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e81dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e81e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e81e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e81e4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2E81E4u;
    SET_GPR_U32(ctx, 31, 0x2E81ECu);
    ctx->pc = 0x2E81E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81E4u;
    // 0x2e81e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2E81E4u, 0x2E81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81ECu;
label_2e81ec:
    // 0x2e81ec: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2e81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2e81f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e81f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81f4: 0x2463e6d8  addiu       $v1, $v1, -0x1928
    ctx->pc = 0x2e81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960856));
    // 0x2e81f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e81f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e81fc: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2e81fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2e8200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8204: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8204u;
        // 0x2e8208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E820Cu;
    // 0x2e820c: 0x0  nop
    ctx->pc = 0x2e820cu;
    // NOP
    ctx->pc = 0x2e8210u;
}
