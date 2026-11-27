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

// Function: SFD_GetTime
// Address: 0x35aa50 - 0x35aac8
void SFD_GetTime_0x35aa50(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_GetTime_0x35aa50");
#endif

    if (__builtin_expect(ctx->pc != 0x35aa50u, 0)) {
        switch (ctx->pc) {
            case 0x35aa74u: goto label_35aa74;
            default: break;
        }
    }


    // 0x35aa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35aa54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35aa58: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35aa60: 0xc0882d  daddu       $s1, $a2, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35aa68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35aa6c: 0xc0d37b2  jal         func_34DEC8
    SET_GPR_U32(ctx, 31, 0x35AA74u);
    ctx->pc = 0x35AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA6Cu;
    // 0x35aa70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj34D8_SetGlobalEE0B8_IfField48_0x34dec8, 0x34dec8u, 0x35aa74u)) {
        return;
    }
label_35aa74:
    // 0x35aa74: 0x3c05ff00  lui         $a1, 0xFF00
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35aa78: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa7c: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35AA80u;
    {
        const bool branch_taken_0x35aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA80u;
        // 0x35aa84: 0x34a50121  ori         $a1, $a1, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa80) {
            ctx->pc = 0x35AAA8u;
            goto label_35aaa8;
        }
    }
    // 0x35aa88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aa88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa8c: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aa90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aa94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35aa94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aa98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aa9c: 0x80d375c  j           func_34DD70
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA9Cu;
    // 0x35aaa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35AA9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x35aaa4: 0x0  nop
    // NOP
label_35aaa8:
    // 0x35aaa8: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aaac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35aaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35aab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aab8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35aab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35aabc: 0x80d6ab2  j           func_35AAC8
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AABCu;
    // 0x35aac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAC8u, 0x35AABCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x35aac4: 0x0  nop
    // NOP
    ctx->pc = 0x35aac8u;
}