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

// Function: func_0033A5D0
// Address: 0x33a5d0 - 0x33a618
void func_0033A5D0_0x33a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A5D0_0x33a5d0");
#endif

    switch (ctx->pc) {
        case 0x33a5ecu: goto label_33a5ec;
        case 0x33a5f8u: goto label_33a5f8;
        case 0x33a600u: goto label_33a600;
        default: break;
    }

    ctx->pc = 0x33a5d0u;

    // 0x33a5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33a5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a5d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33a5e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33a5e4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A5E4u;
    SET_GPR_U32(ctx, 31, 0x33A5ECu);
    ctx->pc = 0x33A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5E4u;
    // 0x33a5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A5E4u, 0x33A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5ECu;
label_33a5ec:
    // 0x33a5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5f0: 0xc0ce986  jal         func_33A618
    ctx->pc = 0x33A5F0u;
    SET_GPR_U32(ctx, 31, 0x33A5F8u);
    ctx->pc = 0x33A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5F0u;
    // 0x33a5f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A618u, 0x33A5F0u, 0x33A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A5F8u;
label_33a5f8:
    // 0x33a5f8: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x33A5F8u;
    SET_GPR_U32(ctx, 31, 0x33A600u);
    ctx->pc = 0x33A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A5F8u;
    // 0x33a5fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A5F8u, 0x33A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A600u;
label_33a600:
    // 0x33a600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33a600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a604: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33a604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a610: 0x3e00008  jr          $ra
    ctx->pc = 0x33A610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A610u;
        // 0x33a614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A618u;
}
