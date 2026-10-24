#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __cplus_type_matcher
// Address: 0x7c9f90 - 0x7ca000
void ps2___cplus_type_matcher_0x7c9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cplus_type_matcher_0x7c9f90");
#endif

    switch (ctx->pc) {
        case 0x7c9f90u: goto label_7c9f90;
        case 0x7c9f94u: goto label_7c9f94;
        case 0x7c9f98u: goto label_7c9f98;
        case 0x7c9f9cu: goto label_7c9f9c;
        case 0x7c9fa0u: goto label_7c9fa0;
        case 0x7c9fa4u: goto label_7c9fa4;
        case 0x7c9fa8u: goto label_7c9fa8;
        case 0x7c9facu: goto label_7c9fac;
        case 0x7c9fb0u: goto label_7c9fb0;
        case 0x7c9fb4u: goto label_7c9fb4;
        case 0x7c9fb8u: goto label_7c9fb8;
        case 0x7c9fbcu: goto label_7c9fbc;
        case 0x7c9fc0u: goto label_7c9fc0;
        case 0x7c9fc4u: goto label_7c9fc4;
        case 0x7c9fc8u: goto label_7c9fc8;
        case 0x7c9fccu: goto label_7c9fcc;
        case 0x7c9fd0u: goto label_7c9fd0;
        case 0x7c9fd4u: goto label_7c9fd4;
        case 0x7c9fd8u: goto label_7c9fd8;
        case 0x7c9fdcu: goto label_7c9fdc;
        case 0x7c9fe0u: goto label_7c9fe0;
        case 0x7c9fe4u: goto label_7c9fe4;
        case 0x7c9fe8u: goto label_7c9fe8;
        case 0x7c9fecu: goto label_7c9fec;
        case 0x7c9ff0u: goto label_7c9ff0;
        case 0x7c9ff4u: goto label_7c9ff4;
        case 0x7c9ff8u: goto label_7c9ff8;
        case 0x7c9ffcu: goto label_7c9ffc;
        default: break;
    }

    ctx->pc = 0x7c9f90u;

label_7c9f90:
    // 0x7c9f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_7c9f94:
    // 0x7c9f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7c9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_7c9f98:
    // 0x7c9f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_7c9f9c:
    // 0x7c9f9c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_7c9fa0:
    if (ctx->pc == 0x7C9FA0u) {
        ctx->pc = 0x7C9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F9Cu;
        // 0x7c9fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FA4u;
        goto label_7c9fa4;
    }
    ctx->pc = 0x7C9F9Cu;
    {
        const bool branch_taken_0x7c9f9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F9Cu;
        // 0x7c9fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9f9c) {
            ctx->pc = 0x7C9FB4u;
            goto label_7c9fb4;
        }
    }
    ctx->pc = 0x7C9FA4u;
label_7c9fa4:
    // 0x7c9fa4: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x7c9fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_7c9fa8:
    // 0x7c9fa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7c9fac:
    // 0x7c9fac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_7c9fb0:
    if (ctx->pc == 0x7C9FB0u) {
        ctx->pc = 0x7C9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FACu;
        // 0x7c9fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FB4u;
        goto label_7c9fb4;
    }
    ctx->pc = 0x7C9FACu;
    {
        const bool branch_taken_0x7c9fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FACu;
        // 0x7c9fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9fac) {
            ctx->pc = 0x7C9FECu;
            goto label_7c9fec;
        }
    }
    ctx->pc = 0x7C9FB4u;
label_7c9fb4:
    // 0x7c9fb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7c9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_7c9fb8:
    // 0x7c9fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x7c9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_7c9fbc:
    // 0x7c9fbc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_7c9fc0:
    if (ctx->pc == 0x7C9FC0u) {
        ctx->pc = 0x7C9FC4u;
        goto label_7c9fc4;
    }
    ctx->pc = 0x7C9FBCu;
    {
        const bool branch_taken_0x7c9fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x7c9fbc) {
            ctx->pc = 0x7C9FCCu;
            goto label_7c9fcc;
        }
    }
    ctx->pc = 0x7C9FC4u;
label_7c9fc4:
    // 0x7c9fc4: 0x10000009  b           . + 4 + (0x9 << 2)
label_7c9fc8:
    if (ctx->pc == 0x7C9FC8u) {
        ctx->pc = 0x7C9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FC4u;
        // 0x7c9fc8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FCCu;
        goto label_7c9fcc;
    }
    ctx->pc = 0x7C9FC4u;
    {
        const bool branch_taken_0x7c9fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FC4u;
        // 0x7c9fc8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9fc4) {
            ctx->pc = 0x7C9FECu;
            goto label_7c9fec;
        }
    }
    ctx->pc = 0x7C9FCCu;
label_7c9fcc:
    // 0x7c9fcc: 0xa0f809  jalr        $a1
label_7c9fd0:
    if (ctx->pc == 0x7C9FD0u) {
        ctx->pc = 0x7C9FD4u;
        goto label_7c9fd4;
    }
    ctx->pc = 0x7C9FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x7C9FD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9FCCu, 0x7C9FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7C9FD4u;
label_7c9fd4:
    // 0x7c9fd4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x7c9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_7c9fd8:
    // 0x7c9fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7c9fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7c9fdc:
    // 0x7c9fdc: 0xc1f297a  jal         func_7CA5E8
label_7c9fe0:
    if (ctx->pc == 0x7C9FE0u) {
        ctx->pc = 0x7C9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FDCu;
        // 0x7c9fe0: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FE4u;
        goto label_7c9fe4;
    }
    ctx->pc = 0x7C9FDCu;
    SET_GPR_U32(ctx, 31, 0x7C9FE4u);
    ctx->pc = 0x7C9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C9FDCu;
    // 0x7c9fe0: 0x8e060028  lw          $a2, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CA5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CA5E8u, 0x7C9FDCu, 0x7C9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9FE4u;
label_7c9fe4:
    // 0x7c9fe4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_7c9fe8:
    if (ctx->pc == 0x7C9FE8u) {
        ctx->pc = 0x7C9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FE4u;
        // 0x7c9fe8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FECu;
        goto label_7c9fec;
    }
    ctx->pc = 0x7C9FE4u;
    {
        const bool branch_taken_0x7c9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c9fe4) {
            ctx->pc = 0x7C9FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C9FE4u;
            // 0x7c9fe8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C9FECu;
            goto label_7c9fec;
        }
    }
    ctx->pc = 0x7C9FECu;
label_7c9fec:
    // 0x7c9fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c9fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7c9ff0:
    // 0x7c9ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7c9ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c9ff4:
    // 0x7c9ff4: 0x3e00008  jr          $ra
label_7c9ff8:
    if (ctx->pc == 0x7C9FF8u) {
        ctx->pc = 0x7C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FF4u;
        // 0x7c9ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7C9FFCu;
        goto label_7c9ffc;
    }
    ctx->pc = 0x7C9FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9FF4u;
        // 0x7c9ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9FFCu;
label_7c9ffc:
    // 0x7c9ffc: 0x0  nop
    ctx->pc = 0x7c9ffcu;
    // NOP
    ctx->pc = 0x7ca000u;
}
} // namespace gh_mcport
