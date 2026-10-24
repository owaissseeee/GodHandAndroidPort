#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf16__attr_type_info
// Address: 0x7cb260 - 0x7cb2b0
void ps2___tf16__attr_type_info_0x7cb260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__attr_type_info_0x7cb260");
#endif

    switch (ctx->pc) {
        case 0x7cb284u: goto label_7cb284;
        case 0x7cb29cu: goto label_7cb29c;
        default: break;
    }

    ctx->pc = 0x7cb260u;

    // 0x7cb260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb264: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb26c: 0x8c625988  lw          $v0, 0x5988($v1)
    ctx->pc = 0x7cb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5988u));
    // 0x7cb270: 0x24705988  addiu       $s0, $v1, 0x5988
    ctx->pc = 0x7cb270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22920));
    // 0x7cb274: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB274u;
    {
        const bool branch_taken_0x7cb274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB274u;
        // 0x7cb278: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb274) {
            ctx->pc = 0x7CB29Cu;
            goto label_7cb29c;
        }
    }
    ctx->pc = 0x7CB27Cu;
    // 0x7cb27c: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB27Cu;
    SET_GPR_U32(ctx, 31, 0x7CB284u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB27Cu, 0x7CB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB284u;
label_7cb284:
    // 0x7cb284: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb288: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb28c: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x7cb28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x7cb290: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb294: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB294u;
    SET_GPR_U32(ctx, 31, 0x7CB29Cu);
    ctx->pc = 0x7CB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB294u;
    // 0x7cb298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB294u, 0x7CB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB29Cu;
label_7cb29c:
    // 0x7cb29c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB2A8u;
        // 0x7cb2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB2B0u;
}
} // namespace gh_mcport
