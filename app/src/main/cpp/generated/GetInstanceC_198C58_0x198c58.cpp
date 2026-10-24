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

// Function: GetInstanceC_198C58
// Address: 0x198c58 - 0x198ca8
void GetInstanceC_198C58_0x198c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstanceC_198C58_0x198c58");
#endif

    switch (ctx->pc) {
        case 0x198c7cu: goto label_198c7c;
        case 0x198c94u: goto label_198c94;
        default: break;
    }

    ctx->pc = 0x198c58u;

    // 0x198c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198c5c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x198c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x198c60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198c64: 0x8c625cf8  lw          $v0, 0x5CF8($v1)
    ctx->pc = 0x198c64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785CF8u));
    // 0x198c68: 0x24705cf8  addiu       $s0, $v1, 0x5CF8
    ctx->pc = 0x198c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23800));
    // 0x198c6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x198C6Cu;
    {
        const bool branch_taken_0x198c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c6c) {
            ctx->pc = 0x198C94u;
            goto label_198c94;
        }
    }
    ctx->pc = 0x198C74u;
    // 0x198c74: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x198C74u;
    SET_GPR_U32(ctx, 31, 0x198C7Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x198C74u, 0x198C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C7Cu;
label_198c7c:
    // 0x198c7c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x198c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x198c80: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x198c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x198c84: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8
    ctx->pc = 0x198c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
    // 0x198c88: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x198c8c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x198C8Cu;
    SET_GPR_U32(ctx, 31, 0x198C94u);
    ctx->pc = 0x198C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198C8Cu;
    // 0x198c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x198C8Cu, 0x198C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198C94u;
label_198c94:
    // 0x198c94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198c9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x198CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA0u;
        // 0x198ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198CA8u;
}
