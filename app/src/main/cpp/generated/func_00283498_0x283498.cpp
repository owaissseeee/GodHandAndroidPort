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

// Function: func_00283498
// Address: 0x283498 - 0x2834e8
void func_00283498_0x283498(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283498_0x283498");
#endif

    if (__builtin_expect(ctx->pc != 0x283498u, 0)) {
        switch (ctx->pc) {
            case 0x2834bcu: goto label_2834bc;
            case 0x2834d4u: goto label_2834d4;
            default: break;
        }
    }


    // 0x283498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28349c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2834a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2834a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2834a4: 0x8c626278  lw          $v0, 0x6278($v1)
    ctx->pc = 0x2834a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786278u));
    // 0x2834a8: 0x24706278  addiu       $s0, $v1, 0x6278
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25208));
    // 0x2834ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2834ACu;
    {
        const bool branch_taken_0x2834ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2834B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834ACu;
        // 0x2834b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834ac) {
            ctx->pc = 0x2834D4u;
            goto label_2834d4;
        }
    }
    // 0x2834b4: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x2834B4u;
    SET_GPR_U32(ctx, 31, 0x2834BCu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0028FDD0_0x28fdd0, 0x28fdd0u, 0x2834bcu)) {
        return;
    }
label_2834bc:
    // 0x2834bc: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2834c0: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2834c4: 0x24a58878  addiu       $a1, $a1, -0x7788
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936696));
    // 0x2834c8: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x2834cc: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x2834D4u);
    ctx->pc = 0x2834D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2834CCu;
    // 0x2834d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x2834d4u)) {
        return;
    }
label_2834d4:
    // 0x2834d4: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2834d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2834dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2834dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2834e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2834E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2834E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834E0u;
        // 0x2834e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2834E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2834E8u;
}