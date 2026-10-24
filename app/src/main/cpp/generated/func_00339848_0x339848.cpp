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

// Function: func_00339848
// Address: 0x339848 - 0x339898
void func_00339848_0x339848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339848_0x339848");
#endif

    switch (ctx->pc) {
        case 0x339848u: goto label_339848;
        case 0x33984cu: goto label_33984c;
        case 0x339850u: goto label_339850;
        case 0x339854u: goto label_339854;
        case 0x339858u: goto label_339858;
        case 0x33985cu: goto label_33985c;
        case 0x339860u: goto label_339860;
        case 0x339864u: goto label_339864;
        case 0x339868u: goto label_339868;
        case 0x33986cu: goto label_33986c;
        case 0x339870u: goto label_339870;
        case 0x339874u: goto label_339874;
        case 0x339878u: goto label_339878;
        case 0x33987cu: goto label_33987c;
        case 0x339880u: goto label_339880;
        case 0x339884u: goto label_339884;
        case 0x339888u: goto label_339888;
        case 0x33988cu: goto label_33988c;
        case 0x339890u: goto label_339890;
        case 0x339894u: goto label_339894;
        default: break;
    }

    ctx->pc = 0x339848u;

label_339848:
    // 0x339848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33984c:
    // 0x33984c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339850:
    // 0x339850: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_339854:
    if (ctx->pc == 0x339854u) {
        ctx->pc = 0x339854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339850u;
        // 0x339854: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339858u;
        goto label_339858;
    }
    ctx->pc = 0x339850u;
    {
        const bool branch_taken_0x339850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x339854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339850u;
        // 0x339854: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339850) {
            ctx->pc = 0x339860u;
            goto label_339860;
        }
    }
    ctx->pc = 0x339858u;
label_339858:
    // 0x339858: 0x1000000b  b           . + 4 + (0xB << 2)
label_33985c:
    if (ctx->pc == 0x33985Cu) {
        ctx->pc = 0x33985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339858u;
        // 0x33985c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339860u;
        goto label_339860;
    }
    ctx->pc = 0x339858u;
    {
        const bool branch_taken_0x339858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339858u;
        // 0x33985c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339858) {
            ctx->pc = 0x339888u;
            goto label_339888;
        }
    }
    ctx->pc = 0x339860u;
label_339860:
    // 0x339860: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_339864:
    if (ctx->pc == 0x339864u) {
        ctx->pc = 0x339864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339860u;
        // 0x339864: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339868u;
        goto label_339868;
    }
    ctx->pc = 0x339860u;
    {
        const bool branch_taken_0x339860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339860) {
            ctx->pc = 0x339864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339860u;
            // 0x339864: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339870u;
            goto label_339870;
        }
    }
    ctx->pc = 0x339868u;
label_339868:
    // 0x339868: 0x10000007  b           . + 4 + (0x7 << 2)
label_33986c:
    if (ctx->pc == 0x33986Cu) {
        ctx->pc = 0x33986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339868u;
        // 0x33986c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339870u;
        goto label_339870;
    }
    ctx->pc = 0x339868u;
    {
        const bool branch_taken_0x339868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339868u;
        // 0x33986c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339868) {
            ctx->pc = 0x339888u;
            goto label_339888;
        }
    }
    ctx->pc = 0x339870u;
label_339870:
    // 0x339870: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_339874:
    if (ctx->pc == 0x339874u) {
        ctx->pc = 0x339874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339870u;
        // 0x339874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339878u;
        goto label_339878;
    }
    ctx->pc = 0x339870u;
    {
        const bool branch_taken_0x339870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339870) {
            ctx->pc = 0x339874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339870u;
            // 0x339874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339888u;
            goto label_339888;
        }
    }
    ctx->pc = 0x339878u;
label_339878:
    // 0x339878: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x339878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_33987c:
    // 0x33987c: 0x40f809  jalr        $v0
label_339880:
    if (ctx->pc == 0x339880u) {
        ctx->pc = 0x339880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33987Cu;
        // 0x339880: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339884u;
        goto label_339884;
    }
    ctx->pc = 0x33987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339884u);
        ctx->pc = 0x339880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33987Cu;
        // 0x339880: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33987Cu, 0x339884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339884u;
label_339884:
    // 0x339884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x339884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339888:
    // 0x339888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33988c:
    // 0x33988c: 0x3e00008  jr          $ra
label_339890:
    if (ctx->pc == 0x339890u) {
        ctx->pc = 0x339890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33988Cu;
        // 0x339890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339894u;
        goto label_339894;
    }
    ctx->pc = 0x33988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33988Cu;
        // 0x339890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339894u;
label_339894:
    // 0x339894: 0x0  nop
    ctx->pc = 0x339894u;
    // NOP
    ctx->pc = 0x339898u;
}
