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

// Function: func_0031F410
// Address: 0x31f410 - 0x31f460
void func_0031F410_0x31f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F410_0x31f410");
#endif

    switch (ctx->pc) {
        case 0x31f434u: goto label_31f434;
        case 0x31f44cu: goto label_31f44c;
        default: break;
    }

    ctx->pc = 0x31f410u;

    // 0x31f410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f414: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31f414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31f418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f41c: 0x8c626678  lw          $v0, 0x6678($v1)
    ctx->pc = 0x31f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786678u));
    // 0x31f420: 0x24706678  addiu       $s0, $v1, 0x6678
    ctx->pc = 0x31f420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26232));
    // 0x31f424: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F424u;
    {
        const bool branch_taken_0x31f424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F424u;
        // 0x31f428: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f424) {
            ctx->pc = 0x31F44Cu;
            goto label_31f44c;
        }
    }
    ctx->pc = 0x31F42Cu;
    // 0x31f42c: 0xc0c863e  jal         func_3218F8
    ctx->pc = 0x31F42Cu;
    SET_GPR_U32(ctx, 31, 0x31F434u);
    ctx->pc = 0x3218F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218F8u, 0x31F42Cu, 0x31F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F434u;
label_31f434:
    // 0x31f434: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f438: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31f438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31f43c: 0x24a510a0  addiu       $a1, $a1, 0x10A0
    ctx->pc = 0x31f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
    // 0x31f440: 0x24c60da8  addiu       $a2, $a2, 0xDA8
    ctx->pc = 0x31f440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3496));
    // 0x31f444: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31F444u;
    SET_GPR_U32(ctx, 31, 0x31F44Cu);
    ctx->pc = 0x31F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F444u;
    // 0x31f448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31F444u, 0x31F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F44Cu;
label_31f44c:
    // 0x31f44c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f458: 0x3e00008  jr          $ra
    ctx->pc = 0x31F458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F458u;
        // 0x31f45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F460u;
}
