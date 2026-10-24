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

// Function: sfhds_CallS
// Address: 0x34da88 - 0x34dac0
void sfhds_CallS_0x34da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_CallS_0x34da88");
#endif

    switch (ctx->pc) {
        case 0x34da88u: goto label_34da88;
        case 0x34da8cu: goto label_34da8c;
        case 0x34da90u: goto label_34da90;
        case 0x34da94u: goto label_34da94;
        case 0x34da98u: goto label_34da98;
        case 0x34da9cu: goto label_34da9c;
        case 0x34daa0u: goto label_34daa0;
        case 0x34daa4u: goto label_34daa4;
        case 0x34daa8u: goto label_34daa8;
        case 0x34daacu: goto label_34daac;
        case 0x34dab0u: goto label_34dab0;
        case 0x34dab4u: goto label_34dab4;
        case 0x34dab8u: goto label_34dab8;
        case 0x34dabcu: goto label_34dabc;
        default: break;
    }

    ctx->pc = 0x34da88u;

label_34da88:
    // 0x34da88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34da88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34da8c:
    // 0x34da8c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x34da8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34da90:
    // 0x34da90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34da94:
    // 0x34da94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x34da94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_34da98:
    // 0x34da98: 0x40f809  jalr        $v0
label_34da9c:
    if (ctx->pc == 0x34DA9Cu) {
        ctx->pc = 0x34DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA98u;
        // 0x34da9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DAA0u;
        goto label_34daa0;
    }
    ctx->pc = 0x34DA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34DAA0u);
        ctx->pc = 0x34DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DA98u;
        // 0x34da9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DA98u, 0x34DAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34DAA0u;
label_34daa0:
    // 0x34daa0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x34daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34daa4:
    // 0x34daa4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34daa8:
    // 0x34daa8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x34daa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_34daac:
    // 0x34daac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34daacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34dab0:
    // 0x34dab0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x34dab0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_34dab4:
    // 0x34dab4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34dab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34dab8:
    // 0x34dab8: 0x3e00008  jr          $ra
label_34dabc:
    if (ctx->pc == 0x34DABCu) {
        ctx->pc = 0x34DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DAB8u;
        // 0x34dabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DAC0u;
        goto label_fallthrough_0x34dab8;
    }
    ctx->pc = 0x34DAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DAB8u;
        // 0x34dabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34dab8:
    ctx->pc = 0x34DAC0u;
}
