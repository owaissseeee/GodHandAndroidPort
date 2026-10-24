#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf7cMcBoot
// Address: 0x7cf460 - 0x7cf4d8
void ps2___tf7cMcBoot_0x7cf460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7cMcBoot_0x7cf460");
#endif

    switch (ctx->pc) {
        case 0x7cf4a8u: goto label_7cf4a8;
        case 0x7cf4bcu: goto label_7cf4bc;
        default: break;
    }

    ctx->pc = 0x7cf460u;

    // 0x7cf460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cf460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cf464: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf468: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7cf468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7cf46c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7cf46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7cf470: 0x245158a8  addiu       $s1, $v0, 0x58A8
    ctx->pc = 0x7cf470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22696));
    // 0x7cf474: 0x8c4358a8  lw          $v1, 0x58A8($v0)
    ctx->pc = 0x7cf474u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D58A8u));
    // 0x7cf478: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7cf478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf47c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7cf47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7cf480: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7CF480u;
    {
        const bool branch_taken_0x7cf480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF480u;
        // 0x7cf484: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf480) {
            ctx->pc = 0x7CF4BCu;
            goto label_7cf4bc;
        }
    }
    ctx->pc = 0x7CF488u;
    // 0x7cf488: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cf488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cf48c: 0x8c621480  lw          $v0, 0x1480($v1)
    ctx->pc = 0x7cf48cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1480u));
    // 0x7cf490: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CF490u;
    {
        const bool branch_taken_0x7cf490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF490u;
        // 0x7cf494: 0x24701480  addiu       $s0, $v1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf490) {
            ctx->pc = 0x7CF4A8u;
            goto label_7cf4a8;
        }
    }
    ctx->pc = 0x7CF498u;
    // 0x7cf498: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cf49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf4a0: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7CF4A0u;
    SET_GPR_U32(ctx, 31, 0x7CF4A8u);
    ctx->pc = 0x7CF4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF4A0u;
    // 0x7cf4a4: 0x24a509d8  addiu       $a1, $a1, 0x9D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7CF4A0u, 0x7CF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF4A8u;
label_7cf4a8:
    // 0x7cf4a8: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cf4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf4b0: 0x24a509e0  addiu       $a1, $a1, 0x9E0
    ctx->pc = 0x7cf4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2528));
    // 0x7cf4b4: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CF4B4u;
    SET_GPR_U32(ctx, 31, 0x7CF4BCu);
    ctx->pc = 0x7CF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF4B4u;
    // 0x7cf4b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CF4B4u, 0x7CF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF4BCu;
label_7cf4bc:
    // 0x7cf4bc: 0x264258a8  addiu       $v0, $s2, 0x58A8
    ctx->pc = 0x7cf4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22696));
    // 0x7cf4c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7cf4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7cf4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf4c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7cf4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF4D0u;
        // 0x7cf4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF4D8u;
}
} // namespace gh_mcport
