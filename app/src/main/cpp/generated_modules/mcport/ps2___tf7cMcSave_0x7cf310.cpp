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
// Function: __tf7cMcSave
// Address: 0x7cf310 - 0x7cf388
void ps2___tf7cMcSave_0x7cf310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7cMcSave_0x7cf310");
#endif

    switch (ctx->pc) {
        case 0x7cf358u: goto label_7cf358;
        case 0x7cf36cu: goto label_7cf36c;
        default: break;
    }

    ctx->pc = 0x7cf310u;

    // 0x7cf310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cf310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cf314: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf318: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7cf318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7cf31c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7cf31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7cf320: 0x245158c8  addiu       $s1, $v0, 0x58C8
    ctx->pc = 0x7cf320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22728));
    // 0x7cf324: 0x8c4358c8  lw          $v1, 0x58C8($v0)
    ctx->pc = 0x7cf324u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D58C8u));
    // 0x7cf328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7cf328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf32c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7cf32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7cf330: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7CF330u;
    {
        const bool branch_taken_0x7cf330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF330u;
        // 0x7cf334: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf330) {
            ctx->pc = 0x7CF36Cu;
            goto label_7cf36c;
        }
    }
    ctx->pc = 0x7CF338u;
    // 0x7cf338: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cf338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cf33c: 0x8c621480  lw          $v0, 0x1480($v1)
    ctx->pc = 0x7cf33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1480u));
    // 0x7cf340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CF340u;
    {
        const bool branch_taken_0x7cf340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF340u;
        // 0x7cf344: 0x24701480  addiu       $s0, $v1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf340) {
            ctx->pc = 0x7CF358u;
            goto label_7cf358;
        }
    }
    ctx->pc = 0x7CF348u;
    // 0x7cf348: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cf34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf350: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7CF350u;
    SET_GPR_U32(ctx, 31, 0x7CF358u);
    ctx->pc = 0x7CF354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF350u;
    // 0x7cf354: 0x24a50e40  addiu       $a1, $a1, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7CF350u, 0x7CF358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF358u;
label_7cf358:
    // 0x7cf358: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cf35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf360: 0x24a50e48  addiu       $a1, $a1, 0xE48
    ctx->pc = 0x7cf360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3656));
    // 0x7cf364: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CF364u;
    SET_GPR_U32(ctx, 31, 0x7CF36Cu);
    ctx->pc = 0x7CF368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF364u;
    // 0x7cf368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CF364u, 0x7CF36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF36Cu;
label_7cf36c:
    // 0x7cf36c: 0x264258c8  addiu       $v0, $s2, 0x58C8
    ctx->pc = 0x7cf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22728));
    // 0x7cf370: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7cf370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7cf374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf378: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7cf378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf380: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF380u;
        // 0x7cf384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF388u;
}
} // namespace gh_mcport
