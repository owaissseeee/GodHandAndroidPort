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

// Function: func_002E76A0
// Address: 0x2e76a0 - 0x2e76f8
void func_002E76A0_0x2e76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E76A0_0x2e76a0");
#endif

    switch (ctx->pc) {
        case 0x2e76c4u: goto label_2e76c4;
        case 0x2e76dcu: goto label_2e76dc;
        default: break;
    }

    ctx->pc = 0x2e76a0u;

    // 0x2e76a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e76a4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e76a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e76ac: 0x8c626408  lw          $v0, 0x6408($v1)
    ctx->pc = 0x2e76acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786408u));
    // 0x2e76b0: 0x24706408  addiu       $s0, $v1, 0x6408
    ctx->pc = 0x2e76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25608));
    // 0x2e76b4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E76B4u;
    {
        const bool branch_taken_0x2e76b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B4u;
        // 0x2e76b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e76b4) {
            ctx->pc = 0x2E76DCu;
            goto label_2e76dc;
        }
    }
    ctx->pc = 0x2E76BCu;
    // 0x2e76bc: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2E76BCu;
    SET_GPR_U32(ctx, 31, 0x2E76C4u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2E76BCu, 0x2E76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76C4u;
label_2e76c4:
    // 0x2e76c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e76c8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e76c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e76cc: 0x24a5e5c8  addiu       $a1, $a1, -0x1A38
    ctx->pc = 0x2e76ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960584));
    // 0x2e76d0: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2e76d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2e76d4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E76D4u;
    SET_GPR_U32(ctx, 31, 0x2E76DCu);
    ctx->pc = 0x2E76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76D4u;
    // 0x2e76d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E76D4u, 0x2E76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76DCu;
label_2e76dc:
    // 0x2e76dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e76dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e76e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e76e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e76e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e76e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E76E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76E8u;
        // 0x2e76ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E76E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E76F0u;
    // 0x2e76f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e76f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e76f4: 0x0  nop
    ctx->pc = 0x2e76f4u;
    // NOP
    ctx->pc = 0x2e76f8u;
}
