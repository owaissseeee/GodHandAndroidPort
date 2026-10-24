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

// Function: CustomIDOwner_setBob
// Address: 0x1ed4e8 - 0x1ed548
void CustomIDOwner_setBob_0x1ed4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setBob_0x1ed4e8");
#endif

    switch (ctx->pc) {
        case 0x1ed50cu: goto label_1ed50c;
        case 0x1ed51cu: goto label_1ed51c;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed534u: goto label_1ed534;
        default: break;
    }

    ctx->pc = 0x1ed4e8u;

    // 0x1ed4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed4ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ed4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ed4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed4f4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED4F4u;
    {
        const bool branch_taken_0x1ed4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4F4u;
        // 0x1ed4f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed4f4) {
            ctx->pc = 0x1ED524u;
            goto label_1ed524;
        }
    }
    ctx->pc = 0x1ED4FCu;
    // 0x1ed4fc: 0x260410d8  addiu       $a0, $s0, 0x10D8
    ctx->pc = 0x1ed4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4312));
    // 0x1ed500: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1ed504: 0xc0b5a0e  jal         func_2D6838
    ctx->pc = 0x1ED504u;
    SET_GPR_U32(ctx, 31, 0x1ED50Cu);
    ctx->pc = 0x1ED508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED504u;
    // 0x1ed508: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6838u, 0x1ED504u, 0x1ED50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED50Cu;
label_1ed50c:
    // 0x1ed50c: 0x26041154  addiu       $a0, $s0, 0x1154
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4436));
    // 0x1ed510: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ed510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ed514: 0xc0b5a0e  jal         func_2D6838
    ctx->pc = 0x1ED514u;
    SET_GPR_U32(ctx, 31, 0x1ED51Cu);
    ctx->pc = 0x1ED518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED514u;
    // 0x1ed518: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6838u, 0x1ED514u, 0x1ED51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED51Cu;
label_1ed51c:
    // 0x1ed51c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED51Cu;
    {
        const bool branch_taken_0x1ed51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED51Cu;
        // 0x1ed520: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed51c) {
            ctx->pc = 0x1ED538u;
            goto label_1ed538;
        }
    }
    ctx->pc = 0x1ED524u;
label_1ed524:
    // 0x1ed524: 0xc0b5a1c  jal         func_2D6870
    ctx->pc = 0x1ED524u;
    SET_GPR_U32(ctx, 31, 0x1ED52Cu);
    ctx->pc = 0x1ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED524u;
    // 0x1ed528: 0x260410d8  addiu       $a0, $s0, 0x10D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6870u, 0x1ED524u, 0x1ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0xc0b5a1c  jal         func_2D6870
    ctx->pc = 0x1ED52Cu;
    SET_GPR_U32(ctx, 31, 0x1ED534u);
    ctx->pc = 0x1ED530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED52Cu;
    // 0x1ed530: 0x26041154  addiu       $a0, $s0, 0x1154 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6870u, 0x1ED52Cu, 0x1ED534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED534u;
label_1ed534:
    // 0x1ed534: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed538:
    // 0x1ed538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed53c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED53Cu;
        // 0x1ed540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED544u;
    // 0x1ed544: 0x0  nop
    ctx->pc = 0x1ed544u;
    // NOP
    ctx->pc = 0x1ed548u;
}
