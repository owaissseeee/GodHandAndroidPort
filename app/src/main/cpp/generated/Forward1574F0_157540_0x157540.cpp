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

// Function: Forward1574F0_157540
// Address: 0x157540 - 0x157568
void Forward1574F0_157540_0x157540(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward1574F0_157540_0x157540");
#endif

    if (__builtin_expect(ctx->pc != 0x157540u, 0)) {
        switch (ctx->pc) {
            case 0x157554u: goto label_157554;
            default: break;
        }
    }


    // 0x157540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157544: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15754c: 0xc055d3c  jal         func_1574F0
    SET_GPR_U32(ctx, 31, 0x157554u);
    ctx->pc = 0x157550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15754Cu;
    // 0x157550: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001574F0_0x1574f0, 0x1574f0u, 0x157554u)) {
        return;
    }
label_157554:
    // 0x157554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157558: 0x3e00008  jr          $ra
    ctx->pc = 0x157558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157558u;
        // 0x15755c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x157560: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157564: 0x0  nop
    // NOP
    ctx->pc = 0x157568u;
}