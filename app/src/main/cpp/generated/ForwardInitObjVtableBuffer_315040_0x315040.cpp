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

// Function: ForwardInitObjVtableBuffer_315040
// Address: 0x315040 - 0x3150b0
void ForwardInitObjVtableBuffer_315040_0x315040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObjVtableBuffer_315040_0x315040");
#endif

    switch (ctx->pc) {
        case 0x315074u: goto label_315074;
        case 0x31508cu: goto label_31508c;
        case 0x315094u: goto label_315094;
        default: break;
    }

    ctx->pc = 0x315040u;

    // 0x315040: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315044: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315048: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315048u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31504c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31504cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315050: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315054: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315058: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315058u;
    {
        const bool branch_taken_0x315058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315058u;
        // 0x31505c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315058) {
            ctx->pc = 0x31509Cu;
            goto label_31509c;
        }
    }
    ctx->pc = 0x315060u;
    // 0x315060: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315064: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x315064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x315068: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31506c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31506Cu;
    SET_GPR_U32(ctx, 31, 0x315074u);
    ctx->pc = 0x315070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31506Cu;
    // 0x315070: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31506Cu, 0x315074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315074u;
label_315074:
    // 0x315074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315078: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315078u;
    {
        const bool branch_taken_0x315078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315078u;
        // 0x31507c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315078) {
            ctx->pc = 0x31509Cu;
            goto label_31509c;
        }
    }
    ctx->pc = 0x315080u;
    // 0x315080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315084: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315084u;
    SET_GPR_U32(ctx, 31, 0x31508Cu);
    ctx->pc = 0x315088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315084u;
    // 0x315088: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315084u, 0x31508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31508Cu;
label_31508c:
    // 0x31508c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x31508Cu;
    SET_GPR_U32(ctx, 31, 0x315094u);
    ctx->pc = 0x315090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31508Cu;
    // 0x315090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5A8u, 0x31508Cu, 0x315094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315094u;
label_315094:
    // 0x315094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315094u;
    {
        const bool branch_taken_0x315094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315094u;
        // 0x315098: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315094) {
            ctx->pc = 0x3150A4u;
            goto label_3150a4;
        }
    }
    ctx->pc = 0x31509Cu;
label_31509c:
    // 0x31509c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31509cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3150a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3150a4:
    // 0x3150a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3150a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3150a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3150A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150A8u;
        // 0x3150ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3150A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3150B0u;
}
