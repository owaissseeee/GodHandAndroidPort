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
// Function: __tf16__ptmf_type_info
// Address: 0x7cb110 - 0x7cb160
void ps2___tf16__ptmf_type_info_0x7cb110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__ptmf_type_info_0x7cb110");
#endif

    switch (ctx->pc) {
        case 0x7cb134u: goto label_7cb134;
        case 0x7cb14cu: goto label_7cb14c;
        default: break;
    }

    ctx->pc = 0x7cb110u;

    // 0x7cb110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb114: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb11c: 0x8c625958  lw          $v0, 0x5958($v1)
    ctx->pc = 0x7cb11cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5958u));
    // 0x7cb120: 0x24705958  addiu       $s0, $v1, 0x5958
    ctx->pc = 0x7cb120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22872));
    // 0x7cb124: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB124u;
    {
        const bool branch_taken_0x7cb124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB124u;
        // 0x7cb128: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb124) {
            ctx->pc = 0x7CB14Cu;
            goto label_7cb14c;
        }
    }
    ctx->pc = 0x7CB12Cu;
    // 0x7cb12c: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB12Cu;
    SET_GPR_U32(ctx, 31, 0x7CB134u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB12Cu, 0x7CB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB134u;
label_7cb134:
    // 0x7cb134: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb138: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb13c: 0x24a511c8  addiu       $a1, $a1, 0x11C8
    ctx->pc = 0x7cb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    // 0x7cb140: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb144: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB144u;
    SET_GPR_U32(ctx, 31, 0x7CB14Cu);
    ctx->pc = 0x7CB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB144u;
    // 0x7cb148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB144u, 0x7CB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB14Cu;
label_7cb14c:
    // 0x7cb14c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb158: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB158u;
        // 0x7cb15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB160u;
}
} // namespace gh_mcport
