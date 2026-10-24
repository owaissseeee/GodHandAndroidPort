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

// Function: func_0025C010
// Address: 0x25c010 - 0x25c1d0
void func_0025C010_0x25c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025C010_0x25c010");
#endif

    switch (ctx->pc) {
        case 0x25c010u: goto label_25c010;
        case 0x25c014u: goto label_25c014;
        case 0x25c018u: goto label_25c018;
        case 0x25c01cu: goto label_25c01c;
        case 0x25c020u: goto label_25c020;
        case 0x25c024u: goto label_25c024;
        case 0x25c028u: goto label_25c028;
        case 0x25c02cu: goto label_25c02c;
        case 0x25c030u: goto label_25c030;
        case 0x25c034u: goto label_25c034;
        case 0x25c038u: goto label_25c038;
        case 0x25c03cu: goto label_25c03c;
        case 0x25c040u: goto label_25c040;
        case 0x25c044u: goto label_25c044;
        case 0x25c048u: goto label_25c048;
        case 0x25c04cu: goto label_25c04c;
        case 0x25c050u: goto label_25c050;
        case 0x25c054u: goto label_25c054;
        case 0x25c058u: goto label_25c058;
        case 0x25c05cu: goto label_25c05c;
        case 0x25c060u: goto label_25c060;
        case 0x25c064u: goto label_25c064;
        case 0x25c068u: goto label_25c068;
        case 0x25c06cu: goto label_25c06c;
        case 0x25c070u: goto label_25c070;
        case 0x25c074u: goto label_25c074;
        case 0x25c078u: goto label_25c078;
        case 0x25c07cu: goto label_25c07c;
        case 0x25c080u: goto label_25c080;
        case 0x25c084u: goto label_25c084;
        case 0x25c088u: goto label_25c088;
        case 0x25c08cu: goto label_25c08c;
        case 0x25c090u: goto label_25c090;
        case 0x25c094u: goto label_25c094;
        case 0x25c098u: goto label_25c098;
        case 0x25c09cu: goto label_25c09c;
        case 0x25c0a0u: goto label_25c0a0;
        case 0x25c0a4u: goto label_25c0a4;
        case 0x25c0a8u: goto label_25c0a8;
        case 0x25c0acu: goto label_25c0ac;
        case 0x25c0b0u: goto label_25c0b0;
        case 0x25c0b4u: goto label_25c0b4;
        case 0x25c0b8u: goto label_25c0b8;
        case 0x25c0bcu: goto label_25c0bc;
        case 0x25c0c0u: goto label_25c0c0;
        case 0x25c0c4u: goto label_25c0c4;
        case 0x25c0c8u: goto label_25c0c8;
        case 0x25c0ccu: goto label_25c0cc;
        case 0x25c0d0u: goto label_25c0d0;
        case 0x25c0d4u: goto label_25c0d4;
        case 0x25c0d8u: goto label_25c0d8;
        case 0x25c0dcu: goto label_25c0dc;
        case 0x25c0e0u: goto label_25c0e0;
        case 0x25c0e4u: goto label_25c0e4;
        case 0x25c0e8u: goto label_25c0e8;
        case 0x25c0ecu: goto label_25c0ec;
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        default: break;
    }

    ctx->pc = 0x25c010u;

label_25c010:
    // 0x25c010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25c014:
    // 0x25c014: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25c014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25c018:
    // 0x25c018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c01c:
    // 0x25c01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c020:
    // 0x25c020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c024:
    // 0x25c024: 0xc0b6dac  jal         func_2DB6B0
label_25c028:
    if (ctx->pc == 0x25C028u) {
        ctx->pc = 0x25C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C024u;
        // 0x25c028: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C02Cu;
        goto label_25c02c;
    }
    ctx->pc = 0x25C024u;
    SET_GPR_U32(ctx, 31, 0x25C02Cu);
    ctx->pc = 0x25C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C024u;
    // 0x25c028: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25C024u, 0x25C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C02Cu;
label_25c02c:
    // 0x25c02c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25c030:
    // 0x25c030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c034:
    // 0x25c034: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25c038:
    // 0x25c038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c03c:
    // 0x25c03c: 0xc04d476  jal         func_1351D8
label_25c040:
    if (ctx->pc == 0x25C040u) {
        ctx->pc = 0x25C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C03Cu;
        // 0x25c040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C044u;
        goto label_25c044;
    }
    ctx->pc = 0x25C03Cu;
    SET_GPR_U32(ctx, 31, 0x25C044u);
    ctx->pc = 0x25C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C03Cu;
    // 0x25c040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25C03Cu, 0x25C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C044u;
label_25c044:
    // 0x25c044: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25c044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25c048:
    // 0x25c048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c04c:
    // 0x25c04c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25c04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c050:
    // 0x25c050: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_25c054:
    if (ctx->pc == 0x25C054u) {
        ctx->pc = 0x25C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C050u;
        // 0x25c054: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C058u;
        goto label_25c058;
    }
    ctx->pc = 0x25C050u;
    {
        const bool branch_taken_0x25c050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C050u;
        // 0x25c054: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c050) {
            ctx->pc = 0x25C06Cu;
            goto label_25c06c;
        }
    }
    ctx->pc = 0x25C058u;
label_25c058:
    // 0x25c058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c05c:
    // 0x25c05c: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_25c060:
    if (ctx->pc == 0x25C060u) {
        ctx->pc = 0x25C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C05Cu;
        // 0x25c060: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C064u;
        goto label_25c064;
    }
    ctx->pc = 0x25C05Cu;
    {
        const bool branch_taken_0x25c05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c05c) {
            ctx->pc = 0x25C060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C05Cu;
            // 0x25c060: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C0C4u;
            goto label_25c0c4;
        }
    }
    ctx->pc = 0x25C064u;
label_25c064:
    // 0x25c064: 0x10000051  b           . + 4 + (0x51 << 2)
label_25c068:
    if (ctx->pc == 0x25C068u) {
        ctx->pc = 0x25C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C064u;
        // 0x25c068: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C06Cu;
        goto label_25c06c;
    }
    ctx->pc = 0x25C064u;
    {
        const bool branch_taken_0x25c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C064u;
        // 0x25c068: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c064) {
            ctx->pc = 0x25C1ACu;
            goto label_25c1ac;
        }
    }
    ctx->pc = 0x25C06Cu;
label_25c06c:
    // 0x25c06c: 0xc09ac7a  jal         func_26B1E8
label_25c070:
    if (ctx->pc == 0x25C070u) {
        ctx->pc = 0x25C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C06Cu;
        // 0x25c070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C074u;
        goto label_25c074;
    }
    ctx->pc = 0x25C06Cu;
    SET_GPR_U32(ctx, 31, 0x25C074u);
    ctx->pc = 0x25C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C06Cu;
    // 0x25c070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C06Cu, 0x25C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C074u;
label_25c074:
    // 0x25c074: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c078:
    // 0x25c078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c07c:
    // 0x25c07c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c07cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c080:
    // 0x25c080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c084:
    // 0x25c084: 0x8c451074  lw          $a1, 0x1074($v0)
    ctx->pc = 0x25c084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4212)));
label_25c088:
    // 0x25c088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c08c:
    // 0x25c08c: 0x8c461078  lw          $a2, 0x1078($v0)
    ctx->pc = 0x25c08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4216)));
label_25c090:
    // 0x25c090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c094:
    // 0x25c094: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c098:
    // 0x25c098: 0xc0aa15e  jal         func_2A8578
label_25c09c:
    if (ctx->pc == 0x25C09Cu) {
        ctx->pc = 0x25C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C098u;
        // 0x25c09c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0A0u;
        goto label_25c0a0;
    }
    ctx->pc = 0x25C098u;
    SET_GPR_U32(ctx, 31, 0x25C0A0u);
    ctx->pc = 0x25C09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C098u;
    // 0x25c09c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C098u, 0x25C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C0A0u;
label_25c0a0:
    // 0x25c0a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c0a4:
    // 0x25c0a4: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x25c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_25c0a8:
    // 0x25c0a8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25c0ac:
    // 0x25c0ac: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25c0b0:
    // 0x25c0b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c0b4:
    // 0x25c0b4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25c0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25c0b8:
    // 0x25c0b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c0bc:
    // 0x25c0bc: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25c0c0:
    // 0x25c0c0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25c0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25c0c4:
    // 0x25c0c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25c0c8:
    if (ctx->pc == 0x25C0C8u) {
        ctx->pc = 0x25C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0C4u;
        // 0x25c0c8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0CCu;
        goto label_25c0cc;
    }
    ctx->pc = 0x25C0C4u;
    {
        const bool branch_taken_0x25c0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0C4u;
        // 0x25c0c8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0c4) {
            ctx->pc = 0x25C0ECu;
            goto label_25c0ec;
        }
    }
    ctx->pc = 0x25C0CCu;
label_25c0cc:
    // 0x25c0cc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25c0d0:
    // 0x25c0d0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c0d4:
    // 0x25c0d4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25c0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25c0d8:
    // 0x25c0d8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c0dc:
    // 0x25c0dc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c0dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25c0e0:
    // 0x25c0e0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25c0e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25c0e4:
    // 0x25c0e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c0e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c0e8:
    // 0x25c0e8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c0ec:
    // 0x25c0ec: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25c0f0:
    // 0x25c0f0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_25c0f4:
    if (ctx->pc == 0x25C0F4u) {
        ctx->pc = 0x25C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0F0u;
        // 0x25c0f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C0F8u;
        goto label_25c0f8;
    }
    ctx->pc = 0x25C0F0u;
    {
        const bool branch_taken_0x25c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0F0u;
        // 0x25c0f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0f0) {
            ctx->pc = 0x25C13Cu;
            goto label_25c13c;
        }
    }
    ctx->pc = 0x25C0F8u;
label_25c0f8:
    // 0x25c0f8: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_25c0fc:
    if (ctx->pc == 0x25C0FCu) {
        ctx->pc = 0x25C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0F8u;
        // 0x25c0fc: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C100u;
        goto label_25c100;
    }
    ctx->pc = 0x25C0F8u;
    {
        const bool branch_taken_0x25c0f8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0F8u;
        // 0x25c0fc: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0f8) {
            ctx->pc = 0x25C13Cu;
            goto label_25c13c;
        }
    }
    ctx->pc = 0x25C100u;
label_25c100:
    // 0x25c100: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25c104:
    // 0x25c104: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x25c104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_25c108:
    // 0x25c108: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25c108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c10c:
    // 0x25c10c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c110:
    // 0x25c110: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25c110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25c114:
    // 0x25c114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c118:
    // 0x25c118: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25c11c:
    // 0x25c11c: 0x40f809  jalr        $v0
label_25c120:
    if (ctx->pc == 0x25C120u) {
        ctx->pc = 0x25C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C11Cu;
        // 0x25c120: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C124u;
        goto label_25c124;
    }
    ctx->pc = 0x25C11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C124u);
        ctx->pc = 0x25C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C11Cu;
        // 0x25c120: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C11Cu, 0x25C124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C124u;
label_25c124:
    // 0x25c124: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25c124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25c128:
    // 0x25c128: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_25c12c:
    // 0x25c12c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c130:
    // 0x25c130: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25c130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25c134:
    // 0x25c134: 0xc0aa65e  jal         func_2A9978
label_25c138:
    if (ctx->pc == 0x25C138u) {
        ctx->pc = 0x25C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C134u;
        // 0x25c138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C13Cu;
        goto label_25c13c;
    }
    ctx->pc = 0x25C134u;
    SET_GPR_U32(ctx, 31, 0x25C13Cu);
    ctx->pc = 0x25C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C134u;
    // 0x25c138: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25C134u, 0x25C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C13Cu;
label_25c13c:
    // 0x25c13c: 0xc055f06  jal         func_157C18
label_25c140:
    if (ctx->pc == 0x25C140u) {
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C144u;
        goto label_25c144;
    }
    ctx->pc = 0x25C13Cu;
    SET_GPR_U32(ctx, 31, 0x25C144u);
    ctx->pc = 0x25C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C13Cu;
    // 0x25c140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C13Cu, 0x25C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C144u;
label_25c144:
    // 0x25c144: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25c148:
    if (ctx->pc == 0x25C148u) {
        ctx->pc = 0x25C14Cu;
        goto label_25c14c;
    }
    ctx->pc = 0x25C144u;
    {
        const bool branch_taken_0x25c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c144) {
            ctx->pc = 0x25C188u;
            goto label_25c188;
        }
    }
    ctx->pc = 0x25C14Cu;
label_25c14c:
    // 0x25c14c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25c150:
    // 0x25c150: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_25c154:
    if (ctx->pc == 0x25C154u) {
        ctx->pc = 0x25C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C150u;
        // 0x25c154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C158u;
        goto label_25c158;
    }
    ctx->pc = 0x25C150u;
    {
        const bool branch_taken_0x25c150 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C150u;
        // 0x25c154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c150) {
            ctx->pc = 0x25C170u;
            goto label_25c170;
        }
    }
    ctx->pc = 0x25C158u;
label_25c158:
    // 0x25c158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c15c:
    // 0x25c15c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25c160:
    // 0x25c160: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25c160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25c164:
    // 0x25c164: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25c164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25c168:
    // 0x25c168: 0x10000006  b           . + 4 + (0x6 << 2)
label_25c16c:
    if (ctx->pc == 0x25C16Cu) {
        ctx->pc = 0x25C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C168u;
        // 0x25c16c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C170u;
        goto label_25c170;
    }
    ctx->pc = 0x25C168u;
    {
        const bool branch_taken_0x25c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C168u;
        // 0x25c16c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c168) {
            ctx->pc = 0x25C184u;
            goto label_25c184;
        }
    }
    ctx->pc = 0x25C170u;
label_25c170:
    // 0x25c170: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_25c174:
    // 0x25c174: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25c174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c178:
    // 0x25c178: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25c178u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25c17c:
    // 0x25c17c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25c17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25c180:
    // 0x25c180: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x25c180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_25c184:
    // 0x25c184: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25c184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25c188:
    // 0x25c188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c18c:
    // 0x25c18c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c190:
    // 0x25c190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c194:
    // 0x25c194: 0xc053e7c  jal         func_14F9F0
label_25c198:
    if (ctx->pc == 0x25C198u) {
        ctx->pc = 0x25C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C194u;
        // 0x25c198: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C19Cu;
        goto label_25c19c;
    }
    ctx->pc = 0x25C194u;
    SET_GPR_U32(ctx, 31, 0x25C19Cu);
    ctx->pc = 0x25C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C194u;
    // 0x25c198: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C194u, 0x25C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C19Cu;
label_25c19c:
    // 0x25c19c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25c19cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25c1a0:
    // 0x25c1a0: 0xc053e4a  jal         func_14F928
label_25c1a4:
    if (ctx->pc == 0x25C1A4u) {
        ctx->pc = 0x25C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1A0u;
        // 0x25c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1A8u;
        goto label_25c1a8;
    }
    ctx->pc = 0x25C1A0u;
    SET_GPR_U32(ctx, 31, 0x25C1A8u);
    ctx->pc = 0x25C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1A0u;
    // 0x25c1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C1A0u, 0x25C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C1A8u;
label_25c1a8:
    // 0x25c1a8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c1a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c1ac:
    // 0x25c1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c1b0:
    // 0x25c1b0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x25c1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_25c1b4:
    // 0x25c1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c1b8:
    // 0x25c1b8: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x25c1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
label_25c1bc:
    // 0x25c1bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25c1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c1c0:
    // 0x25c1c0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25c1c4:
    // 0x25c1c4: 0x3e00008  jr          $ra
label_25c1c8:
    if (ctx->pc == 0x25C1C8u) {
        ctx->pc = 0x25C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C4u;
        // 0x25c1c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1CCu;
        goto label_25c1cc;
    }
    ctx->pc = 0x25C1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C4u;
        // 0x25c1c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C1CCu;
label_25c1cc:
    // 0x25c1cc: 0x0  nop
    ctx->pc = 0x25c1ccu;
    // NOP
    ctx->pc = 0x25c1d0u;
}
