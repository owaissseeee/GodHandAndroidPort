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

// Function: SFH_IsExistStmId
// Address: 0x35d918 - 0x35d988
void SFH_IsExistStmId_0x35d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_IsExistStmId_0x35d918");
#endif

    switch (ctx->pc) {
        case 0x35d940u: goto label_35d940;
        case 0x35d954u: goto label_35d954;
        default: break;
    }

    ctx->pc = 0x35d918u;

    // 0x35d918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d91c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d920: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x35d920u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35d924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d928: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35d928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d934: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35d934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35d938: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35D938u;
    SET_GPR_U32(ctx, 31, 0x35D940u);
    ctx->pc = 0x35D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D938u;
    // 0x35d93c: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35D938u, 0x35D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D940u;
label_35d940:
    // 0x35d940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35d940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d944: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D944u;
    {
        const bool branch_taken_0x35d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D944u;
        // 0x35d948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d944) {
            ctx->pc = 0x35D96Cu;
            goto label_35d96c;
        }
    }
    ctx->pc = 0x35D94Cu;
    // 0x35d94c: 0xc0d7696  jal         func_35DA58
    ctx->pc = 0x35D94Cu;
    SET_GPR_U32(ctx, 31, 0x35D954u);
    ctx->pc = 0x35DA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DA58u, 0x35D94Cu, 0x35D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D954u;
label_35d954:
    // 0x35d954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D954u;
    {
        const bool branch_taken_0x35d954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D954u;
        // 0x35d958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d954) {
            ctx->pc = 0x35D968u;
            goto label_35d968;
        }
    }
    ctx->pc = 0x35D95Cu;
    // 0x35d95c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35D95Cu;
    {
        const bool branch_taken_0x35d95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D95Cu;
        // 0x35d960: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d95c) {
            ctx->pc = 0x35D96Cu;
            goto label_35d96c;
        }
    }
    ctx->pc = 0x35D964u;
    // 0x35d964: 0x0  nop
    ctx->pc = 0x35d964u;
    // NOP
label_35d968:
    // 0x35d968: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35d968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_35d96c:
    // 0x35d96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d978: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35d978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d97c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D97Cu;
        // 0x35d980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D984u;
    // 0x35d984: 0x0  nop
    ctx->pc = 0x35d984u;
    // NOP
    ctx->pc = 0x35d988u;
}
