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

// Function: InitTLBFunctions
// Address: 0x3b7b40 - 0x3b7c08
void InitTLBFunctions_0x3b7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLBFunctions_0x3b7b40");
#endif

    switch (ctx->pc) {
        case 0x3b7b70u: goto label_3b7b70;
        case 0x3b7b88u: goto label_3b7b88;
        case 0x3b7b90u: goto label_3b7b90;
        case 0x3b7b98u: goto label_3b7b98;
        case 0x3b7ba4u: goto label_3b7ba4;
        case 0x3b7bb0u: goto label_3b7bb0;
        case 0x3b7bb8u: goto label_3b7bb8;
        case 0x3b7bc0u: goto label_3b7bc0;
        case 0x3b7bd0u: goto label_3b7bd0;
        case 0x3b7be4u: goto label_3b7be4;
        default: break;
    }

    ctx->pc = 0x3b7b40u;

    // 0x3b7b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b7b44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b7b48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b7b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b7b4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7b50: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x3b7b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b7b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b7b58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b7b5c: 0x2450c240  addiu       $s0, $v0, -0x3DC0
    ctx->pc = 0x3b7b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
    // 0x3b7b60: 0x8c44c240  lw          $a0, -0x3DC0($v0)
    ctx->pc = 0x3b7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FC240u));
    // 0x3b7b64: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3b7b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3b7b68: 0xc0edecc  jal         func_3B7B30
    ctx->pc = 0x3B7B68u;
    SET_GPR_U32(ctx, 31, 0x3B7B70u);
    ctx->pc = 0x3B7B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B68u;
    // 0x3b7b6c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B30u, 0x3B7B68u, 0x3B7B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B70u;
label_3b7b70:
    // 0x3b7b70: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b7b74: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x3b7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x3b7b78: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x3b7b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3b7b7c: 0x24a5bec0  addiu       $a1, $a1, -0x4140
    ctx->pc = 0x3b7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950592));
    // 0x3b7b80: 0xc0edeb6  jal         func_3B7AD8
    ctx->pc = 0x3B7B80u;
    SET_GPR_U32(ctx, 31, 0x3B7B88u);
    ctx->pc = 0x3B7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B80u;
    // 0x3b7b84: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7AD8u, 0x3B7B80u, 0x3B7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B88u;
label_3b7b88:
    // 0x3b7b88: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B7B88u;
    SET_GPR_U32(ctx, 31, 0x3B7B90u);
    ctx->pc = 0x3B7B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B88u;
    // 0x3b7b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B7B88u, 0x3B7B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B90u;
label_3b7b90:
    // 0x3b7b90: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x3B7B90u;
    SET_GPR_U32(ctx, 31, 0x3B7B98u);
    ctx->pc = 0x3B7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B90u;
    // 0x3b7b94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x3B7B90u, 0x3B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7B98u;
label_3b7b98:
    // 0x3b7b98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b7b9c: 0xc0edecc  jal         func_3B7B30
    ctx->pc = 0x3B7B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B7BA4u);
    ctx->pc = 0x3B7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7B9Cu;
    // 0x3b7ba0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B30u, 0x3B7B9Cu, 0x3B7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BA4u;
label_3b7ba4:
    // 0x3b7ba4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3b7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b7ba8: 0xc0edecc  jal         func_3B7B30
    ctx->pc = 0x3B7BA8u;
    SET_GPR_U32(ctx, 31, 0x3B7BB0u);
    ctx->pc = 0x3B7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BA8u;
    // 0x3b7bac: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B30u, 0x3B7BA8u, 0x3B7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BB0u;
label_3b7bb0:
    // 0x3b7bb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b7bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7bb4: 0x0  nop
    ctx->pc = 0x3b7bb4u;
    // NOP
label_3b7bb8:
    // 0x3b7bb8: 0xc0edec8  jal         func_3B7B20
    ctx->pc = 0x3B7BB8u;
    SET_GPR_U32(ctx, 31, 0x3B7BC0u);
    ctx->pc = 0x3B7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BB8u;
    // 0x3b7bbc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B20u, 0x3B7BB8u, 0x3B7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BC0u;
label_3b7bc0:
    // 0x3b7bc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b7bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b7bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b7bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7bc8: 0xc0edecc  jal         func_3B7B30
    ctx->pc = 0x3B7BC8u;
    SET_GPR_U32(ctx, 31, 0x3B7BD0u);
    ctx->pc = 0x3B7BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BC8u;
    // 0x3b7bcc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B30u, 0x3B7BC8u, 0x3B7BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BD0u;
label_3b7bd0:
    // 0x3b7bd0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x3b7bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b7bd4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B7BD4u;
    {
        const bool branch_taken_0x3b7bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7bd4) {
            ctx->pc = 0x3B7BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7BD4u;
            // 0x3b7bd8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7bb8;
        }
    }
    ctx->pc = 0x3B7BDCu;
    // 0x3b7bdc: 0xc0edec8  jal         func_3B7B20
    ctx->pc = 0x3B7BDCu;
    SET_GPR_U32(ctx, 31, 0x3B7BE4u);
    ctx->pc = 0x3B7BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7BDCu;
    // 0x3b7be0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7B20u, 0x3B7BDCu, 0x3B7BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7BE4u;
label_3b7be4:
    // 0x3b7be4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b7be8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b7be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7bf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7bf8: 0xac62c238  sw          $v0, -0x3DC8($v1)
    ctx->pc = 0x3b7bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FC238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC238u, _value); } while (0);
    // 0x3b7bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7BFCu;
        // 0x3b7c00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7C04u;
    // 0x3b7c04: 0x0  nop
    ctx->pc = 0x3b7c04u;
    // NOP
    ctx->pc = 0x3b7c08u;
}
