#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A0E8
// Address: 0x79a0e8 - 0x79a190
void func_0079A0E8_0x79a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A0E8_0x79a0e8");
#endif

    switch (ctx->pc) {
        case 0x79a110u: goto label_79a110;
        case 0x79a120u: goto label_79a120;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a150u: goto label_79a150;
        case 0x79a158u: goto label_79a158;
        case 0x79a168u: goto label_79a168;
        case 0x79a174u: goto label_79a174;
        default: break;
    }

    ctx->pc = 0x79a0e8u;

    // 0x79a0e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a0ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a0f4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a0f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a0fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a104: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a108: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A108u;
    SET_GPR_U32(ctx, 31, 0x79A110u);
    ctx->pc = 0x79A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A108u;
    // 0x79a10c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A108u, 0x79A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a114: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a118: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A118u;
        // 0x79a11c: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A12Cu;
            goto label_79a12c;
        }
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a124: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A124u;
    SET_GPR_U32(ctx, 31, 0x79A12Cu);
    ctx->pc = 0x79A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A124u;
    // 0x79a128: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A124u, 0x79A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A12Cu;
label_79a12c:
    // 0x79a12c: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a130: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a134: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A134u;
    SET_GPR_U32(ctx, 31, 0x79A13Cu);
    ctx->pc = 0x79A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A134u;
    // 0x79a138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A134u, 0x79A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A13Cu;
label_79a13c:
    // 0x79a13c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a140: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A140u;
    {
        const bool branch_taken_0x79a140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a140) {
            ctx->pc = 0x79A120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A148u;
    // 0x79a148: 0xc1e65e0  jal         func_799780
    ctx->pc = 0x79A148u;
    SET_GPR_U32(ctx, 31, 0x79A150u);
    ctx->pc = 0x799780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799780u, 0x79A148u, 0x79A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A150u;
label_79a150:
    // 0x79a150: 0xc1e67d2  jal         func_799F48
    ctx->pc = 0x79A150u;
    SET_GPR_U32(ctx, 31, 0x79A158u);
    ctx->pc = 0x799F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799F48u, 0x79A150u, 0x79A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A158u;
label_79a158:
    // 0x79a158: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a15c: 0x2645a190  addiu       $a1, $s2, -0x5E70
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943120));
    // 0x79a160: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A160u;
    SET_GPR_U32(ctx, 31, 0x79A168u);
    ctx->pc = 0x79A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A160u;
    // 0x79a164: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A160u, 0x79A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A168u;
label_79a168:
    // 0x79a168: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a16c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A16Cu;
    SET_GPR_U32(ctx, 31, 0x79A174u);
    ctx->pc = 0x79A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A16Cu;
    // 0x79a170: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A16Cu, 0x79A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A174u;
label_79a174:
    // 0x79a174: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a17c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a184: 0x3e00008  jr          $ra
    ctx->pc = 0x79A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A18Cu;
    // 0x79a18c: 0x0  nop
    ctx->pc = 0x79a18cu;
    // NOP
    ctx->pc = 0x79a190u;
}
} // namespace gh_r300
