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

// Function: func_0035D2E0
// Address: 0x35d2e0 - 0x35d360
void func_0035D2E0_0x35d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D2E0_0x35d2e0");
#endif

    switch (ctx->pc) {
        case 0x35d300u: goto label_35d300;
        case 0x35d310u: goto label_35d310;
        case 0x35d320u: goto label_35d320;
        default: break;
    }

    ctx->pc = 0x35d2e0u;

    // 0x35d2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d2e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d2f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d2f8: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x35D2F8u;
    SET_GPR_U32(ctx, 31, 0x35D300u);
    ctx->pc = 0x35D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2F8u;
    // 0x35d2fc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x35D2F8u, 0x35D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D300u;
label_35d300:
    // 0x35d300: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35D300u;
    {
        const bool branch_taken_0x35d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x35D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D300u;
        // 0x35d304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d300) {
            ctx->pc = 0x35D348u;
            goto label_35d348;
        }
    }
    ctx->pc = 0x35D308u;
    // 0x35d308: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x35D308u;
    SET_GPR_U32(ctx, 31, 0x35D310u);
    ctx->pc = 0x35D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D308u;
    // 0x35d30c: 0x8e0520d8  lw          $a1, 0x20D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x35D308u, 0x35D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D310u;
label_35d310:
    // 0x35d310: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x35D310u;
    {
        const bool branch_taken_0x35d310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x35D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D310u;
        // 0x35d314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d310) {
            ctx->pc = 0x35D348u;
            goto label_35d348;
        }
    }
    ctx->pc = 0x35D318u;
    // 0x35d318: 0xc0d74d8  jal         func_35D360
    ctx->pc = 0x35D318u;
    SET_GPR_U32(ctx, 31, 0x35D320u);
    ctx->pc = 0x35D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D360u, 0x35D318u, 0x35D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D320u;
label_35d320:
    // 0x35d320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D320u;
    {
        const bool branch_taken_0x35d320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D320u;
        // 0x35d324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d320) {
            ctx->pc = 0x35D348u;
            goto label_35d348;
        }
    }
    ctx->pc = 0x35D328u;
    // 0x35d328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d330: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d33c: 0x80d70d4  j           func_35C350
    ctx->pc = 0x35D33Cu;
    ctx->pc = 0x35D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D33Cu;
    // 0x35d340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C350u, 0x35D33Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D344u;
    // 0x35d344: 0x0  nop
    ctx->pc = 0x35d344u;
    // NOP
label_35d348:
    // 0x35d348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d354: 0x3e00008  jr          $ra
    ctx->pc = 0x35D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D354u;
        // 0x35d358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D35Cu;
    // 0x35d35c: 0x0  nop
    ctx->pc = 0x35d35cu;
    // NOP
    ctx->pc = 0x35d360u;
}
