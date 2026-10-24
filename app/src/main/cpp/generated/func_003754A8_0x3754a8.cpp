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

// Function: func_003754A8
// Address: 0x3754a8 - 0x3754f0
void func_003754A8_0x3754a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003754A8_0x3754a8");
#endif

    ctx->pc = 0x3754a8u;

    // 0x3754a8: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3754a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3754ac: 0x8c45b580  lw          $a1, -0x4A80($v0)
    ctx->pc = 0x3754acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x76B580u));
    // 0x3754b0: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x3754b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x3754b4: 0xac8500a8  sw          $a1, 0xA8($a0)
    ctx->pc = 0x3754b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
    // 0x3754b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76B584u));
    // 0x3754bc: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x3754bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
    // 0x3754c0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3754c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x76B588u));
    // 0x3754c4: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x3754c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x3754c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3754c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76B58Cu));
    // 0x3754cc: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x3754ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x3754d0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x3754d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x76B590u));
    // 0x3754d4: 0xac8500b8  sw          $a1, 0xB8($a0)
    ctx->pc = 0x3754d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
    // 0x3754d8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76B594u));
    // 0x3754dc: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x3754dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
    // 0x3754e0: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x76B598u));
    // 0x3754e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3754E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3754E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3754E4u;
        // 0x3754e8: 0xac8500c0  sw          $a1, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3754E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3754ECu;
    // 0x3754ec: 0x0  nop
    ctx->pc = 0x3754ecu;
    // NOP
    ctx->pc = 0x3754f0u;
}
