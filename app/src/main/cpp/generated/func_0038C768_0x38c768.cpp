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

// Function: func_0038C768
// Address: 0x38c768 - 0x38c7f0
void func_0038C768_0x38c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C768_0x38c768");
#endif

    switch (ctx->pc) {
        case 0x38c7b0u: goto label_38c7b0;
        default: break;
    }

    ctx->pc = 0x38c768u;

    // 0x38c768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38c768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38c76c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38c770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38c774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c778: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c77c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x38c77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38c788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c78c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x38c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x38c790: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C790u;
    {
        const bool branch_taken_0x38c790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C790u;
        // 0x38c794: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c790) {
            ctx->pc = 0x38C7B0u;
            goto label_38c7b0;
        }
    }
    ctx->pc = 0x38C798u;
    // 0x38c798: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38c79c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x38c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38c7a0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C7A0u;
    {
        const bool branch_taken_0x38c7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c7a0) {
            ctx->pc = 0x38C7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C7A0u;
            // 0x38c7a4: 0xae13001c  sw          $s3, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C7B8u;
            goto label_38c7b8;
        }
    }
    ctx->pc = 0x38C7A8u;
    // 0x38c7a8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38C7A8u;
    SET_GPR_U32(ctx, 31, 0x38C7B0u);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38C7A8u, 0x38C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7B0u;
label_38c7b0:
    // 0x38c7b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38c7b4: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x38c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
label_38c7b8:
    // 0x38c7b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x38C7B8u;
    {
        const bool branch_taken_0x38c7b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7B8u;
        // 0x38c7bc: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7b8) {
            ctx->pc = 0x38C7CCu;
            goto label_38c7cc;
        }
    }
    ctx->pc = 0x38C7C0u;
    // 0x38c7c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x38c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x38c7c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38C7C4u;
    {
        const bool branch_taken_0x38c7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7C4u;
        // 0x38c7c8: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7c4) {
            ctx->pc = 0x38C7D0u;
            goto label_38c7d0;
        }
    }
    ctx->pc = 0x38C7CCu;
label_38c7cc:
    // 0x38c7cc: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x38c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_38c7d0:
    // 0x38c7d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38c7d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38c7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c7d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38c7d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c7dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38c7dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c7e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38c7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7E8u;
        // 0x38c7ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C7F0u;
}
