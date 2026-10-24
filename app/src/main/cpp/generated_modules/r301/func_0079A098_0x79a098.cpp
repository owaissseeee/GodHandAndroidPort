#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079A098
// Address: 0x79a098 - 0x79a150
void func_0079A098_0x79a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A098_0x79a098");
#endif

    switch (ctx->pc) {
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a100u: goto label_79a100;
        case 0x79a110u: goto label_79a110;
        case 0x79a128u: goto label_79a128;
        case 0x79a130u: goto label_79a130;
        case 0x79a13cu: goto label_79a13c;
        default: break;
    }

    ctx->pc = 0x79a098u;

    // 0x79a098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a09c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a0a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a0a8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A0B4u;
    {
        const bool branch_taken_0x79a0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B4u;
        // 0x79a0b8: 0x8c83e010  lw          $v1, -0x1FF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0b4) {
            ctx->pc = 0x79A0D0u;
            goto label_79a0d0;
        }
    }
    ctx->pc = 0x79A0BCu;
    // 0x79a0bc: 0x0  nop
    ctx->pc = 0x79a0bcu;
    // NOP
label_79a0c0:
    // 0x79a0c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A0C4u;
    SET_GPR_U32(ctx, 31, 0x79A0CCu);
    ctx->pc = 0x79A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C4u;
    // 0x79a0c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A0C4u, 0x79A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0CCu;
label_79a0cc:
    // 0x79a0cc: 0x8e23e010  lw          $v1, -0x1FF0($s1)
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959120)));
label_79a0d0:
    // 0x79a0d0: 0x9c62009c  lwu         $v0, 0x9C($v1)
    ctx->pc = 0x79a0d0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x79a0d4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x79a0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x79a0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a0dc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79A0DCu;
    {
        const bool branch_taken_0x79a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0DCu;
        // 0x79a0e0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0dc) {
            ctx->pc = 0x79A0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0c0;
        }
    }
    ctx->pc = 0x79A0E4u;
    // 0x79a0e4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a0e8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A0E8u;
    SET_GPR_U32(ctx, 31, 0x79A0F0u);
    ctx->pc = 0x79A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0E8u;
    // 0x79a0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A0E8u, 0x79A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0F0u;
label_79a0f0:
    // 0x79a0f0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a0f4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a0f8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A0F8u;
    SET_GPR_U32(ctx, 31, 0x79A100u);
    ctx->pc = 0x79A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F8u;
    // 0x79a0fc: 0x24a5dd30  addiu       $a1, $a1, -0x22D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A0F8u, 0x79A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a104: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x79a108: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A108u;
    SET_GPR_U32(ctx, 31, 0x79A110u);
    ctx->pc = 0x79A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A108u;
    // 0x79a10c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A108u, 0x79A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x8e23e010  lw          $v1, -0x1FF0($s1)
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294959120)));
    // 0x79a114: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x79a118: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x79a11c: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x79a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x79a120: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A120u;
    SET_GPR_U32(ctx, 31, 0x79A128u);
    ctx->pc = 0x79A124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A120u;
    // 0x79a124: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A120u, 0x79A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A128u;
label_79a128:
    // 0x79a128: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A128u;
    SET_GPR_U32(ctx, 31, 0x79A130u);
    ctx->pc = 0x79A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A128u;
    // 0x79a12c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A128u, 0x79A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A130u;
label_79a130:
    // 0x79a130: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a134: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A134u;
    SET_GPR_U32(ctx, 31, 0x79A13Cu);
    ctx->pc = 0x79A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A134u;
    // 0x79a138: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A134u, 0x79A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A13Cu;
label_79a13c:
    // 0x79a13c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a148: 0x3e00008  jr          $ra
    ctx->pc = 0x79A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A148u;
        // 0x79a14c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A150u;
}
} // namespace gh_r301
