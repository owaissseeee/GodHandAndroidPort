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

// Function: InitExecPS2
// Address: 0x3b6738 - 0x3b67e8
void InitExecPS2_0x3b6738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitExecPS2_0x3b6738");
#endif

    switch (ctx->pc) {
        case 0x3b6750u: goto label_3b6750;
        case 0x3b6770u: goto label_3b6770;
        case 0x3b6788u: goto label_3b6788;
        case 0x3b6790u: goto label_3b6790;
        case 0x3b6798u: goto label_3b6798;
        case 0x3b67a4u: goto label_3b67a4;
        case 0x3b67a8u: goto label_3b67a8;
        case 0x3b67b0u: goto label_3b67b0;
        case 0x3b67c0u: goto label_3b67c0;
        default: break;
    }

    ctx->pc = 0x3b6738u;

    // 0x3b6738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b6738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b673c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b6740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b6744: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b6744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b6748: 0xc0ed9b4  jal         func_3B66D0
    ctx->pc = 0x3B6748u;
    SET_GPR_U32(ctx, 31, 0x3B6750u);
    ctx->pc = 0x3B674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6748u;
    // 0x3b674c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B66D0u, 0x3B6748u, 0x3B6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6750u;
label_3b6750:
    // 0x3b6750: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B6750u;
    {
        const bool branch_taken_0x3b6750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6750u;
        // 0x3b6754: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6750) {
            ctx->pc = 0x3B67CCu;
            goto label_3b67cc;
        }
    }
    ctx->pc = 0x3B6758u;
    // 0x3b6758: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3b6758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b675c: 0x2450b6c8  addiu       $s0, $v0, -0x4938
    ctx->pc = 0x3b675cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948552));
    // 0x3b6760: 0x8c44b6c8  lw          $a0, -0x4938($v0)
    ctx->pc = 0x3b6760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948552)));
    // 0x3b6764: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b6764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b6768: 0xc0ed99a  jal         func_3B6668
    ctx->pc = 0x3B6768u;
    SET_GPR_U32(ctx, 31, 0x3B6770u);
    ctx->pc = 0x3B676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6768u;
    // 0x3b676c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6668u, 0x3B6768u, 0x3B6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6770u;
label_3b6770:
    // 0x3b6770: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b6770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b6774: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x3b6774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x3b6778: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x3b6778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x3b677c: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x3b677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x3b6780: 0xc0ed99e  jal         func_3B6678
    ctx->pc = 0x3B6780u;
    SET_GPR_U32(ctx, 31, 0x3B6788u);
    ctx->pc = 0x3B6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6780u;
    // 0x3b6784: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6678u, 0x3B6780u, 0x3B6788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6788u;
label_3b6788:
    // 0x3b6788: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B6788u;
    SET_GPR_U32(ctx, 31, 0x3B6790u);
    ctx->pc = 0x3B678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6788u;
    // 0x3b678c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B6788u, 0x3B6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6790u;
label_3b6790:
    // 0x3b6790: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B6790u;
    SET_GPR_U32(ctx, 31, 0x3B6798u);
    ctx->pc = 0x3B6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6790u;
    // 0x3b6794: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B6790u, 0x3B6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6798u;
label_3b6798:
    // 0x3b6798: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b6798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b679c: 0xc0ed99a  jal         func_3B6668
    ctx->pc = 0x3B679Cu;
    SET_GPR_U32(ctx, 31, 0x3B67A4u);
    ctx->pc = 0x3B67A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B679Cu;
    // 0x3b67a0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6668u, 0x3B679Cu, 0x3B67A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67A4u;
label_3b67a4:
    // 0x3b67a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b67a8:
    // 0x3b67a8: 0xc0ed9b0  jal         func_3B66C0
    ctx->pc = 0x3B67A8u;
    SET_GPR_U32(ctx, 31, 0x3B67B0u);
    ctx->pc = 0x3B67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B67A8u;
    // 0x3b67ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B66C0u, 0x3B67A8u, 0x3B67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67B0u;
label_3b67b0:
    // 0x3b67b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b67b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b67b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b67b8: 0xc0ed99a  jal         func_3B6668
    ctx->pc = 0x3B67B8u;
    SET_GPR_U32(ctx, 31, 0x3B67C0u);
    ctx->pc = 0x3B67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B67B8u;
    // 0x3b67bc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6668u, 0x3B67B8u, 0x3B67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67C0u;
label_3b67c0:
    // 0x3b67c0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3b67c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b67c4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B67C4u;
    {
        const bool branch_taken_0x3b67c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b67c4) {
            ctx->pc = 0x3B67C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B67C4u;
            // 0x3b67c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B67A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b67a8;
        }
    }
    ctx->pc = 0x3B67CCu;
label_3b67cc:
    // 0x3b67cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b67ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b67d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b67d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b67d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b67d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b67d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b67d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b67dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67DCu;
        // 0x3b67e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B67DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B67E4u;
    // 0x3b67e4: 0x0  nop
    ctx->pc = 0x3b67e4u;
    // NOP
    ctx->pc = 0x3b67e8u;
}
