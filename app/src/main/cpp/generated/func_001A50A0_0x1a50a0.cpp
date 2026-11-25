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

// Function: func_001A50A0
// Address: 0x1a50a0 - 0x1a50f0
void func_001A50A0_0x1a50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A50A0_0x1a50a0");
#endif

    if (__builtin_expect(ctx->pc != 0x1a50a0u, 0)) {
        switch (ctx->pc) {
            case 0x1a50c4u: goto label_1a50c4;
            case 0x1a50dcu: goto label_1a50dc;
            default: break;
        }
    }


    // 0x1a50a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a50a4: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a50a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a50a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a50ac: 0x8c625f68  lw          $v0, 0x5F68($v1)
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785F68u));
    // 0x1a50b0: 0x24705f68  addiu       $s0, $v1, 0x5F68
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24424));
    // 0x1a50b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A50B4u;
    {
        const bool branch_taken_0x1a50b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50B4u;
        // 0x1a50b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50b4) {
            ctx->pc = 0x1A50DCu;
            goto label_1a50dc;
        }
    }
    // 0x1a50bc: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A50BCu;
    SET_GPR_U32(ctx, 31, 0x1A50C4u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitGlobal785878_1B8058_0x1b8058, 0x1b8058u, 0x1a50c4u)) {
        return;
    }
    ctx->pc = 0x1A50C4u;
label_1a50c4:
    // 0x1a50c4: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a50c8: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a50cc: 0x24a572e0  addiu       $a1, $a1, 0x72E0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29408));
    // 0x1a50d0: 0x24c65878  addiu       $a2, $a2, 0x5878
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a50d4: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x1A50DCu);
    ctx->pc = 0x1A50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50D4u;
    // 0x1a50d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x1a50dcu)) {
        return;
    }
    ctx->pc = 0x1A50DCu;
label_1a50dc:
    // 0x1a50dc: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a50e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a50e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a50e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a50e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a50e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A50E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50E8u;
        // 0x1a50ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A50E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A50F0u;
}