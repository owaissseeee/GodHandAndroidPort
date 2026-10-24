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

// Function: func_0035A4D0
// Address: 0x35a4d0 - 0x35a518
void func_0035A4D0_0x35a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A4D0_0x35a4d0");
#endif

    switch (ctx->pc) {
        case 0x35a4f4u: goto label_35a4f4;
        default: break;
    }

    ctx->pc = 0x35a4d0u;

    // 0x35a4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a4e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a4e8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x35a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x35a4ec: 0xc0d6946  jal         func_35A518
    ctx->pc = 0x35A4ECu;
    SET_GPR_U32(ctx, 31, 0x35A4F4u);
    ctx->pc = 0x35A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4ECu;
    // 0x35a4f0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A518u, 0x35A4ECu, 0x35A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4F4u;
label_35a4f4:
    // 0x35a4f4: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x35a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x35a4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a500: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x35a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x35a504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A50Cu;
        // 0x35a510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A514u;
    // 0x35a514: 0x0  nop
    ctx->pc = 0x35a514u;
    // NOP
    ctx->pc = 0x35a518u;
}
