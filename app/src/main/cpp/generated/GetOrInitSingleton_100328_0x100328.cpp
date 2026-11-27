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

// Function: GetOrInitSingleton_100328
// Address: 0x100328 - 0x100378
void GetOrInitSingleton_100328_0x100328(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton_100328_0x100328");
#endif

    if (__builtin_expect(ctx->pc != 0x100328u, 0)) {
        switch (ctx->pc) {
            case 0x10034cu: goto label_10034c;
            case 0x100364u: goto label_100364;
            default: break;
        }
    }


    // 0x100328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10032c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x100330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x100330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x100334: 0x8c6254c8  lw          $v0, 0x54C8($v1)
    ctx->pc = 0x100334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7854C8u));
    // 0x100338: 0x247054c8  addiu       $s0, $v1, 0x54C8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21704));
    // 0x10033c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10033Cu;
    {
        const bool branch_taken_0x10033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10033Cu;
        // 0x100340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10033c) {
            ctx->pc = 0x100364u;
            goto label_100364;
        }
    }
    // 0x100344: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x100344u;
    SET_GPR_U32(ctx, 31, 0x10034Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A9300_0x2a9300, 0x2a9300u, 0x10034cu)) {
        return;
    }
label_10034c:
    // 0x10034c: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x100350: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x100354: 0x24a5b638  addiu       $a1, $a1, -0x49C8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948408));
    // 0x100358: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x10035c: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x100364u);
    ctx->pc = 0x100360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10035Cu;
    // 0x100360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x100364u)) {
        return;
    }
label_100364:
    // 0x100364: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10036c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10036cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100370: 0x3e00008  jr          $ra
    ctx->pc = 0x100370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100370u;
        // 0x100374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100378u;
}