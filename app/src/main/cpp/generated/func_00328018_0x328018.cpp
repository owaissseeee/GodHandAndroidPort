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

// Function: func_00328018
// Address: 0x328018 - 0x328048
void func_00328018_0x328018(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328018_0x328018");
#endif

    if (__builtin_expect(ctx->pc != 0x328018u, 0)) {
        switch (ctx->pc) {
            case 0x32802cu: goto label_32802c;
            case 0x328034u: goto label_328034;
            default: break;
        }
    }


    // 0x328018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32801c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x328020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x328024: 0xc0ca41c  jal         func_329070
    SET_GPR_U32(ctx, 31, 0x32802Cu);
    ctx->pc = 0x328028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328024u;
    // 0x328028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj3290_Tramp_0033E6A8_9070_0x329070, 0x329070u, 0x32802cu)) {
        return;
    }
label_32802c:
    // 0x32802c: 0xc0ca012  jal         func_328048
    SET_GPR_U32(ctx, 31, 0x328034u);
    ctx->pc = 0x328030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32802Cu;
    // 0x328030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00328048_0x328048, 0x328048u, 0x328034u)) {
        return;
    }
label_328034:
    // 0x328034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x328038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32803c: 0x80ca422  j           func_329088
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32803Cu;
    // 0x328040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x32803Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x328044: 0x0  nop
    // NOP
    ctx->pc = 0x328048u;
}