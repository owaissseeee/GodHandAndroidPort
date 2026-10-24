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

// Function: InitVtable214_429C80_1C27E8
// Address: 0x1c27e8 - 0x1c2820
void InitVtable214_429C80_1C27E8_0x1c27e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtable214_429C80_1C27E8_0x1c27e8");
#endif

    switch (ctx->pc) {
        case 0x1c27fcu: goto label_1c27fc;
        default: break;
    }

    ctx->pc = 0x1c27e8u;

    // 0x1c27e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c27e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c27ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c27ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c27f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c27f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c27f4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1C27F4u;
    SET_GPR_U32(ctx, 31, 0x1C27FCu);
    ctx->pc = 0x1C27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27F4u;
    // 0x1c27f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1C27F4u, 0x1C27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27FCu;
label_1c27fc:
    // 0x1c27fc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c2800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c2800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2804: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
    // 0x1c2808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c280c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1c280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1c2810: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2814: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2814u;
        // 0x1c2818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C281Cu;
    // 0x1c281c: 0x0  nop
    ctx->pc = 0x1c281cu;
    // NOP
    ctx->pc = 0x1c2820u;
}
