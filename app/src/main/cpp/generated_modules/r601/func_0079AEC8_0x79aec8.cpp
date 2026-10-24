#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_0079AEC8
// Address: 0x79aec8 - 0x79afc0
void func_0079AEC8_0x79aec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AEC8_0x79aec8");
#endif

    switch (ctx->pc) {
        case 0x79af00u: goto label_79af00;
        case 0x79af34u: goto label_79af34;
        case 0x79af80u: goto label_79af80;
        case 0x79af90u: goto label_79af90;
        case 0x79afa0u: goto label_79afa0;
        case 0x79afb0u: goto label_79afb0;
        default: break;
    }

    ctx->pc = 0x79aec8u;

    // 0x79aec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79aecc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79aed4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79aed8: 0x8045ba98  lb          $a1, -0x4568($v0)
    ctx->pc = 0x79aed8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79BA98u));
    // 0x79aedc: 0x2448ba98  addiu       $t0, $v0, -0x4568
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949528));
    // 0x79aee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aee4: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79aee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79aee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79aee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79aeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aef0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AEF0u;
    {
        const bool branch_taken_0x79aef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEF0u;
        // 0x79aef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aef0) {
            ctx->pc = 0x79AF28u;
            goto label_79af28;
        }
    }
    ctx->pc = 0x79AEF8u;
    // 0x79aef8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79aef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aefc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79aefcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_79af00:
    // 0x79af00: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79af00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79af04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79af08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79af0c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79af0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79af10: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79af10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79af14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AF14u;
    {
        const bool branch_taken_0x79af14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF14u;
        // 0x79af18: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af14) {
            ctx->pc = 0x79AF28u;
            goto label_79af28;
        }
    }
    ctx->pc = 0x79AF1Cu;
    // 0x79af1c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79af1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79af20: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AF20u;
    {
        const bool branch_taken_0x79af20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79af20) {
            ctx->pc = 0x79AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF20u;
            // 0x79af24: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79af00;
        }
    }
    ctx->pc = 0x79AF28u;
label_79af28:
    // 0x79af28: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af2c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AF2Cu;
    SET_GPR_U32(ctx, 31, 0x79AF34u);
    ctx->pc = 0x79AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF2Cu;
    // 0x79af30: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AF2Cu, 0x79AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF34u;
label_79af34:
    // 0x79af34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79af38: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79AF38u;
    {
        const bool branch_taken_0x79af38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF38u;
        // 0x79af3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af38) {
            ctx->pc = 0x79AFB0u;
            goto label_79afb0;
        }
    }
    ctx->pc = 0x79AF40u;
    // 0x79af40: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79AF40u;
    {
        const bool branch_taken_0x79af40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF40u;
        // 0x79af44: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af40) {
            ctx->pc = 0x79AF98u;
            goto label_79af98;
        }
    }
    ctx->pc = 0x79AF48u;
    // 0x79af48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AF48u;
    {
        const bool branch_taken_0x79af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79af48) {
            ctx->pc = 0x79AF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AF48u;
            // 0x79af4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AF60u;
            goto label_79af60;
        }
    }
    ctx->pc = 0x79AF50u;
    // 0x79af50: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AF50u;
    {
        const bool branch_taken_0x79af50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF50u;
        // 0x79af54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af50) {
            ctx->pc = 0x79AF78u;
            goto label_79af78;
        }
    }
    ctx->pc = 0x79AF58u;
    // 0x79af58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x79AF58u;
    {
        const bool branch_taken_0x79af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF58u;
        // 0x79af5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af58) {
            ctx->pc = 0x79AFB8u;
            goto label_79afb8;
        }
    }
    ctx->pc = 0x79AF60u;
label_79af60:
    // 0x79af60: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AF60u;
    {
        const bool branch_taken_0x79af60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF60u;
        // 0x79af64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af60) {
            ctx->pc = 0x79AF88u;
            goto label_79af88;
        }
    }
    ctx->pc = 0x79AF68u;
    // 0x79af68: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79AF68u;
    {
        const bool branch_taken_0x79af68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF68u;
        // 0x79af6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af68) {
            ctx->pc = 0x79AFA8u;
            goto label_79afa8;
        }
    }
    ctx->pc = 0x79AF70u;
    // 0x79af70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79AF70u;
    {
        const bool branch_taken_0x79af70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF70u;
        // 0x79af74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af70) {
            ctx->pc = 0x79AFB8u;
            goto label_79afb8;
        }
    }
    ctx->pc = 0x79AF78u;
label_79af78:
    // 0x79af78: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x79AF78u;
    SET_GPR_U32(ctx, 31, 0x79AF80u);
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x79AF78u, 0x79AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF80u;
label_79af80:
    // 0x79af80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AF80u;
    {
        const bool branch_taken_0x79af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF80u;
        // 0x79af84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af80) {
            ctx->pc = 0x79AFB4u;
            goto label_79afb4;
        }
    }
    ctx->pc = 0x79AF88u;
label_79af88:
    // 0x79af88: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x79AF88u;
    SET_GPR_U32(ctx, 31, 0x79AF90u);
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x79AF88u, 0x79AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF90u;
label_79af90:
    // 0x79af90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79AF90u;
    {
        const bool branch_taken_0x79af90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF90u;
        // 0x79af94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af90) {
            ctx->pc = 0x79AFB4u;
            goto label_79afb4;
        }
    }
    ctx->pc = 0x79AF98u;
label_79af98:
    // 0x79af98: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x79AF98u;
    SET_GPR_U32(ctx, 31, 0x79AFA0u);
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x79AF98u, 0x79AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFA0u;
label_79afa0:
    // 0x79afa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79AFA0u;
    {
        const bool branch_taken_0x79afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFA0u;
        // 0x79afa4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afa0) {
            ctx->pc = 0x79AFB4u;
            goto label_79afb4;
        }
    }
    ctx->pc = 0x79AFA8u;
label_79afa8:
    // 0x79afa8: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x79AFA8u;
    SET_GPR_U32(ctx, 31, 0x79AFB0u);
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x79AFA8u, 0x79AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFB0u;
label_79afb0:
    // 0x79afb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79afb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79afb4:
    // 0x79afb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79afb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79afb8:
    // 0x79afb8: 0x3e00008  jr          $ra
    ctx->pc = 0x79AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFB8u;
        // 0x79afbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AFC0u;
}
} // namespace gh_r601
