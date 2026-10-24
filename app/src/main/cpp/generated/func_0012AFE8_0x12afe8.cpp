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

// Function: func_0012AFE8
// Address: 0x12afe8 - 0x12b2e0
void func_0012AFE8_0x12afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012AFE8_0x12afe8");
#endif

    switch (ctx->pc) {
        case 0x12afe8u: goto label_12afe8;
        case 0x12afecu: goto label_12afec;
        case 0x12aff0u: goto label_12aff0;
        case 0x12aff4u: goto label_12aff4;
        case 0x12aff8u: goto label_12aff8;
        case 0x12affcu: goto label_12affc;
        case 0x12b000u: goto label_12b000;
        case 0x12b004u: goto label_12b004;
        case 0x12b008u: goto label_12b008;
        case 0x12b00cu: goto label_12b00c;
        case 0x12b010u: goto label_12b010;
        case 0x12b014u: goto label_12b014;
        case 0x12b018u: goto label_12b018;
        case 0x12b01cu: goto label_12b01c;
        case 0x12b020u: goto label_12b020;
        case 0x12b024u: goto label_12b024;
        case 0x12b028u: goto label_12b028;
        case 0x12b02cu: goto label_12b02c;
        case 0x12b030u: goto label_12b030;
        case 0x12b034u: goto label_12b034;
        case 0x12b038u: goto label_12b038;
        case 0x12b03cu: goto label_12b03c;
        case 0x12b040u: goto label_12b040;
        case 0x12b044u: goto label_12b044;
        case 0x12b048u: goto label_12b048;
        case 0x12b04cu: goto label_12b04c;
        case 0x12b050u: goto label_12b050;
        case 0x12b054u: goto label_12b054;
        case 0x12b058u: goto label_12b058;
        case 0x12b05cu: goto label_12b05c;
        case 0x12b060u: goto label_12b060;
        case 0x12b064u: goto label_12b064;
        case 0x12b068u: goto label_12b068;
        case 0x12b06cu: goto label_12b06c;
        case 0x12b070u: goto label_12b070;
        case 0x12b074u: goto label_12b074;
        case 0x12b078u: goto label_12b078;
        case 0x12b07cu: goto label_12b07c;
        case 0x12b080u: goto label_12b080;
        case 0x12b084u: goto label_12b084;
        case 0x12b088u: goto label_12b088;
        case 0x12b08cu: goto label_12b08c;
        case 0x12b090u: goto label_12b090;
        case 0x12b094u: goto label_12b094;
        case 0x12b098u: goto label_12b098;
        case 0x12b09cu: goto label_12b09c;
        case 0x12b0a0u: goto label_12b0a0;
        case 0x12b0a4u: goto label_12b0a4;
        case 0x12b0a8u: goto label_12b0a8;
        case 0x12b0acu: goto label_12b0ac;
        case 0x12b0b0u: goto label_12b0b0;
        case 0x12b0b4u: goto label_12b0b4;
        case 0x12b0b8u: goto label_12b0b8;
        case 0x12b0bcu: goto label_12b0bc;
        case 0x12b0c0u: goto label_12b0c0;
        case 0x12b0c4u: goto label_12b0c4;
        case 0x12b0c8u: goto label_12b0c8;
        case 0x12b0ccu: goto label_12b0cc;
        case 0x12b0d0u: goto label_12b0d0;
        case 0x12b0d4u: goto label_12b0d4;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0dcu: goto label_12b0dc;
        case 0x12b0e0u: goto label_12b0e0;
        case 0x12b0e4u: goto label_12b0e4;
        case 0x12b0e8u: goto label_12b0e8;
        case 0x12b0ecu: goto label_12b0ec;
        case 0x12b0f0u: goto label_12b0f0;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b0f8u: goto label_12b0f8;
        case 0x12b0fcu: goto label_12b0fc;
        case 0x12b100u: goto label_12b100;
        case 0x12b104u: goto label_12b104;
        case 0x12b108u: goto label_12b108;
        case 0x12b10cu: goto label_12b10c;
        case 0x12b110u: goto label_12b110;
        case 0x12b114u: goto label_12b114;
        case 0x12b118u: goto label_12b118;
        case 0x12b11cu: goto label_12b11c;
        case 0x12b120u: goto label_12b120;
        case 0x12b124u: goto label_12b124;
        case 0x12b128u: goto label_12b128;
        case 0x12b12cu: goto label_12b12c;
        case 0x12b130u: goto label_12b130;
        case 0x12b134u: goto label_12b134;
        case 0x12b138u: goto label_12b138;
        case 0x12b13cu: goto label_12b13c;
        case 0x12b140u: goto label_12b140;
        case 0x12b144u: goto label_12b144;
        case 0x12b148u: goto label_12b148;
        case 0x12b14cu: goto label_12b14c;
        case 0x12b150u: goto label_12b150;
        case 0x12b154u: goto label_12b154;
        case 0x12b158u: goto label_12b158;
        case 0x12b15cu: goto label_12b15c;
        case 0x12b160u: goto label_12b160;
        case 0x12b164u: goto label_12b164;
        case 0x12b168u: goto label_12b168;
        case 0x12b16cu: goto label_12b16c;
        case 0x12b170u: goto label_12b170;
        case 0x12b174u: goto label_12b174;
        case 0x12b178u: goto label_12b178;
        case 0x12b17cu: goto label_12b17c;
        case 0x12b180u: goto label_12b180;
        case 0x12b184u: goto label_12b184;
        case 0x12b188u: goto label_12b188;
        case 0x12b18cu: goto label_12b18c;
        case 0x12b190u: goto label_12b190;
        case 0x12b194u: goto label_12b194;
        case 0x12b198u: goto label_12b198;
        case 0x12b19cu: goto label_12b19c;
        case 0x12b1a0u: goto label_12b1a0;
        case 0x12b1a4u: goto label_12b1a4;
        case 0x12b1a8u: goto label_12b1a8;
        case 0x12b1acu: goto label_12b1ac;
        case 0x12b1b0u: goto label_12b1b0;
        case 0x12b1b4u: goto label_12b1b4;
        case 0x12b1b8u: goto label_12b1b8;
        case 0x12b1bcu: goto label_12b1bc;
        case 0x12b1c0u: goto label_12b1c0;
        case 0x12b1c4u: goto label_12b1c4;
        case 0x12b1c8u: goto label_12b1c8;
        case 0x12b1ccu: goto label_12b1cc;
        case 0x12b1d0u: goto label_12b1d0;
        case 0x12b1d4u: goto label_12b1d4;
        case 0x12b1d8u: goto label_12b1d8;
        case 0x12b1dcu: goto label_12b1dc;
        case 0x12b1e0u: goto label_12b1e0;
        case 0x12b1e4u: goto label_12b1e4;
        case 0x12b1e8u: goto label_12b1e8;
        case 0x12b1ecu: goto label_12b1ec;
        case 0x12b1f0u: goto label_12b1f0;
        case 0x12b1f4u: goto label_12b1f4;
        case 0x12b1f8u: goto label_12b1f8;
        case 0x12b1fcu: goto label_12b1fc;
        case 0x12b200u: goto label_12b200;
        case 0x12b204u: goto label_12b204;
        case 0x12b208u: goto label_12b208;
        case 0x12b20cu: goto label_12b20c;
        case 0x12b210u: goto label_12b210;
        case 0x12b214u: goto label_12b214;
        case 0x12b218u: goto label_12b218;
        case 0x12b21cu: goto label_12b21c;
        case 0x12b220u: goto label_12b220;
        case 0x12b224u: goto label_12b224;
        case 0x12b228u: goto label_12b228;
        case 0x12b22cu: goto label_12b22c;
        case 0x12b230u: goto label_12b230;
        case 0x12b234u: goto label_12b234;
        case 0x12b238u: goto label_12b238;
        case 0x12b23cu: goto label_12b23c;
        case 0x12b240u: goto label_12b240;
        case 0x12b244u: goto label_12b244;
        case 0x12b248u: goto label_12b248;
        case 0x12b24cu: goto label_12b24c;
        case 0x12b250u: goto label_12b250;
        case 0x12b254u: goto label_12b254;
        case 0x12b258u: goto label_12b258;
        case 0x12b25cu: goto label_12b25c;
        case 0x12b260u: goto label_12b260;
        case 0x12b264u: goto label_12b264;
        case 0x12b268u: goto label_12b268;
        case 0x12b26cu: goto label_12b26c;
        case 0x12b270u: goto label_12b270;
        case 0x12b274u: goto label_12b274;
        case 0x12b278u: goto label_12b278;
        case 0x12b27cu: goto label_12b27c;
        case 0x12b280u: goto label_12b280;
        case 0x12b284u: goto label_12b284;
        case 0x12b288u: goto label_12b288;
        case 0x12b28cu: goto label_12b28c;
        case 0x12b290u: goto label_12b290;
        case 0x12b294u: goto label_12b294;
        case 0x12b298u: goto label_12b298;
        case 0x12b29cu: goto label_12b29c;
        case 0x12b2a0u: goto label_12b2a0;
        case 0x12b2a4u: goto label_12b2a4;
        case 0x12b2a8u: goto label_12b2a8;
        case 0x12b2acu: goto label_12b2ac;
        case 0x12b2b0u: goto label_12b2b0;
        case 0x12b2b4u: goto label_12b2b4;
        case 0x12b2b8u: goto label_12b2b8;
        case 0x12b2bcu: goto label_12b2bc;
        case 0x12b2c0u: goto label_12b2c0;
        case 0x12b2c4u: goto label_12b2c4;
        case 0x12b2c8u: goto label_12b2c8;
        case 0x12b2ccu: goto label_12b2cc;
        case 0x12b2d0u: goto label_12b2d0;
        case 0x12b2d4u: goto label_12b2d4;
        case 0x12b2d8u: goto label_12b2d8;
        case 0x12b2dcu: goto label_12b2dc;
        default: break;
    }

    ctx->pc = 0x12afe8u;

label_12afe8:
    // 0x12afe8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_12afec:
    // 0x12afec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_12aff0:
    // 0x12aff0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12aff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_12aff4:
    // 0x12aff4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12aff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12aff8:
    // 0x12aff8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_12affc:
    // 0x12affc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12affcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b000:
    // 0x12b000: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_12b004:
    // 0x12b004: 0x122000af  beqz        $s1, . + 4 + (0xAF << 2)
label_12b008:
    if (ctx->pc == 0x12B008u) {
        ctx->pc = 0x12B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B004u;
        // 0x12b008: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B00Cu;
        goto label_12b00c;
    }
    ctx->pc = 0x12B004u;
    {
        const bool branch_taken_0x12b004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B004u;
        // 0x12b008: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b004) {
            ctx->pc = 0x12B2C4u;
            goto label_12b2c4;
        }
    }
    ctx->pc = 0x12B00Cu;
label_12b00c:
    // 0x12b00c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x12b00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_12b010:
    // 0x12b010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12b014:
    if (ctx->pc == 0x12B014u) {
        ctx->pc = 0x12B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B010u;
        // 0x12b014: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B018u;
        goto label_12b018;
    }
    ctx->pc = 0x12B010u;
    {
        const bool branch_taken_0x12b010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B010u;
        // 0x12b014: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b010) {
            ctx->pc = 0x12B024u;
            goto label_12b024;
        }
    }
    ctx->pc = 0x12B018u;
label_12b018:
    // 0x12b018: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_12b01c:
    // 0x12b01c: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b020:
    if (ctx->pc == 0x12B020u) {
        ctx->pc = 0x12B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B01Cu;
        // 0x12b020: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B024u;
        goto label_12b024;
    }
    ctx->pc = 0x12B01Cu;
    {
        const bool branch_taken_0x12b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B01Cu;
        // 0x12b020: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b01c) {
            ctx->pc = 0x12B028u;
            goto label_12b028;
        }
    }
    ctx->pc = 0x12B024u;
label_12b024:
    // 0x12b024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b028:
    // 0x12b028: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_12b02c:
    if (ctx->pc == 0x12B02Cu) {
        ctx->pc = 0x12B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B028u;
        // 0x12b02c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B030u;
        goto label_12b030;
    }
    ctx->pc = 0x12B028u;
    {
        const bool branch_taken_0x12b028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B028u;
        // 0x12b02c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b028) {
            ctx->pc = 0x12B2C8u;
            goto label_12b2c8;
        }
    }
    ctx->pc = 0x12B030u;
label_12b030:
    // 0x12b030: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x12b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b034:
    // 0x12b034: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x12b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b038:
    // 0x12b038: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12b03c:
    // 0x12b03c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12b040:
    // 0x12b040: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
label_12b044:
    if (ctx->pc == 0x12B044u) {
        ctx->pc = 0x12B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B040u;
        // 0x12b044: 0x8e630640  lw          $v1, 0x640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B048u;
        goto label_12b048;
    }
    ctx->pc = 0x12B040u;
    {
        const bool branch_taken_0x12b040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b040) {
            ctx->pc = 0x12B044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B040u;
            // 0x12b044: 0x8e630640  lw          $v1, 0x640($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B064u;
            goto label_12b064;
        }
    }
    ctx->pc = 0x12B048u;
label_12b048:
    // 0x12b048: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b04c:
    // 0x12b04c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12b050:
    // 0x12b050: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b054:
    // 0x12b054: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12b054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12b058:
    // 0x12b058: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b05c:
    // 0x12b05c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12b060:
    // 0x12b060: 0x8e630640  lw          $v1, 0x640($s3)
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1600)));
label_12b064:
    // 0x12b064: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
label_12b068:
    if (ctx->pc == 0x12B068u) {
        ctx->pc = 0x12B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B064u;
        // 0x12b068: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B06Cu;
        goto label_12b06c;
    }
    ctx->pc = 0x12B064u;
    {
        const bool branch_taken_0x12b064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B064u;
        // 0x12b068: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b064) {
            ctx->pc = 0x12B200u;
            goto label_12b200;
        }
    }
    ctx->pc = 0x12B06Cu;
label_12b06c:
    // 0x12b06c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x12b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b070:
    // 0x12b070: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x12b070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_12b074:
    // 0x12b074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12b078:
    if (ctx->pc == 0x12B078u) {
        ctx->pc = 0x12B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B074u;
        // 0x12b078: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B07Cu;
        goto label_12b07c;
    }
    ctx->pc = 0x12B074u;
    {
        const bool branch_taken_0x12b074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B074u;
        // 0x12b078: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b074) {
            ctx->pc = 0x12B088u;
            goto label_12b088;
        }
    }
    ctx->pc = 0x12B07Cu;
label_12b07c:
    // 0x12b07c: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_12b080:
    // 0x12b080: 0x10000002  b           . + 4 + (0x2 << 2)
label_12b084:
    if (ctx->pc == 0x12B084u) {
        ctx->pc = 0x12B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B080u;
        // 0x12b084: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B088u;
        goto label_12b088;
    }
    ctx->pc = 0x12B080u;
    {
        const bool branch_taken_0x12b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B080u;
        // 0x12b084: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b080) {
            ctx->pc = 0x12B08Cu;
            goto label_12b08c;
        }
    }
    ctx->pc = 0x12B088u;
label_12b088:
    // 0x12b088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b08c:
    // 0x12b08c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_12b090:
    if (ctx->pc == 0x12B090u) {
        ctx->pc = 0x12B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B08Cu;
        // 0x12b090: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B094u;
        goto label_12b094;
    }
    ctx->pc = 0x12B08Cu;
    {
        const bool branch_taken_0x12b08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B08Cu;
        // 0x12b090: 0x27a30030  addiu       $v1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b08c) {
            ctx->pc = 0x12B0D4u;
            goto label_12b0d4;
        }
    }
    ctx->pc = 0x12B094u;
label_12b094:
    // 0x12b094: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x12b094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_12b098:
    // 0x12b098: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_12b09c:
    if (ctx->pc == 0x12B09Cu) {
        ctx->pc = 0x12B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B098u;
        // 0x12b09c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0A0u;
        goto label_12b0a0;
    }
    ctx->pc = 0x12B098u;
    {
        const bool branch_taken_0x12b098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B098u;
        // 0x12b09c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b098) {
            ctx->pc = 0x12B0BCu;
            goto label_12b0bc;
        }
    }
    ctx->pc = 0x12B0A0u;
label_12b0a0:
    // 0x12b0a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12b0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b0a4:
    // 0x12b0a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12b0a8:
    // 0x12b0a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b0ac:
    // 0x12b0ac: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12b0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12b0b0:
    // 0x12b0b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b0b4:
    // 0x12b0b4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12b0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12b0b8:
    // 0x12b0b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x12b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b0bc:
    // 0x12b0bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12b0c0:
    // 0x12b0c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b0c4:
    // 0x12b0c4: 0x0  nop
    ctx->pc = 0x12b0c4u;
    // NOP
label_12b0c8:
    // 0x12b0c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12b0cc:
    // 0x12b0cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_12b0d0:
    if (ctx->pc == 0x12B0D0u) {
        ctx->pc = 0x12B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0CCu;
        // 0x12b0d0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0D4u;
        goto label_12b0d4;
    }
    ctx->pc = 0x12B0CCu;
    {
        const bool branch_taken_0x12b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0CCu;
        // 0x12b0d0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0cc) {
            ctx->pc = 0x12B11Cu;
            goto label_12b11c;
        }
    }
    ctx->pc = 0x12B0D4u;
label_12b0d4:
    // 0x12b0d4: 0x8e650640  lw          $a1, 0x640($s3)
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1600)));
label_12b0d8:
    // 0x12b0d8: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_12b0dc:
    // 0x12b0dc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x12b0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_12b0e0:
    // 0x12b0e0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_12b0e4:
    // 0x12b0e4: 0x40f809  jalr        $v0
label_12b0e8:
    if (ctx->pc == 0x12B0E8u) {
        ctx->pc = 0x12B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0E4u;
        // 0x12b0e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B0ECu;
        goto label_12b0ec;
    }
    ctx->pc = 0x12B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B0ECu);
        ctx->pc = 0x12B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0E4u;
        // 0x12b0e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B0E4u, 0x12B0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B0ECu;
label_12b0ec:
    // 0x12b0ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b0f0:
    // 0x12b0f0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x12b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12b0f4:
    // 0x12b0f4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_12b0f8:
    // 0x12b0f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12b0f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12b0fc:
    // 0x12b0fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12b0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12b100:
    // 0x12b100: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12b100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12b104:
    // 0x12b104: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12b104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b108:
    // 0x12b108: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12b108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12b10c:
    // 0x12b10c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12b10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12b110:
    // 0x12b110: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x12b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b114:
    // 0x12b114: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12b114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12b118:
    // 0x12b118: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x12b118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12b11c:
    // 0x12b11c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x12b11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12b120:
    // 0x12b120: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b124:
    // 0x12b124: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12b124u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_12b128:
    // 0x12b128: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x12b128u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_12b12c:
    // 0x12b12c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x12b12cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12b130:
    // 0x12b130: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b134:
    // 0x12b134: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x12b134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12b138:
    // 0x12b138: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b13c:
    // 0x12b13c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12b13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b140:
    // 0x12b140: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b144:
    // 0x12b144: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b148:
    // 0x12b148: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12b148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12b14c:
    // 0x12b14c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12b14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12b150:
    // 0x12b150: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12b150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12b154:
    // 0x12b154: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_12b158:
    // 0x12b158: 0xc04078a  jal         func_101E28
label_12b15c:
    if (ctx->pc == 0x12B15Cu) {
        ctx->pc = 0x12B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B158u;
        // 0x12b15c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B160u;
        goto label_12b160;
    }
    ctx->pc = 0x12B158u;
    SET_GPR_U32(ctx, 31, 0x12B160u);
    ctx->pc = 0x12B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B158u;
    // 0x12b15c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x12B158u, 0x12B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B160u;
label_12b160:
    // 0x12b160: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x12b160u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_12b164:
    // 0x12b164: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12b164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b168:
    // 0x12b168: 0x0  nop
    ctx->pc = 0x12b168u;
    // NOP
label_12b16c:
    // 0x12b16c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12b16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12b170:
    // 0x12b170: 0x0  nop
    ctx->pc = 0x12b170u;
    // NOP
label_12b174:
    // 0x12b174: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_12b178:
    if (ctx->pc == 0x12B178u) {
        ctx->pc = 0x12B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B174u;
        // 0x12b178: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B17Cu;
        goto label_12b17c;
    }
    ctx->pc = 0x12B174u;
    {
        const bool branch_taken_0x12b174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B174u;
        // 0x12b178: 0xc7a40010  lwc1        $f4, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b174) {
            ctx->pc = 0x12B1B8u;
            goto label_12b1b8;
        }
    }
    ctx->pc = 0x12B17Cu;
label_12b17c:
    // 0x12b17c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12b180:
    // 0x12b180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12b184:
    // 0x12b184: 0x0  nop
    ctx->pc = 0x12b184u;
    // NOP
label_12b188:
    // 0x12b188: 0x0  nop
    ctx->pc = 0x12b188u;
    // NOP
label_12b18c:
    // 0x12b18c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x12b18cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
label_12b190:
    // 0x12b190: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x12b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12b194:
    // 0x12b194: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x12b194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b198:
    // 0x12b198: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x12b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b19c:
    // 0x12b19c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x12b19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_12b1a0:
    // 0x12b1a0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x12b1a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_12b1a4:
    // 0x12b1a4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x12b1a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_12b1a8:
    // 0x12b1a8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x12b1a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_12b1ac:
    // 0x12b1ac: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x12b1acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_12b1b0:
    // 0x12b1b0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x12b1b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_12b1b4:
    // 0x12b1b4: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x12b1b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_12b1b8:
    // 0x12b1b8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x12b1b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_12b1bc:
    // 0x12b1bc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x12b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b1c0:
    // 0x12b1c0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12b1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b1c4:
    // 0x12b1c4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12b1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b1c8:
    // 0x12b1c8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12b1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12b1cc:
    // 0x12b1cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12b1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_12b1d0:
    // 0x12b1d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12b1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_12b1d4:
    // 0x12b1d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12b1d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12b1d8:
    // 0x12b1d8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12b1dc:
    // 0x12b1dc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12b1e0:
    // 0x12b1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b1e4:
    // 0x12b1e4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12b1e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b1e8:
    // 0x12b1e8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12b1e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_12b1ec:
    // 0x12b1ec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x12b1ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_12b1f0:
    // 0x12b1f0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x12b1f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_12b1f4:
    // 0x12b1f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x12b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_12b1f8:
    // 0x12b1f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_12b1fc:
    if (ctx->pc == 0x12B1FCu) {
        ctx->pc = 0x12B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1F8u;
        // 0x12b1fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B200u;
        goto label_12b200;
    }
    ctx->pc = 0x12B1F8u;
    {
        const bool branch_taken_0x12b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1F8u;
        // 0x12b1fc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1f8) {
            ctx->pc = 0x12B22Cu;
            goto label_12b22c;
        }
    }
    ctx->pc = 0x12B200u;
label_12b200:
    // 0x12b200: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12b204:
    // 0x12b204: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12b204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12b208:
    // 0x12b208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12b208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12b20c:
    // 0x12b20c: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_12b210:
    // 0x12b210: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12b210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_12b214:
    // 0x12b214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b218:
    // 0x12b218: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12b218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12b21c:
    // 0x12b21c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x12b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12b220:
    // 0x12b220: 0xc07e0d4  jal         func_1F8350
label_12b224:
    if (ctx->pc == 0x12B224u) {
        ctx->pc = 0x12B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B220u;
        // 0x12b224: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B228u;
        goto label_12b228;
    }
    ctx->pc = 0x12B220u;
    SET_GPR_U32(ctx, 31, 0x12B228u);
    ctx->pc = 0x12B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B220u;
    // 0x12b224: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x12B220u, 0x12B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B228u;
label_12b228:
    // 0x12b228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b22c:
    // 0x12b22c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_12b230:
    // 0x12b230: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_12b234:
    if (ctx->pc == 0x12B234u) {
        ctx->pc = 0x12B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B230u;
        // 0x12b234: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B238u;
        goto label_12b238;
    }
    ctx->pc = 0x12B230u;
    {
        const bool branch_taken_0x12b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B230u;
        // 0x12b234: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b230) {
            ctx->pc = 0x12B24Cu;
            goto label_12b24c;
        }
    }
    ctx->pc = 0x12B238u;
label_12b238:
    // 0x12b238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12b238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_12b23c:
    // 0x12b23c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x12b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b240:
    // 0x12b240: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12b240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12b244:
    // 0x12b244: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b248:
    // 0x12b248: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12b248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12b24c:
    // 0x12b24c: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_12b250:
    // 0x12b250: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_12b254:
    if (ctx->pc == 0x12B254u) {
        ctx->pc = 0x12B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B250u;
        // 0x12b254: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B258u;
        goto label_12b258;
    }
    ctx->pc = 0x12B250u;
    {
        const bool branch_taken_0x12b250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x12B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B250u;
        // 0x12b254: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b250) {
            ctx->pc = 0x12B26Cu;
            goto label_12b26c;
        }
    }
    ctx->pc = 0x12B258u;
label_12b258:
    // 0x12b258: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x12b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12b25c:
    // 0x12b25c: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x12b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
label_12b260:
    // 0x12b260: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12b260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_12b264:
    // 0x12b264: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x12b264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12b268:
    // 0x12b268: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12b26c:
    // 0x12b26c: 0xc073f12  jal         func_1CFC48
label_12b270:
    if (ctx->pc == 0x12B270u) {
        ctx->pc = 0x12B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B26Cu;
        // 0x12b270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B274u;
        goto label_12b274;
    }
    ctx->pc = 0x12B26Cu;
    SET_GPR_U32(ctx, 31, 0x12B274u);
    ctx->pc = 0x12B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B26Cu;
    // 0x12b270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC48u, 0x12B26Cu, 0x12B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B274u;
label_12b274:
    // 0x12b274: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_12b278:
    // 0x12b278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b27c:
    // 0x12b27c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x12b27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_12b280:
    // 0x12b280: 0x2406012e  addiu       $a2, $zero, 0x12E
    ctx->pc = 0x12b280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_12b284:
    // 0x12b284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b288:
    // 0x12b288: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12b288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12b28c:
    // 0x12b28c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b290:
    // 0x12b290: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12b290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b294:
    // 0x12b294: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b294u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b298:
    // 0x12b298: 0xc0b2e92  jal         func_2CBA48
label_12b29c:
    if (ctx->pc == 0x12B29Cu) {
        ctx->pc = 0x12B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B298u;
        // 0x12b29c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2A0u;
        goto label_12b2a0;
    }
    ctx->pc = 0x12B298u;
    SET_GPR_U32(ctx, 31, 0x12B2A0u);
    ctx->pc = 0x12B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B298u;
    // 0x12b29c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x12B298u, 0x12B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2A0u;
label_12b2a0:
    // 0x12b2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12b2a4:
    // 0x12b2a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12b2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12b2a8:
    // 0x12b2a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2ac:
    // 0x12b2ac: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x12b2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_12b2b0:
    // 0x12b2b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12b2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2b4:
    // 0x12b2b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12b2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2b8:
    // 0x12b2b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12b2b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b2bc:
    // 0x12b2bc: 0xc0b2e92  jal         func_2CBA48
label_12b2c0:
    if (ctx->pc == 0x12B2C0u) {
        ctx->pc = 0x12B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2BCu;
        // 0x12b2c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2C4u;
        goto label_12b2c4;
    }
    ctx->pc = 0x12B2BCu;
    SET_GPR_U32(ctx, 31, 0x12B2C4u);
    ctx->pc = 0x12B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B2BCu;
    // 0x12b2c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x12B2BCu, 0x12B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2C4u;
label_12b2c4:
    // 0x12b2c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12b2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12b2c8:
    // 0x12b2c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12b2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12b2cc:
    // 0x12b2cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12b2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12b2d0:
    // 0x12b2d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12b2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12b2d4:
    // 0x12b2d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12b2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12b2d8:
    // 0x12b2d8: 0x3e00008  jr          $ra
label_12b2dc:
    if (ctx->pc == 0x12B2DCu) {
        ctx->pc = 0x12B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D8u;
        // 0x12b2dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2E0u;
        goto label_fallthrough_0x12b2d8;
    }
    ctx->pc = 0x12B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2D8u;
        // 0x12b2dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b2d8:
    ctx->pc = 0x12B2E0u;
}
