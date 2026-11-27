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

// Function: func_0013D368
// Address: 0x13d368 - 0x13d3c0
void func_0013D368_0x13d368(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D368_0x13d368");
#endif

    if (__builtin_expect(ctx->pc != 0x13d368u, 0)) {
        switch (ctx->pc) {
            case 0x13d38cu: goto label_13d38c;
            case 0x13d3a4u: goto label_13d3a4;
            default: break;
        }
    }


    // 0x13d368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d36c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13d370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d374: 0x8c6255e8  lw          $v0, 0x55E8($v1)
    ctx->pc = 0x13d374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7855E8u));
    // 0x13d378: 0x247055e8  addiu       $s0, $v1, 0x55E8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21992));
    // 0x13d37c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D37Cu;
    {
        const bool branch_taken_0x13d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D37Cu;
        // 0x13d380: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d37c) {
            ctx->pc = 0x13D3A4u;
            goto label_13d3a4;
        }
    }
    // 0x13d384: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13D384u;
    SET_GPR_U32(ctx, 31, 0x13D38Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitSingletonC_13C758_0x13c758, 0x13c758u, 0x13d38cu)) {
        return;
    }
label_13d38c:
    // 0x13d38c: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13d390: 0x3c060046  lui         $a2, 0x46
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13d394: 0x24a5df10  addiu       $a1, $a1, -0x20F0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958864));
    // 0x13d398: 0x24c60d28  addiu       $a2, $a2, 0xD28
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13d39c: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x13D3A4u);
    ctx->pc = 0x13D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D39Cu;
    // 0x13d3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x13d3a4u)) {
        return;
    }
label_13d3a4:
    // 0x13d3a4: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D3B0u;
        // 0x13d3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x13d3b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13d3bc: 0x0  nop
    // NOP
    ctx->pc = 0x13d3c0u;
}