#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_0079A020
// Address: 0x79a020 - 0x79a260
void func_0079A020_0x79a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A020_0x79a020");
#endif

    switch (ctx->pc) {
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        case 0x79a0a0u: goto label_79a0a0;
        case 0x79a0a4u: goto label_79a0a4;
        case 0x79a0a8u: goto label_79a0a8;
        case 0x79a0acu: goto label_79a0ac;
        case 0x79a0b0u: goto label_79a0b0;
        case 0x79a0b4u: goto label_79a0b4;
        case 0x79a0b8u: goto label_79a0b8;
        case 0x79a0bcu: goto label_79a0bc;
        case 0x79a0c0u: goto label_79a0c0;
        case 0x79a0c4u: goto label_79a0c4;
        case 0x79a0c8u: goto label_79a0c8;
        case 0x79a0ccu: goto label_79a0cc;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0d4u: goto label_79a0d4;
        case 0x79a0d8u: goto label_79a0d8;
        case 0x79a0dcu: goto label_79a0dc;
        case 0x79a0e0u: goto label_79a0e0;
        case 0x79a0e4u: goto label_79a0e4;
        case 0x79a0e8u: goto label_79a0e8;
        case 0x79a0ecu: goto label_79a0ec;
        case 0x79a0f0u: goto label_79a0f0;
        case 0x79a0f4u: goto label_79a0f4;
        case 0x79a0f8u: goto label_79a0f8;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a100u: goto label_79a100;
        case 0x79a104u: goto label_79a104;
        case 0x79a108u: goto label_79a108;
        case 0x79a10cu: goto label_79a10c;
        case 0x79a110u: goto label_79a110;
        case 0x79a114u: goto label_79a114;
        case 0x79a118u: goto label_79a118;
        case 0x79a11cu: goto label_79a11c;
        case 0x79a120u: goto label_79a120;
        case 0x79a124u: goto label_79a124;
        case 0x79a128u: goto label_79a128;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a130u: goto label_79a130;
        case 0x79a134u: goto label_79a134;
        case 0x79a138u: goto label_79a138;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a140u: goto label_79a140;
        case 0x79a144u: goto label_79a144;
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a1fcu: goto label_79a1fc;
        case 0x79a200u: goto label_79a200;
        case 0x79a204u: goto label_79a204;
        case 0x79a208u: goto label_79a208;
        case 0x79a20cu: goto label_79a20c;
        case 0x79a210u: goto label_79a210;
        case 0x79a214u: goto label_79a214;
        case 0x79a218u: goto label_79a218;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a220u: goto label_79a220;
        case 0x79a224u: goto label_79a224;
        case 0x79a228u: goto label_79a228;
        case 0x79a22cu: goto label_79a22c;
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        default: break;
    }

    ctx->pc = 0x79a020u;

label_79a020:
    // 0x79a020: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_79a024:
    // 0x79a024: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a028:
    // 0x79a028: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_79a02c:
    // 0x79a02c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a030:
    // 0x79a030: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_79a034:
    // 0x79a034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_79a038:
    // 0x79a038: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79a038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_79a03c:
    // 0x79a03c: 0x8c43ad00  lw          $v1, -0x5300($v0)
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946048)));
label_79a040:
    // 0x79a040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a044:
    // 0x79a044: 0x10640040  beq         $v1, $a0, . + 4 + (0x40 << 2)
label_79a048:
    if (ctx->pc == 0x79A048u) {
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A04Cu;
        goto label_79a04c;
    }
    ctx->pc = 0x79A044u;
    {
        const bool branch_taken_0x79a044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a044) {
            ctx->pc = 0x79A148u;
            goto label_79a148;
        }
    }
    ctx->pc = 0x79A04Cu;
label_79a04c:
    // 0x79a04c: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_79a050:
    if (ctx->pc == 0x79A050u) {
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x8e23ad00  lw          $v1, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A054u;
        goto label_79a054;
    }
    ctx->pc = 0x79A04Cu;
    {
        const bool branch_taken_0x79a04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x8e23ad00  lw          $v1, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a04c) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A054u;
label_79a054:
    // 0x79a054: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a058:
    // 0x79a058: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79a05c:
    // 0x79a05c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x79a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_79a060:
    // 0x79a060: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79a064:
    // 0x79a064: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
label_79a068:
    // 0x79a068: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a06c:
    // 0x79a06c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79a06cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_79a070:
    // 0x79a070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a074:
    // 0x79a074: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79a074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_79a078:
    // 0x79a078: 0xc0a54b4  jal         func_2952D0
label_79a07c:
    if (ctx->pc == 0x79A07Cu) {
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A080u;
        goto label_79a080;
    }
    ctx->pc = 0x79A078u;
    SET_GPR_U32(ctx, 31, 0x79A080u);
    ctx->pc = 0x79A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A078u;
    // 0x79a07c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A078u, 0x79A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A080u;
label_79a080:
    // 0x79a080: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a084:
    // 0x79a084: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a088:
    // 0x79a088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a08c:
    // 0x79a08c: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x79a08cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_79a090:
    // 0x79a090: 0xc0a54b4  jal         func_2952D0
label_79a094:
    if (ctx->pc == 0x79A094u) {
        ctx->pc = 0x79A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A090u;
        // 0x79a094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A098u;
        goto label_79a098;
    }
    ctx->pc = 0x79A090u;
    SET_GPR_U32(ctx, 31, 0x79A098u);
    ctx->pc = 0x79A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A090u;
    // 0x79a094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A090u, 0x79A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A098u;
label_79a098:
    // 0x79a098: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79a098u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79a09c:
    // 0x79a09c: 0xc0a54b4  jal         func_2952D0
label_79a0a0:
    if (ctx->pc == 0x79A0A0u) {
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0A4u;
        goto label_79a0a4;
    }
    ctx->pc = 0x79A09Cu;
    SET_GPR_U32(ctx, 31, 0x79A0A4u);
    ctx->pc = 0x79A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A09Cu;
    // 0x79a0a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A09Cu, 0x79A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0A4u;
label_79a0a4:
    // 0x79a0a4: 0xc0b6dac  jal         func_2DB6B0
label_79a0a8:
    if (ctx->pc == 0x79A0A8u) {
        ctx->pc = 0x79A0ACu;
        goto label_79a0ac;
    }
    ctx->pc = 0x79A0A4u;
    SET_GPR_U32(ctx, 31, 0x79A0ACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A0A4u, 0x79A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0ACu;
label_79a0ac:
    // 0x79a0ac: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a0b0:
    // 0x79a0b0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a0b4:
    // 0x79a0b4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a0b8:
    // 0x79a0b8: 0xa0f809  jalr        $a1
label_79a0bc:
    if (ctx->pc == 0x79A0BCu) {
        ctx->pc = 0x79A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B8u;
        // 0x79a0bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0C0u;
        goto label_79a0c0;
    }
    ctx->pc = 0x79A0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A0C0u);
        ctx->pc = 0x79A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B8u;
        // 0x79a0bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0B8u, 0x79A0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A0C0u;
label_79a0c0:
    // 0x79a0c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a0c4:
    // 0x79a0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a0c8:
    // 0x79a0c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a0cc:
    // 0x79a0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a0d0:
    // 0x79a0d0: 0xc0a57e0  jal         func_295F80
label_79a0d4:
    if (ctx->pc == 0x79A0D4u) {
        ctx->pc = 0x79A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D0u;
        // 0x79a0d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0D8u;
        goto label_79a0d8;
    }
    ctx->pc = 0x79A0D0u;
    SET_GPR_U32(ctx, 31, 0x79A0D8u);
    ctx->pc = 0x79A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D0u;
    // 0x79a0d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A0D0u, 0x79A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D8u;
label_79a0d8:
    // 0x79a0d8: 0xc0b6dac  jal         func_2DB6B0
label_79a0dc:
    if (ctx->pc == 0x79A0DCu) {
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0E0u;
        goto label_79a0e0;
    }
    ctx->pc = 0x79A0D8u;
    SET_GPR_U32(ctx, 31, 0x79A0E0u);
    ctx->pc = 0x79A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D8u;
    // 0x79a0dc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A0D8u, 0x79A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0E0u;
label_79a0e0:
    // 0x79a0e0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a0e4:
    // 0x79a0e4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a0e8:
    // 0x79a0e8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a0ec:
    // 0x79a0ec: 0xa0f809  jalr        $a1
label_79a0f0:
    if (ctx->pc == 0x79A0F0u) {
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0F4u;
        goto label_79a0f4;
    }
    ctx->pc = 0x79A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A0F4u);
        ctx->pc = 0x79A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ECu;
        // 0x79a0f0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0ECu, 0x79A0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A0F4u;
label_79a0f4:
    // 0x79a0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a0f8:
    // 0x79a0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a0fc:
    // 0x79a0fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a100:
    // 0x79a100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a104:
    // 0x79a104: 0xc0a57e0  jal         func_295F80
label_79a108:
    if (ctx->pc == 0x79A108u) {
        ctx->pc = 0x79A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A104u;
        // 0x79a108: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A10Cu;
        goto label_79a10c;
    }
    ctx->pc = 0x79A104u;
    SET_GPR_U32(ctx, 31, 0x79A10Cu);
    ctx->pc = 0x79A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A104u;
    // 0x79a108: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A104u, 0x79A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A10Cu;
label_79a10c:
    // 0x79a10c: 0xc0b6dac  jal         func_2DB6B0
label_79a110:
    if (ctx->pc == 0x79A110u) {
        ctx->pc = 0x79A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A10Cu;
        // 0x79a110: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A114u;
        goto label_79a114;
    }
    ctx->pc = 0x79A10Cu;
    SET_GPR_U32(ctx, 31, 0x79A114u);
    ctx->pc = 0x79A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A10Cu;
    // 0x79a110: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A10Cu, 0x79A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A114u;
label_79a114:
    // 0x79a114: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a118:
    // 0x79a118: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a11c:
    // 0x79a11c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a120:
    // 0x79a120: 0xa0f809  jalr        $a1
label_79a124:
    if (ctx->pc == 0x79A124u) {
        ctx->pc = 0x79A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A120u;
        // 0x79a124: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A128u;
        goto label_79a128;
    }
    ctx->pc = 0x79A120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A128u);
        ctx->pc = 0x79A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A120u;
        // 0x79a124: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A120u, 0x79A128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A128u;
label_79a128:
    // 0x79a128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a12c:
    // 0x79a12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a130:
    // 0x79a130: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a134:
    // 0x79a134: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a138:
    // 0x79a138: 0xc0a57e0  jal         func_295F80
label_79a13c:
    if (ctx->pc == 0x79A13Cu) {
        ctx->pc = 0x79A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A138u;
        // 0x79a13c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A140u;
        goto label_79a140;
    }
    ctx->pc = 0x79A138u;
    SET_GPR_U32(ctx, 31, 0x79A140u);
    ctx->pc = 0x79A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A138u;
    // 0x79a13c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A138u, 0x79A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x1000003d  b           . + 4 + (0x3D << 2)
label_79a144:
    if (ctx->pc == 0x79A144u) {
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0x8e23ad00  lw          $v1, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A148u;
        goto label_79a148;
    }
    ctx->pc = 0x79A140u;
    {
        const bool branch_taken_0x79a140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A140u;
        // 0x79a144: 0x8e23ad00  lw          $v1, -0x5300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a140) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A148u;
label_79a148:
    // 0x79a148: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a14c:
    // 0x79a14c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79a150:
    // 0x79a150: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x79a150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
label_79a154:
    // 0x79a154: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a158:
    // 0x79a158: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
label_79a15c:
    // 0x79a15c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_79a160:
    // 0x79a160: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x79a160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_79a164:
    // 0x79a164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a168:
    // 0x79a168: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79a168u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_79a16c:
    // 0x79a16c: 0xc0a54b4  jal         func_2952D0
label_79a170:
    if (ctx->pc == 0x79A170u) {
        ctx->pc = 0x79A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A16Cu;
        // 0x79a170: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A174u;
        goto label_79a174;
    }
    ctx->pc = 0x79A16Cu;
    SET_GPR_U32(ctx, 31, 0x79A174u);
    ctx->pc = 0x79A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A16Cu;
    // 0x79a170: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A16Cu, 0x79A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A174u;
label_79a174:
    // 0x79a174: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a178:
    // 0x79a178: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a17c:
    // 0x79a17c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a180:
    // 0x79a180: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x79a180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_79a184:
    // 0x79a184: 0xc0a54b4  jal         func_2952D0
label_79a188:
    if (ctx->pc == 0x79A188u) {
        ctx->pc = 0x79A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A184u;
        // 0x79a188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A18Cu;
        goto label_79a18c;
    }
    ctx->pc = 0x79A184u;
    SET_GPR_U32(ctx, 31, 0x79A18Cu);
    ctx->pc = 0x79A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A184u;
    // 0x79a188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A184u, 0x79A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A18Cu;
label_79a18c:
    // 0x79a18c: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x79a18cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_79a190:
    // 0x79a190: 0xc0a54b4  jal         func_2952D0
label_79a194:
    if (ctx->pc == 0x79A194u) {
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A198u;
        goto label_79a198;
    }
    ctx->pc = 0x79A190u;
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->pc = 0x79A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A190u, 0x79A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0xc0b6dac  jal         func_2DB6B0
label_79a19c:
    if (ctx->pc == 0x79A19Cu) {
        ctx->pc = 0x79A1A0u;
        goto label_79a1a0;
    }
    ctx->pc = 0x79A198u;
    SET_GPR_U32(ctx, 31, 0x79A1A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A198u, 0x79A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A0u;
label_79a1a0:
    // 0x79a1a0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a1a4:
    // 0x79a1a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a1a8:
    // 0x79a1a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a1ac:
    // 0x79a1ac: 0xa0f809  jalr        $a1
label_79a1b0:
    if (ctx->pc == 0x79A1B0u) {
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B4u;
        goto label_79a1b4;
    }
    ctx->pc = 0x79A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A1B4u);
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1ACu, 0x79A1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a1b8:
    // 0x79a1b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1bc:
    // 0x79a1bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a1c0:
    // 0x79a1c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1c4:
    // 0x79a1c4: 0xc0a57e0  jal         func_295F80
label_79a1c8:
    if (ctx->pc == 0x79A1C8u) {
        ctx->pc = 0x79A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C4u;
        // 0x79a1c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1CCu;
        goto label_79a1cc;
    }
    ctx->pc = 0x79A1C4u;
    SET_GPR_U32(ctx, 31, 0x79A1CCu);
    ctx->pc = 0x79A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C4u;
    // 0x79a1c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A1C4u, 0x79A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1CCu;
label_79a1cc:
    // 0x79a1cc: 0xc0b6dac  jal         func_2DB6B0
label_79a1d0:
    if (ctx->pc == 0x79A1D0u) {
        ctx->pc = 0x79A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1CCu;
        // 0x79a1d0: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1D4u;
        goto label_79a1d4;
    }
    ctx->pc = 0x79A1CCu;
    SET_GPR_U32(ctx, 31, 0x79A1D4u);
    ctx->pc = 0x79A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1CCu;
    // 0x79a1d0: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A1CCu, 0x79A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D4u;
label_79a1d4:
    // 0x79a1d4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a1d8:
    // 0x79a1d8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a1dc:
    // 0x79a1dc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a1e0:
    // 0x79a1e0: 0xa0f809  jalr        $a1
label_79a1e4:
    if (ctx->pc == 0x79A1E4u) {
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E8u;
        goto label_79a1e8;
    }
    ctx->pc = 0x79A1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A1E8u);
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1E0u, 0x79A1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A1E8u;
label_79a1e8:
    // 0x79a1e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1ec:
    // 0x79a1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f0:
    // 0x79a1f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a1f4:
    // 0x79a1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f8:
    // 0x79a1f8: 0xc0a57e0  jal         func_295F80
label_79a1fc:
    if (ctx->pc == 0x79A1FCu) {
        ctx->pc = 0x79A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F8u;
        // 0x79a1fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A200u;
        goto label_79a200;
    }
    ctx->pc = 0x79A1F8u;
    SET_GPR_U32(ctx, 31, 0x79A200u);
    ctx->pc = 0x79A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F8u;
    // 0x79a1fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A1F8u, 0x79A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0xc0b6dac  jal         func_2DB6B0
label_79a204:
    if (ctx->pc == 0x79A204u) {
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A208u;
        goto label_79a208;
    }
    ctx->pc = 0x79A200u;
    SET_GPR_U32(ctx, 31, 0x79A208u);
    ctx->pc = 0x79A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A200u;
    // 0x79a204: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A200u, 0x79A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a20c:
    // 0x79a20c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a210:
    // 0x79a210: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a214:
    // 0x79a214: 0xa0f809  jalr        $a1
label_79a218:
    if (ctx->pc == 0x79A218u) {
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A21Cu;
        goto label_79a21c;
    }
    ctx->pc = 0x79A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A21Cu);
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A214u, 0x79A21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a220:
    // 0x79a220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a224:
    // 0x79a224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a228:
    // 0x79a228: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a22c:
    // 0x79a22c: 0xc0a57e0  jal         func_295F80
label_79a230:
    if (ctx->pc == 0x79A230u) {
        ctx->pc = 0x79A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A22Cu;
        // 0x79a230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A234u;
        goto label_79a234;
    }
    ctx->pc = 0x79A22Cu;
    SET_GPR_U32(ctx, 31, 0x79A234u);
    ctx->pc = 0x79A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A22Cu;
    // 0x79a230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A22Cu, 0x79A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A234u;
label_79a234:
    // 0x79a234: 0x8e23ad00  lw          $v1, -0x5300($s1)
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946048)));
label_79a238:
    // 0x79a238: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a23c:
    // 0x79a23c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a240:
    // 0x79a240: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a244:
    // 0x79a244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a248:
    // 0x79a248: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_79a24c:
    // 0x79a24c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a250:
    // 0x79a250: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a254:
    // 0x79a254: 0x3e00008  jr          $ra
label_79a258:
    if (ctx->pc == 0x79A258u) {
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A25Cu;
        goto label_79a25c;
    }
    ctx->pc = 0x79A254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A254u;
        // 0x79a258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0x0  nop
    ctx->pc = 0x79a25cu;
    // NOP
    ctx->pc = 0x79a260u;
}
} // namespace gh_r404
