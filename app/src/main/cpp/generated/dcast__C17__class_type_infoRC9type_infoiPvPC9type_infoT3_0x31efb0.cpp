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

// Function: dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x31efb0 - 0x31f188
void dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3_0x31efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C17__class_type_infoRC9type_infoiPvPC9type_infoT3_0x31efb0");
#endif

    switch (ctx->pc) {
        case 0x31efb0u: goto label_31efb0;
        case 0x31efb4u: goto label_31efb4;
        case 0x31efb8u: goto label_31efb8;
        case 0x31efbcu: goto label_31efbc;
        case 0x31efc0u: goto label_31efc0;
        case 0x31efc4u: goto label_31efc4;
        case 0x31efc8u: goto label_31efc8;
        case 0x31efccu: goto label_31efcc;
        case 0x31efd0u: goto label_31efd0;
        case 0x31efd4u: goto label_31efd4;
        case 0x31efd8u: goto label_31efd8;
        case 0x31efdcu: goto label_31efdc;
        case 0x31efe0u: goto label_31efe0;
        case 0x31efe4u: goto label_31efe4;
        case 0x31efe8u: goto label_31efe8;
        case 0x31efecu: goto label_31efec;
        case 0x31eff0u: goto label_31eff0;
        case 0x31eff4u: goto label_31eff4;
        case 0x31eff8u: goto label_31eff8;
        case 0x31effcu: goto label_31effc;
        case 0x31f000u: goto label_31f000;
        case 0x31f004u: goto label_31f004;
        case 0x31f008u: goto label_31f008;
        case 0x31f00cu: goto label_31f00c;
        case 0x31f010u: goto label_31f010;
        case 0x31f014u: goto label_31f014;
        case 0x31f018u: goto label_31f018;
        case 0x31f01cu: goto label_31f01c;
        case 0x31f020u: goto label_31f020;
        case 0x31f024u: goto label_31f024;
        case 0x31f028u: goto label_31f028;
        case 0x31f02cu: goto label_31f02c;
        case 0x31f030u: goto label_31f030;
        case 0x31f034u: goto label_31f034;
        case 0x31f038u: goto label_31f038;
        case 0x31f03cu: goto label_31f03c;
        case 0x31f040u: goto label_31f040;
        case 0x31f044u: goto label_31f044;
        case 0x31f048u: goto label_31f048;
        case 0x31f04cu: goto label_31f04c;
        case 0x31f050u: goto label_31f050;
        case 0x31f054u: goto label_31f054;
        case 0x31f058u: goto label_31f058;
        case 0x31f05cu: goto label_31f05c;
        case 0x31f060u: goto label_31f060;
        case 0x31f064u: goto label_31f064;
        case 0x31f068u: goto label_31f068;
        case 0x31f06cu: goto label_31f06c;
        case 0x31f070u: goto label_31f070;
        case 0x31f074u: goto label_31f074;
        case 0x31f078u: goto label_31f078;
        case 0x31f07cu: goto label_31f07c;
        case 0x31f080u: goto label_31f080;
        case 0x31f084u: goto label_31f084;
        case 0x31f088u: goto label_31f088;
        case 0x31f08cu: goto label_31f08c;
        case 0x31f090u: goto label_31f090;
        case 0x31f094u: goto label_31f094;
        case 0x31f098u: goto label_31f098;
        case 0x31f09cu: goto label_31f09c;
        case 0x31f0a0u: goto label_31f0a0;
        case 0x31f0a4u: goto label_31f0a4;
        case 0x31f0a8u: goto label_31f0a8;
        case 0x31f0acu: goto label_31f0ac;
        case 0x31f0b0u: goto label_31f0b0;
        case 0x31f0b4u: goto label_31f0b4;
        case 0x31f0b8u: goto label_31f0b8;
        case 0x31f0bcu: goto label_31f0bc;
        case 0x31f0c0u: goto label_31f0c0;
        case 0x31f0c4u: goto label_31f0c4;
        case 0x31f0c8u: goto label_31f0c8;
        case 0x31f0ccu: goto label_31f0cc;
        case 0x31f0d0u: goto label_31f0d0;
        case 0x31f0d4u: goto label_31f0d4;
        case 0x31f0d8u: goto label_31f0d8;
        case 0x31f0dcu: goto label_31f0dc;
        case 0x31f0e0u: goto label_31f0e0;
        case 0x31f0e4u: goto label_31f0e4;
        case 0x31f0e8u: goto label_31f0e8;
        case 0x31f0ecu: goto label_31f0ec;
        case 0x31f0f0u: goto label_31f0f0;
        case 0x31f0f4u: goto label_31f0f4;
        case 0x31f0f8u: goto label_31f0f8;
        case 0x31f0fcu: goto label_31f0fc;
        case 0x31f100u: goto label_31f100;
        case 0x31f104u: goto label_31f104;
        case 0x31f108u: goto label_31f108;
        case 0x31f10cu: goto label_31f10c;
        case 0x31f110u: goto label_31f110;
        case 0x31f114u: goto label_31f114;
        case 0x31f118u: goto label_31f118;
        case 0x31f11cu: goto label_31f11c;
        case 0x31f120u: goto label_31f120;
        case 0x31f124u: goto label_31f124;
        case 0x31f128u: goto label_31f128;
        case 0x31f12cu: goto label_31f12c;
        case 0x31f130u: goto label_31f130;
        case 0x31f134u: goto label_31f134;
        case 0x31f138u: goto label_31f138;
        case 0x31f13cu: goto label_31f13c;
        case 0x31f140u: goto label_31f140;
        case 0x31f144u: goto label_31f144;
        case 0x31f148u: goto label_31f148;
        case 0x31f14cu: goto label_31f14c;
        case 0x31f150u: goto label_31f150;
        case 0x31f154u: goto label_31f154;
        case 0x31f158u: goto label_31f158;
        case 0x31f15cu: goto label_31f15c;
        case 0x31f160u: goto label_31f160;
        case 0x31f164u: goto label_31f164;
        case 0x31f168u: goto label_31f168;
        case 0x31f16cu: goto label_31f16c;
        case 0x31f170u: goto label_31f170;
        case 0x31f174u: goto label_31f174;
        case 0x31f178u: goto label_31f178;
        case 0x31f17cu: goto label_31f17c;
        case 0x31f180u: goto label_31f180;
        case 0x31f184u: goto label_31f184;
        default: break;
    }

    ctx->pc = 0x31efb0u;

label_31efb0:
    // 0x31efb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_31efb4:
    // 0x31efb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x31efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_31efb8:
    // 0x31efb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x31efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_31efbc:
    // 0x31efbc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31efbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31efc0:
    // 0x31efc0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x31efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_31efc4:
    // 0x31efc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31efc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31efc8:
    // 0x31efc8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x31efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_31efcc:
    // 0x31efcc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x31efccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31efd0:
    // 0x31efd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x31efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_31efd4:
    // 0x31efd4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x31efd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31efd8:
    // 0x31efd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_31efdc:
    // 0x31efdc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x31efdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31efe0:
    // 0x31efe0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x31efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_31efe4:
    // 0x31efe4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x31efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_31efe8:
    // 0x31efe8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x31efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_31efec:
    // 0x31efec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_31eff0:
    // 0x31eff0: 0xc0c7b90  jal         func_31EE40
label_31eff4:
    if (ctx->pc == 0x31EFF4u) {
        ctx->pc = 0x31EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFF0u;
        // 0x31eff4: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EFF8u;
        goto label_31eff8;
    }
    ctx->pc = 0x31EFF0u;
    SET_GPR_U32(ctx, 31, 0x31EFF8u);
    ctx->pc = 0x31EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EFF0u;
    // 0x31eff4: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31EFF0u, 0x31EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFF8u;
label_31eff8:
    // 0x31eff8: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_31effc:
    if (ctx->pc == 0x31EFFCu) {
        ctx->pc = 0x31EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFF8u;
        // 0x31effc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F000u;
        goto label_31f000;
    }
    ctx->pc = 0x31EFF8u;
    {
        const bool branch_taken_0x31eff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFF8u;
        // 0x31effc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eff8) {
            ctx->pc = 0x31F158u;
            goto label_31f158;
        }
    }
    ctx->pc = 0x31F000u;
label_31f000:
    // 0x31f000: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_31f004:
    // 0x31f004: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31f004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f008:
    // 0x31f008: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
label_31f00c:
    if (ctx->pc == 0x31F00Cu) {
        ctx->pc = 0x31F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F008u;
        // 0x31f00c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F010u;
        goto label_31f010;
    }
    ctx->pc = 0x31F008u;
    {
        const bool branch_taken_0x31f008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F008u;
        // 0x31f00c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f008) {
            ctx->pc = 0x31F154u;
            goto label_31f154;
        }
    }
    ctx->pc = 0x31F010u;
label_31f010:
    // 0x31f010: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x31f010u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f014:
    // 0x31f014: 0x0  nop
    ctx->pc = 0x31f014u;
    // NOP
label_31f018:
    // 0x31f018: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_31f01c:
    if (ctx->pc == 0x31F01Cu) {
        ctx->pc = 0x31F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F018u;
        // 0x31f01c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F020u;
        goto label_31f020;
    }
    ctx->pc = 0x31F018u;
    {
        const bool branch_taken_0x31f018 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F018u;
        // 0x31f01c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f018) {
            ctx->pc = 0x31F040u;
            goto label_31f040;
        }
    }
    ctx->pc = 0x31F020u;
label_31f020:
    // 0x31f020: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x31f020u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31f024:
    // 0x31f024: 0x2ca1821  addu        $v1, $s6, $t2
    ctx->pc = 0x31f024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_31f028:
    // 0x31f028: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31f02c:
    // 0x31f02c: 0x21782  srl         $v0, $v0, 30
    ctx->pc = 0x31f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 30));
label_31f030:
    // 0x31f030: 0x14440043  bne         $v0, $a0, . + 4 + (0x43 << 2)
label_31f034:
    if (ctx->pc == 0x31F034u) {
        ctx->pc = 0x31F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F030u;
        // 0x31f034: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F038u;
        goto label_31f038;
    }
    ctx->pc = 0x31F030u;
    {
        const bool branch_taken_0x31f030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x31F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F030u;
        // 0x31f034: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f030) {
            ctx->pc = 0x31F140u;
            goto label_31f140;
        }
    }
    ctx->pc = 0x31F038u;
label_31f038:
    // 0x31f038: 0x10000003  b           . + 4 + (0x3 << 2)
label_31f03c:
    if (ctx->pc == 0x31F03Cu) {
        ctx->pc = 0x31F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F038u;
        // 0x31f03c: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F040u;
        goto label_31f040;
    }
    ctx->pc = 0x31F038u;
    {
        const bool branch_taken_0x31f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F038u;
        // 0x31f03c: 0x2ca5021  addu        $t2, $s6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f038) {
            ctx->pc = 0x31F048u;
            goto label_31f048;
        }
    }
    ctx->pc = 0x31F040u;
label_31f040:
    // 0x31f040: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x31f040u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31f044:
    // 0x31f044: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x31f044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_31f048:
    // 0x31f048: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x31f048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_31f04c:
    // 0x31f04c: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x31f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_31f050:
    // 0x31f050: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_31f054:
    // 0x31f054: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31f054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_31f058:
    // 0x31f058: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_31f05c:
    // 0x31f05c: 0x31f42  srl         $v1, $v1, 29
    ctx->pc = 0x31f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_31f060:
    // 0x31f060: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31f064:
    // 0x31f064: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31f068:
    if (ctx->pc == 0x31F068u) {
        ctx->pc = 0x31F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F064u;
        // 0x31f068: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F06Cu;
        goto label_31f06c;
    }
    ctx->pc = 0x31F064u;
    {
        const bool branch_taken_0x31f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F064u;
        // 0x31f068: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f064) {
            ctx->pc = 0x31F070u;
            goto label_31f070;
        }
    }
    ctx->pc = 0x31F06Cu;
label_31f06c:
    // 0x31f06c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x31f06cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31f070:
    // 0x31f070: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x31f070u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_31f074:
    // 0x31f074: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x31f074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f078:
    // 0x31f078: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x31f078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31f07c:
    // 0x31f07c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x31f07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31f080:
    // 0x31f080: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x31f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_31f084:
    // 0x31f084: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31f084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f088:
    // 0x31f088: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x31f088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31f08c:
    // 0x31f08c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31f08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31f090:
    // 0x31f090: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31f094:
    // 0x31f094: 0x40f809  jalr        $v0
label_31f098:
    if (ctx->pc == 0x31F098u) {
        ctx->pc = 0x31F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F094u;
        // 0x31f098: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F09Cu;
        goto label_31f09c;
    }
    ctx->pc = 0x31F094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F09Cu);
        ctx->pc = 0x31F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F094u;
        // 0x31f098: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F094u, 0x31F09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F09Cu;
label_31f09c:
    // 0x31f09c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f0a0:
    // 0x31f0a0: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_31f0a4:
    if (ctx->pc == 0x31F0A4u) {
        ctx->pc = 0x31F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0A0u;
        // 0x31f0a4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F0A8u;
        goto label_31f0a8;
    }
    ctx->pc = 0x31F0A0u;
    {
        const bool branch_taken_0x31f0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f0a0) {
            ctx->pc = 0x31F0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F0A0u;
            // 0x31f0a4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F13Cu;
            goto label_31f13c;
        }
    }
    ctx->pc = 0x31F0A8u;
label_31f0a8:
    // 0x31f0a8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_31f0ac:
    if (ctx->pc == 0x31F0ACu) {
        ctx->pc = 0x31F0B0u;
        goto label_31f0b0;
    }
    ctx->pc = 0x31F0A8u;
    {
        const bool branch_taken_0x31f0a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f0a8) {
            ctx->pc = 0x31F0B8u;
            goto label_31f0b8;
        }
    }
    ctx->pc = 0x31F0B0u;
label_31f0b0:
    // 0x31f0b0: 0x10000021  b           . + 4 + (0x21 << 2)
label_31f0b4:
    if (ctx->pc == 0x31F0B4u) {
        ctx->pc = 0x31F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B0u;
        // 0x31f0b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F0B8u;
        goto label_31f0b8;
    }
    ctx->pc = 0x31F0B0u;
    {
        const bool branch_taken_0x31f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B0u;
        // 0x31f0b4: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0b0) {
            ctx->pc = 0x31F138u;
            goto label_31f138;
        }
    }
    ctx->pc = 0x31F0B8u;
label_31f0b8:
    // 0x31f0b8: 0x52700020  beql        $s3, $s0, . + 4 + (0x20 << 2)
label_31f0bc:
    if (ctx->pc == 0x31F0BCu) {
        ctx->pc = 0x31F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0B8u;
        // 0x31f0bc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F0C0u;
        goto label_31f0c0;
    }
    ctx->pc = 0x31F0B8u;
    {
        const bool branch_taken_0x31f0b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x31f0b8) {
            ctx->pc = 0x31F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F0B8u;
            // 0x31f0bc: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F13Cu;
            goto label_31f13c;
        }
    }
    ctx->pc = 0x31F0C0u;
label_31f0c0:
    // 0x31f0c0: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
label_31f0c4:
    if (ctx->pc == 0x31F0C4u) {
        ctx->pc = 0x31F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0C0u;
        // 0x31f0c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F0C8u;
        goto label_31f0c8;
    }
    ctx->pc = 0x31F0C0u;
    {
        const bool branch_taken_0x31f0c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0C0u;
        // 0x31f0c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f0c0) {
            ctx->pc = 0x31F130u;
            goto label_31f130;
        }
    }
    ctx->pc = 0x31F0C8u;
label_31f0c8:
    // 0x31f0c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x31f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f0cc:
    // 0x31f0cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f0d0:
    // 0x31f0d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31f0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f0d4:
    // 0x31f0d4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31f0d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31f0d8:
    // 0x31f0d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f0d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f0dc:
    // 0x31f0dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31f0e0:
    // 0x31f0e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31f0e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f0e4:
    // 0x31f0e4: 0x40f809  jalr        $v0
label_31f0e8:
    if (ctx->pc == 0x31F0E8u) {
        ctx->pc = 0x31F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0E4u;
        // 0x31f0e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F0ECu;
        goto label_31f0ec;
    }
    ctx->pc = 0x31F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F0ECu);
        ctx->pc = 0x31F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F0E4u;
        // 0x31f0e8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F0E4u, 0x31F0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F0ECu;
label_31f0ec:
    // 0x31f0ec: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x31f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f0f0:
    // 0x31f0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31f0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f0f4:
    // 0x31f0f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31f0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f0f8:
    // 0x31f0f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f0fc:
    // 0x31f0fc: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x31f0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_31f100:
    // 0x31f100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x31f100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f104:
    // 0x31f104: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x31f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_31f108:
    // 0x31f108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31f108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f10c:
    // 0x31f10c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x31f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_31f110:
    // 0x31f110: 0x40f809  jalr        $v0
label_31f114:
    if (ctx->pc == 0x31F114u) {
        ctx->pc = 0x31F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F110u;
        // 0x31f114: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F118u;
        goto label_31f118;
    }
    ctx->pc = 0x31F110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F118u);
        ctx->pc = 0x31F114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F110u;
        // 0x31f114: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F110u, 0x31F118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F118u;
label_31f118:
    // 0x31f118: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
label_31f11c:
    if (ctx->pc == 0x31F11Cu) {
        ctx->pc = 0x31F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F118u;
        // 0x31f11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F120u;
        goto label_31f120;
    }
    ctx->pc = 0x31F118u;
    {
        const bool branch_taken_0x31f118 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31f118) {
            ctx->pc = 0x31F11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F118u;
            // 0x31f11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F158u;
            goto label_31f158;
        }
    }
    ctx->pc = 0x31F120u;
label_31f120:
    // 0x31f120: 0x52370006  beql        $s1, $s7, . + 4 + (0x6 << 2)
label_31f124:
    if (ctx->pc == 0x31F124u) {
        ctx->pc = 0x31F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F120u;
        // 0x31f124: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F128u;
        goto label_31f128;
    }
    ctx->pc = 0x31F120u;
    {
        const bool branch_taken_0x31f120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x31f120) {
            ctx->pc = 0x31F124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F120u;
            // 0x31f124: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F13Cu;
            goto label_31f13c;
        }
    }
    ctx->pc = 0x31F128u;
label_31f128:
    // 0x31f128: 0x10570003  beq         $v0, $s7, . + 4 + (0x3 << 2)
label_31f12c:
    if (ctx->pc == 0x31F12Cu) {
        ctx->pc = 0x31F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F128u;
        // 0x31f12c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F130u;
        goto label_31f130;
    }
    ctx->pc = 0x31F128u;
    {
        const bool branch_taken_0x31f128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x31F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F128u;
        // 0x31f12c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f128) {
            ctx->pc = 0x31F138u;
            goto label_31f138;
        }
    }
    ctx->pc = 0x31F130u;
label_31f130:
    // 0x31f130: 0x10000009  b           . + 4 + (0x9 << 2)
label_31f134:
    if (ctx->pc == 0x31F134u) {
        ctx->pc = 0x31F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F130u;
        // 0x31f134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F138u;
        goto label_31f138;
    }
    ctx->pc = 0x31F130u;
    {
        const bool branch_taken_0x31f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F130u;
        // 0x31f134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f130) {
            ctx->pc = 0x31F158u;
            goto label_31f158;
        }
    }
    ctx->pc = 0x31F138u;
label_31f138:
    // 0x31f138: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x31f138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_31f13c:
    // 0x31f13c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31f140:
    // 0x31f140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31f144:
    // 0x31f144: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31f144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_31f148:
    // 0x31f148: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x31f148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31f14c:
    // 0x31f14c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_31f150:
    if (ctx->pc == 0x31F150u) {
        ctx->pc = 0x31F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F14Cu;
        // 0x31f150: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F154u;
        goto label_31f154;
    }
    ctx->pc = 0x31F14Cu;
    {
        const bool branch_taken_0x31f14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F14Cu;
        // 0x31f150: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f14c) {
            ctx->pc = 0x31F018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f018;
        }
    }
    ctx->pc = 0x31F154u;
label_31f154:
    // 0x31f154: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31f154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f158:
    // 0x31f158: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31f158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_31f15c:
    // 0x31f15c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x31f15cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_31f160:
    // 0x31f160: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x31f160u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_31f164:
    // 0x31f164: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x31f164u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31f168:
    // 0x31f168: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x31f168u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_31f16c:
    // 0x31f16c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x31f16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31f170:
    // 0x31f170: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x31f170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_31f174:
    // 0x31f174: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x31f174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31f178:
    // 0x31f178: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x31f178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31f17c:
    // 0x31f17c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31f17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31f180:
    // 0x31f180: 0x3e00008  jr          $ra
label_31f184:
    if (ctx->pc == 0x31F184u) {
        ctx->pc = 0x31F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F180u;
        // 0x31f184: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F188u;
        goto label_fallthrough_0x31f180;
    }
    ctx->pc = 0x31F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F180u;
        // 0x31f184: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31f180:
    ctx->pc = 0x31F188u;
}
