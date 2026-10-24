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

// Function: func_001BF478
// Address: 0x1bf478 - 0x1bf4b8
void func_001BF478_0x1bf478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BF478_0x1bf478");
#endif

    switch (ctx->pc) {
        case 0x1bf48cu: goto label_1bf48c;
        default: break;
    }

    ctx->pc = 0x1bf478u;

    // 0x1bf478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf47c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bf47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bf480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bf480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bf484: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BF484u;
    SET_GPR_U32(ctx, 31, 0x1BF48Cu);
    ctx->pc = 0x1BF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF484u;
    // 0x1bf488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BF484u, 0x1BF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF48Cu;
label_1bf48c:
    // 0x1bf48c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf490: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bf494: 0xa2020600  sb          $v0, 0x600($s0)
    ctx->pc = 0x1bf494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf498: 0x246396f0  addiu       $v1, $v1, -0x6910
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940400));
    // 0x1bf49c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1bf49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1bf4a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4ACu;
        // 0x1bf4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF4B4u;
    // 0x1bf4b4: 0x0  nop
    ctx->pc = 0x1bf4b4u;
    // NOP
    ctx->pc = 0x1bf4b8u;
}
