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

// Function: func_00283E58
// Address: 0x283e58 - 0x283ea8
void func_00283E58_0x283e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283E58_0x283e58");
#endif

    switch (ctx->pc) {
        case 0x283e7cu: goto label_283e7c;
        case 0x283e94u: goto label_283e94;
        default: break;
    }

    ctx->pc = 0x283e58u;

    // 0x283e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283e5c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x283e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x283e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x283e64: 0x8c626288  lw          $v0, 0x6288($v1)
    ctx->pc = 0x283e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786288u));
    // 0x283e68: 0x24706288  addiu       $s0, $v1, 0x6288
    ctx->pc = 0x283e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25224));
    // 0x283e6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283E6Cu;
    {
        const bool branch_taken_0x283e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E6Cu;
        // 0x283e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e6c) {
            ctx->pc = 0x283E94u;
            goto label_283e94;
        }
    }
    ctx->pc = 0x283E74u;
    // 0x283e74: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x283E74u;
    SET_GPR_U32(ctx, 31, 0x283E7Cu);
    ctx->pc = 0x2A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9300u, 0x283E74u, 0x283E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E7Cu;
label_283e7c:
    // 0x283e7c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x283e80: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x283e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x283e84: 0x24a58930  addiu       $a1, $a1, -0x76D0
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936880));
    // 0x283e88: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x283e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x283e8c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x283E8Cu;
    SET_GPR_U32(ctx, 31, 0x283E94u);
    ctx->pc = 0x283E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E8Cu;
    // 0x283e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x283E8Cu, 0x283E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E94u;
label_283e94:
    // 0x283e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x283e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x283EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283EA0u;
        // 0x283ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283EA8u;
}
