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

// Function: iWakeupThread
// Address: 0x3b0a40 - 0x3b0ae0
void iWakeupThread_0x3b0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iWakeupThread_0x3b0a40");
#endif

    switch (ctx->pc) {
        case 0x3b0a54u: goto label_3b0a54;
        case 0x3b0a68u: goto label_3b0a68;
        case 0x3b0ac0u: goto label_3b0ac0;
        default: break;
    }

    ctx->pc = 0x3b0a40u;

    // 0x3b0a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b0a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b0a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b0a48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0a4c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x3b0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x3b0a50: 0xc  syscall     0
    ctx->pc = 0x3b0a50u;
    ctx->pc = 0x3B0A54u;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b0a54:
    // 0x3b0a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a58: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0A58u;
    {
        const bool branch_taken_0x3b0a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x3B0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A58u;
        // 0x3b0a5c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a58) {
            ctx->pc = 0x3B0A70u;
            goto label_3b0a70;
        }
    }
    ctx->pc = 0x3B0A60u;
    // 0x3b0a60: 0xc0ebef8  jal         func_3AFBE0
    ctx->pc = 0x3B0A60u;
    SET_GPR_U32(ctx, 31, 0x3B0A68u);
    ctx->pc = 0x3AFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBE0u, 0x3B0A60u, 0x3B0A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A68u;
label_3b0a68:
    // 0x3b0a68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B0A68u;
    {
        const bool branch_taken_0x3b0a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A68u;
        // 0x3b0a6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a68) {
            ctx->pc = 0x3B0AC8u;
            goto label_3b0ac8;
        }
    }
    ctx->pc = 0x3B0A70u;
label_3b0a70:
    // 0x3b0a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0A70u;
    {
        const bool branch_taken_0x3b0a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A70u;
        // 0x3b0a74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a70) {
            ctx->pc = 0x3B0A84u;
            goto label_3b0a84;
        }
    }
    ctx->pc = 0x3B0A78u;
    // 0x3b0a78: 0x8c43ae48  lw          $v1, -0x51B8($v0)
    ctx->pc = 0x3b0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946376)));
    // 0x3b0a7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0A7Cu;
    {
        const bool branch_taken_0x3b0a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A7Cu;
        // 0x3b0a80: 0x3c030078  lui         $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a7c) {
            ctx->pc = 0x3B0A8Cu;
            goto label_3b0a8c;
        }
    }
    ctx->pc = 0x3B0A84u;
label_3b0a84:
    // 0x3b0a84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B0A84u;
    {
        const bool branch_taken_0x3b0a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A84u;
        // 0x3b0a88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a84) {
            ctx->pc = 0x3B0AC4u;
            goto label_3b0ac4;
        }
    }
    ctx->pc = 0x3B0A8Cu;
label_3b0a8c:
    // 0x3b0a8c: 0x3c050078  lui         $a1, 0x78
    ctx->pc = 0x3b0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)120 << 16));
    // 0x3b0a90: 0x2463df98  addiu       $v1, $v1, -0x2068
    ctx->pc = 0x3b0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959000));
    // 0x3b0a94: 0x8ca4df90  lw          $a0, -0x2070($a1)
    ctx->pc = 0x3b0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x77DF90u));
    // 0x3b0a98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b0a9c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3b0a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3b0aa0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x3b0aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b0aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b0aa8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x3b0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3b0aac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3b0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3b0ab0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3b0ab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ab4: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x3b0ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0ab8: 0xc0ebf34  jal         func_3AFCD0
    ctx->pc = 0x3B0AB8u;
    SET_GPR_U32(ctx, 31, 0x3B0AC0u);
    ctx->pc = 0x3B0ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0AB8u;
    // 0x3b0abc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x3B0AB8u, 0x3B0AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0AC0u;
label_3b0ac0:
    // 0x3b0ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b0ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ac4:
    // 0x3b0ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b0ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0ac8:
    // 0x3b0ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b0ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0acc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0ACCu;
        // 0x3b0ad0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0AD4u;
    // 0x3b0ad4: 0x0  nop
    ctx->pc = 0x3b0ad4u;
    // NOP
    // 0x3b0ad8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b0ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b0adc: 0x0  nop
    ctx->pc = 0x3b0adcu;
    // NOP
    ctx->pc = 0x3b0ae0u;
}
