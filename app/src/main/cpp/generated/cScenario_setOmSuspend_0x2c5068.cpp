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

// Function: cScenario_setOmSuspend
// Address: 0x2c5068 - 0x2c5110
void cScenario_setOmSuspend_0x2c5068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_setOmSuspend_0x2c5068");
#endif

    switch (ctx->pc) {
        case 0x2c5098u: goto label_2c5098;
        default: break;
    }

    ctx->pc = 0x2c5068u;

    // 0x2c5068: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2c506c: 0x8c834c58  lw          $v1, 0x4C58($a0)
    ctx->pc = 0x2c506cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x2c5070: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c5074: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x2c5074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c5078: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c5078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c507c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C507Cu;
    {
        const bool branch_taken_0x2c507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C507Cu;
        // 0x2c5080: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c507c) {
            ctx->pc = 0x2C5104u;
            goto label_2c5104;
        }
    }
    ctx->pc = 0x2C5084u;
    // 0x2c5084: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2c5084u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2c5088: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c5088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c508c: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x2c508cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x2c5090: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c5090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c5094: 0x0  nop
    ctx->pc = 0x2c5094u;
    // NOP
label_2c5098:
    // 0x2c5098: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x2c5098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x2c509c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2c509cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2c50a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C50A0u;
    {
        const bool branch_taken_0x2c50a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50A0u;
        // 0x2c50a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50a0) {
            ctx->pc = 0x2C50B0u;
            goto label_2c50b0;
        }
    }
    ctx->pc = 0x2C50A8u;
    // 0x2c50a8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x2c50a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2c50ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c50acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c50b0:
    // 0x2c50b0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c50b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c50b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C50B4u;
    {
        const bool branch_taken_0x2c50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50B4u;
        // 0x2c50b8: 0x8d434c58  lw          $v1, 0x4C58($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50b4) {
            ctx->pc = 0x2C50F0u;
            goto label_2c50f0;
        }
    }
    ctx->pc = 0x2C50BCu;
    // 0x2c50bc: 0x54a90009  bnel        $a1, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C50BCu;
    {
        const bool branch_taken_0x2c50bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x2c50bc) {
            ctx->pc = 0x2C50C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C50BCu;
            // 0x2c50c0: 0x8c820250  lw          $v0, 0x250($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C50E4u;
            goto label_2c50e4;
        }
    }
    ctx->pc = 0x2C50C4u;
    // 0x2c50c4: 0x9c8205b8  lwu         $v0, 0x5B8($a0)
    ctx->pc = 0x2c50c4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x2c50c8: 0x211bb  dsra        $v0, $v0, 6
    ctx->pc = 0x2c50c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 6);
    // 0x2c50cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c50ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c50d0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C50D0u;
    {
        const bool branch_taken_0x2c50d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c50d0) {
            ctx->pc = 0x2C50D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C50D0u;
            // 0x2c50d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C50F4u;
            goto label_2c50f4;
        }
    }
    ctx->pc = 0x2C50D8u;
    // 0x2c50d8: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2c50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2c50dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C50DCu;
    {
        const bool branch_taken_0x2c50dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50DCu;
        // 0x2c50e0: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50dc) {
            ctx->pc = 0x2C50E8u;
            goto label_2c50e8;
        }
    }
    ctx->pc = 0x2C50E4u;
label_2c50e4:
    // 0x2c50e4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2c50e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2c50e8:
    // 0x2c50e8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2c50e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x2c50ec: 0x8d434c58  lw          $v1, 0x4C58($t2)
    ctx->pc = 0x2c50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 19544)));
label_2c50f0:
    // 0x2c50f0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2c50f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2c50f4:
    // 0x2c50f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c50f8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c50f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c50fc: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2C50FCu;
    {
        const bool branch_taken_0x2c50fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c50fc) {
            ctx->pc = 0x2C5100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C50FCu;
            // 0x2c5100: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5098;
        }
    }
    ctx->pc = 0x2C5104u;
label_2c5104:
    // 0x2c5104: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C510Cu;
    // 0x2c510c: 0x0  nop
    ctx->pc = 0x2c510cu;
    // NOP
    ctx->pc = 0x2c5110u;
}
