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

// Function: GetDInstance_193E58
// Address: 0x193e58 - 0x193ea8
void GetDInstance_193E58_0x193e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDInstance_193E58_0x193e58");
#endif

    switch (ctx->pc) {
        case 0x193e7cu: goto label_193e7c;
        case 0x193e94u: goto label_193e94;
        default: break;
    }

    ctx->pc = 0x193e58u;

    // 0x193e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193e5c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x193e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x193e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193e64: 0x8c625ca8  lw          $v0, 0x5CA8($v1)
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785CA8u));
    // 0x193e68: 0x24705ca8  addiu       $s0, $v1, 0x5CA8
    ctx->pc = 0x193e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23720));
    // 0x193e6c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193E6Cu;
    {
        const bool branch_taken_0x193e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E6Cu;
        // 0x193e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e6c) {
            ctx->pc = 0x193E94u;
            goto label_193e94;
        }
    }
    ctx->pc = 0x193E74u;
    // 0x193e74: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x193E74u;
    SET_GPR_U32(ctx, 31, 0x193E7Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x193E74u, 0x193E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E7Cu;
label_193e7c:
    // 0x193e7c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x193e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x193e80: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x193e84: 0x24a54b18  addiu       $a1, $a1, 0x4B18
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19224));
    // 0x193e88: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x193e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x193e8c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x193E8Cu;
    SET_GPR_U32(ctx, 31, 0x193E94u);
    ctx->pc = 0x193E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E8Cu;
    // 0x193e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x193E8Cu, 0x193E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E94u;
label_193e94:
    // 0x193e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x193EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193EA0u;
        // 0x193ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193EA8u;
}
