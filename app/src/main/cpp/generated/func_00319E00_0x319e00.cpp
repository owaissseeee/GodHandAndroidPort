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

// Function: func_00319E00
// Address: 0x319e00 - 0x319fc8
void func_00319E00_0x319e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319E00_0x319e00");
#endif

    switch (ctx->pc) {
        case 0x319e20u: goto label_319e20;
        case 0x319e68u: goto label_319e68;
        case 0x319e74u: goto label_319e74;
        case 0x319ea0u: goto label_319ea0;
        case 0x319eacu: goto label_319eac;
        case 0x319ed8u: goto label_319ed8;
        case 0x319ee4u: goto label_319ee4;
        case 0x319f10u: goto label_319f10;
        case 0x319f1cu: goto label_319f1c;
        case 0x319f48u: goto label_319f48;
        case 0x319f54u: goto label_319f54;
        case 0x319f88u: goto label_319f88;
        case 0x319f94u: goto label_319f94;
        default: break;
    }

    ctx->pc = 0x319e00u;

    // 0x319e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x319e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x319e04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x319e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x319e08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x319e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x319e0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x319e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x319e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x319e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x319e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319e18: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x319E18u;
    SET_GPR_U32(ctx, 31, 0x319E20u);
    ctx->pc = 0x319E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E18u;
    // 0x319e1c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x319E18u, 0x319E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E20u;
label_319e20:
    // 0x319e20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x319e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e24: 0x8e620320  lw          $v0, 0x320($s3)
    ctx->pc = 0x319e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x319e28: 0x9c43003c  lwu         $v1, 0x3C($v0)
    ctx->pc = 0x319e28u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x319e2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x319e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x319e30: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x319e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x319e34: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x319e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x319e38: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x319E38u;
    {
        const bool branch_taken_0x319e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E38u;
        // 0x319e3c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e38) {
            ctx->pc = 0x319F74u;
            goto label_319f74;
        }
    }
    ctx->pc = 0x319E40u;
    // 0x319e40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x319e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x319e44: 0x24420cd0  addiu       $v0, $v0, 0xCD0
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
    // 0x319e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x319e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x319e4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x319e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319e50: 0x800008  jr          $a0
    ctx->pc = 0x319E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x319E58u: goto label_319e58;
            case 0x319E94u: goto label_319e94;
            case 0x319ECCu: goto label_319ecc;
            case 0x319F04u: goto label_319f04;
            case 0x319F3Cu: goto label_319f3c;
            case 0x319F74u: goto label_319f74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319E50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x319E58u;
label_319e58:
    // 0x319e58: 0x1a200054  blez        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x319E58u;
    {
        const bool branch_taken_0x319e58 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E58u;
        // 0x319e5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e58) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319E60u;
    // 0x319e60: 0x3c120002  lui         $s2, 0x2
    ctx->pc = 0x319e60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2 << 16));
    // 0x319e64: 0x0  nop
    ctx->pc = 0x319e64u;
    // NOP
label_319e68:
    // 0x319e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319e6c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319E6Cu;
    SET_GPR_U32(ctx, 31, 0x319E74u);
    ctx->pc = 0x319E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319E6Cu;
    // 0x319e70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319E6Cu, 0x319E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E74u;
label_319e74:
    // 0x319e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319e78: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319e7c: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319e7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319e80: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x319e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x319e84: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319E84u;
    {
        const bool branch_taken_0x319e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E84u;
        // 0x319e88: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e84) {
            ctx->pc = 0x319E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319e68;
        }
    }
    ctx->pc = 0x319E8Cu;
    // 0x319e8c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x319E8Cu;
    {
        const bool branch_taken_0x319e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E8Cu;
        // 0x319e90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e8c) {
            ctx->pc = 0x319FB0u;
            goto label_319fb0;
        }
    }
    ctx->pc = 0x319E94u;
label_319e94:
    // 0x319e94: 0x1a200045  blez        $s1, . + 4 + (0x45 << 2)
    ctx->pc = 0x319E94u;
    {
        const bool branch_taken_0x319e94 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319E94u;
        // 0x319e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319e94) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319E9Cu;
    // 0x319e9c: 0x0  nop
    ctx->pc = 0x319e9cu;
    // NOP
label_319ea0:
    // 0x319ea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ea4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319EA4u;
    SET_GPR_U32(ctx, 31, 0x319EACu);
    ctx->pc = 0x319EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319EA4u;
    // 0x319ea8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319EA4u, 0x319EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EACu;
label_319eac:
    // 0x319eac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319eb0: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319eb4: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319eb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319eb8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x319eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x319ebc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319EBCu;
    {
        const bool branch_taken_0x319ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EBCu;
        // 0x319ec0: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ebc) {
            ctx->pc = 0x319EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319ea0;
        }
    }
    ctx->pc = 0x319EC4u;
    // 0x319ec4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x319EC4u;
    {
        const bool branch_taken_0x319ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EC4u;
        // 0x319ec8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ec4) {
            ctx->pc = 0x319FB0u;
            goto label_319fb0;
        }
    }
    ctx->pc = 0x319ECCu;
label_319ecc:
    // 0x319ecc: 0x1a200037  blez        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x319ECCu;
    {
        const bool branch_taken_0x319ecc = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319ECCu;
        // 0x319ed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ecc) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319ED4u;
    // 0x319ed4: 0x3c120004  lui         $s2, 0x4
    ctx->pc = 0x319ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4 << 16));
label_319ed8:
    // 0x319ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319edc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319EDCu;
    SET_GPR_U32(ctx, 31, 0x319EE4u);
    ctx->pc = 0x319EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319EDCu;
    // 0x319ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319EDCu, 0x319EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EE4u;
label_319ee4:
    // 0x319ee4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319ee8: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319eec: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319eecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319ef0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x319ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x319ef4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319EF4u;
    {
        const bool branch_taken_0x319ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EF4u;
        // 0x319ef8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ef4) {
            ctx->pc = 0x319ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319ed8;
        }
    }
    ctx->pc = 0x319EFCu;
    // 0x319efc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x319EFCu;
    {
        const bool branch_taken_0x319efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EFCu;
        // 0x319f00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319efc) {
            ctx->pc = 0x319FB0u;
            goto label_319fb0;
        }
    }
    ctx->pc = 0x319F04u;
label_319f04:
    // 0x319f04: 0x1a200029  blez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x319F04u;
    {
        const bool branch_taken_0x319f04 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F04u;
        // 0x319f08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f04) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319F0Cu;
    // 0x319f0c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x319f0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
label_319f10:
    // 0x319f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f14: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319F14u;
    SET_GPR_U32(ctx, 31, 0x319F1Cu);
    ctx->pc = 0x319F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F14u;
    // 0x319f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319F14u, 0x319F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F1Cu;
label_319f1c:
    // 0x319f1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319f20: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319f24: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319f24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319f28: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x319f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x319f2c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319F2Cu;
    {
        const bool branch_taken_0x319f2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F2Cu;
        // 0x319f30: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f2c) {
            ctx->pc = 0x319F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319f10;
        }
    }
    ctx->pc = 0x319F34u;
    // 0x319f34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x319F34u;
    {
        const bool branch_taken_0x319f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F34u;
        // 0x319f38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f34) {
            ctx->pc = 0x319FB0u;
            goto label_319fb0;
        }
    }
    ctx->pc = 0x319F3Cu;
label_319f3c:
    // 0x319f3c: 0x1a20001b  blez        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x319F3Cu;
    {
        const bool branch_taken_0x319f3c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F3Cu;
        // 0x319f40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f3c) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319F44u;
    // 0x319f44: 0x3c120020  lui         $s2, 0x20
    ctx->pc = 0x319f44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
label_319f48:
    // 0x319f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f4c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319F4Cu;
    SET_GPR_U32(ctx, 31, 0x319F54u);
    ctx->pc = 0x319F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F4Cu;
    // 0x319f50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319F4Cu, 0x319F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F54u;
label_319f54:
    // 0x319f54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319f58: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319f5c: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319f5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319f60: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x319f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x319f64: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319F64u;
    {
        const bool branch_taken_0x319f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F64u;
        // 0x319f68: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f64) {
            ctx->pc = 0x319F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319f48;
        }
    }
    ctx->pc = 0x319F6Cu;
    // 0x319f6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x319F6Cu;
    {
        const bool branch_taken_0x319f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F6Cu;
        // 0x319f70: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f6c) {
            ctx->pc = 0x319FB0u;
            goto label_319fb0;
        }
    }
    ctx->pc = 0x319F74u;
label_319f74:
    // 0x319f74: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x319F74u;
    {
        const bool branch_taken_0x319f74 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F74u;
        // 0x319f78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f74) {
            ctx->pc = 0x319FACu;
            goto label_319fac;
        }
    }
    ctx->pc = 0x319F7Cu;
    // 0x319f7c: 0x3c12efd9  lui         $s2, 0xEFD9
    ctx->pc = 0x319f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61401 << 16));
    // 0x319f80: 0x3652fffd  ori         $s2, $s2, 0xFFFD
    ctx->pc = 0x319f80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65533);
    // 0x319f84: 0x0  nop
    ctx->pc = 0x319f84u;
    // NOP
label_319f88:
    // 0x319f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f8c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319F8Cu;
    SET_GPR_U32(ctx, 31, 0x319F94u);
    ctx->pc = 0x319F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F8Cu;
    // 0x319f90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319F8Cu, 0x319F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F94u;
label_319f94:
    // 0x319f94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319f98: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x319f9c: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x319f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319fa0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x319fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x319fa4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319FA4u;
    {
        const bool branch_taken_0x319fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FA4u;
        // 0x319fa8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fa4) {
            ctx->pc = 0x319F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319f88;
        }
    }
    ctx->pc = 0x319FACu;
label_319fac:
    // 0x319fac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x319facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_319fb0:
    // 0x319fb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x319fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x319fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319fb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x319fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x319FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC0u;
        // 0x319fc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319FC8u;
}
