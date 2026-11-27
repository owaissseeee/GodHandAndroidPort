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

// Function: func_00143A90
// Address: 0x143a90 - 0x143af0
void func_00143A90_0x143a90(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143A90_0x143a90");
#endif

    if (__builtin_expect(ctx->pc != 0x143a90u, 0)) {
        switch (ctx->pc) {
            case 0x143abcu: goto label_143abc;
            case 0x143ac8u: goto label_143ac8;
            case 0x143ad8u: goto label_143ad8;
            default: break;
        }
    }


    // 0x143a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143a94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143a98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x143a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x143a9c: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143aa4: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x143aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x143aa8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x143AA8u;
    {
        const bool branch_taken_0x143aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AA8u;
        // 0x143aac: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143aa8) {
            ctx->pc = 0x143AD8u;
            goto label_143ad8;
        }
    }
    // 0x143ab0: 0x26109b70  addiu       $s0, $s0, -0x6490
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x143ab4: 0xc07e9c4  jal         func_1FA710
    SET_GPR_U32(ctx, 31, 0x143ABCu);
    ctx->pc = 0x143AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AB4u;
    // 0x143ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGold_0x1fa710, 0x1fa710u, 0x143abcu)) {
        return;
    }
label_143abc:
    // 0x143abc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ac0: 0xc07e9c4  jal         func_1FA710
    SET_GPR_U32(ctx, 31, 0x143AC8u);
    ctx->pc = 0x143AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AC0u;
    // 0x143ac4: 0xae220090  sw          $v0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGold_0x1fa710, 0x1fa710u, 0x143ac8u)) {
        return;
    }
label_143ac8:
    // 0x143ac8: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x143acc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ad0: 0xc07ea08  jal         func_1FA820
    SET_GPR_U32(ctx, 31, 0x143AD8u);
    ctx->pc = 0x143AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AD0u;
    // 0x143ad4: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_initAddGold_0x1fa820, 0x1fa820u, 0x143ad8u)) {
        return;
    }
label_143ad8:
    // 0x143ad8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x143ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x143AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143AE4u;
        // 0x143ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x143aec: 0x0  nop
    // NOP
    ctx->pc = 0x143af0u;
}