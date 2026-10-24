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

// Function: cOm4f_syncDoor
// Address: 0x1a4f38 - 0x1a4fe0
void cOm4f_syncDoor_0x1a4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_syncDoor_0x1a4f38");
#endif

    switch (ctx->pc) {
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fccu: goto label_1a4fcc;
        default: break;
    }

    ctx->pc = 0x1a4f38u;

    // 0x1a4f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f48: 0x8e020790  lw          $v0, 0x790($s0)
    ctx->pc = 0x1a4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    // 0x1a4f4c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A4F4Cu;
    {
        const bool branch_taken_0x1a4f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f4c) {
            ctx->pc = 0x1A4F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4F4Cu;
            // 0x1a4f50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4F54u;
    // 0x1a4f54: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x1A4F54u;
    SET_GPR_U32(ctx, 31, 0x1A4F5Cu);
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x1A4F54u, 0x1A4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F5Cu;
label_1a4f5c:
    // 0x1a4f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4f60: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4F60u;
    {
        const bool branch_taken_0x1a4f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4f60) {
            ctx->pc = 0x1A4F90u;
            goto label_1a4f90;
        }
    }
    ctx->pc = 0x1A4F68u;
    // 0x1a4f68: 0xc06f764  jal         func_1BDD90
    ctx->pc = 0x1A4F68u;
    SET_GPR_U32(ctx, 31, 0x1A4F70u);
    ctx->pc = 0x1A4F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F68u;
    // 0x1a4f6c: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD90u, 0x1A4F68u, 0x1A4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F70u;
label_1a4f70:
    // 0x1a4f70: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4F70u;
    {
        const bool branch_taken_0x1a4f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f70) {
            ctx->pc = 0x1A4F90u;
            goto label_1a4f90;
        }
    }
    ctx->pc = 0x1A4F78u;
    // 0x1a4f78: 0xc06f766  jal         func_1BDD98
    ctx->pc = 0x1A4F78u;
    SET_GPR_U32(ctx, 31, 0x1A4F80u);
    ctx->pc = 0x1A4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F78u;
    // 0x1a4f7c: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD98u, 0x1A4F78u, 0x1A4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F80u;
label_1a4f80:
    // 0x1a4f80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4F80u;
    {
        const bool branch_taken_0x1a4f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f80) {
            ctx->pc = 0x1A4F90u;
            goto label_1a4f90;
        }
    }
    ctx->pc = 0x1A4F88u;
    // 0x1a4f88: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x1A4F88u;
    SET_GPR_U32(ctx, 31, 0x1A4F90u);
    ctx->pc = 0x1A4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F88u;
    // 0x1a4f8c: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x1A4F88u, 0x1A4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F90u;
label_1a4f90:
    // 0x1a4f90: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x1A4F90u;
    SET_GPR_U32(ctx, 31, 0x1A4F98u);
    ctx->pc = 0x1A4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F90u;
    // 0x1a4f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x1A4F90u, 0x1A4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F98u;
label_1a4f98:
    // 0x1a4f98: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4F98u;
    {
        const bool branch_taken_0x1a4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f98) {
            ctx->pc = 0x1A4F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4F98u;
            // 0x1a4f9c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4FA0u;
    // 0x1a4fa0: 0xc06f764  jal         func_1BDD90
    ctx->pc = 0x1A4FA0u;
    SET_GPR_U32(ctx, 31, 0x1A4FA8u);
    ctx->pc = 0x1A4FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FA0u;
    // 0x1a4fa4: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD90u, 0x1A4FA0u, 0x1A4FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4fac: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4FACu;
    {
        const bool branch_taken_0x1a4fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4fac) {
            ctx->pc = 0x1A4FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4FACu;
            // 0x1a4fb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4FB4u;
    // 0x1a4fb4: 0xc06f766  jal         func_1BDD98
    ctx->pc = 0x1A4FB4u;
    SET_GPR_U32(ctx, 31, 0x1A4FBCu);
    ctx->pc = 0x1A4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FB4u;
    // 0x1a4fb8: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD98u, 0x1A4FB4u, 0x1A4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FBCu;
label_1a4fbc:
    // 0x1a4fbc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4FBCu;
            // 0x1a4fc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4FC4u;
    // 0x1a4fc4: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x1A4FC4u;
    SET_GPR_U32(ctx, 31, 0x1A4FCCu);
    ctx->pc = 0x1A4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FC4u;
    // 0x1a4fc8: 0x8e040790  lw          $a0, 0x790($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1936)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x1A4FC4u, 0x1A4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FCCu;
label_1a4fcc:
    // 0x1a4fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a4fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4fd0:
    // 0x1a4fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FD4u;
        // 0x1a4fd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4FDCu;
    // 0x1a4fdc: 0x0  nop
    ctx->pc = 0x1a4fdcu;
    // NOP
    ctx->pc = 0x1a4fe0u;
}
