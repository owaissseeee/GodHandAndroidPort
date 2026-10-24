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

// Function: fRand1_1
// Address: 0x31d020 - 0x31d050
void fRand1_1_0x31d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fRand1_1_0x31d020");
#endif

    switch (ctx->pc) {
        case 0x31d030u: goto label_31d030;
        default: break;
    }

    ctx->pc = 0x31d020u;

    // 0x31d020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d028: 0xc0c3d46  jal         func_30F518
    ctx->pc = 0x31D028u;
    SET_GPR_U32(ctx, 31, 0x31D030u);
    ctx->pc = 0x30F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F518u, 0x31D028u, 0x31D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D030u;
label_31d030:
    // 0x31d030: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31d030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31d034: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d03c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d03cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d040: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31d040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31d044: 0x3e00008  jr          $ra
    ctx->pc = 0x31D044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D044u;
        // 0x31d048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D04Cu;
    // 0x31d04c: 0x0  nop
    ctx->pc = 0x31d04cu;
    // NOP
    ctx->pc = 0x31d050u;
}
