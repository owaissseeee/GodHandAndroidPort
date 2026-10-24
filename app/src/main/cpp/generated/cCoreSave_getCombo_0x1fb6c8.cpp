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

// Function: cCoreSave_getCombo
// Address: 0x1fb6c8 - 0x1fb750
void cCoreSave_getCombo_0x1fb6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getCombo_0x1fb6c8");
#endif

    switch (ctx->pc) {
        case 0x1fb704u: goto label_1fb704;
        default: break;
    }

    ctx->pc = 0x1fb6c8u;

    // 0x1fb6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fb6cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fb6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fb6d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fb6d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fb6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb6d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fb6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fb6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb6e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb6e8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB6E8u;
    {
        const bool branch_taken_0x1fb6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6E8u;
        // 0x1fb6ec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6e8) {
            ctx->pc = 0x1FB734u;
            goto label_1fb734;
        }
    }
    ctx->pc = 0x1FB6F0u;
    // 0x1fb6f0: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1fb6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb6f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB6F4u;
    {
        const bool branch_taken_0x1fb6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F4u;
        // 0x1fb6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6f4) {
            ctx->pc = 0x1FB734u;
            goto label_1fb734;
        }
    }
    ctx->pc = 0x1FB6FCu;
    // 0x1fb6fc: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x1FB6FCu;
    SET_GPR_U32(ctx, 31, 0x1FB704u);
    ctx->pc = 0x1FB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB6FCu;
    // 0x1fb700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x1FB6FCu, 0x1FB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB704u;
label_1fb704:
    // 0x1fb704: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fb704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fb708: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB708u;
    {
        const bool branch_taken_0x1fb708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB708u;
        // 0x1fb70c: 0x2e420006  sltiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb708) {
            ctx->pc = 0x1FB734u;
            goto label_1fb734;
        }
    }
    ctx->pc = 0x1FB710u;
    // 0x1fb710: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB710u;
    {
        const bool branch_taken_0x1fb710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB710u;
        // 0x1fb714: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb710) {
            ctx->pc = 0x1FB734u;
            goto label_1fb734;
        }
    }
    ctx->pc = 0x1FB718u;
    // 0x1fb718: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fb718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb71c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1fb71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fb720: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fb720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fb724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb728: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB72Cu;
    {
        const bool branch_taken_0x1fb72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB72Cu;
        // 0x1fb730: 0x8c8201b0  lw          $v0, 0x1B0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb72c) {
            ctx->pc = 0x1FB738u;
            goto label_1fb738;
        }
    }
    ctx->pc = 0x1FB734u;
label_1fb734:
    // 0x1fb734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb738:
    // 0x1fb738: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fb738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb73c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb73cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb740: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fb740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb748: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB748u;
        // 0x1fb74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB750u;
}
