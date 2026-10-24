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

// Function: func_00350B60
// Address: 0x350b60 - 0x350be8
void func_00350B60_0x350b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350B60_0x350b60");
#endif

    switch (ctx->pc) {
        case 0x350b7cu: goto label_350b7c;
        case 0x350b94u: goto label_350b94;
        case 0x350ba8u: goto label_350ba8;
        default: break;
    }

    ctx->pc = 0x350b60u;

    // 0x350b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350b70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350b74: 0xc0d5542  jal         func_355508
    ctx->pc = 0x350B74u;
    SET_GPR_U32(ctx, 31, 0x350B7Cu);
    ctx->pc = 0x350B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B74u;
    // 0x350b78: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355508u, 0x350B74u, 0x350B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B7Cu;
label_350b7c:
    // 0x350b7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x350b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x350b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b84: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x350B84u;
    {
        const bool branch_taken_0x350b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B84u;
        // 0x350b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b84) {
            ctx->pc = 0x350B9Cu;
            goto label_350b9c;
        }
    }
    ctx->pc = 0x350B8Cu;
    // 0x350b8c: 0xc0d42fa  jal         func_350BE8
    ctx->pc = 0x350B8Cu;
    SET_GPR_U32(ctx, 31, 0x350B94u);
    ctx->pc = 0x350BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350BE8u, 0x350B8Cu, 0x350B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B94u;
label_350b94:
    // 0x350b94: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x350B94u;
    {
        const bool branch_taken_0x350b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350b94) {
            ctx->pc = 0x350B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350B94u;
            // 0x350b98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350BD4u;
            goto label_350bd4;
        }
    }
    ctx->pc = 0x350B9Cu;
label_350b9c:
    // 0x350b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ba0: 0xc0d4316  jal         func_350C58
    ctx->pc = 0x350BA0u;
    SET_GPR_U32(ctx, 31, 0x350BA8u);
    ctx->pc = 0x350BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BA0u;
    // 0x350ba4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C58u, 0x350BA0u, 0x350BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BA8u;
label_350ba8:
    // 0x350ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x350bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x350bb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x350bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x350bb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x350BB4u;
    {
        const bool branch_taken_0x350bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BB4u;
        // 0x350bb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350bb4) {
            ctx->pc = 0x350BD0u;
            goto label_350bd0;
        }
    }
    ctx->pc = 0x350BBCu;
    // 0x350bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350bc8: 0x80d6800  j           func_35A000
    ctx->pc = 0x350BC8u;
    ctx->pc = 0x350BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BC8u;
    // 0x350bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x350BC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x350BD0u;
label_350bd0:
    // 0x350bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350bd4:
    // 0x350bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x350BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BDCu;
        // 0x350be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350BE4u;
    // 0x350be4: 0x0  nop
    ctx->pc = 0x350be4u;
    // NOP
    ctx->pc = 0x350be8u;
}
