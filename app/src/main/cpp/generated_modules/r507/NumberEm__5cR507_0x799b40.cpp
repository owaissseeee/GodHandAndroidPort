#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: NumberEm__5cR507
// Address: 0x799b40 - 0x799be8
void NumberEm__5cR507_0x799b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NumberEm__5cR507_0x799b40");
#endif

    switch (ctx->pc) {
        case 0x799b68u: goto label_799b68;
        case 0x799bb8u: goto label_799bb8;
        default: break;
    }

    ctx->pc = 0x799b40u;

    // 0x799b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799b44: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799b48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799b4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799b50: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799b54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b58: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799B58u;
    {
        const bool branch_taken_0x799b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b58) {
            ctx->pc = 0x799BD0u;
            goto label_799bd0;
        }
    }
    ctx->pc = 0x799B60u;
    // 0x799b60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799b64: 0x0  nop
    ctx->pc = 0x799b64u;
    // NOP
label_799b68:
    // 0x799b68: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799B68u;
    {
        const bool branch_taken_0x799b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b68) {
            ctx->pc = 0x799B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B68u;
            // 0x799b6c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799B70u;
    // 0x799b70: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799b70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x799b74: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x799B80u;
    // 0x799b80: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799b88:
    // 0x799b88: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799b8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B8Cu;
        // 0x799b90: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799BC4u;
            goto label_799bc4;
        }
    }
    ctx->pc = 0x799B94u;
    // 0x799b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B94u;
    {
        const bool branch_taken_0x799b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B94u;
        // 0x799b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b94) {
            ctx->pc = 0x799BA4u;
            goto label_799ba4;
        }
    }
    ctx->pc = 0x799B9Cu;
    // 0x799b9c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799ba0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ba4:
    // 0x799ba4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799ba8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA8u;
            // 0x799bac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799BB0u;
    // 0x799bb0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799BB0u;
    SET_GPR_U32(ctx, 31, 0x799BB8u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799BB0u, 0x799BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799bbc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799bc0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799bc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_799bc4:
    // 0x799bc4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799bc8:
    // 0x799bc8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799BC8u;
    {
        const bool branch_taken_0x799bc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bc8) {
            ctx->pc = 0x799BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BC8u;
            // 0x799bcc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799be0: 0x3e00008  jr          $ra
    ctx->pc = 0x799BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE0u;
        // 0x799be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BE8u;
}
} // namespace gh_r507
