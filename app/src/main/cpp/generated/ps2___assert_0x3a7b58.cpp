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

// Function: __assert
// Address: 0x3a7b58 - 0x3a7b88
void ps2___assert_0x3a7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___assert_0x3a7b58");
#endif

    switch (ctx->pc) {
        case 0x3a7b80u: goto label_3a7b80;
        default: break;
    }

    ctx->pc = 0x3a7b58u;

    // 0x3a7b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7b5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a7b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7b64: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a7b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b68: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a7b6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a7b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a7b74: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3a7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3a7b78: 0xc0eb862  jal         func_3AE188
    ctx->pc = 0x3A7B78u;
    SET_GPR_U32(ctx, 31, 0x3A7B80u);
    ctx->pc = 0x3A7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B78u;
    // 0x3a7b7c: 0x24a5f5c0  addiu       $a1, $a1, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE188u, 0x3A7B78u, 0x3A7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B80u;
label_3a7b80:
    // 0x3a7b80: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x3A7B80u;
    SET_GPR_U32(ctx, 31, 0x3A7B88u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x3A7B80u, 0x3A7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B88u;
}
