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

// Function: func_002017A8
// Address: 0x2017a8 - 0x201840
void func_002017A8_0x2017a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002017A8_0x2017a8");
#endif

    switch (ctx->pc) {
        case 0x2017d0u: goto label_2017d0;
        case 0x2017f8u: goto label_2017f8;
        case 0x201808u: goto label_201808;
        default: break;
    }

    ctx->pc = 0x2017a8u;

    // 0x2017a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2017ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2017acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2017b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2017b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2017b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2017b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2017bc: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x2017bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2017c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2017c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2017c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2017c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017c8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2017c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017cc: 0x0  nop
    ctx->pc = 0x2017ccu;
    // NOP
label_2017d0:
    // 0x2017d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2017d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2017d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2017D4u;
    {
        const bool branch_taken_0x2017d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2017D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017D4u;
        // 0x2017d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017d4) {
            ctx->pc = 0x20182Cu;
            goto label_20182c;
        }
    }
    ctx->pc = 0x2017DCu;
    // 0x2017dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2017dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2017e0: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x2017e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x2017e4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x2017e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2017e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2017E8u;
    {
        const bool branch_taken_0x2017e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017E8u;
        // 0x2017ec: 0x24630088  addiu       $v1, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017e8) {
            ctx->pc = 0x2017D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2017d0;
        }
    }
    ctx->pc = 0x2017F0u;
    // 0x2017f0: 0xc08046c  jal         func_2011B0
    ctx->pc = 0x2017F0u;
    SET_GPR_U32(ctx, 31, 0x2017F8u);
    ctx->pc = 0x2017F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017F0u;
    // 0x2017f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011B0u, 0x2017F0u, 0x2017F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017F8u;
label_2017f8:
    // 0x2017f8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2017f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017fc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x201800: 0x24651100  addiu       $a1, $v1, 0x1100
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4352));
    // 0x201804: 0x0  nop
    ctx->pc = 0x201804u;
    // NOP
label_201808:
    // 0x201808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20180c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20180Cu;
    {
        const bool branch_taken_0x20180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20180c) {
            ctx->pc = 0x201810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20180Cu;
            // 0x201810: 0x24630088  addiu       $v1, $v1, 0x88 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20181Cu;
            goto label_20181c;
        }
    }
    ctx->pc = 0x201814u;
    // 0x201814: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201814u;
    {
        const bool branch_taken_0x201814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201814u;
        // 0x201818: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201814) {
            ctx->pc = 0x20182Cu;
            goto label_20182c;
        }
    }
    ctx->pc = 0x20181Cu;
label_20181c:
    // 0x20181c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x20181cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x201820: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x201820u;
    {
        const bool branch_taken_0x201820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201820u;
        // 0x201824: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201820) {
            ctx->pc = 0x201808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201808;
        }
    }
    ctx->pc = 0x201828u;
    // 0x201828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20182c:
    // 0x20182c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201838: 0x3e00008  jr          $ra
    ctx->pc = 0x201838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201838u;
        // 0x20183c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201840u;
}
