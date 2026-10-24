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

// Function: func_002AFC08
// Address: 0x2afc08 - 0x2afc48
void func_002AFC08_0x2afc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AFC08_0x2afc08");
#endif

    switch (ctx->pc) {
        case 0x2afc3cu: goto label_2afc3c;
        default: break;
    }

    ctx->pc = 0x2afc08u;

    // 0x2afc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2afc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2afc0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2afc0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2afc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2afc14: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2afc14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afc18: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2afc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2afc1c: 0x8c49006c  lw          $t1, 0x6C($v0)
    ctx->pc = 0x2afc1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2afc20: 0xc48c0088  lwc1        $f12, 0x88($a0)
    ctx->pc = 0x2afc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2afc24: 0xc48d008c  lwc1        $f13, 0x8C($a0)
    ctx->pc = 0x2afc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2afc28: 0x694823  subu        $t1, $v1, $t1
    ctx->pc = 0x2afc28u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2afc2c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2afc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2afc30: 0x8c860064  lw          $a2, 0x64($a0)
    ctx->pc = 0x2afc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2afc34: 0xc0abf12  jal         func_2AFC48
    ctx->pc = 0x2AFC34u;
    SET_GPR_U32(ctx, 31, 0x2AFC3Cu);
    ctx->pc = 0x2AFC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFC34u;
    // 0x2afc38: 0x8c870068  lw          $a3, 0x68($a0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC48u, 0x2AFC34u, 0x2AFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFC3Cu;
label_2afc3c:
    // 0x2afc3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afc40: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC40u;
        // 0x2afc44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFC48u;
}
