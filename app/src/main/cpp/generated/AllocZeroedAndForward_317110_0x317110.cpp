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

// Function: AllocZeroedAndForward_317110
// Address: 0x317110 - 0x317180
void AllocZeroedAndForward_317110_0x317110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_317110_0x317110");
#endif

    switch (ctx->pc) {
        case 0x317144u: goto label_317144;
        case 0x31715cu: goto label_31715c;
        case 0x317164u: goto label_317164;
        default: break;
    }

    ctx->pc = 0x317110u;

    // 0x317110: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317114: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317118: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31711c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31711cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317124: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317128: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317128u;
    {
        const bool branch_taken_0x317128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317128u;
        // 0x31712c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317128) {
            ctx->pc = 0x31716Cu;
            goto label_31716c;
        }
    }
    ctx->pc = 0x317130u;
    // 0x317130: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317134: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x317138: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31713c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31713Cu;
    SET_GPR_U32(ctx, 31, 0x317144u);
    ctx->pc = 0x317140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31713Cu;
    // 0x317140: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31713Cu, 0x317144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317144u;
label_317144:
    // 0x317144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317148: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317148u;
    {
        const bool branch_taken_0x317148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317148u;
        // 0x31714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317148) {
            ctx->pc = 0x31716Cu;
            goto label_31716c;
        }
    }
    ctx->pc = 0x317150u;
    // 0x317150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317154: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317154u;
    SET_GPR_U32(ctx, 31, 0x31715Cu);
    ctx->pc = 0x317158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317154u;
    // 0x317158: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317154u, 0x31715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31715Cu;
label_31715c:
    // 0x31715c: 0xc05e15a  jal         func_178568
    ctx->pc = 0x31715Cu;
    SET_GPR_U32(ctx, 31, 0x317164u);
    ctx->pc = 0x317160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31715Cu;
    // 0x317160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178568u, 0x31715Cu, 0x317164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317164u;
label_317164:
    // 0x317164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317164u;
    {
        const bool branch_taken_0x317164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317164u;
        // 0x317168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317164) {
            ctx->pc = 0x317174u;
            goto label_317174;
        }
    }
    ctx->pc = 0x31716Cu;
label_31716c:
    // 0x31716c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31716cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317170: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317174:
    // 0x317174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317178: 0x3e00008  jr          $ra
    ctx->pc = 0x317178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317178u;
        // 0x31717c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317180u;
}
