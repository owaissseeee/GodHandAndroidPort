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

// Function: AllocZeroedAndInitVu0SlotArray4_3155F0
// Address: 0x3155f0 - 0x315660
void AllocZeroedAndInitVu0SlotArray4_3155F0_0x3155f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitVu0SlotArray4_3155F0_0x3155f0");
#endif

    switch (ctx->pc) {
        case 0x315624u: goto label_315624;
        case 0x31563cu: goto label_31563c;
        case 0x315644u: goto label_315644;
        default: break;
    }

    ctx->pc = 0x3155f0u;

    // 0x3155f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3155f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3155f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3155f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3155f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3155fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3155fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315604: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315608: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315608u;
    {
        const bool branch_taken_0x315608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315608u;
        // 0x31560c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315608) {
            ctx->pc = 0x31564Cu;
            goto label_31564c;
        }
    }
    ctx->pc = 0x315610u;
    // 0x315610: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315614: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x315614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x315618: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31561c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31561Cu;
    SET_GPR_U32(ctx, 31, 0x315624u);
    ctx->pc = 0x315620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31561Cu;
    // 0x315620: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31561Cu, 0x315624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315624u;
label_315624:
    // 0x315624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315628: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315628u;
    {
        const bool branch_taken_0x315628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315628u;
        // 0x31562c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315628) {
            ctx->pc = 0x31564Cu;
            goto label_31564c;
        }
    }
    ctx->pc = 0x315630u;
    // 0x315630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315634: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315634u;
    SET_GPR_U32(ctx, 31, 0x31563Cu);
    ctx->pc = 0x315638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315634u;
    // 0x315638: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315634u, 0x31563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31563Cu;
label_31563c:
    // 0x31563c: 0xc068048  jal         func_1A0120
    ctx->pc = 0x31563Cu;
    SET_GPR_U32(ctx, 31, 0x315644u);
    ctx->pc = 0x315640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31563Cu;
    // 0x315640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0120u, 0x31563Cu, 0x315644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315644u;
label_315644:
    // 0x315644: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315644u;
    {
        const bool branch_taken_0x315644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315644u;
        // 0x315648: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315644) {
            ctx->pc = 0x315654u;
            goto label_315654;
        }
    }
    ctx->pc = 0x31564Cu;
label_31564c:
    // 0x31564c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31564cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315654:
    // 0x315654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315658: 0x3e00008  jr          $ra
    ctx->pc = 0x315658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315658u;
        // 0x31565c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315660u;
}
