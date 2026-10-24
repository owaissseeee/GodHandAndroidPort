#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __negdf2
// Address: 0x79d740 - 0x79d778
void ps2___negdf2_0x79d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x79d740");
#endif

    switch (ctx->pc) {
        case 0x79d758u: goto label_79d758;
        case 0x79d76cu: goto label_79d76c;
        default: break;
    }

    ctx->pc = 0x79d740u;

    // 0x79d740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d744: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79d748: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d74c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79d750: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D750u;
    SET_GPR_U32(ctx, 31, 0x79D758u);
    ctx->pc = 0x79D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D750u;
    // 0x79d754: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D750u, 0x79D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D758u;
label_79d758:
    // 0x79d758: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d75c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79d75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d760: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79d760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79d764: 0xc1e72c2  jal         func_79CB08
    ctx->pc = 0x79D764u;
    SET_GPR_U32(ctx, 31, 0x79D76Cu);
    ctx->pc = 0x79D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D764u;
    // 0x79d768: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CB08u, 0x79D764u, 0x79D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D76Cu;
label_79d76c:
    // 0x79d76c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79d76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d770: 0x3e00008  jr          $ra
    ctx->pc = 0x79D770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D770u;
        // 0x79d774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D778u;
}
} // namespace gh_r501
