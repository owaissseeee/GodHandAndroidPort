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

// Function: Forward2D2F78_2D3020
// Address: 0x2d3020 - 0x2d3050
void Forward2D2F78_2D3020_0x2d3020(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward2D2F78_2D3020_0x2d3020");
#endif

    if (__builtin_expect(ctx->pc != 0x2d3020u, 0)) {
        switch (ctx->pc) {
            case 0x2d3040u: goto label_2d3040;
            default: break;
        }
    }


    // 0x2d3020: 0xc0102d  daddu       $v0, $a2, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3024: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3028: 0xe0402d  daddu       $t0, $a3, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d302c: 0xa0302d  daddu       $a2, $a1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3034: 0x40382d  daddu       $a3, $v0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3038: 0xc0b4bde  jal         func_2D2F78
    SET_GPR_U32(ctx, 31, 0x2D3040u);
    ctx->pc = 0x2D303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3038u;
    // 0x2d303c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ReqQueue_push_0x2d2f78, 0x2d2f78u, 0x2d3040u)) {
        return;
    }
label_2d3040:
    // 0x2d3040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3044: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3044u;
        // 0x2d3048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2d304c: 0x0  nop
    // NOP
    ctx->pc = 0x2d3050u;
}