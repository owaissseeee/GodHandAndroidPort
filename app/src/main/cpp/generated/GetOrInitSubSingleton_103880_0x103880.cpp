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

// Function: GetOrInitSubSingleton_103880
// Address: 0x103880 - 0x1038e0
void GetOrInitSubSingleton_103880_0x103880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSubSingleton_103880_0x103880");
#endif

    switch (ctx->pc) {
        case 0x1038a4u: goto label_1038a4;
        case 0x1038bcu: goto label_1038bc;
        default: break;
    }

    ctx->pc = 0x103880u;

    // 0x103880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103884: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x103884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x103888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x103888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10388c: 0x8c625508  lw          $v0, 0x5508($v1)
    ctx->pc = 0x10388cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785508u));
    // 0x103890: 0x24705508  addiu       $s0, $v1, 0x5508
    ctx->pc = 0x103890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21768));
    // 0x103894: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103894u;
    {
        const bool branch_taken_0x103894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103894u;
        // 0x103898: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103894) {
            ctx->pc = 0x1038BCu;
            goto label_1038bc;
        }
    }
    ctx->pc = 0x10389Cu;
    // 0x10389c: 0xc0400ca  jal         func_100328
    ctx->pc = 0x10389Cu;
    SET_GPR_U32(ctx, 31, 0x1038A4u);
    ctx->pc = 0x100328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100328u, 0x10389Cu, 0x1038A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038A4u;
label_1038a4:
    // 0x1038a4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1038a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1038a8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1038a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1038ac: 0x24a5b7d0  addiu       $a1, $a1, -0x4830
    ctx->pc = 0x1038acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948816));
    // 0x1038b0: 0x24c654c8  addiu       $a2, $a2, 0x54C8
    ctx->pc = 0x1038b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21704));
    // 0x1038b4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1038B4u;
    SET_GPR_U32(ctx, 31, 0x1038BCu);
    ctx->pc = 0x1038B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038B4u;
    // 0x1038b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1038B4u, 0x1038BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038BCu;
label_1038bc:
    // 0x1038bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1038bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1038c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1038c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1038c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1038c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1038c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1038C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1038CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038C8u;
        // 0x1038cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1038C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1038D0u;
    // 0x1038d0: 0xac8214b0  sw          $v0, 0x14B0($a0)
    ctx->pc = 0x1038d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5296), GPR_U32(ctx, 2));
    // 0x1038d4: 0x0  nop
    ctx->pc = 0x1038d4u;
    // NOP
    // 0x1038d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1038d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1038dc: 0x0  nop
    ctx->pc = 0x1038dcu;
    // NOP
    ctx->pc = 0x1038e0u;
}
