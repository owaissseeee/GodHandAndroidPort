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

// Function: func_0032C048
// Address: 0x32c048 - 0x32c1e0
void func_0032C048_0x32c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032C048_0x32c048");
#endif

    switch (ctx->pc) {
        case 0x32c048u: goto label_32c048;
        case 0x32c04cu: goto label_32c04c;
        case 0x32c050u: goto label_32c050;
        case 0x32c054u: goto label_32c054;
        case 0x32c058u: goto label_32c058;
        case 0x32c05cu: goto label_32c05c;
        case 0x32c060u: goto label_32c060;
        case 0x32c064u: goto label_32c064;
        case 0x32c068u: goto label_32c068;
        case 0x32c06cu: goto label_32c06c;
        case 0x32c070u: goto label_32c070;
        case 0x32c074u: goto label_32c074;
        case 0x32c078u: goto label_32c078;
        case 0x32c07cu: goto label_32c07c;
        case 0x32c080u: goto label_32c080;
        case 0x32c084u: goto label_32c084;
        case 0x32c088u: goto label_32c088;
        case 0x32c08cu: goto label_32c08c;
        case 0x32c090u: goto label_32c090;
        case 0x32c094u: goto label_32c094;
        case 0x32c098u: goto label_32c098;
        case 0x32c09cu: goto label_32c09c;
        case 0x32c0a0u: goto label_32c0a0;
        case 0x32c0a4u: goto label_32c0a4;
        case 0x32c0a8u: goto label_32c0a8;
        case 0x32c0acu: goto label_32c0ac;
        case 0x32c0b0u: goto label_32c0b0;
        case 0x32c0b4u: goto label_32c0b4;
        case 0x32c0b8u: goto label_32c0b8;
        case 0x32c0bcu: goto label_32c0bc;
        case 0x32c0c0u: goto label_32c0c0;
        case 0x32c0c4u: goto label_32c0c4;
        case 0x32c0c8u: goto label_32c0c8;
        case 0x32c0ccu: goto label_32c0cc;
        case 0x32c0d0u: goto label_32c0d0;
        case 0x32c0d4u: goto label_32c0d4;
        case 0x32c0d8u: goto label_32c0d8;
        case 0x32c0dcu: goto label_32c0dc;
        case 0x32c0e0u: goto label_32c0e0;
        case 0x32c0e4u: goto label_32c0e4;
        case 0x32c0e8u: goto label_32c0e8;
        case 0x32c0ecu: goto label_32c0ec;
        case 0x32c0f0u: goto label_32c0f0;
        case 0x32c0f4u: goto label_32c0f4;
        case 0x32c0f8u: goto label_32c0f8;
        case 0x32c0fcu: goto label_32c0fc;
        case 0x32c100u: goto label_32c100;
        case 0x32c104u: goto label_32c104;
        case 0x32c108u: goto label_32c108;
        case 0x32c10cu: goto label_32c10c;
        case 0x32c110u: goto label_32c110;
        case 0x32c114u: goto label_32c114;
        case 0x32c118u: goto label_32c118;
        case 0x32c11cu: goto label_32c11c;
        case 0x32c120u: goto label_32c120;
        case 0x32c124u: goto label_32c124;
        case 0x32c128u: goto label_32c128;
        case 0x32c12cu: goto label_32c12c;
        case 0x32c130u: goto label_32c130;
        case 0x32c134u: goto label_32c134;
        case 0x32c138u: goto label_32c138;
        case 0x32c13cu: goto label_32c13c;
        case 0x32c140u: goto label_32c140;
        case 0x32c144u: goto label_32c144;
        case 0x32c148u: goto label_32c148;
        case 0x32c14cu: goto label_32c14c;
        case 0x32c150u: goto label_32c150;
        case 0x32c154u: goto label_32c154;
        case 0x32c158u: goto label_32c158;
        case 0x32c15cu: goto label_32c15c;
        case 0x32c160u: goto label_32c160;
        case 0x32c164u: goto label_32c164;
        case 0x32c168u: goto label_32c168;
        case 0x32c16cu: goto label_32c16c;
        case 0x32c170u: goto label_32c170;
        case 0x32c174u: goto label_32c174;
        case 0x32c178u: goto label_32c178;
        case 0x32c17cu: goto label_32c17c;
        case 0x32c180u: goto label_32c180;
        case 0x32c184u: goto label_32c184;
        case 0x32c188u: goto label_32c188;
        case 0x32c18cu: goto label_32c18c;
        case 0x32c190u: goto label_32c190;
        case 0x32c194u: goto label_32c194;
        case 0x32c198u: goto label_32c198;
        case 0x32c19cu: goto label_32c19c;
        case 0x32c1a0u: goto label_32c1a0;
        case 0x32c1a4u: goto label_32c1a4;
        case 0x32c1a8u: goto label_32c1a8;
        case 0x32c1acu: goto label_32c1ac;
        case 0x32c1b0u: goto label_32c1b0;
        case 0x32c1b4u: goto label_32c1b4;
        case 0x32c1b8u: goto label_32c1b8;
        case 0x32c1bcu: goto label_32c1bc;
        case 0x32c1c0u: goto label_32c1c0;
        case 0x32c1c4u: goto label_32c1c4;
        case 0x32c1c8u: goto label_32c1c8;
        case 0x32c1ccu: goto label_32c1cc;
        case 0x32c1d0u: goto label_32c1d0;
        case 0x32c1d4u: goto label_32c1d4;
        case 0x32c1d8u: goto label_32c1d8;
        case 0x32c1dcu: goto label_32c1dc;
        default: break;
    }

    ctx->pc = 0x32c048u;

label_32c048:
    // 0x32c048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32c04c:
    // 0x32c04c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32c050:
    // 0x32c050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c054:
    // 0x32c054: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_32c058:
    // 0x32c058: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_32c05c:
    // 0x32c05c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x32c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_32c060:
    // 0x32c060: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32c060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32c064:
    // 0x32c064: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32c068:
    // 0x32c068: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32c06c:
    // 0x32c06c: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c070:
    // 0x32c070: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_32c074:
    // 0x32c074: 0xc0c9e06  jal         func_327818
label_32c078:
    if (ctx->pc == 0x32C078u) {
        ctx->pc = 0x32C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C074u;
        // 0x32c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C07Cu;
        goto label_32c07c;
    }
    ctx->pc = 0x32C074u;
    SET_GPR_U32(ctx, 31, 0x32C07Cu);
    ctx->pc = 0x32C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C074u;
    // 0x32c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327818u, 0x32C074u, 0x32C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C07Cu;
label_32c07c:
    // 0x32c07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c080:
    // 0x32c080: 0xc0c9e0c  jal         func_327830
label_32c084:
    if (ctx->pc == 0x32C084u) {
        ctx->pc = 0x32C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C080u;
        // 0x32c084: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C088u;
        goto label_32c088;
    }
    ctx->pc = 0x32C080u;
    SET_GPR_U32(ctx, 31, 0x32C088u);
    ctx->pc = 0x32C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C080u;
    // 0x32c084: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327830u, 0x32C080u, 0x32C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C088u;
label_32c088:
    // 0x32c088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c08c:
    // 0x32c08c: 0xc0c9e18  jal         func_327860
label_32c090:
    if (ctx->pc == 0x32C090u) {
        ctx->pc = 0x32C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C08Cu;
        // 0x32c090: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C094u;
        goto label_32c094;
    }
    ctx->pc = 0x32C08Cu;
    SET_GPR_U32(ctx, 31, 0x32C094u);
    ctx->pc = 0x32C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C08Cu;
    // 0x32c090: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327860u, 0x32C08Cu, 0x32C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C094u;
label_32c094:
    // 0x32c094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c098:
    // 0x32c098: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32c098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c09c:
    // 0x32c09c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x32c09cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_32c0a0:
    // 0x32c0a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c0a4:
    // 0x32c0a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x32c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_32c0a8:
    // 0x32c0a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32c0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_32c0ac:
    // 0x32c0ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_32c0b0:
    if (ctx->pc == 0x32C0B0u) {
        ctx->pc = 0x32C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0ACu;
        // 0x32c0b0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C0B4u;
        goto label_32c0b4;
    }
    ctx->pc = 0x32C0ACu;
    {
        const bool branch_taken_0x32c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0ACu;
        // 0x32c0b0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c0ac) {
            ctx->pc = 0x32C0D8u;
            goto label_32c0d8;
        }
    }
    ctx->pc = 0x32C0B4u;
label_32c0b4:
    // 0x32c0b4: 0x8222006c  lb          $v0, 0x6C($s1)
    ctx->pc = 0x32c0b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_32c0b8:
    // 0x32c0b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_32c0bc:
    if (ctx->pc == 0x32C0BCu) {
        ctx->pc = 0x32C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0B8u;
        // 0x32c0bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C0C0u;
        goto label_32c0c0;
    }
    ctx->pc = 0x32C0B8u;
    {
        const bool branch_taken_0x32c0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c0b8) {
            ctx->pc = 0x32C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C0B8u;
            // 0x32c0bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C0DCu;
            goto label_32c0dc;
        }
    }
    ctx->pc = 0x32C0C0u;
label_32c0c0:
    // 0x32c0c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32c0c4:
    // 0x32c0c4: 0xc0c9dd6  jal         func_327758
label_32c0c8:
    if (ctx->pc == 0x32C0C8u) {
        ctx->pc = 0x32C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0C4u;
        // 0x32c0c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C0CCu;
        goto label_32c0cc;
    }
    ctx->pc = 0x32C0C4u;
    SET_GPR_U32(ctx, 31, 0x32C0CCu);
    ctx->pc = 0x32C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C0C4u;
    // 0x32c0c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C0C4u, 0x32C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0CCu;
label_32c0cc:
    // 0x32c0cc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_32c0d0:
    if (ctx->pc == 0x32C0D0u) {
        ctx->pc = 0x32C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0CCu;
        // 0x32c0d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C0D4u;
        goto label_32c0d4;
    }
    ctx->pc = 0x32C0CCu;
    {
        const bool branch_taken_0x32c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0CCu;
        // 0x32c0d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c0cc) {
            ctx->pc = 0x32C1C0u;
            goto label_32c1c0;
        }
    }
    ctx->pc = 0x32C0D4u;
label_32c0d4:
    // 0x32c0d4: 0x0  nop
    ctx->pc = 0x32c0d4u;
    // NOP
label_32c0d8:
    // 0x32c0d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c0dc:
    // 0x32c0dc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x32c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_32c0e0:
    // 0x32c0e0: 0x40f809  jalr        $v0
label_32c0e4:
    if (ctx->pc == 0x32C0E4u) {
        ctx->pc = 0x32C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0E0u;
        // 0x32c0e4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C0E8u;
        goto label_32c0e8;
    }
    ctx->pc = 0x32C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C0E8u);
        ctx->pc = 0x32C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0E0u;
        // 0x32c0e4: 0x8e260050  lw          $a2, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C0E0u, 0x32C0E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C0E8u;
label_32c0e8:
    // 0x32c0e8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32c0ec:
    // 0x32c0ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x32c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32c0f0:
    // 0x32c0f0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x32c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_32c0f4:
    // 0x32c0f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x32c0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32c0f8:
    // 0x32c0f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32c0fc:
    if (ctx->pc == 0x32C0FCu) {
        ctx->pc = 0x32C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0F8u;
        // 0x32c0fc: 0x24842890  addiu       $a0, $a0, 0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C100u;
        goto label_32c100;
    }
    ctx->pc = 0x32C0F8u;
    {
        const bool branch_taken_0x32c0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0F8u;
        // 0x32c0fc: 0x24842890  addiu       $a0, $a0, 0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c0f8) {
            ctx->pc = 0x32C108u;
            goto label_32c108;
        }
    }
    ctx->pc = 0x32C100u;
label_32c100:
    // 0x32c100: 0xc0cfc4c  jal         func_33F130
label_32c104:
    if (ctx->pc == 0x32C104u) {
        ctx->pc = 0x32C108u;
        goto label_32c108;
    }
    ctx->pc = 0x32C100u;
    SET_GPR_U32(ctx, 31, 0x32C108u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32C100u, 0x32C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C108u;
label_32c108:
    // 0x32c108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c10c:
    // 0x32c10c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32c10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c110:
    // 0x32c110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c114:
    // 0x32c114: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32c118:
    // 0x32c118: 0x40f809  jalr        $v0
label_32c11c:
    if (ctx->pc == 0x32C11Cu) {
        ctx->pc = 0x32C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C118u;
        // 0x32c11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C120u;
        goto label_32c120;
    }
    ctx->pc = 0x32C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C120u);
        ctx->pc = 0x32C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C118u;
        // 0x32c11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C118u, 0x32C120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C120u;
label_32c120:
    // 0x32c120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c124:
    // 0x32c124: 0xc0c9dd8  jal         func_327760
label_32c128:
    if (ctx->pc == 0x32C128u) {
        ctx->pc = 0x32C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C124u;
        // 0x32c128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C12Cu;
        goto label_32c12c;
    }
    ctx->pc = 0x32C124u;
    SET_GPR_U32(ctx, 31, 0x32C12Cu);
    ctx->pc = 0x32C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C124u;
    // 0x32c128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327760u, 0x32C124u, 0x32C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C12Cu;
label_32c12c:
    // 0x32c12c: 0x2932823  subu        $a1, $s4, $s3
    ctx->pc = 0x32c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_32c130:
    // 0x32c130: 0xae250090  sw          $a1, 0x90($s1)
    ctx->pc = 0x32c130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 5));
label_32c134:
    // 0x32c134: 0xc0c9dd6  jal         func_327758
label_32c138:
    if (ctx->pc == 0x32C138u) {
        ctx->pc = 0x32C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C134u;
        // 0x32c138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C13Cu;
        goto label_32c13c;
    }
    ctx->pc = 0x32C134u;
    SET_GPR_U32(ctx, 31, 0x32C13Cu);
    ctx->pc = 0x32C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C134u;
    // 0x32c138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C134u, 0x32C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C13Cu;
label_32c13c:
    // 0x32c13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c140:
    // 0x32c140: 0xc0c9dda  jal         func_327768
label_32c144:
    if (ctx->pc == 0x32C144u) {
        ctx->pc = 0x32C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C140u;
        // 0x32c144: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C148u;
        goto label_32c148;
    }
    ctx->pc = 0x32C140u;
    SET_GPR_U32(ctx, 31, 0x32C148u);
    ctx->pc = 0x32C144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C140u;
    // 0x32c144: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x32C140u, 0x32C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C148u;
label_32c148:
    // 0x32c148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c14c:
    // 0x32c14c: 0xc0c9dc6  jal         func_327718
label_32c150:
    if (ctx->pc == 0x32C150u) {
        ctx->pc = 0x32C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C14Cu;
        // 0x32c150: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C154u;
        goto label_32c154;
    }
    ctx->pc = 0x32C14Cu;
    SET_GPR_U32(ctx, 31, 0x32C154u);
    ctx->pc = 0x32C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C14Cu;
    // 0x32c150: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327718u, 0x32C14Cu, 0x32C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C154u;
label_32c154:
    // 0x32c154: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x32c154u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_32c158:
    // 0x32c158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c15c:
    // 0x32c15c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_32c160:
    if (ctx->pc == 0x32C160u) {
        ctx->pc = 0x32C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C15Cu;
        // 0x32c160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C164u;
        goto label_32c164;
    }
    ctx->pc = 0x32C15Cu;
    {
        const bool branch_taken_0x32c15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C15Cu;
        // 0x32c160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c15c) {
            ctx->pc = 0x32C1A8u;
            goto label_32c1a8;
        }
    }
    ctx->pc = 0x32C164u;
label_32c164:
    // 0x32c164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c168:
    // 0x32c168: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x32c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_32c16c:
    // 0x32c16c: 0x60f809  jalr        $v1
label_32c170:
    if (ctx->pc == 0x32C170u) {
        ctx->pc = 0x32C174u;
        goto label_32c174;
    }
    ctx->pc = 0x32C16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C16Cu, 0x32C174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C174u;
label_32c174:
    // 0x32c174: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c178:
    // 0x32c178: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32c178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c17c:
    // 0x32c17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c180:
    // 0x32c180: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32c180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32c184:
    // 0x32c184: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c188:
    // 0x32c188: 0x60f809  jalr        $v1
label_32c18c:
    if (ctx->pc == 0x32C18Cu) {
        ctx->pc = 0x32C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C188u;
        // 0x32c18c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C190u;
        goto label_32c190;
    }
    ctx->pc = 0x32C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C190u);
        ctx->pc = 0x32C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C188u;
        // 0x32c18c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C188u, 0x32C190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C190u;
label_32c190:
    // 0x32c190: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x32c190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32c194:
    // 0x32c194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c198:
    // 0x32c198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c19c:
    // 0x32c19c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x32c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_32c1a0:
    // 0x32c1a0: 0x40f809  jalr        $v0
label_32c1a4:
    if (ctx->pc == 0x32C1A4u) {
        ctx->pc = 0x32C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1A0u;
        // 0x32c1a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1A8u;
        goto label_32c1a8;
    }
    ctx->pc = 0x32C1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C1A8u);
        ctx->pc = 0x32C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1A0u;
        // 0x32c1a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1A0u, 0x32C1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C1A8u;
label_32c1a8:
    // 0x32c1a8: 0xc0c9e62  jal         func_327988
label_32c1ac:
    if (ctx->pc == 0x32C1ACu) {
        ctx->pc = 0x32C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1A8u;
        // 0x32c1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1B0u;
        goto label_32c1b0;
    }
    ctx->pc = 0x32C1A8u;
    SET_GPR_U32(ctx, 31, 0x32C1B0u);
    ctx->pc = 0x32C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1A8u;
    // 0x32c1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327988u, 0x32C1A8u, 0x32C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C1B0u;
label_32c1b0:
    // 0x32c1b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x32c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_32c1b4:
    // 0x32c1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32c1b8:
    // 0x32c1b8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x32c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_32c1bc:
    // 0x32c1bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32c1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32c1c0:
    // 0x32c1c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32c1c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32c1c4:
    // 0x32c1c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32c1c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32c1c8:
    // 0x32c1c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32c1c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32c1cc:
    // 0x32c1cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32c1ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32c1d0:
    // 0x32c1d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32c1d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32c1d4:
    // 0x32c1d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32c1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32c1d8:
    // 0x32c1d8: 0x3e00008  jr          $ra
label_32c1dc:
    if (ctx->pc == 0x32C1DCu) {
        ctx->pc = 0x32C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1D8u;
        // 0x32c1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C1E0u;
        goto label_fallthrough_0x32c1d8;
    }
    ctx->pc = 0x32C1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1D8u;
        // 0x32c1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x32c1d8:
    ctx->pc = 0x32C1E0u;
}
