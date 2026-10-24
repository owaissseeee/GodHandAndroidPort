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

// Function: Forward32B660_342B38
// Address: 0x342b38 - 0x342b78
void Forward32B660_342B38_0x342b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward32B660_342B38_0x342b38");
#endif

    ctx->pc = 0x342b38u;

    // 0x342b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342b44: 0x80cad98  j           func_32B660
    ctx->pc = 0x342B44u;
    ctx->pc = 0x342B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B44u;
    // 0x342b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x342B44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342B4Cu;
    // 0x342b4c: 0x0  nop
    ctx->pc = 0x342b4cu;
    // NOP
    // 0x342b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x342b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x342b54: 0x0  nop
    ctx->pc = 0x342b54u;
    // NOP
    // 0x342b58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x342b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x342b5c: 0x0  nop
    ctx->pc = 0x342b5cu;
    // NOP
    // 0x342b60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x342b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x342b64: 0x0  nop
    ctx->pc = 0x342b64u;
    // NOP
    // 0x342b68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x342b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x342b6c: 0x0  nop
    ctx->pc = 0x342b6cu;
    // NOP
    // 0x342b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x342b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342b74: 0x0  nop
    ctx->pc = 0x342b74u;
    // NOP
    ctx->pc = 0x342b78u;
}
