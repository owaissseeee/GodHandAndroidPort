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

// Function: func_001BFA78
// Address: 0x1bfa78 - 0x1bfac8
void func_001BFA78_0x1bfa78(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFA78_0x1bfa78");
#endif

    if (__builtin_expect(ctx->pc != 0x1bfa78u, 0)) {
        switch (ctx->pc) {
            case 0x1bfa9cu: goto label_1bfa9c;
            case 0x1bfab4u: goto label_1bfab4;
            default: break;
        }
    }


    // 0x1bfa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfa7c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1bfa80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bfa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bfa84: 0x8c626148  lw          $v0, 0x6148($v1)
    ctx->pc = 0x1bfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786148u));
    // 0x1bfa88: 0x24706148  addiu       $s0, $v1, 0x6148
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24904));
    // 0x1bfa8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFA8Cu;
    {
        const bool branch_taken_0x1bfa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA8Cu;
        // 0x1bfa90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa8c) {
            ctx->pc = 0x1BFAB4u;
            goto label_1bfab4;
        }
    }
    // 0x1bfa94: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BFA94u;
    SET_GPR_U32(ctx, 31, 0x1BFA9Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitGlobal785878_1B8058_0x1b8058, 0x1b8058u, 0x1bfa9cu)) {
        return;
    }
label_1bfa9c:
    // 0x1bfa9c: 0x3c050043  lui         $a1, 0x43
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1bfaa0: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1bfaa4: 0x24a597a0  addiu       $a1, $a1, -0x6860
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940576));
    // 0x1bfaa8: 0x24c65878  addiu       $a2, $a2, 0x5878
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1bfaac: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x1BFAB4u);
    ctx->pc = 0x1BFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAACu;
    // 0x1bfab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x1bfab4u)) {
        return;
    }
label_1bfab4:
    // 0x1bfab4: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfabc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bfabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfac0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAC0u;
        // 0x1bfac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFAC8u;
}