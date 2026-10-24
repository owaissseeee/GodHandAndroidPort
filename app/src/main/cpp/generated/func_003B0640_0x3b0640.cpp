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

// Function: func_003B0640
// Address: 0x3b0640 - 0x3b06c8
void func_003B0640_0x3b0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B0640_0x3b0640");
#endif

    switch (ctx->pc) {
        case 0x3b0678u: goto label_3b0678;
        case 0x3b068cu: goto label_3b068c;
        default: break;
    }

    ctx->pc = 0x3b0640u;

    // 0x3b0640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b0640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b0644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b0648: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b064c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b064cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0650: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0654: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b0654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b065c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3b065cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3b0660: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b0660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b0664: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3b0664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3b0668: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0668u;
    {
        const bool branch_taken_0x3b0668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0668) {
            ctx->pc = 0x3B0678u;
            goto label_3b0678;
        }
    }
    ctx->pc = 0x3B0670u;
    // 0x3b0670: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0670u;
    SET_GPR_U32(ctx, 31, 0x3B0678u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0670u, 0x3B0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0678u;
label_3b0678:
    // 0x3b0678: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b0678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3b067c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x3b067cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x3b0680: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x3b0680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3b0684: 0xc0ec166  jal         func_3B0598
    ctx->pc = 0x3B0684u;
    SET_GPR_U32(ctx, 31, 0x3B068Cu);
    ctx->pc = 0x3B0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0684u;
    // 0x3b0688: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0598u, 0x3B0684u, 0x3B068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B068Cu;
label_3b068c:
    // 0x3b068c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B068Cu;
    {
        const bool branch_taken_0x3b068c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B068Cu;
        // 0x3b0690: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b068c) {
            ctx->pc = 0x3B06A8u;
            goto label_3b06a8;
        }
    }
    ctx->pc = 0x3B0694u;
    // 0x3b0694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b0694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b0698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b069c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b069cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b06a0: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B06A0u;
    ctx->pc = 0x3B06A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B06A0u;
    // 0x3b06a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B06A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B06A8u;
label_3b06a8:
    // 0x3b06a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b06a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b06ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b06acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b06b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b06b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b06b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B06B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06B4u;
        // 0x3b06b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B06B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B06BCu;
    // 0x3b06bc: 0x0  nop
    ctx->pc = 0x3b06bcu;
    // NOP
    // 0x3b06c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3b06c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3b06c4: 0x0  nop
    ctx->pc = 0x3b06c4u;
    // NOP
    ctx->pc = 0x3b06c8u;
}
