#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_0079A030
// Address: 0x79a030 - 0x79a2f0
void func_0079A030_0x79a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A030_0x79a030");
#endif

    switch (ctx->pc) {
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
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2ecu: goto label_79a2ec;
        default: break;
    }

    ctx->pc = 0x79a030u;

label_79a030:
    // 0x79a030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_79a034:
    // 0x79a034: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_79a038:
    // 0x79a038: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_79a03c:
    // 0x79a03c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_79a040:
    // 0x79a040: 0x8e62b1c0  lw          $v0, -0x4E40($s3)
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947264)));
label_79a044:
    // 0x79a044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79a044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79a048:
    // 0x79a048: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_79a04c:
    // 0x79a04c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_79a050:
    // 0x79a050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_79a054:
    // 0x79a054: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x79a054u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_79a058:
    // 0x79a058: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_79a05c:
    if (ctx->pc == 0x79A05Cu) {
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A060u;
        goto label_79a060;
    }
    ctx->pc = 0x79A058u;
    {
        const bool branch_taken_0x79a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a058) {
            ctx->pc = 0x79A200u;
            goto label_79a200;
        }
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79a064:
    // 0x79a064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a068:
    // 0x79a068: 0x2630b100  addiu       $s0, $s1, -0x4F00
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947072));
label_79a06c:
    // 0x79a06c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a070:
    // 0x79a070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79a074:
    // 0x79a074: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79a078:
    // 0x79a078: 0xc0e94bc  jal         func_3A52F0
label_79a07c:
    if (ctx->pc == 0x79A07Cu) {
        ctx->pc = 0x79A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A078u;
        // 0x79a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A080u;
        goto label_79a080;
    }
    ctx->pc = 0x79A078u;
    SET_GPR_U32(ctx, 31, 0x79A080u);
    ctx->pc = 0x79A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A078u;
    // 0x79a07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A078u, 0x79A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A080u;
label_79a080:
    // 0x79a080: 0x3c01c036  lui         $at, 0xC036
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49206 << 16));
label_79a084:
    // 0x79a084: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79a088:
    // 0x79a088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79a08c:
    // 0x79a08c: 0xae20b100  sw          $zero, -0x4F00($s1)
    ctx->pc = 0x79a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947072), GPR_U32(ctx, 0));
label_79a090:
    // 0x79a090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a094:
    // 0x79a094: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x79a094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_79a098:
    // 0x79a098: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a09c:
    // 0x79a09c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_79a0a0:
    // 0x79a0a0: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a0a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a0a4:
    // 0x79a0a4: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x79a0a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a0a8:
    // 0x79a0a8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_79a0ac:
    // 0x79a0ac: 0xc0e94bc  jal         func_3A52F0
label_79a0b0:
    if (ctx->pc == 0x79A0B0u) {
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0B4u;
        goto label_79a0b4;
    }
    ctx->pc = 0x79A0ACu;
    SET_GPR_U32(ctx, 31, 0x79A0B4u);
    ctx->pc = 0x79A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0ACu;
    // 0x79a0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A0ACu, 0x79A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0B4u;
label_79a0b4:
    // 0x79a0b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_79a0b8:
    // 0x79a0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a0bc:
    // 0x79a0bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x79a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_79a0c0:
    // 0x79a0c0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a0c4:
    // 0x79a0c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_79a0c8:
    // 0x79a0c8: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a0c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a0cc:
    // 0x79a0cc: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x79a0ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a0d0:
    // 0x79a0d0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_79a0d4:
    // 0x79a0d4: 0xc0e94bc  jal         func_3A52F0
label_79a0d8:
    if (ctx->pc == 0x79A0D8u) {
        ctx->pc = 0x79A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D4u;
        // 0x79a0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A0DCu;
        goto label_79a0dc;
    }
    ctx->pc = 0x79A0D4u;
    SET_GPR_U32(ctx, 31, 0x79A0DCu);
    ctx->pc = 0x79A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0D4u;
    // 0x79a0d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A0D4u, 0x79A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0DCu;
label_79a0dc:
    // 0x79a0dc: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x79a0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a0e0:
    // 0x79a0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a0e4:
    // 0x79a0e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_79a0e8:
    // 0x79a0e8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a0ec:
    // 0x79a0ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x79a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_79a0f0:
    // 0x79a0f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x79a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_79a0f4:
    // 0x79a0f4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a0f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a0f8:
    // 0x79a0f8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_79a0fc:
    // 0x79a0fc: 0xc0e94bc  jal         func_3A52F0
label_79a100:
    if (ctx->pc == 0x79A100u) {
        ctx->pc = 0x79A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0FCu;
        // 0x79a100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A104u;
        goto label_79a104;
    }
    ctx->pc = 0x79A0FCu;
    SET_GPR_U32(ctx, 31, 0x79A104u);
    ctx->pc = 0x79A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0FCu;
    // 0x79a100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A0FCu, 0x79A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A104u;
label_79a104:
    // 0x79a104: 0x3c01c268  lui         $at, 0xC268
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49768 << 16));
label_79a108:
    // 0x79a108: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79a108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_79a10c:
    // 0x79a10c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a110:
    // 0x79a110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a114:
    // 0x79a114: 0x3c01c1d3  lui         $at, 0xC1D3
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49619 << 16));
label_79a118:
    // 0x79a118: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79a11c:
    // 0x79a11c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a120:
    // 0x79a120: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a124:
    // 0x79a124: 0x3c014242  lui         $at, 0x4242
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16962 << 16));
label_79a128:
    // 0x79a128: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_79a12c:
    // 0x79a12c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a130:
    // 0x79a130: 0x3c01c029  lui         $at, 0xC029
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49193 << 16));
label_79a134:
    // 0x79a134: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79a138:
    // 0x79a138: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a13c:
    // 0x79a13c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x79a13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_79a140:
    // 0x79a140: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x79a140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79a144:
    // 0x79a144: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79a148:
    // 0x79a148: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x79a148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a14c:
    // 0x79a14c: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a150:
    // 0x79a150: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_79a154:
    // 0x79a154: 0xc0e94bc  jal         func_3A52F0
label_79a158:
    if (ctx->pc == 0x79A158u) {
        ctx->pc = 0x79A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A154u;
        // 0x79a158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A15Cu;
        goto label_79a15c;
    }
    ctx->pc = 0x79A154u;
    SET_GPR_U32(ctx, 31, 0x79A15Cu);
    ctx->pc = 0x79A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A154u;
    // 0x79a158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A154u, 0x79A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A15Cu;
label_79a15c:
    // 0x79a15c: 0x3c014117  lui         $at, 0x4117
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16663 << 16));
label_79a160:
    // 0x79a160: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79a164:
    // 0x79a164: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a168:
    // 0x79a168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a16c:
    // 0x79a16c: 0x3c01c1c1  lui         $at, 0xC1C1
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49601 << 16));
label_79a170:
    // 0x79a170: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_79a174:
    // 0x79a174: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a178:
    // 0x79a178: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_79a17c:
    // 0x79a17c: 0x3c014289  lui         $at, 0x4289
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17033 << 16));
label_79a180:
    // 0x79a180: 0x34214ccd  ori         $at, $at, 0x4CCD
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19661);
label_79a184:
    // 0x79a184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a188:
    // 0x79a188: 0x3c01bfc3  lui         $at, 0xBFC3
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49091 << 16));
label_79a18c:
    // 0x79a18c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_79a190:
    // 0x79a190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a194:
    // 0x79a194: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x79a194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_79a198:
    // 0x79a198: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x79a198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79a19c:
    // 0x79a19c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79a19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79a1a0:
    // 0x79a1a0: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x79a1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a1a4:
    // 0x79a1a4: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a1a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a1a8:
    // 0x79a1a8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_79a1ac:
    // 0x79a1ac: 0xc0e94bc  jal         func_3A52F0
label_79a1b0:
    if (ctx->pc == 0x79A1B0u) {
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1B4u;
        goto label_79a1b4;
    }
    ctx->pc = 0x79A1ACu;
    SET_GPR_U32(ctx, 31, 0x79A1B4u);
    ctx->pc = 0x79A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ACu;
    // 0x79a1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A1ACu, 0x79A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0x3c01bf9a  lui         $at, 0xBF9A
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49050 << 16));
label_79a1b8:
    // 0x79a1b8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_79a1bc:
    // 0x79a1bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79a1c0:
    // 0x79a1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a1c4:
    // 0x79a1c4: 0x3c01c1c2  lui         $at, 0xC1C2
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49602 << 16));
label_79a1c8:
    // 0x79a1c8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x79a1c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_79a1cc:
    // 0x79a1cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a1d0:
    // 0x79a1d0: 0x3c01428a  lui         $at, 0x428A
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17034 << 16));
label_79a1d4:
    // 0x79a1d4: 0x34210f5c  ori         $at, $at, 0xF5C
    ctx->pc = 0x79a1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3932);
label_79a1d8:
    // 0x79a1d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79a1dc:
    // 0x79a1dc: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
label_79a1e0:
    // 0x79a1e0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x79a1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_79a1e4:
    // 0x79a1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79a1e8:
    // 0x79a1e8: 0xae62b1c0  sw          $v0, -0x4E40($s3)
    ctx->pc = 0x79a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294947264), GPR_U32(ctx, 2));
label_79a1ec:
    // 0x79a1ec: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x79a1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_79a1f0:
    // 0x79a1f0: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x79a1f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_79a1f4:
    // 0x79a1f4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x79a1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79a1f8:
    // 0x79a1f8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x79a1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79a1fc:
    // 0x79a1fc: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x79a1fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79a200:
    // 0x79a200: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x79a200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_79a204:
    // 0x79a204: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_79a208:
    if (ctx->pc == 0x79A208u) {
        ctx->pc = 0x79A20Cu;
        goto label_79a20c;
    }
    ctx->pc = 0x79A204u;
    {
        const bool branch_taken_0x79a204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a204) {
            ctx->pc = 0x79A254u;
            goto label_79a254;
        }
    }
    ctx->pc = 0x79A20Cu;
label_79a20c:
    // 0x79a20c: 0xc0b6dac  jal         func_2DB6B0
label_79a210:
    if (ctx->pc == 0x79A210u) {
        ctx->pc = 0x79A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A20Cu;
        // 0x79a210: 0x128140  sll         $s0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A214u;
        goto label_79a214;
    }
    ctx->pc = 0x79A20Cu;
    SET_GPR_U32(ctx, 31, 0x79A214u);
    ctx->pc = 0x79A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A20Cu;
    // 0x79a210: 0x128140  sll         $s0, $s2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A20Cu, 0x79A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0x8c450214  lw          $a1, 0x214($v0)
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a218:
    // 0x79a218: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79a21c:
    // 0x79a21c: 0x2463b100  addiu       $v1, $v1, -0x4F00
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947072));
label_79a220:
    // 0x79a220: 0x84a40070  lh          $a0, 0x70($a1)
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
label_79a224:
    // 0x79a224: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_79a228:
    // 0x79a228: 0x8ca60074  lw          $a2, 0x74($a1)
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_79a22c:
    // 0x79a22c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a230:
    // 0x79a230: 0xc0f809  jalr        $a2
label_79a234:
    if (ctx->pc == 0x79A234u) {
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A238u;
        goto label_79a238;
    }
    ctx->pc = 0x79A230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79A238u);
        ctx->pc = 0x79A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A230u;
        // 0x79a234: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A230u, 0x79A238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0xc0b6dac  jal         func_2DB6B0
label_79a23c:
    if (ctx->pc == 0x79A23Cu) {
        ctx->pc = 0x79A240u;
        goto label_79a240;
    }
    ctx->pc = 0x79A238u;
    SET_GPR_U32(ctx, 31, 0x79A240u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A238u, 0x79A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A240u;
label_79a240:
    // 0x79a240: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x79a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79a244:
    // 0x79a244: 0xc04b35c  jal         func_12CD70
label_79a248:
    if (ctx->pc == 0x79A248u) {
        ctx->pc = 0x79A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A244u;
        // 0x79a248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A24Cu;
        goto label_79a24c;
    }
    ctx->pc = 0x79A244u;
    SET_GPR_U32(ctx, 31, 0x79A24Cu);
    ctx->pc = 0x79A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A244u;
    // 0x79a248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CD70u, 0x79A244u, 0x79A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A24Cu;
label_79a24c:
    // 0x79a24c: 0x1000000e  b           . + 4 + (0xE << 2)
label_79a250:
    if (ctx->pc == 0x79A250u) {
        ctx->pc = 0x79A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A24Cu;
        // 0x79a250: 0x2e420003  sltiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A254u;
        goto label_79a254;
    }
    ctx->pc = 0x79A24Cu;
    {
        const bool branch_taken_0x79a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A24Cu;
        // 0x79a250: 0x2e420003  sltiu       $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a24c) {
            ctx->pc = 0x79A288u;
            goto label_79a288;
        }
    }
    ctx->pc = 0x79A254u;
label_79a254:
    // 0x79a254: 0xc0b6dac  jal         func_2DB6B0
label_79a258:
    if (ctx->pc == 0x79A258u) {
        ctx->pc = 0x79A25Cu;
        goto label_79a25c;
    }
    ctx->pc = 0x79A254u;
    SET_GPR_U32(ctx, 31, 0x79A25Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A254u, 0x79A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0xc0b6dac  jal         func_2DB6B0
label_79a260:
    if (ctx->pc == 0x79A260u) {
        ctx->pc = 0x79A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A25Cu;
        // 0x79a260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A264u;
        goto label_79a264;
    }
    ctx->pc = 0x79A25Cu;
    SET_GPR_U32(ctx, 31, 0x79A264u);
    ctx->pc = 0x79A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A25Cu;
    // 0x79a260: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A25Cu, 0x79A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A264u;
label_79a264:
    // 0x79a264: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a268:
    // 0x79a268: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_79a26c:
    // 0x79a26c: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_79a270:
    // 0x79a270: 0xa0f809  jalr        $a1
label_79a274:
    if (ctx->pc == 0x79A274u) {
        ctx->pc = 0x79A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A270u;
        // 0x79a274: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A278u;
        goto label_79a278;
    }
    ctx->pc = 0x79A270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A278u);
        ctx->pc = 0x79A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A270u;
        // 0x79a274: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A270u, 0x79A278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A278u;
label_79a278:
    // 0x79a278: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x79a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79a27c:
    // 0x79a27c: 0xc04b35c  jal         func_12CD70
label_79a280:
    if (ctx->pc == 0x79A280u) {
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A284u;
        goto label_79a284;
    }
    ctx->pc = 0x79A27Cu;
    SET_GPR_U32(ctx, 31, 0x79A284u);
    ctx->pc = 0x79A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A27Cu;
    // 0x79a280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CD70u, 0x79A27Cu, 0x79A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x79a284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_79a288:
    // 0x79a288: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_79a28c:
    if (ctx->pc == 0x79A28Cu) {
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A290u;
        goto label_79a290;
    }
    ctx->pc = 0x79A288u;
    {
        const bool branch_taken_0x79a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A288u;
        // 0x79a28c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a288) {
            ctx->pc = 0x79A2B8u;
            goto label_79a2b8;
        }
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_79a294:
    // 0x79a294: 0x8c43b1c4  lw          $v1, -0x4E3C($v0)
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_79a298:
    // 0x79a298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_79a29c:
    // 0x79a29c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_79a2a0:
    // 0x79a2a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_79a2a4:
    if (ctx->pc == 0x79A2A4u) {
        ctx->pc = 0x79A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A0u;
        // 0x79a2a4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2A8u;
        goto label_79a2a8;
    }
    ctx->pc = 0x79A2A0u;
    {
        const bool branch_taken_0x79a2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A0u;
        // 0x79a2a4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2a0) {
            ctx->pc = 0x79A2BCu;
            goto label_79a2bc;
        }
    }
    ctx->pc = 0x79A2A8u;
label_79a2a8:
    // 0x79a2a8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_79a2ac:
    // 0x79a2ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a2b0:
    // 0x79a2b0: 0xc05f804  jal         func_17E010
label_79a2b4:
    if (ctx->pc == 0x79A2B4u) {
        ctx->pc = 0x79A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B0u;
        // 0x79a2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2B8u;
        goto label_79a2b8;
    }
    ctx->pc = 0x79A2B0u;
    SET_GPR_U32(ctx, 31, 0x79A2B8u);
    ctx->pc = 0x79A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B0u;
    // 0x79a2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E010u, 0x79A2B0u, 0x79A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a2bc:
    // 0x79a2bc: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a2c0:
    // 0x79a2c0: 0xc0b5692  jal         func_2D5A48
label_79a2c4:
    if (ctx->pc == 0x79A2C4u) {
        ctx->pc = 0x79A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C0u;
        // 0x79a2c4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2C8u;
        goto label_79a2c8;
    }
    ctx->pc = 0x79A2C0u;
    SET_GPR_U32(ctx, 31, 0x79A2C8u);
    ctx->pc = 0x79A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2C0u;
    // 0x79a2c4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A2C0u, 0x79A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2C8u;
label_79a2c8:
    // 0x79a2c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a2cc:
    // 0x79a2cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a2d0:
    // 0x79a2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79a2d4:
    // 0x79a2d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a2d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a2d8:
    // 0x79a2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a2dc:
    // 0x79a2dc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x79a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79a2e0:
    // 0x79a2e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x79a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a2e4:
    // 0x79a2e4: 0x3e00008  jr          $ra
label_79a2e8:
    if (ctx->pc == 0x79A2E8u) {
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2ECu;
        goto label_79a2ec;
    }
    ctx->pc = 0x79A2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x0  nop
    ctx->pc = 0x79a2ecu;
    // NOP
    ctx->pc = 0x79a2f0u;
}
} // namespace gh_r608
