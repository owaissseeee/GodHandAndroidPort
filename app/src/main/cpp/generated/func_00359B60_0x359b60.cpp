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

// Function: func_00359B60
// Address: 0x359b60 - 0x359be8
void func_00359B60_0x359b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359B60_0x359b60");
#endif

    switch (ctx->pc) {
        case 0x359b84u: goto label_359b84;
        case 0x359bc8u: goto label_359bc8;
        default: break;
    }

    ctx->pc = 0x359b60u;

    // 0x359b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359b70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x359b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359b78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x359b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x359b7c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359B7Cu;
    SET_GPR_U32(ctx, 31, 0x359B84u);
    ctx->pc = 0x359B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B7Cu;
    // 0x359b80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359B7Cu, 0x359B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B84u;
label_359b84:
    // 0x359b84: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359b88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x359b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x359B8Cu;
    {
        const bool branch_taken_0x359b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B8Cu;
        // 0x359b90: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b8c) {
            ctx->pc = 0x359BB0u;
            goto label_359bb0;
        }
    }
    ctx->pc = 0x359B94u;
    // 0x359b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359ba0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359ba4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359BA4u;
    ctx->pc = 0x359BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BA4u;
    // 0x359ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359BA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359BACu;
    // 0x359bac: 0x0  nop
    ctx->pc = 0x359bacu;
    // NOP
label_359bb0:
    // 0x359bb0: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x359bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x359bb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x359BB4u;
    {
        const bool branch_taken_0x359bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359BB4u;
        // 0x359bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359bb4) {
            ctx->pc = 0x359BCCu;
            goto label_359bcc;
        }
    }
    ctx->pc = 0x359BBCu;
    // 0x359bbc: 0xac710dcc  sw          $s1, 0xDCC($v1)
    ctx->pc = 0x359bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3532), GPR_U32(ctx, 17));
    // 0x359bc0: 0xc0d677c  jal         func_359DF0
    ctx->pc = 0x359BC0u;
    SET_GPR_U32(ctx, 31, 0x359BC8u);
    ctx->pc = 0x359BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BC0u;
    // 0x359bc4: 0xac720dc8  sw          $s2, 0xDC8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 3528), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DF0u, 0x359BC0u, 0x359BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BC8u;
label_359bc8:
    // 0x359bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359bcc:
    // 0x359bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359bd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x359BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359BDCu;
        // 0x359be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359BE4u;
    // 0x359be4: 0x0  nop
    ctx->pc = 0x359be4u;
    // NOP
    ctx->pc = 0x359be8u;
}
