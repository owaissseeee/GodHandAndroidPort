#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_00799508
// Address: 0x799508 - 0x799588
void func_00799508_0x799508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799508_0x799508");
#endif

    switch (ctx->pc) {
        case 0x799548u: goto label_799548;
        case 0x79956cu: goto label_79956c;
        case 0x799578u: goto label_799578;
        default: break;
    }

    ctx->pc = 0x799508u;

    // 0x799508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79950c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799510: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799514: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799518: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79951c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799520: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799524: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799528: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799528) {
            ctx->pc = 0x799550u;
            goto label_799550;
        }
    }
    ctx->pc = 0x799530u;
    // 0x799530: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x799534: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x799534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x799538: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79953c: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x799540: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x799544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799540u;
    // 0x799544: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799548u;
    {
        const bool branch_taken_0x799548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799548u;
        // 0x79954c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799548) {
            ctx->pc = 0x79956Cu;
            goto label_79956c;
        }
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799554: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799560: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799564: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799570: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799570u;
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->pc = 0x799574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79957c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799580: 0x3e00008  jr          $ra
    ctx->pc = 0x799580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799580u;
        // 0x799584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799588u;
}
} // namespace gh_r105
