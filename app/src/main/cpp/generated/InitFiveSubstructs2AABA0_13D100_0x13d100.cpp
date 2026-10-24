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

// Function: InitFiveSubstructs2AABA0_13D100
// Address: 0x13d100 - 0x13d148
void InitFiveSubstructs2AABA0_13D100_0x13d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFiveSubstructs2AABA0_13D100_0x13d100");
#endif

    switch (ctx->pc) {
        case 0x13d114u: goto label_13d114;
        case 0x13d11cu: goto label_13d11c;
        case 0x13d124u: goto label_13d124;
        case 0x13d12cu: goto label_13d12c;
        case 0x13d134u: goto label_13d134;
        default: break;
    }

    ctx->pc = 0x13d100u;

    // 0x13d100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d10c: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x13D10Cu;
    SET_GPR_U32(ctx, 31, 0x13D114u);
    ctx->pc = 0x13D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D10Cu;
    // 0x13d110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x13D10Cu, 0x13D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D114u;
label_13d114:
    // 0x13d114: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x13D114u;
    SET_GPR_U32(ctx, 31, 0x13D11Cu);
    ctx->pc = 0x13D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D114u;
    // 0x13d118: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x13D114u, 0x13D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D11Cu;
label_13d11c:
    // 0x13d11c: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x13D11Cu;
    SET_GPR_U32(ctx, 31, 0x13D124u);
    ctx->pc = 0x13D120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D11Cu;
    // 0x13d120: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x13D11Cu, 0x13D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D124u;
label_13d124:
    // 0x13d124: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x13D124u;
    SET_GPR_U32(ctx, 31, 0x13D12Cu);
    ctx->pc = 0x13D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D124u;
    // 0x13d128: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x13D124u, 0x13D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D12Cu;
label_13d12c:
    // 0x13d12c: 0xc0aaae8  jal         func_2AABA0
    ctx->pc = 0x13D12Cu;
    SET_GPR_U32(ctx, 31, 0x13D134u);
    ctx->pc = 0x13D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D12Cu;
    // 0x13d130: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AABA0u, 0x13D12Cu, 0x13D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D134u;
label_13d134:
    // 0x13d134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d13c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D13Cu;
        // 0x13d140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D144u;
    // 0x13d144: 0x0  nop
    ctx->pc = 0x13d144u;
    // NOP
    ctx->pc = 0x13d148u;
}
