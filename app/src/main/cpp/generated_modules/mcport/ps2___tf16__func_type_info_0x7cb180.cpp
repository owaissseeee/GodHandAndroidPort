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
// Function: __tf16__func_type_info
// Address: 0x7cb180 - 0x7cb1d0
void ps2___tf16__func_type_info_0x7cb180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf16__func_type_info_0x7cb180");
#endif

    switch (ctx->pc) {
        case 0x7cb1a4u: goto label_7cb1a4;
        case 0x7cb1bcu: goto label_7cb1bc;
        default: break;
    }

    ctx->pc = 0x7cb180u;

    // 0x7cb180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7cb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7cb184: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cb188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cb18c: 0x8c625968  lw          $v0, 0x5968($v1)
    ctx->pc = 0x7cb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D5968u));
    // 0x7cb190: 0x24705968  addiu       $s0, $v1, 0x5968
    ctx->pc = 0x7cb190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22888));
    // 0x7cb194: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7CB194u;
    {
        const bool branch_taken_0x7cb194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB194u;
        // 0x7cb198: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb194) {
            ctx->pc = 0x7CB1BCu;
            goto label_7cb1bc;
        }
    }
    ctx->pc = 0x7CB19Cu;
    // 0x7cb19c: 0xc1f278a  jal         func_7C9E28
    ctx->pc = 0x7CB19Cu;
    SET_GPR_U32(ctx, 31, 0x7CB1A4u);
    ctx->pc = 0x7C9E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E28u, 0x7CB19Cu, 0x7CB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB1A4u;
label_7cb1a4:
    // 0x7cb1a4: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cb1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cb1a8: 0x3c06007d  lui         $a2, 0x7D
    ctx->pc = 0x7cb1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)125 << 16));
    // 0x7cb1ac: 0x24a511e0  addiu       $a1, $a1, 0x11E0
    ctx->pc = 0x7cb1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4576));
    // 0x7cb1b0: 0x24c61488  addiu       $a2, $a2, 0x1488
    ctx->pc = 0x7cb1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5256));
    // 0x7cb1b4: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CB1B4u;
    SET_GPR_U32(ctx, 31, 0x7CB1BCu);
    ctx->pc = 0x7CB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB1B4u;
    // 0x7cb1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CB1B4u, 0x7CB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB1BCu;
label_7cb1bc:
    // 0x7cb1bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cb1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7cb1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB1C8u;
        // 0x7cb1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB1D0u;
}
} // namespace gh_mcport
