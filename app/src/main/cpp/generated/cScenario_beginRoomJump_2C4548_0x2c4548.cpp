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

// Function: cScenario_beginRoomJump_2C4548
// Address: 0x2c4548 - 0x2c4578
void cScenario_beginRoomJump_2C4548_0x2c4548(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_beginRoomJump_2C4548_0x2c4548");
#endif

    if (__builtin_expect(ctx->pc != 0x2c4548u, 0)) {
        switch (ctx->pc) {
            case 0x2c4568u: goto label_2c4568;
            default: break;
        }
    }


    // 0x2c4548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c454c: 0x3c040058  lui         $a0, 0x58
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2c4550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4554: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c4558: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x2c455c: 0x30e700ff  andi        $a3, $a3, 0xFF
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c4560: 0xc07ffae  jal         func_1FFEB8
    SET_GPR_U32(ctx, 31, 0x2C4568u);
    ctx->pc = 0x2C4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4560u;
    // 0x2c4564: 0x312900ff  andi        $t1, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001FFEB8_0x1ffeb8, 0x1ffeb8u, 0x2c4568u)) {
        return;
    }
label_2c4568:
    // 0x2c4568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c456c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C456Cu;
        // 0x2c4570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2c4574: 0x0  nop
    // NOP
    ctx->pc = 0x2c4578u;
}