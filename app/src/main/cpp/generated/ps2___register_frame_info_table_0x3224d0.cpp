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

// Function: __register_frame_info_table
// Address: 0x3224d0 - 0x3224f8
void ps2___register_frame_info_table_0x3224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_info_table_0x3224d0");
#endif

    ctx->pc = 0x3224d0u;

    // 0x3224d0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x3224d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x3224d4: 0x8c625c18  lw          $v0, 0x5C18($v1)
    ctx->pc = 0x3224d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x755C18u));
    // 0x3224d8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x3224d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x3224dc: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x3224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x3224e0: 0xac655c18  sw          $a1, 0x5C18($v1)
    ctx->pc = 0x3224e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x755C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x755C18u, _value); } while (0);
    // 0x3224e4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3224e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3224e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3224ec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3224ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3224f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3224F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3224F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224F0u;
        // 0x3224f4: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3224F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3224F8u;
}
