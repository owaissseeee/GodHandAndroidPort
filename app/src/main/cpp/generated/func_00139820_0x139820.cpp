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

// Function: func_00139820
// Address: 0x139820 - 0x139878
void func_00139820_0x139820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139820_0x139820");
#endif

    if (__builtin_expect(ctx->pc != 0x139820u, 0)) {
        switch (ctx->pc) {
            case 0x139844u: goto label_139844;
            case 0x13985cu: goto label_13985c;
            default: break;
        }
    }


    // 0x139820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139824: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x139828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x139828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13982c: 0x8c625578  lw          $v0, 0x5578($v1)
    ctx->pc = 0x13982cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785578u));
    // 0x139830: 0x24705578  addiu       $s0, $v1, 0x5578
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21880));
    // 0x139834: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139834u;
    {
        const bool branch_taken_0x139834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139834u;
        // 0x139838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139834) {
            ctx->pc = 0x13985Cu;
            goto label_13985c;
        }
    }
    // 0x13983c: 0xc04e2de  jal         func_138B78
    ctx->pc = 0x13983Cu;
    SET_GPR_U32(ctx, 31, 0x139844u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitSingletonB_138B78_0x138b78, 0x138b78u, 0x139844u)) {
        return;
    }
    ctx->pc = 0x139844u;
label_139844:
    // 0x139844: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x139848: 0x3c060046  lui         $a2, 0x46
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13984c: 0x24a5d920  addiu       $a1, $a1, -0x26E0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
    // 0x139850: 0x24c60d20  addiu       $a2, $a2, 0xD20
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3360));
    // 0x139854: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x13985Cu);
    ctx->pc = 0x139858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139854u;
    // 0x139858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x13985cu)) {
        return;
    }
    ctx->pc = 0x13985Cu;
label_13985c:
    // 0x13985c: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x139864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139868: 0x3e00008  jr          $ra
    ctx->pc = 0x139868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139868u;
        // 0x13986c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x139870: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139874: 0x0  nop
    // NOP
    ctx->pc = 0x139878u;
}