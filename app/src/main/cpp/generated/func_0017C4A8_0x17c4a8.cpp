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

// Function: func_0017C4A8
// Address: 0x17c4a8 - 0x17c4e0
void func_0017C4A8_0x17c4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C4A8_0x17c4a8");
#endif

    switch (ctx->pc) {
        case 0x17c4bcu: goto label_17c4bc;
        default: break;
    }

    ctx->pc = 0x17c4a8u;

    // 0x17c4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c4b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c4b4: 0xc06f560  jal         func_1BD580
    ctx->pc = 0x17C4B4u;
    SET_GPR_U32(ctx, 31, 0x17C4BCu);
    ctx->pc = 0x17C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4B4u;
    // 0x17c4b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD580u, 0x17C4B4u, 0x17C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4BCu;
label_17c4bc:
    // 0x17c4bc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17c4c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4c4: 0x24631c80  addiu       $v1, $v1, 0x1C80
    ctx->pc = 0x17c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7296));
    // 0x17c4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c4cc: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17c4d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4D4u;
        // 0x17c4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C4DCu;
    // 0x17c4dc: 0x0  nop
    ctx->pc = 0x17c4dcu;
    // NOP
    ctx->pc = 0x17c4e0u;
}
