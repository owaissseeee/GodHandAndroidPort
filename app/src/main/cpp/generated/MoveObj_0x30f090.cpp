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

// Function: MoveObj
// Address: 0x30f090 - 0x30f228
void MoveObj_0x30f090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveObj_0x30f090");
#endif

    switch (ctx->pc) {
        case 0x30f090u: goto label_30f090;
        case 0x30f094u: goto label_30f094;
        case 0x30f098u: goto label_30f098;
        case 0x30f09cu: goto label_30f09c;
        case 0x30f0a0u: goto label_30f0a0;
        case 0x30f0a4u: goto label_30f0a4;
        case 0x30f0a8u: goto label_30f0a8;
        case 0x30f0acu: goto label_30f0ac;
        case 0x30f0b0u: goto label_30f0b0;
        case 0x30f0b4u: goto label_30f0b4;
        case 0x30f0b8u: goto label_30f0b8;
        case 0x30f0bcu: goto label_30f0bc;
        case 0x30f0c0u: goto label_30f0c0;
        case 0x30f0c4u: goto label_30f0c4;
        case 0x30f0c8u: goto label_30f0c8;
        case 0x30f0ccu: goto label_30f0cc;
        case 0x30f0d0u: goto label_30f0d0;
        case 0x30f0d4u: goto label_30f0d4;
        case 0x30f0d8u: goto label_30f0d8;
        case 0x30f0dcu: goto label_30f0dc;
        case 0x30f0e0u: goto label_30f0e0;
        case 0x30f0e4u: goto label_30f0e4;
        case 0x30f0e8u: goto label_30f0e8;
        case 0x30f0ecu: goto label_30f0ec;
        case 0x30f0f0u: goto label_30f0f0;
        case 0x30f0f4u: goto label_30f0f4;
        case 0x30f0f8u: goto label_30f0f8;
        case 0x30f0fcu: goto label_30f0fc;
        case 0x30f100u: goto label_30f100;
        case 0x30f104u: goto label_30f104;
        case 0x30f108u: goto label_30f108;
        case 0x30f10cu: goto label_30f10c;
        case 0x30f110u: goto label_30f110;
        case 0x30f114u: goto label_30f114;
        case 0x30f118u: goto label_30f118;
        case 0x30f11cu: goto label_30f11c;
        case 0x30f120u: goto label_30f120;
        case 0x30f124u: goto label_30f124;
        case 0x30f128u: goto label_30f128;
        case 0x30f12cu: goto label_30f12c;
        case 0x30f130u: goto label_30f130;
        case 0x30f134u: goto label_30f134;
        case 0x30f138u: goto label_30f138;
        case 0x30f13cu: goto label_30f13c;
        case 0x30f140u: goto label_30f140;
        case 0x30f144u: goto label_30f144;
        case 0x30f148u: goto label_30f148;
        case 0x30f14cu: goto label_30f14c;
        case 0x30f150u: goto label_30f150;
        case 0x30f154u: goto label_30f154;
        case 0x30f158u: goto label_30f158;
        case 0x30f15cu: goto label_30f15c;
        case 0x30f160u: goto label_30f160;
        case 0x30f164u: goto label_30f164;
        case 0x30f168u: goto label_30f168;
        case 0x30f16cu: goto label_30f16c;
        case 0x30f170u: goto label_30f170;
        case 0x30f174u: goto label_30f174;
        case 0x30f178u: goto label_30f178;
        case 0x30f17cu: goto label_30f17c;
        case 0x30f180u: goto label_30f180;
        case 0x30f184u: goto label_30f184;
        case 0x30f188u: goto label_30f188;
        case 0x30f18cu: goto label_30f18c;
        case 0x30f190u: goto label_30f190;
        case 0x30f194u: goto label_30f194;
        case 0x30f198u: goto label_30f198;
        case 0x30f19cu: goto label_30f19c;
        case 0x30f1a0u: goto label_30f1a0;
        case 0x30f1a4u: goto label_30f1a4;
        case 0x30f1a8u: goto label_30f1a8;
        case 0x30f1acu: goto label_30f1ac;
        case 0x30f1b0u: goto label_30f1b0;
        case 0x30f1b4u: goto label_30f1b4;
        case 0x30f1b8u: goto label_30f1b8;
        case 0x30f1bcu: goto label_30f1bc;
        case 0x30f1c0u: goto label_30f1c0;
        case 0x30f1c4u: goto label_30f1c4;
        case 0x30f1c8u: goto label_30f1c8;
        case 0x30f1ccu: goto label_30f1cc;
        case 0x30f1d0u: goto label_30f1d0;
        case 0x30f1d4u: goto label_30f1d4;
        case 0x30f1d8u: goto label_30f1d8;
        case 0x30f1dcu: goto label_30f1dc;
        case 0x30f1e0u: goto label_30f1e0;
        case 0x30f1e4u: goto label_30f1e4;
        case 0x30f1e8u: goto label_30f1e8;
        case 0x30f1ecu: goto label_30f1ec;
        case 0x30f1f0u: goto label_30f1f0;
        case 0x30f1f4u: goto label_30f1f4;
        case 0x30f1f8u: goto label_30f1f8;
        case 0x30f1fcu: goto label_30f1fc;
        case 0x30f200u: goto label_30f200;
        case 0x30f204u: goto label_30f204;
        case 0x30f208u: goto label_30f208;
        case 0x30f20cu: goto label_30f20c;
        case 0x30f210u: goto label_30f210;
        case 0x30f214u: goto label_30f214;
        case 0x30f218u: goto label_30f218;
        case 0x30f21cu: goto label_30f21c;
        case 0x30f220u: goto label_30f220;
        case 0x30f224u: goto label_30f224;
        default: break;
    }

    ctx->pc = 0x30f090u;

label_30f090:
    // 0x30f090: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x30f090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_30f094:
    // 0x30f094: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30f094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30f098:
    // 0x30f098: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x30f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_30f09c:
    // 0x30f09c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x30f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_30f0a0:
    // 0x30f0a0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x30f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_30f0a4:
    // 0x30f0a4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_30f0a8:
    // 0x30f0a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x30f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_30f0ac:
    // 0x30f0ac: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x30f0acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30f0b0:
    // 0x30f0b0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x30f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_30f0b4:
    // 0x30f0b4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_30f0b8:
    // 0x30f0b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x30f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_30f0bc:
    // 0x30f0bc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x30f0bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30f0c0:
    // 0x30f0c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x30f0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_30f0c4:
    // 0x30f0c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30f0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_30f0c8:
    // 0x30f0c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x30f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_30f0cc:
    // 0x30f0cc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x30f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_30f0d0:
    // 0x30f0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30f0d4:
    // 0x30f0d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30f0d8:
    // 0x30f0d8: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x30f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31352)));
label_30f0dc:
    // 0x30f0dc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x30f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_30f0e0:
    // 0x30f0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30f0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30f0e4:
    // 0x30f0e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30f0e8:
    if (ctx->pc == 0x30F0E8u) {
        ctx->pc = 0x30F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0E4u;
        // 0x30f0e8: 0xac852cf8  sw          $a1, 0x2CF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F0ECu;
        goto label_30f0ec;
    }
    ctx->pc = 0x30F0E4u;
    {
        const bool branch_taken_0x30f0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F0E4u;
        // 0x30f0e8: 0xac852cf8  sw          $a1, 0x2CF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f0e4) {
            ctx->pc = 0x30F0FCu;
            goto label_30f0fc;
        }
    }
    ctx->pc = 0x30F0ECu;
label_30f0ec:
    // 0x30f0ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30f0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30f0f0:
    // 0x30f0f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30f0f4:
    // 0x30f0f4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_30f0f8:
    // 0x30f0f8: 0xe4404c48  swc1        $f0, 0x4C48($v0)
    ctx->pc = 0x30f0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19528), bits); }
label_30f0fc:
    // 0x30f0fc: 0x8ee27a78  lw          $v0, 0x7A78($s7)
    ctx->pc = 0x30f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31352)));
label_30f100:
    // 0x30f100: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30f100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_30f104:
    // 0x30f104: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x30f104u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
label_30f108:
    // 0x30f108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30f10c:
    // 0x30f10c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_30f110:
    if (ctx->pc == 0x30F110u) {
        ctx->pc = 0x30F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F10Cu;
        // 0x30f110: 0x3c160045  lui         $s6, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F114u;
        goto label_30f114;
    }
    ctx->pc = 0x30F10Cu;
    {
        const bool branch_taken_0x30f10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F10Cu;
        // 0x30f110: 0x3c160045  lui         $s6, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f10c) {
            ctx->pc = 0x30F184u;
            goto label_30f184;
        }
    }
    ctx->pc = 0x30F114u;
label_30f114:
    // 0x30f114: 0x8ea24c30  lw          $v0, 0x4C30($s5)
    ctx->pc = 0x30f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30f118:
    // 0x30f118: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x30f118u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30f11c:
    // 0x30f11c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_30f120:
    // 0x30f120: 0x12130019  beq         $s0, $s3, . + 4 + (0x19 << 2)
label_30f124:
    if (ctx->pc == 0x30F124u) {
        ctx->pc = 0x30F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F120u;
        // 0x30f124: 0x8ee27a78  lw          $v0, 0x7A78($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F128u;
        goto label_30f128;
    }
    ctx->pc = 0x30F120u;
    {
        const bool branch_taken_0x30f120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x30F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F120u;
        // 0x30f124: 0x8ee27a78  lw          $v0, 0x7A78($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f120) {
            ctx->pc = 0x30F188u;
            goto label_30f188;
        }
    }
    ctx->pc = 0x30F128u;
label_30f128:
    // 0x30f128: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x30f128u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_30f12c:
    // 0x30f12c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x30f12cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_30f130:
    // 0x30f130: 0x3652fffc  ori         $s2, $s2, 0xFFFC
    ctx->pc = 0x30f130u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65532);
label_30f134:
    // 0x30f134: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30f134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30f138:
    // 0x30f138: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x30f138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f13c:
    // 0x30f13c: 0x8ca30250  lw          $v1, 0x250($a1)
    ctx->pc = 0x30f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
label_30f140:
    // 0x30f140: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x30f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_30f144:
    // 0x30f144: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_30f148:
    if (ctx->pc == 0x30F148u) {
        ctx->pc = 0x30F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F144u;
        // 0x30f148: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F14Cu;
        goto label_30f14c;
    }
    ctx->pc = 0x30F144u;
    {
        const bool branch_taken_0x30f144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F144u;
        // 0x30f148: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f144) {
            ctx->pc = 0x30F17Cu;
            goto label_30f17c;
        }
    }
    ctx->pc = 0x30F14Cu;
label_30f14c:
    // 0x30f14c: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x30f14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_30f150:
    // 0x30f150: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_30f154:
    if (ctx->pc == 0x30F154u) {
        ctx->pc = 0x30F158u;
        goto label_30f158;
    }
    ctx->pc = 0x30F150u;
    {
        const bool branch_taken_0x30f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f150) {
            ctx->pc = 0x30F17Cu;
            goto label_30f17c;
        }
    }
    ctx->pc = 0x30F158u;
label_30f158:
    // 0x30f158: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_30f15c:
    // 0x30f15c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30f15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30f160:
    // 0x30f160: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30f164:
    // 0x30f164: 0x60f809  jalr        $v1
label_30f168:
    if (ctx->pc == 0x30F168u) {
        ctx->pc = 0x30F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F164u;
        // 0x30f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F16Cu;
        goto label_30f16c;
    }
    ctx->pc = 0x30F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30F16Cu);
        ctx->pc = 0x30F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F164u;
        // 0x30f168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F164u, 0x30F16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30F16Cu;
label_30f16c:
    // 0x30f16c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f170:
    // 0x30f170: 0x8c8202f0  lw          $v0, 0x2F0($a0)
    ctx->pc = 0x30f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 752)));
label_30f174:
    // 0x30f174: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x30f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_30f178:
    // 0x30f178: 0xac8202f0  sw          $v0, 0x2F0($a0)
    ctx->pc = 0x30f178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 752), GPR_U32(ctx, 2));
label_30f17c:
    // 0x30f17c: 0x1613ffee  bne         $s0, $s3, . + 4 + (-0x12 << 2)
label_30f180:
    if (ctx->pc == 0x30F180u) {
        ctx->pc = 0x30F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F17Cu;
        // 0x30f180: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F184u;
        goto label_30f184;
    }
    ctx->pc = 0x30F17Cu;
    {
        const bool branch_taken_0x30f17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x30F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F17Cu;
        // 0x30f180: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f17c) {
            ctx->pc = 0x30F138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f138;
        }
    }
    ctx->pc = 0x30F184u;
label_30f184:
    // 0x30f184: 0x8ee27a78  lw          $v0, 0x7A78($s7)
    ctx->pc = 0x30f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 31352)));
label_30f188:
    // 0x30f188: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x30f188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_30f18c:
    // 0x30f18c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30f190:
    // 0x30f190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30f194:
    if (ctx->pc == 0x30F194u) {
        ctx->pc = 0x30F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F190u;
        // 0x30f194: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F198u;
        goto label_30f198;
    }
    ctx->pc = 0x30F190u;
    {
        const bool branch_taken_0x30f190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F190u;
        // 0x30f194: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f190) {
            ctx->pc = 0x30F1A8u;
            goto label_30f1a8;
        }
    }
    ctx->pc = 0x30F198u;
label_30f198:
    // 0x30f198: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_30f19c:
    // 0x30f19c: 0xc0b14f2  jal         func_2C53C8
label_30f1a0:
    if (ctx->pc == 0x30F1A0u) {
        ctx->pc = 0x30F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F19Cu;
        // 0x30f1a0: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F1A4u;
        goto label_30f1a4;
    }
    ctx->pc = 0x30F19Cu;
    SET_GPR_U32(ctx, 31, 0x30F1A4u);
    ctx->pc = 0x30F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F19Cu;
    // 0x30f1a0: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C53C8u, 0x30F19Cu, 0x30F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1A4u;
label_30f1a4:
    // 0x30f1a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_30f1a8:
    // 0x30f1a8: 0x8fc32cf8  lw          $v1, 0x2CF8($fp)
    ctx->pc = 0x30f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11512)));
label_30f1ac:
    // 0x30f1ac: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x30f1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_30f1b0:
    // 0x30f1b0: 0x8ea54c30  lw          $a1, 0x4C30($s5)
    ctx->pc = 0x30f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_30f1b4:
    // 0x30f1b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30f1b8:
    // 0x30f1b8: 0x26c80af8  addiu       $t0, $s6, 0xAF8
    ctx->pc = 0x30f1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 2808));
label_30f1bc:
    // 0x30f1bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30f1c0:
    // 0x30f1c0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_30f1c4:
    if (ctx->pc == 0x30F1C4u) {
        ctx->pc = 0x30F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1C0u;
        // 0x30f1c4: 0xafc32cf8  sw          $v1, 0x2CF8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 11512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F1C8u;
        goto label_30f1c8;
    }
    ctx->pc = 0x30F1C0u;
    {
        const bool branch_taken_0x30f1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1C0u;
        // 0x30f1c4: 0xafc32cf8  sw          $v1, 0x2CF8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 11512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1c0) {
            ctx->pc = 0x30F1DCu;
            goto label_30f1dc;
        }
    }
    ctx->pc = 0x30F1C8u;
label_30f1c8:
    // 0x30f1c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_30f1cc:
    // 0x30f1cc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x30f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_30f1d0:
    // 0x30f1d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30f1d4:
    // 0x30f1d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_30f1d8:
    if (ctx->pc == 0x30F1D8u) {
        ctx->pc = 0x30F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1D4u;
        // 0x30f1d8: 0x24883  sra         $t1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F1DCu;
        goto label_30f1dc;
    }
    ctx->pc = 0x30F1D4u;
    {
        const bool branch_taken_0x30f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1D4u;
        // 0x30f1d8: 0x24883  sra         $t1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1d4) {
            ctx->pc = 0x30F1E0u;
            goto label_30f1e0;
        }
    }
    ctx->pc = 0x30F1DCu;
label_30f1dc:
    // 0x30f1dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30f1dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f1e0:
    // 0x30f1e0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x30f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_30f1e4:
    // 0x30f1e4: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_30f1e8:
    // 0x30f1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f1ec:
    // 0x30f1ec: 0xc0b836a  jal         func_2E0DA8
label_30f1f0:
    if (ctx->pc == 0x30F1F0u) {
        ctx->pc = 0x30F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F1ECu;
        // 0x30f1f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F1F4u;
        goto label_30f1f4;
    }
    ctx->pc = 0x30F1ECu;
    SET_GPR_U32(ctx, 31, 0x30F1F4u);
    ctx->pc = 0x30F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F1ECu;
    // 0x30f1f0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DA8u, 0x30F1ECu, 0x30F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F1F4u;
label_30f1f4:
    // 0x30f1f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x30f1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30f1f8:
    // 0x30f1f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x30f1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30f1fc:
    // 0x30f1fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x30f1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30f200:
    // 0x30f200: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x30f200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30f204:
    // 0x30f204: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30f208:
    // 0x30f208: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x30f208u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30f20c:
    // 0x30f20c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x30f20cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30f210:
    // 0x30f210: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x30f210u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30f214:
    // 0x30f214: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x30f214u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30f218:
    // 0x30f218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30f21c:
    // 0x30f21c: 0x3e00008  jr          $ra
label_30f220:
    if (ctx->pc == 0x30F220u) {
        ctx->pc = 0x30F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F21Cu;
        // 0x30f220: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30F224u;
        goto label_30f224;
    }
    ctx->pc = 0x30F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F21Cu;
        // 0x30f220: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F224u;
label_30f224:
    // 0x30f224: 0x0  nop
    ctx->pc = 0x30f224u;
    // NOP
    ctx->pc = 0x30f228u;
}
