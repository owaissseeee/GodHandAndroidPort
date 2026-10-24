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

// Function: func_002C1540
// Address: 0x2c1540 - 0x2c1618
void func_002C1540_0x2c1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1540_0x2c1540");
#endif

    switch (ctx->pc) {
        case 0x2c1588u: goto label_2c1588;
        case 0x2c15a8u: goto label_2c15a8;
        case 0x2c15e0u: goto label_2c15e0;
        default: break;
    }

    ctx->pc = 0x2c1540u;

    // 0x2c1540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c1544: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2c1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2c1548: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c1548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c154c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2c154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2c1550: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2c1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2c1554: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2c1554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2c1558: 0x3c11fbff  lui         $s1, 0xFBFF
    ctx->pc = 0x2c1558u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64511 << 16));
    // 0x2c155c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2c155cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2c1560: 0x3c12f7ff  lui         $s2, 0xF7FF
    ctx->pc = 0x2c1560u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63487 << 16));
    // 0x2c1564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c1564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c1568: 0x3c137fff  lui         $s3, 0x7FFF
    ctx->pc = 0x2c1568u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32767 << 16));
    // 0x2c156c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2c156cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2c1570: 0x3c14bfff  lui         $s4, 0xBFFF
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)49151 << 16));
    // 0x2c1574: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2c1574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2c1578: 0x3c10fdff  lui         $s0, 0xFDFF
    ctx->pc = 0x2c1578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65023 << 16));
    // 0x2c157c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1580: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C1580u;
    SET_GPR_U32(ctx, 31, 0x2C1588u);
    ctx->pc = 0x2C1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1580u;
    // 0x2c1584: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C1580u, 0x2C1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1588u;
label_2c1588:
    // 0x2c1588: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x2c1588u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
    // 0x2c158c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c158cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1590: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x2c1594: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2c1594u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2c1598: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2c1598u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2c159c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2c159cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2c15a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C15A0u;
    {
        const bool branch_taken_0x2c15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15A0u;
        // 0x2c15a4: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15a0) {
            ctx->pc = 0x2C15D8u;
            goto label_2c15d8;
        }
    }
    ctx->pc = 0x2C15A8u;
label_2c15a8:
    // 0x2c15a8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2c15a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2c15ac: 0x562025  or          $a0, $v0, $s6
    ctx->pc = 0x2c15acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x2c15b0: 0x571824  and         $v1, $v0, $s7
    ctx->pc = 0x2c15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2c15b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C15B4u;
    {
        const bool branch_taken_0x2c15b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C15B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15B4u;
        // 0x2c15b8: 0xaca20050  sw          $v0, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15b4) {
            ctx->pc = 0x2C15C0u;
            goto label_2c15c0;
        }
    }
    ctx->pc = 0x2C15BCu;
    // 0x2c15bc: 0xaca40050  sw          $a0, 0x50($a1)
    ctx->pc = 0x2c15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 4));
label_2c15c0:
    // 0x2c15c0: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x2c15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2c15c4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2c15c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2c15c8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2c15c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2c15cc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2c15ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2c15d0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x2c15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2c15d4: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x2c15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_2c15d8:
    // 0x2c15d8: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C15D8u;
    SET_GPR_U32(ctx, 31, 0x2C15E0u);
    ctx->pc = 0x2C15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C15D8u;
    // 0x2c15dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C15D8u, 0x2C15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15E0u;
label_2c15e0:
    // 0x2c15e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c15e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c15e4: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C15E4u;
    {
        const bool branch_taken_0x2c15e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c15e4) {
            ctx->pc = 0x2C15E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C15E4u;
            // 0x2c15e8: 0x8ca20050  lw          $v0, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C15A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c15a8;
        }
    }
    ctx->pc = 0x2C15ECu;
    // 0x2c15ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2c15ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c15f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2c15f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c15f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2c15f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c15f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2c15f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c15fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c15fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1600: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2c1600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1604: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2c1604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1608: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2c1608u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c160c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1610: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1610u;
        // 0x2c1614: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1618u;
}
