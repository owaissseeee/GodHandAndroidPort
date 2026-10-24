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

// Function: func_002A58A0
// Address: 0x2a58a0 - 0x2a58d8
void func_002A58A0_0x2a58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A58A0_0x2a58a0");
#endif

    switch (ctx->pc) {
        case 0x2a58c8u: goto label_2a58c8;
        default: break;
    }

    ctx->pc = 0x2a58a0u;

    // 0x2a58a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a58a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a58a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2a58a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a58ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a58acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a58b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a58b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a58b8: 0xac452060  sw          $a1, 0x2060($v0)
    ctx->pc = 0x2a58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8288), GPR_U32(ctx, 5));
    // 0x2a58bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2a58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2a58c0: 0xc0a9636  jal         func_2A58D8
    ctx->pc = 0x2A58C0u;
    SET_GPR_U32(ctx, 31, 0x2A58C8u);
    ctx->pc = 0x2A58C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58C0u;
    // 0x2a58c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58D8u, 0x2A58C0u, 0x2A58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58C8u;
label_2a58c8:
    // 0x2a58c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a58c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a58cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A58CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58CCu;
        // 0x2a58d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A58CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A58D4u;
    // 0x2a58d4: 0x0  nop
    ctx->pc = 0x2a58d4u;
    // NOP
    ctx->pc = 0x2a58d8u;
}
