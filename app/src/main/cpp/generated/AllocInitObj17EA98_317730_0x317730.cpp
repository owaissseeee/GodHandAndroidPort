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

// Function: AllocInitObj17EA98_317730
// Address: 0x317730 - 0x3177a0
void AllocInitObj17EA98_317730_0x317730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17EA98_317730_0x317730");
#endif

    switch (ctx->pc) {
        case 0x317764u: goto label_317764;
        case 0x31777cu: goto label_31777c;
        case 0x317784u: goto label_317784;
        default: break;
    }

    ctx->pc = 0x317730u;

    // 0x317730: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317738: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317738u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31773c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31773cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317744: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317748: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317748u;
    {
        const bool branch_taken_0x317748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317748u;
        // 0x31774c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317748) {
            ctx->pc = 0x31778Cu;
            goto label_31778c;
        }
    }
    ctx->pc = 0x317750u;
    // 0x317750: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317754: 0x24040780  addiu       $a0, $zero, 0x780
    ctx->pc = 0x317754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    // 0x317758: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31775c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31775Cu;
    SET_GPR_U32(ctx, 31, 0x317764u);
    ctx->pc = 0x317760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31775Cu;
    // 0x317760: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31775Cu, 0x317764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317764u;
label_317764:
    // 0x317764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317768: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317768u;
    {
        const bool branch_taken_0x317768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317768u;
        // 0x31776c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317768) {
            ctx->pc = 0x31778Cu;
            goto label_31778c;
        }
    }
    ctx->pc = 0x317770u;
    // 0x317770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317774: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317774u;
    SET_GPR_U32(ctx, 31, 0x31777Cu);
    ctx->pc = 0x317778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317774u;
    // 0x317778: 0x24060780  addiu       $a2, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317774u, 0x31777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31777Cu;
label_31777c:
    // 0x31777c: 0xc05faa6  jal         func_17EA98
    ctx->pc = 0x31777Cu;
    SET_GPR_U32(ctx, 31, 0x317784u);
    ctx->pc = 0x317780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31777Cu;
    // 0x317780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA98u, 0x31777Cu, 0x317784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317784u;
label_317784:
    // 0x317784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317784u;
    {
        const bool branch_taken_0x317784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317784u;
        // 0x317788: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317784) {
            ctx->pc = 0x317794u;
            goto label_317794;
        }
    }
    ctx->pc = 0x31778Cu;
label_31778c:
    // 0x31778c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31778cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317794:
    // 0x317794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317798: 0x3e00008  jr          $ra
    ctx->pc = 0x317798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317798u;
        // 0x31779c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3177A0u;
}
