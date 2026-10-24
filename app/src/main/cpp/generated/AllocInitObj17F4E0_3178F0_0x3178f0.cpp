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

// Function: AllocInitObj17F4E0_3178F0
// Address: 0x3178f0 - 0x317960
void AllocInitObj17F4E0_3178F0_0x3178f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17F4E0_3178F0_0x3178f0");
#endif

    switch (ctx->pc) {
        case 0x317924u: goto label_317924;
        case 0x31793cu: goto label_31793c;
        case 0x317944u: goto label_317944;
        default: break;
    }

    ctx->pc = 0x3178f0u;

    // 0x3178f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3178f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3178f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3178f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3178f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3178f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3178fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3178fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317900: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317904: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317908: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317908u;
    {
        const bool branch_taken_0x317908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317908u;
        // 0x31790c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317908) {
            ctx->pc = 0x31794Cu;
            goto label_31794c;
        }
    }
    ctx->pc = 0x317910u;
    // 0x317910: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317914: 0x24040770  addiu       $a0, $zero, 0x770
    ctx->pc = 0x317914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
    // 0x317918: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31791c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31791Cu;
    SET_GPR_U32(ctx, 31, 0x317924u);
    ctx->pc = 0x317920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31791Cu;
    // 0x317920: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31791Cu, 0x317924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317924u;
label_317924:
    // 0x317924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317928: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317928u;
    {
        const bool branch_taken_0x317928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317928u;
        // 0x31792c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317928) {
            ctx->pc = 0x31794Cu;
            goto label_31794c;
        }
    }
    ctx->pc = 0x317930u;
    // 0x317930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317934: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317934u;
    SET_GPR_U32(ctx, 31, 0x31793Cu);
    ctx->pc = 0x317938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317934u;
    // 0x317938: 0x24060770  addiu       $a2, $zero, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317934u, 0x31793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31793Cu;
label_31793c:
    // 0x31793c: 0xc05fd38  jal         func_17F4E0
    ctx->pc = 0x31793Cu;
    SET_GPR_U32(ctx, 31, 0x317944u);
    ctx->pc = 0x317940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31793Cu;
    // 0x317940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F4E0u, 0x31793Cu, 0x317944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317944u;
label_317944:
    // 0x317944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317944u;
    {
        const bool branch_taken_0x317944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317944u;
        // 0x317948: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317944) {
            ctx->pc = 0x317954u;
            goto label_317954;
        }
    }
    ctx->pc = 0x31794Cu;
label_31794c:
    // 0x31794c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31794cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317954:
    // 0x317954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317958: 0x3e00008  jr          $ra
    ctx->pc = 0x317958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317958u;
        // 0x31795c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317960u;
}
