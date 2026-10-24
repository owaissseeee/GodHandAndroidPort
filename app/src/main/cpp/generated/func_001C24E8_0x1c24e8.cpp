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

// Function: func_001C24E8
// Address: 0x1c24e8 - 0x1c2558
void func_001C24E8_0x1c24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C24E8_0x1c24e8");
#endif

    switch (ctx->pc) {
        case 0x1c2530u: goto label_1c2530;
        case 0x1c2548u: goto label_1c2548;
        default: break;
    }

    ctx->pc = 0x1c24e8u;

    // 0x1c24e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c24ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c24ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c24f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c24f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c24f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24fc: 0xa0a202f6  sb          $v0, 0x2F6($a1)
    ctx->pc = 0x1c24fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2500: 0x9ca305b0  lwu         $v1, 0x5B0($a1)
    ctx->pc = 0x1c2500u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x1c2504: 0xa0a40660  sb          $a0, 0x660($a1)
    ctx->pc = 0x1c2504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1632), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2508: 0x3197b  dsra        $v1, $v1, 5
    ctx->pc = 0x1c2508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 5);
    // 0x1c250c: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x1c250cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2510: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c2510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c2514: 0xa0a002f5  sb          $zero, 0x2F5($a1)
    ctx->pc = 0x1c2514u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2518: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2518u;
    {
        const bool branch_taken_0x1c2518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2518u;
        // 0x1c251c: 0xaca00630  sw          $zero, 0x630($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2518) {
            ctx->pc = 0x1C2538u;
            goto label_1c2538;
        }
    }
    ctx->pc = 0x1C2520u;
    // 0x1c2520: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c2520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1c2524: 0x94a50662  lhu         $a1, 0x662($a1)
    ctx->pc = 0x1c2524u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1634)));
    // 0x1c2528: 0xc07ecb6  jal         func_1FB2D8
    ctx->pc = 0x1C2528u;
    SET_GPR_U32(ctx, 31, 0x1C2530u);
    ctx->pc = 0x1C252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2528u;
    // 0x1c252c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2D8u, 0x1C2528u, 0x1C2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2530u;
label_1c2530:
    // 0x1c2530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2530u;
    {
        const bool branch_taken_0x1c2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2530u;
        // 0x1c2534: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2530) {
            ctx->pc = 0x1C254Cu;
            goto label_1c254c;
        }
    }
    ctx->pc = 0x1C2538u;
label_1c2538:
    // 0x1c2538: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1c2538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x1c253c: 0xdca50538  ld          $a1, 0x538($a1)
    ctx->pc = 0x1c253cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 1336)));
    // 0x1c2540: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x1C2540u;
    SET_GPR_U32(ctx, 31, 0x1C2548u);
    ctx->pc = 0x1C2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2540u;
    // 0x1c2544: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x1C2540u, 0x1C2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2548u;
label_1c2548:
    // 0x1c2548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c254c:
    // 0x1c254c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C254Cu;
        // 0x1c2550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2554u;
    // 0x1c2554: 0x0  nop
    ctx->pc = 0x1c2554u;
    // NOP
    ctx->pc = 0x1c2558u;
}
