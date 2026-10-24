#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: R102Move__Fv
// Address: 0x7996f0 - 0x799780
void R102Move__Fv_0x7996f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102Move__Fv_0x7996f0");
#endif

    switch (ctx->pc) {
        case 0x799730u: goto label_799730;
        case 0x799758u: goto label_799758;
        default: break;
    }

    ctx->pc = 0x7996f0u;

    // 0x7996f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7996f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7996f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7996f8: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x7996fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7996fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799704: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x799704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x799708: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79970c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799710: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x799710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x799714: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x799714u;
    {
        const bool branch_taken_0x799714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799714) {
            ctx->pc = 0x799718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799714u;
            // 0x799718: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79976Cu;
            goto label_79976c;
        }
    }
    ctx->pc = 0x79971Cu;
    // 0x79971c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799720: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799724: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799728: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799728u;
    SET_GPR_U32(ctx, 31, 0x799730u);
    ctx->pc = 0x79972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799728u;
    // 0x79972c: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799728u, 0x799730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799730u;
label_799730:
    // 0x799730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799734: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799734u;
    {
        const bool branch_taken_0x799734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799734) {
            ctx->pc = 0x799738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799734u;
            // 0x799738: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79976Cu;
            goto label_79976c;
        }
    }
    ctx->pc = 0x79973Cu;
    // 0x79973c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799740: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799744: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799744u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799748: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x79974c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799750: 0xc0a5516  jal         func_295458
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x79975c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799760: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x799764: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799768: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79976c:
    // 0x79976c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79976cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799770: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799774: 0x3e00008  jr          $ra
    ctx->pc = 0x799774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79977Cu;
    // 0x79977c: 0x0  nop
    ctx->pc = 0x79977cu;
    // NOP
    ctx->pc = 0x799780u;
}
} // namespace gh_r102
