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

// Function: DogRace_SetActBtn
// Address: 0x1e9ed8 - 0x1e9f18
void DogRace_SetActBtn_0x1e9ed8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DogRace_SetActBtn_0x1e9ed8");
#endif

    if (__builtin_expect(ctx->pc != 0x1e9ed8u, 0)) {
        switch (ctx->pc) {
            case 0x1e9f08u: goto label_1e9f08;
            default: break;
        }
    }


    // 0x1e9ed8: 0x80482d  daddu       $t1, $a0, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9ee0: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e9ee4: 0x3c08001f  lui         $t0, 0x1F
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
    // 0x1e9ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9eec: 0x24848288  addiu       $a0, $a0, -0x7D78
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x1e9ef0: 0x25089f18  addiu       $t0, $t0, -0x60E8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942488));
    // 0x1e9ef4: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9ef8: 0x24060018  addiu       $a2, $zero, 0x18
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e9efc: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f00: 0xc07de16  jal         func_1F7858
    SET_GPR_U32(ctx, 31, 0x1E9F08u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F00u;
    // 0x1e9f04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1E9F00u, 0x1E9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_1e9f08:
    // 0x1e9f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F0Cu;
        // 0x1e9f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1e9f14: 0x0  nop
    // NOP
    ctx->pc = 0x1e9f18u;
}