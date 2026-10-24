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

// Function: FileHolder_reload
// Address: 0x166540 - 0x1665c8
void FileHolder_reload_0x166540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FileHolder_reload_0x166540");
#endif

    switch (ctx->pc) {
        case 0x166570u: goto label_166570;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665b0u: goto label_1665b0;
        default: break;
    }

    ctx->pc = 0x166540u;

    // 0x166540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166544: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x166548: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x166548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16654c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16654cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166550: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x166550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x166554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x166554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16655c: 0x8e250298  lw          $a1, 0x298($s1)
    ctx->pc = 0x16655cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x166560: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166560u;
    {
        const bool branch_taken_0x166560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166560u;
        // 0x166564: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166560) {
            ctx->pc = 0x166574u;
            goto label_166574;
        }
    }
    ctx->pc = 0x166568u;
    // 0x166568: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x166568u;
    SET_GPR_U32(ctx, 31, 0x166570u);
    ctx->pc = 0x16656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166568u;
    // 0x16656c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x166568u, 0x166570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166570u;
label_166570:
    // 0x166570: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x166570u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_166574:
    // 0x166574: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x166578: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x16657c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166584: 0x26260298  addiu       $a2, $s1, 0x298
    ctx->pc = 0x166584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
    // 0x166588: 0x24e74230  addiu       $a3, $a3, 0x4230
    ctx->pc = 0x166588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16944));
    // 0x16658c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16658cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166594: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166598: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x166598u;
    SET_GPR_U32(ctx, 31, 0x1665A0u);
    ctx->pc = 0x16659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166598u;
    // 0x16659c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x166598u, 0x1665A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665A0u;
label_1665a0:
    // 0x1665a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1665a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665a4: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x1665a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
    // 0x1665a8: 0xc080458  jal         func_201160
    ctx->pc = 0x1665A8u;
    SET_GPR_U32(ctx, 31, 0x1665B0u);
    ctx->pc = 0x1665ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665A8u;
    // 0x1665ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1665A8u, 0x1665B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665B0u;
label_1665b0:
    // 0x1665b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1665b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1665b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1665b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1665b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1665b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1665bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1665c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1665C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1665C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665C0u;
        // 0x1665c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1665C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1665C8u;
}
