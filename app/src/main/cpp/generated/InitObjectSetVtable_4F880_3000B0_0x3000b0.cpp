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

// Function: InitObjectSetVtable_4F880_3000B0
// Address: 0x3000b0 - 0x3000f8
void InitObjectSetVtable_4F880_3000B0_0x3000b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4F880_3000B0_0x3000b0");
#endif

    switch (ctx->pc) {
        case 0x3000ccu: goto label_3000cc;
        default: break;
    }

    ctx->pc = 0x3000b0u;

    // 0x3000b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3000b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3000b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3000b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3000b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3000b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000bc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3000BCu;
    {
        const bool branch_taken_0x3000bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000BCu;
        // 0x3000c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000bc) {
            ctx->pc = 0x3000D8u;
            goto label_3000d8;
        }
    }
    ctx->pc = 0x3000C4u;
    // 0x3000c4: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x3000C4u;
    SET_GPR_U32(ctx, 31, 0x3000CCu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x3000C4u, 0x3000CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000CCu;
label_3000cc:
    // 0x3000cc: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3000ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x3000d0: 0x2463f880  addiu       $v1, $v1, -0x780
    ctx->pc = 0x3000d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965376));
    // 0x3000d4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x3000d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_3000d8:
    // 0x3000d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3000d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3000dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3000e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3000e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3000e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3000E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3000E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E4u;
        // 0x3000e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3000E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3000ECu;
    // 0x3000ec: 0x0  nop
    ctx->pc = 0x3000ecu;
    // NOP
    // 0x3000f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3000f4: 0x0  nop
    ctx->pc = 0x3000f4u;
    // NOP
    ctx->pc = 0x3000f8u;
}
