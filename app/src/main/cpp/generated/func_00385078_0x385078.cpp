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

// Function: func_00385078
// Address: 0x385078 - 0x385138
void func_00385078_0x385078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385078_0x385078");
#endif

    switch (ctx->pc) {
        case 0x3850fcu: goto label_3850fc;
        case 0x385118u: goto label_385118;
        default: break;
    }

    ctx->pc = 0x385078u;

    // 0x385078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x385078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38507c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x385080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x385080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x385084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x385088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38508c: 0x26110470  addiu       $s1, $s0, 0x470
    ctx->pc = 0x38508cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
    // 0x385090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385094: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x385094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x385098: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x385098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x38509c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38509Cu;
    {
        const bool branch_taken_0x38509c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3850A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38509Cu;
        // 0x3850a0: 0x261204bc  addiu       $s2, $s0, 0x4BC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38509c) {
            ctx->pc = 0x3850BCu;
            goto label_3850bc;
        }
    }
    ctx->pc = 0x3850A4u;
    // 0x3850a4: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x3850a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3850a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3850A8u;
    {
        const bool branch_taken_0x3850a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3850a8) {
            ctx->pc = 0x3850ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3850A8u;
            // 0x3850ac: 0x92220010  lbu         $v0, 0x10($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3850B0u;
            goto label_3850b0;
        }
    }
    ctx->pc = 0x3850B0u;
label_3850b0:
    // 0x3850b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3850b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3850B4u;
    {
        const bool branch_taken_0x3850b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3850B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850B4u;
        // 0x3850b8: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850b4) {
            ctx->pc = 0x3850ECu;
            goto label_3850ec;
        }
    }
    ctx->pc = 0x3850BCu;
label_3850bc:
    // 0x3850bc: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3850bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3850c0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3850C0u;
    {
        const bool branch_taken_0x3850c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3850c0) {
            ctx->pc = 0x3850C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3850C0u;
            // 0x3850c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385124u;
            goto label_385124;
        }
    }
    ctx->pc = 0x3850C8u;
    // 0x3850c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3850c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3850cc: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x3850ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3850d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3850d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3850d4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3850d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3850d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3850D8u;
    {
        const bool branch_taken_0x3850d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3850DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850D8u;
        // 0x3850dc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850d8) {
            ctx->pc = 0x3850E8u;
            goto label_3850e8;
        }
    }
    ctx->pc = 0x3850E0u;
    // 0x3850e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3850E0u;
    {
        const bool branch_taken_0x3850e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3850E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3850E0u;
        // 0x3850e4: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3850e0) {
            ctx->pc = 0x3850ECu;
            goto label_3850ec;
        }
    }
    ctx->pc = 0x3850E8u;
label_3850e8:
    // 0x3850e8: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x3850e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
label_3850ec:
    // 0x3850ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3850ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3850f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3850f4: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x3850F4u;
    SET_GPR_U32(ctx, 31, 0x3850FCu);
    ctx->pc = 0x3850F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3850F4u;
    // 0x3850f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x3850F4u, 0x3850FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3850FCu;
label_3850fc:
    // 0x3850fc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3850FCu;
    {
        const bool branch_taken_0x3850fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3850fc) {
            ctx->pc = 0x385100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3850FCu;
            // 0x385100: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38510Cu;
            goto label_38510c;
        }
    }
    ctx->pc = 0x385104u;
    // 0x385104: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x385104u;
    {
        const bool branch_taken_0x385104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385104u;
        // 0x385108: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385104) {
            ctx->pc = 0x385120u;
            goto label_385120;
        }
    }
    ctx->pc = 0x38510Cu;
label_38510c:
    // 0x38510c: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x38510cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x385110: 0xc0caf70  jal         func_32BDC0
    ctx->pc = 0x385110u;
    SET_GPR_U32(ctx, 31, 0x385118u);
    ctx->pc = 0x385114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385110u;
    // 0x385114: 0x92060007  lbu         $a2, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDC0u, 0x385110u, 0x385118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385118u;
label_385118:
    // 0x385118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38511c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x38511cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_385120:
    // 0x385120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x385120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385124:
    // 0x385124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x385124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385128: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x385128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38512c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385130: 0x3e00008  jr          $ra
    ctx->pc = 0x385130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385130u;
        // 0x385134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385138u;
}
