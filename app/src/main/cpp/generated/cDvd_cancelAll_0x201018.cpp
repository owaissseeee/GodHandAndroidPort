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

// Function: cDvd_cancelAll
// Address: 0x201018 - 0x201098
void cDvd_cancelAll_0x201018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_cancelAll_0x201018");
#endif

    switch (ctx->pc) {
        case 0x201050u: goto label_201050;
        case 0x201058u: goto label_201058;
        case 0x201060u: goto label_201060;
        case 0x20106cu: goto label_20106c;
        default: break;
    }

    ctx->pc = 0x201018u;

    // 0x201018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20101c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x201020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x201020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x201024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201028: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x201028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20102c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201030: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x201034: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201034u;
    {
        const bool branch_taken_0x201034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201034u;
        // 0x201038: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201034) {
            ctx->pc = 0x20105Cu;
            goto label_20105c;
        }
    }
    ctx->pc = 0x20103Cu;
    // 0x20103c: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x201040: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201040u;
    {
        const bool branch_taken_0x201040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201040) {
            ctx->pc = 0x201044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201040u;
            // 0x201044: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20105Cu;
            goto label_20105c;
        }
    }
    ctx->pc = 0x201048u;
    // 0x201048: 0xc0c9002  jal         func_324008
    ctx->pc = 0x201048u;
    SET_GPR_U32(ctx, 31, 0x201050u);
    ctx->pc = 0x324008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324008u, 0x201048u, 0x201050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201050u;
label_201050:
    // 0x201050: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x201050u;
    SET_GPR_U32(ctx, 31, 0x201058u);
    ctx->pc = 0x201054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201050u;
    // 0x201054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018F0u, 0x201050u, 0x201058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201058u;
label_201058:
    // 0x201058: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x201058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20105c:
    // 0x20105c: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x20105cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_201060:
    // 0x201060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201064: 0xc08048a  jal         func_201228
    ctx->pc = 0x201064u;
    SET_GPR_U32(ctx, 31, 0x20106Cu);
    ctx->pc = 0x201068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201064u;
    // 0x201068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x201064u, 0x20106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20106Cu;
label_20106c:
    // 0x20106c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20106cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x201070: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x201070u;
    {
        const bool branch_taken_0x201070 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x201074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201070u;
        // 0x201074: 0x26100088  addiu       $s0, $s0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201070) {
            ctx->pc = 0x201060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201060;
        }
    }
    ctx->pc = 0x201078u;
    // 0x201078: 0xae201108  sw          $zero, 0x1108($s1)
    ctx->pc = 0x201078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 0));
    // 0x20107c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20107cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x201080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x201084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20108c: 0x3e00008  jr          $ra
    ctx->pc = 0x20108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20108Cu;
        // 0x201090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201094u;
    // 0x201094: 0x0  nop
    ctx->pc = 0x201094u;
    // NOP
    ctx->pc = 0x201098u;
}
