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

// Function: func_00377688
// Address: 0x377688 - 0x377700
void func_00377688_0x377688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377688_0x377688");
#endif

    switch (ctx->pc) {
        case 0x3776e0u: goto label_3776e0;
        default: break;
    }

    ctx->pc = 0x377688u;

    // 0x377688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37768c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377694: 0xa23804  sllv        $a3, $v0, $a1
    ctx->pc = 0x377694u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x377698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37769c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37769cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776a0: 0x8e080058  lw          $t0, 0x58($s0)
    ctx->pc = 0x3776a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3776a4: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x3776a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x3776a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3776A8u;
    {
        const bool branch_taken_0x3776a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3776ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776A8u;
        // 0x3776ac: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776a8) {
            ctx->pc = 0x3776ECu;
            goto label_3776ec;
        }
    }
    ctx->pc = 0x3776B0u;
    // 0x3776b0: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x3776b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3776b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3776b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776b8: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x3776b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x3776bc: 0x8482003a  lh          $v0, 0x3A($a0)
    ctx->pc = 0x3776bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x3776c0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3776C0u;
    {
        const bool branch_taken_0x3776c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3776C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776C0u;
        // 0x3776c4: 0x24c40038  addiu       $a0, $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776c0) {
            ctx->pc = 0x3776D8u;
            goto label_3776d8;
        }
    }
    ctx->pc = 0x3776C8u;
    // 0x3776c8: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x3776c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x3776cc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3776ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3776d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3776D0u;
    {
        const bool branch_taken_0x3776d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3776D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776D0u;
        // 0x3776d4: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776d0) {
            ctx->pc = 0x3776ECu;
            goto label_3776ec;
        }
    }
    ctx->pc = 0x3776D8u;
label_3776d8:
    // 0x3776d8: 0xc0de01c  jal         func_378070
    ctx->pc = 0x3776D8u;
    SET_GPR_U32(ctx, 31, 0x3776E0u);
    ctx->pc = 0x3776DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776D8u;
    // 0x3776dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378070u, 0x3776D8u, 0x3776E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776E0u;
label_3776e0:
    // 0x3776e0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3776e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3776e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3776e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3776e8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3776e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_3776ec:
    // 0x3776ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3776ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3776f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3776f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3776f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3776F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3776F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776F4u;
        // 0x3776f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3776F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3776FCu;
    // 0x3776fc: 0x0  nop
    ctx->pc = 0x3776fcu;
    // NOP
    ctx->pc = 0x377700u;
}
