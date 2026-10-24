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

// Function: __ls__7ostreamP9streambuf
// Address: 0x388fb0 - 0x389090
void ps2___ls__7ostreamP9streambuf_0x388fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamP9streambuf_0x388fb0");
#endif

    switch (ctx->pc) {
        case 0x388fb0u: goto label_388fb0;
        case 0x388fb4u: goto label_388fb4;
        case 0x388fb8u: goto label_388fb8;
        case 0x388fbcu: goto label_388fbc;
        case 0x388fc0u: goto label_388fc0;
        case 0x388fc4u: goto label_388fc4;
        case 0x388fc8u: goto label_388fc8;
        case 0x388fccu: goto label_388fcc;
        case 0x388fd0u: goto label_388fd0;
        case 0x388fd4u: goto label_388fd4;
        case 0x388fd8u: goto label_388fd8;
        case 0x388fdcu: goto label_388fdc;
        case 0x388fe0u: goto label_388fe0;
        case 0x388fe4u: goto label_388fe4;
        case 0x388fe8u: goto label_388fe8;
        case 0x388fecu: goto label_388fec;
        case 0x388ff0u: goto label_388ff0;
        case 0x388ff4u: goto label_388ff4;
        case 0x388ff8u: goto label_388ff8;
        case 0x388ffcu: goto label_388ffc;
        case 0x389000u: goto label_389000;
        case 0x389004u: goto label_389004;
        case 0x389008u: goto label_389008;
        case 0x38900cu: goto label_38900c;
        case 0x389010u: goto label_389010;
        case 0x389014u: goto label_389014;
        case 0x389018u: goto label_389018;
        case 0x38901cu: goto label_38901c;
        case 0x389020u: goto label_389020;
        case 0x389024u: goto label_389024;
        case 0x389028u: goto label_389028;
        case 0x38902cu: goto label_38902c;
        case 0x389030u: goto label_389030;
        case 0x389034u: goto label_389034;
        case 0x389038u: goto label_389038;
        case 0x38903cu: goto label_38903c;
        case 0x389040u: goto label_389040;
        case 0x389044u: goto label_389044;
        case 0x389048u: goto label_389048;
        case 0x38904cu: goto label_38904c;
        case 0x389050u: goto label_389050;
        case 0x389054u: goto label_389054;
        case 0x389058u: goto label_389058;
        case 0x38905cu: goto label_38905c;
        case 0x389060u: goto label_389060;
        case 0x389064u: goto label_389064;
        case 0x389068u: goto label_389068;
        case 0x38906cu: goto label_38906c;
        case 0x389070u: goto label_389070;
        case 0x389074u: goto label_389074;
        case 0x389078u: goto label_389078;
        case 0x38907cu: goto label_38907c;
        case 0x389080u: goto label_389080;
        case 0x389084u: goto label_389084;
        case 0x389088u: goto label_389088;
        case 0x38908cu: goto label_38908c;
        default: break;
    }

    ctx->pc = 0x388fb0u;

label_388fb0:
    // 0x388fb0: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x388fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_388fb4:
    // 0x388fb4: 0xffb30430  sd          $s3, 0x430($sp)
    ctx->pc = 0x388fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 19));
label_388fb8:
    // 0x388fb8: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x388fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
label_388fbc:
    // 0x388fbc: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x388fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_388fc0:
    // 0x388fc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x388fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388fc4:
    // 0x388fc4: 0xffb10410  sd          $s1, 0x410($sp)
    ctx->pc = 0x388fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 17));
label_388fc8:
    // 0x388fc8: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x388fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
label_388fcc:
    // 0x388fcc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x388fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_388fd0:
    // 0x388fd0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_388fd4:
    // 0x388fd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388fd8:
    if (ctx->pc == 0x388FD8u) {
        ctx->pc = 0x388FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FD4u;
        // 0x388fd8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FDCu;
        goto label_388fdc;
    }
    ctx->pc = 0x388FD4u;
    {
        const bool branch_taken_0x388fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FD4u;
        // 0x388fd8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fd4) {
            ctx->pc = 0x388FE4u;
            goto label_388fe4;
        }
    }
    ctx->pc = 0x388FDCu;
label_388fdc:
    // 0x388fdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_388fe0:
    if (ctx->pc == 0x388FE0u) {
        ctx->pc = 0x388FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FDCu;
        // 0x388fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FE4u;
        goto label_388fe4;
    }
    ctx->pc = 0x388FDCu;
    {
        const bool branch_taken_0x388fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FDCu;
        // 0x388fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fdc) {
            ctx->pc = 0x388FFCu;
            goto label_388ffc;
        }
    }
    ctx->pc = 0x388FE4u;
label_388fe4:
    // 0x388fe4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_388fe8:
    // 0x388fe8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_388fec:
    if (ctx->pc == 0x388FECu) {
        ctx->pc = 0x388FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FE8u;
        // 0x388fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FF0u;
        goto label_388ff0;
    }
    ctx->pc = 0x388FE8u;
    {
        const bool branch_taken_0x388fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FE8u;
        // 0x388fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fe8) {
            ctx->pc = 0x388FFCu;
            goto label_388ffc;
        }
    }
    ctx->pc = 0x388FF0u;
label_388ff0:
    // 0x388ff0: 0xc0e249a  jal         func_389268
label_388ff4:
    if (ctx->pc == 0x388FF4u) {
        ctx->pc = 0x388FF8u;
        goto label_388ff8;
    }
    ctx->pc = 0x388FF0u;
    SET_GPR_U32(ctx, 31, 0x388FF8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388FF0u, 0x388FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FF8u;
label_388ff8:
    // 0x388ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388ffc:
    // 0x388ffc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_389000:
    if (ctx->pc == 0x389000u) {
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389004u;
        goto label_389004;
    }
    ctx->pc = 0x388FFCu;
    {
        const bool branch_taken_0x388ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ffc) {
            ctx->pc = 0x389074u;
            goto label_389074;
        }
    }
    ctx->pc = 0x389004u;
label_389004:
    // 0x389004: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x389004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_389008:
    // 0x389008: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x389008u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38900c:
    // 0x38900c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_389010:
    // 0x389010: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x389010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389014:
    // 0x389014: 0xc0e327a  jal         func_38C9E8
label_389018:
    if (ctx->pc == 0x389018u) {
        ctx->pc = 0x389018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389014u;
        // 0x389018: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38901Cu;
        goto label_38901c;
    }
    ctx->pc = 0x389014u;
    SET_GPR_U32(ctx, 31, 0x38901Cu);
    ctx->pc = 0x389018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389014u;
    // 0x389018: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C9E8u, 0x389014u, 0x38901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38901Cu;
label_38901c:
    // 0x38901c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389020:
    // 0x389020: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_389024:
    if (ctx->pc == 0x389024u) {
        ctx->pc = 0x389024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389020u;
        // 0x389024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389028u;
        goto label_389028;
    }
    ctx->pc = 0x389020u;
    {
        const bool branch_taken_0x389020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x389024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389020u;
        // 0x389024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389020) {
            ctx->pc = 0x389054u;
            goto label_389054;
        }
    }
    ctx->pc = 0x389028u;
label_389028:
    // 0x389028: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x389028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38902c:
    // 0x38902c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38902cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_389030:
    // 0x389030: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x389030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_389034:
    // 0x389034: 0x40f809  jalr        $v0
label_389038:
    if (ctx->pc == 0x389038u) {
        ctx->pc = 0x389038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389034u;
        // 0x389038: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38903Cu;
        goto label_38903c;
    }
    ctx->pc = 0x389034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38903Cu);
        ctx->pc = 0x389038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389034u;
        // 0x389038: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389034u, 0x38903Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38903Cu;
label_38903c:
    // 0x38903c: 0x1050fff4  beq         $v0, $s0, . + 4 + (-0xC << 2)
label_389040:
    if (ctx->pc == 0x389040u) {
        ctx->pc = 0x389040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38903Cu;
        // 0x389040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389044u;
        goto label_389044;
    }
    ctx->pc = 0x38903Cu;
    {
        const bool branch_taken_0x38903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x389040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38903Cu;
        // 0x389040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38903c) {
            ctx->pc = 0x389010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389010;
        }
    }
    ctx->pc = 0x389044u;
label_389044:
    // 0x389044: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x389044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_389048:
    // 0x389048: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x389048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_38904c:
    // 0x38904c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x38904cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_389050:
    // 0x389050: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x389050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_389054:
    // 0x389054: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x389054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_389058:
    // 0x389058: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x389058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_38905c:
    // 0x38905c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x38905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_389060:
    // 0x389060: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_389064:
    if (ctx->pc == 0x389064u) {
        ctx->pc = 0x389064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389060u;
        // 0x389064: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389068u;
        goto label_389068;
    }
    ctx->pc = 0x389060u;
    {
        const bool branch_taken_0x389060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389060u;
        // 0x389064: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389060) {
            ctx->pc = 0x389074u;
            goto label_389074;
        }
    }
    ctx->pc = 0x389068u;
label_389068:
    // 0x389068: 0xc0e2552  jal         func_389548
label_38906c:
    if (ctx->pc == 0x38906Cu) {
        ctx->pc = 0x38906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389068u;
        // 0x38906c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389070u;
        goto label_389070;
    }
    ctx->pc = 0x389068u;
    SET_GPR_U32(ctx, 31, 0x389070u);
    ctx->pc = 0x38906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389068u;
    // 0x38906c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x389068u, 0x389070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389070u;
label_389070:
    // 0x389070: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x389070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_389074:
    // 0x389074: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x389074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_389078:
    // 0x389078: 0xdfb30430  ld          $s3, 0x430($sp)
    ctx->pc = 0x389078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_38907c:
    // 0x38907c: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x38907cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_389080:
    // 0x389080: 0xdfb10410  ld          $s1, 0x410($sp)
    ctx->pc = 0x389080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_389084:
    // 0x389084: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x389084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_389088:
    // 0x389088: 0x3e00008  jr          $ra
label_38908c:
    if (ctx->pc == 0x38908Cu) {
        ctx->pc = 0x38908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389088u;
        // 0x38908c: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389090u;
        goto label_fallthrough_0x389088;
    }
    ctx->pc = 0x389088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389088u;
        // 0x38908c: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389088:
    ctx->pc = 0x389090u;
}
