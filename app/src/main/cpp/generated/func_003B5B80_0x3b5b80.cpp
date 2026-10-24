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

// Function: func_003B5B80
// Address: 0x3b5b80 - 0x3b5c10
void func_003B5B80_0x3b5b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B5B80_0x3b5b80");
#endif

    switch (ctx->pc) {
        case 0x3b5bbcu: goto label_3b5bbc;
        case 0x3b5bd4u: goto label_3b5bd4;
        case 0x3b5be8u: goto label_3b5be8;
        default: break;
    }

    ctx->pc = 0x3b5b80u;

    // 0x3b5b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b5b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b5b84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b5b88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b5b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b5b8c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b5b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b5b90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b5b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b5b94: 0x2453ae3c  addiu       $s3, $v0, -0x51C4
    ctx->pc = 0x3b5b94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946364));
    // 0x3b5b98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b5b9c: 0x24711ba8  addiu       $s1, $v1, 0x1BA8
    ctx->pc = 0x3b5b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7080));
    // 0x3b5ba0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b5ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b5ba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b5ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b5ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b5bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b5bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bb4: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B5BB4u;
    SET_GPR_U32(ctx, 31, 0x3B5BBCu);
    ctx->pc = 0x3B5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BB4u;
    // 0x3b5bb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B5BB4u, 0x3B5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BBCu;
label_3b5bbc:
    // 0x3b5bbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B5BBCu;
    {
        const bool branch_taken_0x3b5bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BBCu;
        // 0x3b5bc0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bbc) {
            ctx->pc = 0x3B5BECu;
            goto label_3b5bec;
        }
    }
    ctx->pc = 0x3B5BC4u;
    // 0x3b5bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bc8: 0x8e05aefc  lw          $a1, -0x5104($s0)
    ctx->pc = 0x3b5bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946556)));
    // 0x3b5bcc: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B5BCCu;
    SET_GPR_U32(ctx, 31, 0x3B5BD4u);
    ctx->pc = 0x3B5BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BCCu;
    // 0x3b5bd0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B5BCCu, 0x3B5BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BD4u;
label_3b5bd4:
    // 0x3b5bd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5BD4u;
    {
        const bool branch_taken_0x3b5bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5BD4u;
        // 0x3b5bd8: 0x8e05aefc  lw          $a1, -0x5104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5bd4) {
            ctx->pc = 0x3B5BECu;
            goto label_3b5bec;
        }
    }
    ctx->pc = 0x3B5BDCu;
    // 0x3b5bdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b5bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5be0: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x3B5BE0u;
    SET_GPR_U32(ctx, 31, 0x3B5BE8u);
    ctx->pc = 0x3B5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5BE0u;
    // 0x3b5be4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x3B5BE0u, 0x3B5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5BE8u;
label_3b5be8:
    // 0x3b5be8: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3b5be8u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b5bec:
    // 0x3b5bec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b5becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5bf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b5bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5bf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b5bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b5bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5bfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b5bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b5c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5c04: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5C04u;
        // 0x3b5c08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5C0Cu;
    // 0x3b5c0c: 0x0  nop
    ctx->pc = 0x3b5c0cu;
    // NOP
    ctx->pc = 0x3b5c10u;
}
