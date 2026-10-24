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

// Function: sfsee_IsVideoAnalyzing
// Address: 0x359a30 - 0x359ab0
void sfsee_IsVideoAnalyzing_0x359a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfsee_IsVideoAnalyzing_0x359a30");
#endif

    switch (ctx->pc) {
        case 0x359a58u: goto label_359a58;
        case 0x359a6cu: goto label_359a6c;
        default: break;
    }

    ctx->pc = 0x359a30u;

    // 0x359a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359a34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359a38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x359a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x359a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359a44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359a48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x359a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x359a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x359a50: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x359A50u;
    SET_GPR_U32(ctx, 31, 0x359A58u);
    ctx->pc = 0x359A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A50u;
    // 0x359a54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x359A50u, 0x359A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A58u;
label_359a58:
    // 0x359a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x359A5Cu;
    {
        const bool branch_taken_0x359a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A5Cu;
        // 0x359a60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a5c) {
            ctx->pc = 0x359A90u;
            goto label_359a90;
        }
    }
    ctx->pc = 0x359A64u;
    // 0x359a64: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x359A64u;
    SET_GPR_U32(ctx, 31, 0x359A6Cu);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x359A64u, 0x359A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A6Cu;
label_359a6c:
    // 0x359a6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x359a6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359a74: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359A74u;
    {
        const bool branch_taken_0x359a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x359a74) {
            ctx->pc = 0x359A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359A74u;
            // 0x359a78: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A94u;
            goto label_359a94;
        }
    }
    ctx->pc = 0x359A7Cu;
    // 0x359a7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x359a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x359a80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x359a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359a84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x359A84u;
    {
        const bool branch_taken_0x359a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A84u;
        // 0x359a88: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a84) {
            ctx->pc = 0x359A98u;
            goto label_359a98;
        }
    }
    ctx->pc = 0x359A8Cu;
    // 0x359a8c: 0x0  nop
    ctx->pc = 0x359a8cu;
    // NOP
label_359a90:
    // 0x359a90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x359a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_359a94:
    // 0x359a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359a98:
    // 0x359a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x359aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x359AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AA8u;
        // 0x359aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359AB0u;
}
