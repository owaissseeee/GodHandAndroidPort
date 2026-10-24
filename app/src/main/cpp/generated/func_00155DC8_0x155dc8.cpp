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

// Function: func_00155DC8
// Address: 0x155dc8 - 0x1563d0
void func_00155DC8_0x155dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155DC8_0x155dc8");
#endif

    switch (ctx->pc) {
        case 0x155df8u: goto label_155df8;
        case 0x155e10u: goto label_155e10;
        case 0x155e20u: goto label_155e20;
        case 0x155e54u: goto label_155e54;
        case 0x155e88u: goto label_155e88;
        case 0x155ebcu: goto label_155ebc;
        case 0x155ef0u: goto label_155ef0;
        case 0x155f08u: goto label_155f08;
        case 0x155f1cu: goto label_155f1c;
        case 0x155f30u: goto label_155f30;
        case 0x155f40u: goto label_155f40;
        case 0x155f74u: goto label_155f74;
        case 0x155fa8u: goto label_155fa8;
        case 0x155fc0u: goto label_155fc0;
        case 0x155fd0u: goto label_155fd0;
        case 0x156004u: goto label_156004;
        case 0x156038u: goto label_156038;
        case 0x15606cu: goto label_15606c;
        case 0x1560a0u: goto label_1560a0;
        case 0x1560d4u: goto label_1560d4;
        case 0x156108u: goto label_156108;
        case 0x156120u: goto label_156120;
        case 0x156134u: goto label_156134;
        case 0x156148u: goto label_156148;
        case 0x156158u: goto label_156158;
        case 0x15618cu: goto label_15618c;
        case 0x1561c0u: goto label_1561c0;
        case 0x1561f4u: goto label_1561f4;
        case 0x156228u: goto label_156228;
        case 0x15625cu: goto label_15625c;
        case 0x156290u: goto label_156290;
        case 0x1562c4u: goto label_1562c4;
        case 0x1562f8u: goto label_1562f8;
        case 0x15632cu: goto label_15632c;
        case 0x156360u: goto label_156360;
        case 0x156394u: goto label_156394;
        default: break;
    }

    ctx->pc = 0x155dc8u;

    // 0x155dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155dcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x155dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x155dd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x155dd4: 0x14a20177  bne         $a1, $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x155DD4u;
    {
        const bool branch_taken_0x155dd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x155DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD4u;
        // 0x155dd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dd4) {
            ctx->pc = 0x1563B4u;
            goto label_1563b4;
        }
    }
    ctx->pc = 0x155DDCu;
    // 0x155ddc: 0x10800175  beqz        $a0, . + 4 + (0x175 << 2)
    ctx->pc = 0x155DDCu;
    {
        const bool branch_taken_0x155ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DDCu;
        // 0x155de0: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ddc) {
            ctx->pc = 0x1563B4u;
            goto label_1563b4;
        }
    }
    ctx->pc = 0x155DE4u;
    // 0x155de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155de8: 0x26105d80  addiu       $s0, $s0, 0x5D80
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23936));
    // 0x155dec: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155df0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155DF0u;
    SET_GPR_U32(ctx, 31, 0x155DF8u);
    ctx->pc = 0x155DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DF0u;
    // 0x155df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155DF0u, 0x155DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DF8u;
label_155df8:
    // 0x155df8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e04: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155e08: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155E08u;
    SET_GPR_U32(ctx, 31, 0x155E10u);
    ctx->pc = 0x155E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E08u;
    // 0x155e0c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155E08u, 0x155E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E10u;
label_155e10:
    // 0x155e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e18: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155E18u;
    SET_GPR_U32(ctx, 31, 0x155E20u);
    ctx->pc = 0x155E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E18u;
    // 0x155e1c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155E18u, 0x155E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E20u;
label_155e20:
    // 0x155e20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155e24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155e28: 0x2463d800  addiu       $v1, $v1, -0x2800
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957056));
    // 0x155e2c: 0x2442dd40  addiu       $v0, $v0, -0x22C0
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958400));
    // 0x155e30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155e34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155e38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155e38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e40: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155e44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155e48: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155e4c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155E4Cu;
    SET_GPR_U32(ctx, 31, 0x155E54u);
    ctx->pc = 0x155E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E4Cu;
    // 0x155e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155E4Cu, 0x155E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E54u;
label_155e54:
    // 0x155e54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155e58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155e5c: 0x2463dd40  addiu       $v1, $v1, -0x22C0
    ctx->pc = 0x155e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x155e60: 0x2442dd50  addiu       $v0, $v0, -0x22B0
    ctx->pc = 0x155e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958416));
    // 0x155e64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155e68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155e6c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155e6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e74: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155e78: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155e7c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155e80: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155E80u;
    SET_GPR_U32(ctx, 31, 0x155E88u);
    ctx->pc = 0x155E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E80u;
    // 0x155e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155E80u, 0x155E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E88u;
label_155e88:
    // 0x155e88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155e8c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155e90: 0x24631580  addiu       $v1, $v1, 0x1580
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5504));
    // 0x155e94: 0x24422760  addiu       $v0, $v0, 0x2760
    ctx->pc = 0x155e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
    // 0x155e98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155e9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155ea0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ea8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155eac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155eb0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155eb4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155EB4u;
    SET_GPR_U32(ctx, 31, 0x155EBCu);
    ctx->pc = 0x155EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EB4u;
    // 0x155eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155EB4u, 0x155EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155EBCu;
label_155ebc:
    // 0x155ebc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155ec0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155ec4: 0x24632760  addiu       $v1, $v1, 0x2760
    ctx->pc = 0x155ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10080));
    // 0x155ec8: 0x24422770  addiu       $v0, $v0, 0x2770
    ctx->pc = 0x155ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10096));
    // 0x155ecc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155ed0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155ed4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155ed4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155edc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155ee0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155ee4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155ee8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155EE8u;
    SET_GPR_U32(ctx, 31, 0x155EF0u);
    ctx->pc = 0x155EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155EE8u;
    // 0x155eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155EE8u, 0x155EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155EF0u;
label_155ef0:
    // 0x155ef0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155efc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155f00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155F00u;
    SET_GPR_U32(ctx, 31, 0x155F08u);
    ctx->pc = 0x155F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F00u;
    // 0x155f04: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155F00u, 0x155F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F08u;
label_155f08:
    // 0x155f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f10: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155f14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155F14u;
    SET_GPR_U32(ctx, 31, 0x155F1Cu);
    ctx->pc = 0x155F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F14u;
    // 0x155f18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155F14u, 0x155F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F1Cu;
label_155f1c:
    // 0x155f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f24: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155f28: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155F28u;
    SET_GPR_U32(ctx, 31, 0x155F30u);
    ctx->pc = 0x155F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F28u;
    // 0x155f2c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155F28u, 0x155F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F30u;
label_155f30:
    // 0x155f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f38: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155F38u;
    SET_GPR_U32(ctx, 31, 0x155F40u);
    ctx->pc = 0x155F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F38u;
    // 0x155f3c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155F38u, 0x155F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F40u;
label_155f40:
    // 0x155f40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155f44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155f48: 0x24636490  addiu       $v1, $v1, 0x6490
    ctx->pc = 0x155f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25744));
    // 0x155f4c: 0x24427690  addiu       $v0, $v0, 0x7690
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30352));
    // 0x155f50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155f54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155f58: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155f64: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155f68: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155f6c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155F6Cu;
    SET_GPR_U32(ctx, 31, 0x155F74u);
    ctx->pc = 0x155F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F6Cu;
    // 0x155f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155F6Cu, 0x155F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F74u;
label_155f74:
    // 0x155f74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155f78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155f7c: 0x24637690  addiu       $v1, $v1, 0x7690
    ctx->pc = 0x155f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30352));
    // 0x155f80: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
    // 0x155f84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155f88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155f8c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155f98: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155f9c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155fa0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155FA0u;
    SET_GPR_U32(ctx, 31, 0x155FA8u);
    ctx->pc = 0x155FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FA0u;
    // 0x155fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155FA0u, 0x155FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FA8u;
label_155fa8:
    // 0x155fa8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155fb8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155FB8u;
    SET_GPR_U32(ctx, 31, 0x155FC0u);
    ctx->pc = 0x155FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FB8u;
    // 0x155fbc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155FB8u, 0x155FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FC0u;
label_155fc0:
    // 0x155fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155fc8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155FC8u;
    SET_GPR_U32(ctx, 31, 0x155FD0u);
    ctx->pc = 0x155FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FC8u;
    // 0x155fcc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155FC8u, 0x155FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155FD0u;
label_155fd0:
    // 0x155fd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x155fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x155fd4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x155fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x155fd8: 0x24633bb0  addiu       $v1, $v1, 0x3BB0
    ctx->pc = 0x155fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15280));
    // 0x155fdc: 0x24423f40  addiu       $v0, $v0, 0x3F40
    ctx->pc = 0x155fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x155fe0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155fe4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x155fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x155fe8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x155fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x155fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155ff0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x155ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x155ff4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155ff8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x155ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x155ffc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x155FFCu;
    SET_GPR_U32(ctx, 31, 0x156004u);
    ctx->pc = 0x156000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FFCu;
    // 0x156000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x155FFCu, 0x156004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156004u;
label_156004:
    // 0x156004: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x156004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x156008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x15600c: 0x24633f40  addiu       $v1, $v1, 0x3F40
    ctx->pc = 0x15600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16192));
    // 0x156010: 0x24423f50  addiu       $v0, $v0, 0x3F50
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16208));
    // 0x156014: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156018: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15601c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156024: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156028: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15602c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156030: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156030u;
    SET_GPR_U32(ctx, 31, 0x156038u);
    ctx->pc = 0x156034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156030u;
    // 0x156034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156030u, 0x156038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156038u;
label_156038:
    // 0x156038: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x156038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x15603c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x15603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156040: 0x24632770  addiu       $v1, $v1, 0x2770
    ctx->pc = 0x156040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10096));
    // 0x156044: 0x24423ba0  addiu       $v0, $v0, 0x3BA0
    ctx->pc = 0x156044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
    // 0x156048: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15604c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156050: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156058: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15605c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15605cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156060: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156064: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156064u;
    SET_GPR_U32(ctx, 31, 0x15606Cu);
    ctx->pc = 0x156068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156064u;
    // 0x156068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156064u, 0x15606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15606Cu;
label_15606c:
    // 0x15606c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x15606cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x156070: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156074: 0x24633ba0  addiu       $v1, $v1, 0x3BA0
    ctx->pc = 0x156074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15264));
    // 0x156078: 0x24423bb0  addiu       $v0, $v0, 0x3BB0
    ctx->pc = 0x156078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15280));
    // 0x15607c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156080: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156084: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15608c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15608cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156090: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156094: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156098: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156098u;
    SET_GPR_U32(ctx, 31, 0x1560A0u);
    ctx->pc = 0x15609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156098u;
    // 0x15609c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156098u, 0x1560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560A0u;
label_1560a0:
    // 0x1560a0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1560a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1560a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1560a8: 0x2463a0c0  addiu       $v1, $v1, -0x5F40
    ctx->pc = 0x1560a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942912));
    // 0x1560ac: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x1560acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x1560b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1560b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1560b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1560b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1560b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1560b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1560bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1560bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1560c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1560c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1560c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1560c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1560c8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1560cc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1560CCu;
    SET_GPR_U32(ctx, 31, 0x1560D4u);
    ctx->pc = 0x1560D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1560CCu;
    // 0x1560d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1560CCu, 0x1560D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560D4u;
label_1560d4:
    // 0x1560d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1560d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1560d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1560dc: 0x2463a3d0  addiu       $v1, $v1, -0x5C30
    ctx->pc = 0x1560dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x1560e0: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
    // 0x1560e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1560e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1560e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1560ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1560ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1560f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1560f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1560f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1560f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1560f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1560f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1560fc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156100: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156100u;
    SET_GPR_U32(ctx, 31, 0x156108u);
    ctx->pc = 0x156104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156100u;
    // 0x156104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156100u, 0x156108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156108u;
label_156108:
    // 0x156108: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x15610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156114: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156118: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156118u;
    SET_GPR_U32(ctx, 31, 0x156120u);
    ctx->pc = 0x15611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156118u;
    // 0x15611c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156118u, 0x156120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156120u;
label_156120:
    // 0x156120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156128: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15612c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x15612Cu;
    SET_GPR_U32(ctx, 31, 0x156134u);
    ctx->pc = 0x156130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15612Cu;
    // 0x156130: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x15612Cu, 0x156134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156134u;
label_156134:
    // 0x156134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15613c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156140: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156140u;
    SET_GPR_U32(ctx, 31, 0x156148u);
    ctx->pc = 0x156144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156140u;
    // 0x156144: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156140u, 0x156148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156148u;
label_156148:
    // 0x156148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15614c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156150: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156150u;
    SET_GPR_U32(ctx, 31, 0x156158u);
    ctx->pc = 0x156154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156150u;
    // 0x156154: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156150u, 0x156158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156158u;
label_156158:
    // 0x156158: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x15615c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x156160: 0x246376a0  addiu       $v1, $v1, 0x76A0
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30368));
    // 0x156164: 0x244288b0  addiu       $v0, $v0, -0x7750
    ctx->pc = 0x156164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936752));
    // 0x156168: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15616c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15616cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156170: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156178: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15617c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156180: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156184: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156184u;
    SET_GPR_U32(ctx, 31, 0x15618Cu);
    ctx->pc = 0x156188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156184u;
    // 0x156188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156184u, 0x15618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15618Cu;
label_15618c:
    // 0x15618c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x15618cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x156190: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x156190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x156194: 0x246388b0  addiu       $v1, $v1, -0x7750
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936752));
    // 0x156198: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
    // 0x15619c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1561a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1561a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1561a4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1561a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1561a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1561acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1561b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1561b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1561b4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1561b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1561b8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1561B8u;
    SET_GPR_U32(ctx, 31, 0x1561C0u);
    ctx->pc = 0x1561BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561B8u;
    // 0x1561bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1561B8u, 0x1561C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561C0u;
label_1561c0:
    // 0x1561c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1561c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1561c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1561c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1561c8: 0x2463d280  addiu       $v1, $v1, -0x2D80
    ctx->pc = 0x1561c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955648));
    // 0x1561cc: 0x2442d280  addiu       $v0, $v0, -0x2D80
    ctx->pc = 0x1561ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955648));
    // 0x1561d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1561d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1561d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1561d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1561d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1561dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1561dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1561e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1561e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1561e8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1561e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1561ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1561ECu;
    SET_GPR_U32(ctx, 31, 0x1561F4u);
    ctx->pc = 0x1561F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561ECu;
    // 0x1561f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1561ECu, 0x1561F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561F4u;
label_1561f4:
    // 0x1561f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1561f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1561f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1561f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1561fc: 0x2463d280  addiu       $v1, $v1, -0x2D80
    ctx->pc = 0x1561fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955648));
    // 0x156200: 0x2442d440  addiu       $v0, $v0, -0x2BC0
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956096));
    // 0x156204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156208: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x15620c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156214: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156218: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15621c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x15621cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156220: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156220u;
    SET_GPR_U32(ctx, 31, 0x156228u);
    ctx->pc = 0x156224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156220u;
    // 0x156224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156220u, 0x156228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156228u;
label_156228:
    // 0x156228: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x15622c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156230: 0x24635220  addiu       $v1, $v1, 0x5220
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21024));
    // 0x156234: 0x24426480  addiu       $v0, $v0, 0x6480
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x156238: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15623c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15623cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156240: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156248: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15624c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156250: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156254: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156254u;
    SET_GPR_U32(ctx, 31, 0x15625Cu);
    ctx->pc = 0x156258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156254u;
    // 0x156258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156254u, 0x15625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15625Cu;
label_15625c:
    // 0x15625c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x156260: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x156260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156264: 0x24636480  addiu       $v1, $v1, 0x6480
    ctx->pc = 0x156264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25728));
    // 0x156268: 0x24426490  addiu       $v0, $v0, 0x6490
    ctx->pc = 0x156268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25744));
    // 0x15626c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156270: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156274: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15627c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15627cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156280: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156284: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156288: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156288u;
    SET_GPR_U32(ctx, 31, 0x156290u);
    ctx->pc = 0x15628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156288u;
    // 0x15628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156288u, 0x156290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156290u;
label_156290:
    // 0x156290: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x156294: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x156294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156298: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x15629c: 0x244207e0  addiu       $v0, $v0, 0x7E0
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x1562a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1562a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1562a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1562a8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1562a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1562ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1562acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1562b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1562b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1562b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1562b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1562b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1562bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1562BCu;
    SET_GPR_U32(ctx, 31, 0x1562C4u);
    ctx->pc = 0x1562C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562BCu;
    // 0x1562c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1562BCu, 0x1562C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562C4u;
label_1562c4:
    // 0x1562c4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1562c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1562c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1562c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1562cc: 0x246307e0  addiu       $v1, $v1, 0x7E0
    ctx->pc = 0x1562ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
    // 0x1562d0: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1562d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1562d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1562d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1562d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1562dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1562dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1562e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1562e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1562e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1562e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1562e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1562e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1562ec: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1562f0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1562F0u;
    SET_GPR_U32(ctx, 31, 0x1562F8u);
    ctx->pc = 0x1562F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562F0u;
    // 0x1562f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1562F0u, 0x1562F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562F8u;
label_1562f8:
    // 0x1562f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1562f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1562fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1562fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156300: 0x2463f910  addiu       $v1, $v1, -0x6F0
    ctx->pc = 0x156300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x156304: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x156304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x156308: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15630c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15630cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156310: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156318: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15631c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156320: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156324: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156324u;
    SET_GPR_U32(ctx, 31, 0x15632Cu);
    ctx->pc = 0x156328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156324u;
    // 0x156328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156324u, 0x15632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15632Cu;
label_15632c:
    // 0x15632c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x156330: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x156334: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x156338: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x15633c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156340: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156344: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x156348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15634c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x15634cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156350: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156354: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x156358: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x156358u;
    SET_GPR_U32(ctx, 31, 0x156360u);
    ctx->pc = 0x15635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156358u;
    // 0x15635c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x156358u, 0x156360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156360u;
label_156360:
    // 0x156360: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x156364: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x156368: 0x246388c0  addiu       $v1, $v1, -0x7740
    ctx->pc = 0x156368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936768));
    // 0x15636c: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x15636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x156370: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156374: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x156374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x156378: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x156378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x15637c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156380: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x156380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x156384: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x156384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x156388: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x15638c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x15638Cu;
    SET_GPR_U32(ctx, 31, 0x156394u);
    ctx->pc = 0x156390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15638Cu;
    // 0x156390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x15638Cu, 0x156394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156394u;
label_156394:
    // 0x156394: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x156398: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x15639c: 0x24639d40  addiu       $v1, $v1, -0x62C0
    ctx->pc = 0x15639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942016));
    // 0x1563a0: 0x24429d50  addiu       $v0, $v0, -0x62B0
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942032));
    // 0x1563a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1563a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1563a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1563a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1563ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1563b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1563b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1563b4:
    // 0x1563b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1563b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1563b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1563b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1563bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1563BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563BCu;
        // 0x1563c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1563C4u;
    // 0x1563c4: 0x0  nop
    ctx->pc = 0x1563c4u;
    // NOP
    // 0x1563c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1563c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1563cc: 0x0  nop
    ctx->pc = 0x1563ccu;
    // NOP
    ctx->pc = 0x1563d0u;
}
