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

// Function: func_002F5508
// Address: 0x2f5508 - 0x2f5560
void func_002F5508_0x2f5508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5508_0x2f5508");
#endif

    switch (ctx->pc) {
        case 0x2f552cu: goto label_2f552c;
        case 0x2f5544u: goto label_2f5544;
        default: break;
    }

    ctx->pc = 0x2f5508u;

    // 0x2f5508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f550c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f5510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f5514: 0x8c626518  lw          $v0, 0x6518($v1)
    ctx->pc = 0x2f5514u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786518u));
    // 0x2f5518: 0x24706518  addiu       $s0, $v1, 0x6518
    ctx->pc = 0x2f5518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25880));
    // 0x2f551c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F551Cu;
    {
        const bool branch_taken_0x2f551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F551Cu;
        // 0x2f5520: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f551c) {
            ctx->pc = 0x2F5544u;
            goto label_2f5544;
        }
    }
    ctx->pc = 0x2F5524u;
    // 0x2f5524: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F5524u;
    SET_GPR_U32(ctx, 31, 0x2F552Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F5524u, 0x2F552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F552Cu;
label_2f552c:
    // 0x2f552c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f552cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f5530: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f5530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f5534: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x2f5534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
    // 0x2f5538: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f5538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f553c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F553Cu;
    SET_GPR_U32(ctx, 31, 0x2F5544u);
    ctx->pc = 0x2F5540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F553Cu;
    // 0x2f5540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F553Cu, 0x2F5544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5544u;
label_2f5544:
    // 0x2f5544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f5544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f554c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f554cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5550: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5550u;
        // 0x2f5554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5558u;
    // 0x2f5558: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f5558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f555c: 0x0  nop
    ctx->pc = 0x2f555cu;
    // NOP
    ctx->pc = 0x2f5560u;
}
