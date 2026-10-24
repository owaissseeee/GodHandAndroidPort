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

// Function: _clearOnce
// Address: 0x399d70 - 0x399e40
void _clearOnce_0x399d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearOnce_0x399d70");
#endif

    ctx->pc = 0x399d70u;

    // 0x399d70: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x399d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x399d74: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x399d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x399d78: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x399d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x399d7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x399d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x399d80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x399d80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x399d84: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x399d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x399d88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x399d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399d8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x399d90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x399d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x399d94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x399d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x399d98: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x399d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x399d9c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x399D9Cu;
    {
        const bool branch_taken_0x399d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D9Cu;
        // 0x399da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d9c) {
            ctx->pc = 0x399DE4u;
            goto label_399de4;
        }
    }
    ctx->pc = 0x399DA4u;
    // 0x399da4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x399da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x399da8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x399da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x399dac: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x399dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x399db0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x399db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x399db4: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x399db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x399db8: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x399db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x399dbc: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x399dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x399dc0: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x399dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x399dc4: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x399dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x399dc8: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x399dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x399dcc: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x399dccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x399dd0: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x399dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x399dd4: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x399dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x399dd8: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x399dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x399ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x399DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DDCu;
        // 0x399de0: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399DE4u;
label_399de4:
    // 0x399de4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x399DE4u;
    {
        const bool branch_taken_0x399de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x399DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DE4u;
        // 0x399de8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399de4) {
            ctx->pc = 0x399E30u;
            goto label_399e30;
        }
    }
    ctx->pc = 0x399DECu;
    // 0x399dec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x399decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x399df0: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x399df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x399df4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x399df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x399df8: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x399df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x399dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x399dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x399e00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x399e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x399e04: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x399e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x399e08: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x399e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x399e0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x399e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x399e10: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x399e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x399e14: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x399e14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x399e18: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x399e18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x399e1c: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x399e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x399e20: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x399e20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x399e24: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x399e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x399e28: 0x3e00008  jr          $ra
    ctx->pc = 0x399E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E28u;
        // 0x399e2c: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399E30u;
label_399e30:
    // 0x399e30: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x399e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e34: 0x80e70e4  j           func_39C390
    ctx->pc = 0x399E34u;
    ctx->pc = 0x399E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E34u;
    // 0x399e38: 0x24a5e400  addiu       $a1, $a1, -0x1C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x399E34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x399E3Cu;
    // 0x399e3c: 0x0  nop
    ctx->pc = 0x399e3cu;
    // NOP
    ctx->pc = 0x399e40u;
}
