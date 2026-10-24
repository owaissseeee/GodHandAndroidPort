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

// Function: Tramp_003302B0_003302E0
// Address: 0x3302e0 - 0x330318
void Tramp_003302B0_003302E0_0x3302e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_003302B0_003302E0_0x3302e0");
#endif

    ctx->pc = 0x3302e0u;

    // 0x3302e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3302e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3302e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3302e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3302ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3302ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3302f0: 0x24848408  addiu       $a0, $a0, -0x7BF8
    ctx->pc = 0x3302f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935560));
    // 0x3302f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3302f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3302f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3302fc: 0x80cc0ac  j           func_3302B0
    ctx->pc = 0x3302FCu;
    ctx->pc = 0x330300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3302FCu;
    // 0x330300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302B0u, 0x3302FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330304u;
    // 0x330304: 0x0  nop
    ctx->pc = 0x330304u;
    // NOP
    // 0x330308: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x330308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33030c: 0x0  nop
    ctx->pc = 0x33030cu;
    // NOP
    // 0x330310: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x330310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x330314: 0x0  nop
    ctx->pc = 0x330314u;
    // NOP
    ctx->pc = 0x330318u;
}
