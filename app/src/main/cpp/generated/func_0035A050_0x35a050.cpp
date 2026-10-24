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

// Function: func_0035A050
// Address: 0x35a050 - 0x35a0a0
void func_0035A050_0x35a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A050_0x35a050");
#endif

    switch (ctx->pc) {
        case 0x35a074u: goto label_35a074;
        default: break;
    }

    ctx->pc = 0x35a050u;

    // 0x35a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a058: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a05c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a060: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35a060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35a06c: 0xc0d6828  jal         func_35A0A0
    ctx->pc = 0x35A06Cu;
    SET_GPR_U32(ctx, 31, 0x35A074u);
    ctx->pc = 0x35A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A06Cu;
    // 0x35a070: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A0A0u, 0x35A06Cu, 0x35A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A074u;
label_35a074:
    // 0x35a074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A074u;
    {
        const bool branch_taken_0x35a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A074u;
        // 0x35a078: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a074) {
            ctx->pc = 0x35A084u;
            goto label_35a084;
        }
    }
    ctx->pc = 0x35A07Cu;
    // 0x35a07c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x35a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x35a080: 0xac510b9c  sw          $s1, 0xB9C($v0)
    ctx->pc = 0x35a080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2972), GPR_U32(ctx, 17));
label_35a084:
    // 0x35a084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a08c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a090: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a094: 0x3e00008  jr          $ra
    ctx->pc = 0x35A094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A094u;
        // 0x35a098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A09Cu;
    // 0x35a09c: 0x0  nop
    ctx->pc = 0x35a09cu;
    // NOP
    ctx->pc = 0x35a0a0u;
}
