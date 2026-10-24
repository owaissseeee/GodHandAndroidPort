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
// Function: __17cSkillListManager
// Address: 0x799180 - 0x7991c8
void ps2___17cSkillListManager_0x799180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___17cSkillListManager_0x799180");
#endif

    switch (ctx->pc) {
        case 0x7991a4u: goto label_7991a4;
        case 0x7991b4u: goto label_7991b4;
        default: break;
    }

    ctx->pc = 0x799180u;

    // 0x799180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79918c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79918cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799198: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x799198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x79919c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79919Cu;
    SET_GPR_U32(ctx, 31, 0x7991A4u);
    ctx->pc = 0x7991A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79919Cu;
    // 0x7991a0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79919Cu, 0x7991A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7991A4u;
label_7991a4:
    // 0x7991a4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x7991a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7991a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7991a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7991ac: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7991ACu;
    SET_GPR_U32(ctx, 31, 0x7991B4u);
    ctx->pc = 0x7991B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7991ACu;
    // 0x7991b0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7991ACu, 0x7991B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7991B4u;
label_7991b4:
    // 0x7991b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7991b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7991b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7991b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7991bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7991bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7991c0: 0x3e00008  jr          $ra
    ctx->pc = 0x7991C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7991C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7991C0u;
        // 0x7991c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7991C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7991C8u;
}
} // namespace gh_r000
