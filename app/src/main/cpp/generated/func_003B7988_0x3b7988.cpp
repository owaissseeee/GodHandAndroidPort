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

// Function: func_003B7988
// Address: 0x3b7988 - 0x3b79c0
void func_003B7988_0x3b7988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B7988_0x3b7988");
#endif

    ctx->pc = 0x3b7988u;

    // 0x3b7988: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b7988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b798c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b798cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b7990: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b7990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
    // 0x3b7994: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x3b7994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBEB8u, _value); } while (0);
    // 0x3b7998: 0xac60bebc  sw          $zero, -0x4144($v1)
    ctx->pc = 0x3b7998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FBEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBEBCu, _value); } while (0);
    // 0x3b799c: 0x24844048  addiu       $a0, $a0, 0x4048
    ctx->pc = 0x3b799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16456));
    // 0x3b79a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b79a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b79a4: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x3B79A4u;
    ctx->pc = 0x3B79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79A4u;
    // 0x3b79a8: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3B79A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B79ACu;
    // 0x3b79ac: 0x0  nop
    ctx->pc = 0x3b79acu;
    // NOP
    // 0x3b79b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3b79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b79b4: 0x0  nop
    ctx->pc = 0x3b79b4u;
    // NOP
    // 0x3b79b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3b79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3b79bc: 0x0  nop
    ctx->pc = 0x3b79bcu;
    // NOP
    ctx->pc = 0x3b79c0u;
}
