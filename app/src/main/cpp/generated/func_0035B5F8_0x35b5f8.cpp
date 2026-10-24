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

// Function: func_0035B5F8
// Address: 0x35b5f8 - 0x35b678
void func_0035B5F8_0x35b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B5F8_0x35b5f8");
#endif

    switch (ctx->pc) {
        case 0x35b61cu: goto label_35b61c;
        default: break;
    }

    ctx->pc = 0x35b5f8u;

    // 0x35b5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b5fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35b604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35b60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b614: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35B614u;
    SET_GPR_U32(ctx, 31, 0x35B61Cu);
    ctx->pc = 0x35B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B614u;
    // 0x35b618: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35B614u, 0x35B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B61Cu;
label_35b61c:
    // 0x35b61c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35b620: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B620u;
    {
        const bool branch_taken_0x35b620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B620u;
        // 0x35b624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b620) {
            ctx->pc = 0x35B640u;
            goto label_35b640;
        }
    }
    ctx->pc = 0x35B628u;
    // 0x35b628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b62c: 0x34a5011b  ori         $a1, $a1, 0x11B
    ctx->pc = 0x35b62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)283);
    // 0x35b630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b638: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35B638u;
    ctx->pc = 0x35B63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B638u;
    // 0x35b63c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35B638u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35B640u;
label_35b640:
    // 0x35b640: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x35b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x35b644: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B644u;
    {
        const bool branch_taken_0x35b644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B644u;
        // 0x35b648: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b644) {
            ctx->pc = 0x35B65Cu;
            goto label_35b65c;
        }
    }
    ctx->pc = 0x35B64Cu;
    // 0x35b64c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x35b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x35b650: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x35b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35b654: 0x8c849920  lw          $a0, -0x66E0($a0)
    ctx->pc = 0x35b654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940960)));
    // 0x35b658: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x35b658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_35b65c:
    // 0x35b65c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b668: 0x3e00008  jr          $ra
    ctx->pc = 0x35B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B668u;
        // 0x35b66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B670u;
    // 0x35b670: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b674: 0x0  nop
    ctx->pc = 0x35b674u;
    // NOP
    ctx->pc = 0x35b678u;
}
