#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: AllRelease__17cSkillListManager
// Address: 0x799210 - 0x799258
void AllRelease__17cSkillListManager_0x799210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllRelease__17cSkillListManager_0x799210");
#endif

    switch (ctx->pc) {
        case 0x799234u: goto label_799234;
        case 0x799244u: goto label_799244;
        default: break;
    }

    ctx->pc = 0x799210u;

    // 0x799210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79921c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799228: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x799228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x79922c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79922Cu;
    SET_GPR_U32(ctx, 31, 0x799234u);
    ctx->pc = 0x799230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79922Cu;
    // 0x799230: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79922Cu, 0x799234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799234u;
label_799234:
    // 0x799234: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x799238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79923c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79924c: 0x3e00008  jr          $ra
    ctx->pc = 0x79924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79924Cu;
        // 0x799250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79924Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799254u;
    // 0x799254: 0x0  nop
    ctx->pc = 0x799254u;
    // NOP
    ctx->pc = 0x799258u;
}
} // namespace gh_r000
