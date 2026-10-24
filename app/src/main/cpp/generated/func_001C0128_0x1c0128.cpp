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

// Function: func_001C0128
// Address: 0x1c0128 - 0x1c0378
void func_001C0128_0x1c0128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C0128_0x1c0128");
#endif

    switch (ctx->pc) {
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0218u: goto label_1c0218;
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0220u: goto label_1c0220;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0228u: goto label_1c0228;
        case 0x1c022cu: goto label_1c022c;
        case 0x1c0230u: goto label_1c0230;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0238u: goto label_1c0238;
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0240u: goto label_1c0240;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0248u: goto label_1c0248;
        case 0x1c024cu: goto label_1c024c;
        case 0x1c0250u: goto label_1c0250;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0258u: goto label_1c0258;
        case 0x1c025cu: goto label_1c025c;
        case 0x1c0260u: goto label_1c0260;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c0268u: goto label_1c0268;
        case 0x1c026cu: goto label_1c026c;
        case 0x1c0270u: goto label_1c0270;
        case 0x1c0274u: goto label_1c0274;
        case 0x1c0278u: goto label_1c0278;
        case 0x1c027cu: goto label_1c027c;
        case 0x1c0280u: goto label_1c0280;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c0288u: goto label_1c0288;
        case 0x1c028cu: goto label_1c028c;
        case 0x1c0290u: goto label_1c0290;
        case 0x1c0294u: goto label_1c0294;
        case 0x1c0298u: goto label_1c0298;
        case 0x1c029cu: goto label_1c029c;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02a4u: goto label_1c02a4;
        case 0x1c02a8u: goto label_1c02a8;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02b0u: goto label_1c02b0;
        case 0x1c02b4u: goto label_1c02b4;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02bcu: goto label_1c02bc;
        case 0x1c02c0u: goto label_1c02c0;
        case 0x1c02c4u: goto label_1c02c4;
        case 0x1c02c8u: goto label_1c02c8;
        case 0x1c02ccu: goto label_1c02cc;
        case 0x1c02d0u: goto label_1c02d0;
        case 0x1c02d4u: goto label_1c02d4;
        case 0x1c02d8u: goto label_1c02d8;
        case 0x1c02dcu: goto label_1c02dc;
        case 0x1c02e0u: goto label_1c02e0;
        case 0x1c02e4u: goto label_1c02e4;
        case 0x1c02e8u: goto label_1c02e8;
        case 0x1c02ecu: goto label_1c02ec;
        case 0x1c02f0u: goto label_1c02f0;
        case 0x1c02f4u: goto label_1c02f4;
        case 0x1c02f8u: goto label_1c02f8;
        case 0x1c02fcu: goto label_1c02fc;
        case 0x1c0300u: goto label_1c0300;
        case 0x1c0304u: goto label_1c0304;
        case 0x1c0308u: goto label_1c0308;
        case 0x1c030cu: goto label_1c030c;
        case 0x1c0310u: goto label_1c0310;
        case 0x1c0314u: goto label_1c0314;
        case 0x1c0318u: goto label_1c0318;
        case 0x1c031cu: goto label_1c031c;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0324u: goto label_1c0324;
        case 0x1c0328u: goto label_1c0328;
        case 0x1c032cu: goto label_1c032c;
        case 0x1c0330u: goto label_1c0330;
        case 0x1c0334u: goto label_1c0334;
        case 0x1c0338u: goto label_1c0338;
        case 0x1c033cu: goto label_1c033c;
        case 0x1c0340u: goto label_1c0340;
        case 0x1c0344u: goto label_1c0344;
        case 0x1c0348u: goto label_1c0348;
        case 0x1c034cu: goto label_1c034c;
        case 0x1c0350u: goto label_1c0350;
        case 0x1c0354u: goto label_1c0354;
        case 0x1c0358u: goto label_1c0358;
        case 0x1c035cu: goto label_1c035c;
        case 0x1c0360u: goto label_1c0360;
        case 0x1c0364u: goto label_1c0364;
        case 0x1c0368u: goto label_1c0368;
        case 0x1c036cu: goto label_1c036c;
        case 0x1c0370u: goto label_1c0370;
        case 0x1c0374u: goto label_1c0374;
        default: break;
    }

    ctx->pc = 0x1c0128u;

label_1c0128:
    // 0x1c0128: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c012c:
    // 0x1c012c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1c012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1c0130:
    // 0x1c0130: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c0130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1c0134:
    // 0x1c0134: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c0134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c0138:
    // 0x1c0138: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c013c:
    // 0x1c013c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c0140:
    // 0x1c0140: 0xc06dbee  jal         func_1B6FB8
label_1c0144:
    if (ctx->pc == 0x1C0144u) {
        ctx->pc = 0x1C0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0140u;
        // 0x1c0144: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0148u;
        goto label_1c0148;
    }
    ctx->pc = 0x1C0140u;
    SET_GPR_U32(ctx, 31, 0x1C0148u);
    ctx->pc = 0x1C0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0140u;
    // 0x1c0144: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1C0140u, 0x1C0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0148u;
label_1c0148:
    // 0x1c0148: 0x966302fe  lhu         $v1, 0x2FE($s3)
    ctx->pc = 0x1c0148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 766)));
label_1c014c:
    // 0x1c014c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1c0150:
    // 0x1c0150: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1c0154:
    // 0x1c0154: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c0154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c0158:
    // 0x1c0158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c015c:
    // 0x1c015c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1c0160:
    // 0x1c0160: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1c0160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
label_1c0164:
    // 0x1c0164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0168:
    // 0x1c0168: 0x2464fc44  addiu       $a0, $v1, -0x3BC
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966340));
label_1c016c:
    // 0x1c016c: 0xe6600600  swc1        $f0, 0x600($s3)
    ctx->pc = 0x1c016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1536), bits); }
label_1c0170:
    // 0x1c0170: 0x2c830032  sltiu       $v1, $a0, 0x32
    ctx->pc = 0x1c0170u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1c0174:
    // 0x1c0174: 0xe6610614  swc1        $f1, 0x614($s3)
    ctx->pc = 0x1c0174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1556), bits); }
label_1c0178:
    // 0x1c0178: 0xae620670  sw          $v0, 0x670($s3)
    ctx->pc = 0x1c0178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 2));
label_1c017c:
    // 0x1c017c: 0xae600610  sw          $zero, 0x610($s3)
    ctx->pc = 0x1c017cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1552), GPR_U32(ctx, 0));
label_1c0180:
    // 0x1c0180: 0xae600618  sw          $zero, 0x618($s3)
    ctx->pc = 0x1c0180u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1560), GPR_U32(ctx, 0));
label_1c0184:
    // 0x1c0184: 0xae600630  sw          $zero, 0x630($s3)
    ctx->pc = 0x1c0184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1584), GPR_U32(ctx, 0));
label_1c0188:
    // 0x1c0188: 0xae600634  sw          $zero, 0x634($s3)
    ctx->pc = 0x1c0188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 0));
label_1c018c:
    // 0x1c018c: 0xa2600660  sb          $zero, 0x660($s3)
    ctx->pc = 0x1c018cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1632), (uint8_t)GPR_U32(ctx, 0));
label_1c0190:
    // 0x1c0190: 0xa2600674  sb          $zero, 0x674($s3)
    ctx->pc = 0x1c0190u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1652), (uint8_t)GPR_U32(ctx, 0));
label_1c0194:
    // 0x1c0194: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_1c0198:
    if (ctx->pc == 0x1C0198u) {
        ctx->pc = 0x1C0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0194u;
        // 0x1c0198: 0xa2600675  sb          $zero, 0x675($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1653), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C019Cu;
        goto label_1c019c;
    }
    ctx->pc = 0x1C0194u;
    {
        const bool branch_taken_0x1c0194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0194u;
        // 0x1c0198: 0xa2600675  sb          $zero, 0x675($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1653), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0194) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C019Cu;
label_1c019c:
    // 0x1c019c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c019cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c01a0:
    // 0x1c01a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c01a4:
    // 0x1c01a4: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
label_1c01a8:
    // 0x1c01a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c01ac:
    // 0x1c01ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c01b0:
    // 0x1c01b0: 0x800008  jr          $a0
label_1c01b4:
    if (ctx->pc == 0x1C01B4u) {
        ctx->pc = 0x1C01B8u;
        goto label_1c01b8;
    }
    ctx->pc = 0x1C01B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C01B8u: goto label_1c01b8;
            case 0x1C01C8u: goto label_1c01c8;
            case 0x1C01D8u: goto label_1c01d8;
            case 0x1C0200u: goto label_1c0200;
            case 0x1C0270u: goto label_1c0270;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C01B8u;
label_1c01b8:
    // 0x1c01b8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c01b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1c01bc:
    // 0x1c01bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c01bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c01c0:
    // 0x1c01c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c01c4:
    if (ctx->pc == 0x1C01C4u) {
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01C8u;
        goto label_1c01c8;
    }
    ctx->pc = 0x1C01C0u;
    {
        const bool branch_taken_0x1c01c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c0) {
            ctx->pc = 0x1C01F4u;
            goto label_1c01f4;
        }
    }
    ctx->pc = 0x1C01C8u;
label_1c01c8:
    // 0x1c01c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c01c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1c01cc:
    // 0x1c01cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c01ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c01d0:
    // 0x1c01d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c01d4:
    if (ctx->pc == 0x1C01D4u) {
        ctx->pc = 0x1C01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D0u;
        // 0x1c01d4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01D8u;
        goto label_1c01d8;
    }
    ctx->pc = 0x1C01D0u;
    {
        const bool branch_taken_0x1c01d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D0u;
        // 0x1c01d4: 0xe6600110  swc1        $f0, 0x110($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d0) {
            ctx->pc = 0x1C01F4u;
            goto label_1c01f4;
        }
    }
    ctx->pc = 0x1C01D8u;
label_1c01d8:
    // 0x1c01d8: 0x8e6205b8  lw          $v0, 0x5B8($s3)
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1464)));
label_1c01dc:
    // 0x1c01dc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1c01e0:
    // 0x1c01e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c01e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c01e4:
    // 0x1c01e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c01e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1c01e8:
    // 0x1c01e8: 0xae600670  sw          $zero, 0x670($s3)
    ctx->pc = 0x1c01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
label_1c01ec:
    // 0x1c01ec: 0xe6600110  swc1        $f0, 0x110($s3)
    ctx->pc = 0x1c01ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 272), bits); }
label_1c01f0:
    // 0x1c01f0: 0xae6205b8  sw          $v0, 0x5B8($s3)
    ctx->pc = 0x1c01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1464), GPR_U32(ctx, 2));
label_1c01f4:
    // 0x1c01f4: 0xe6600118  swc1        $f0, 0x118($s3)
    ctx->pc = 0x1c01f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
label_1c01f8:
    // 0x1c01f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1c01fc:
    if (ctx->pc == 0x1C01FCu) {
        ctx->pc = 0x1C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01F8u;
        // 0x1c01fc: 0xe6600114  swc1        $f0, 0x114($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0200u;
        goto label_1c0200;
    }
    ctx->pc = 0x1C01F8u;
    {
        const bool branch_taken_0x1c01f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01F8u;
        // 0x1c01fc: 0xe6600114  swc1        $f0, 0x114($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01f8) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C0200u;
label_1c0200:
    // 0x1c0200: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c0204:
    // 0x1c0204: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c0208:
    // 0x1c0208: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_1c020c:
    // 0x1c020c: 0xc07f83a  jal         func_1FE0E8
label_1c0210:
    if (ctx->pc == 0x1C0210u) {
        ctx->pc = 0x1C0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C020Cu;
        // 0x1c0210: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0214u;
        goto label_1c0214;
    }
    ctx->pc = 0x1C020Cu;
    SET_GPR_U32(ctx, 31, 0x1C0214u);
    ctx->pc = 0x1C0210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C020Cu;
    // 0x1c0210: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1C020Cu, 0x1C0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0214u;
label_1c0214:
    // 0x1c0214: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1c0218:
    if (ctx->pc == 0x1C0218u) {
        ctx->pc = 0x1C0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0214u;
        // 0x1c0218: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C021Cu;
        goto label_1c021c;
    }
    ctx->pc = 0x1C0214u;
    {
        const bool branch_taken_0x1c0214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0214u;
        // 0x1c0218: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0214) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C021Cu;
label_1c021c:
    // 0x1c021c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c021cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c0220:
    // 0x1c0220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0224:
    // 0x1c0224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c0224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0228:
    // 0x1c0228: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1c022c:
    // 0x1c022c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c022cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0230:
    // 0x1c0230: 0x26650080  addiu       $a1, $s3, 0x80
    ctx->pc = 0x1c0230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1c0234:
    // 0x1c0234: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c0234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c0238:
    // 0x1c0238: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c0238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c023c:
    // 0x1c023c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c0240:
    // 0x1c0240: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c0240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1c0244:
    // 0x1c0244: 0xc07f6bc  jal         func_1FDAF0
label_1c0248:
    if (ctx->pc == 0x1C0248u) {
        ctx->pc = 0x1C0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0244u;
        // 0x1c0248: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C024Cu;
        goto label_1c024c;
    }
    ctx->pc = 0x1C0244u;
    SET_GPR_U32(ctx, 31, 0x1C024Cu);
    ctx->pc = 0x1C0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0244u;
    // 0x1c0248: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1C0244u, 0x1C024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C024Cu;
label_1c024c:
    // 0x1c024c: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1c024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1c0250:
    // 0x1c0250: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1c0250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1c0254:
    // 0x1c0254: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1c0254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1c0258:
    // 0x1c0258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c025c:
    // 0x1c025c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1c025cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
label_1c0260:
    // 0x1c0260: 0x8e620680  lw          $v0, 0x680($s3)
    ctx->pc = 0x1c0260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1c0264:
    // 0x1c0264: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1c0264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
label_1c0268:
    // 0x1c0268: 0xc07f59a  jal         func_1FD668
label_1c026c:
    if (ctx->pc == 0x1C026Cu) {
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0268u;
        // 0x1c026c: 0x8e640680  lw          $a0, 0x680($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0270u;
        goto label_1c0270;
    }
    ctx->pc = 0x1C0268u;
    SET_GPR_U32(ctx, 31, 0x1C0270u);
    ctx->pc = 0x1C026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0268u;
    // 0x1c026c: 0x8e640680  lw          $a0, 0x680($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C0268u, 0x1C0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0270u;
label_1c0270:
    // 0x1c0270: 0x966302fe  lhu         $v1, 0x2FE($s3)
    ctx->pc = 0x1c0270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 766)));
label_1c0274:
    // 0x1c0274: 0x240203d9  addiu       $v0, $zero, 0x3D9
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
label_1c0278:
    // 0x1c0278: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1c027c:
    if (ctx->pc == 0x1C027Cu) {
        ctx->pc = 0x1C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0278u;
        // 0x1c027c: 0x286203da  slti        $v0, $v1, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0280u;
        goto label_1c0280;
    }
    ctx->pc = 0x1C0278u;
    {
        const bool branch_taken_0x1c0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0278u;
        // 0x1c027c: 0x286203da  slti        $v0, $v1, 0x3DA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)986) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0278) {
            ctx->pc = 0x1C02A4u;
            goto label_1c02a4;
        }
    }
    ctx->pc = 0x1C0280u;
label_1c0280:
    // 0x1c0280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c0284:
    if (ctx->pc == 0x1C0284u) {
        ctx->pc = 0x1C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0280u;
        // 0x1c0284: 0x240203bc  addiu       $v0, $zero, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0288u;
        goto label_1c0288;
    }
    ctx->pc = 0x1C0280u;
    {
        const bool branch_taken_0x1c0280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0280u;
        // 0x1c0284: 0x240203bc  addiu       $v0, $zero, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0280) {
            ctx->pc = 0x1C0298u;
            goto label_1c0298;
        }
    }
    ctx->pc = 0x1C0288u;
label_1c0288:
    // 0x1c0288: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1c028c:
    if (ctx->pc == 0x1C028Cu) {
        ctx->pc = 0x1C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0288u;
        // 0x1c028c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0290u;
        goto label_1c0290;
    }
    ctx->pc = 0x1C0288u;
    {
        const bool branch_taken_0x1c0288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0288u;
        // 0x1c028c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0288) {
            ctx->pc = 0x1C02A4u;
            goto label_1c02a4;
        }
    }
    ctx->pc = 0x1C0290u;
label_1c0290:
    // 0x1c0290: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c0294:
    if (ctx->pc == 0x1C0294u) {
        ctx->pc = 0x1C0298u;
        goto label_1c0298;
    }
    ctx->pc = 0x1C0290u;
    {
        const bool branch_taken_0x1c0290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0290) {
            ctx->pc = 0x1C02B0u;
            goto label_1c02b0;
        }
    }
    ctx->pc = 0x1C0298u;
label_1c0298:
    // 0x1c0298: 0x240203e3  addiu       $v0, $zero, 0x3E3
    ctx->pc = 0x1c0298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
label_1c029c:
    // 0x1c029c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1c02a0:
    if (ctx->pc == 0x1C02A0u) {
        ctx->pc = 0x1C02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C029Cu;
        // 0x1c02a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02A4u;
        goto label_1c02a4;
    }
    ctx->pc = 0x1C029Cu;
    {
        const bool branch_taken_0x1c029c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C029Cu;
        // 0x1c02a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c029c) {
            ctx->pc = 0x1C02B0u;
            goto label_1c02b0;
        }
    }
    ctx->pc = 0x1C02A4u;
label_1c02a4:
    // 0x1c02a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c02a8:
    // 0x1c02a8: 0xa2620531  sb          $v0, 0x531($s3)
    ctx->pc = 0x1c02a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1329), (uint8_t)GPR_U32(ctx, 2));
label_1c02ac:
    // 0x1c02ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c02acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c02b0:
    // 0x1c02b0: 0xc070968  jal         func_1C25A0
label_1c02b4:
    if (ctx->pc == 0x1C02B4u) {
        ctx->pc = 0x1C02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B0u;
        // 0x1c02b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02B8u;
        goto label_1c02b8;
    }
    ctx->pc = 0x1C02B0u;
    SET_GPR_U32(ctx, 31, 0x1C02B8u);
    ctx->pc = 0x1C02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02B0u;
    // 0x1c02b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25A0u, 0x1C02B0u, 0x1C02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02B8u;
label_1c02b8:
    // 0x1c02b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c02b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c02bc:
    // 0x1c02bc: 0xc070972  jal         func_1C25C8
label_1c02c0:
    if (ctx->pc == 0x1C02C0u) {
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02BCu;
        // 0x1c02c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02C4u;
        goto label_1c02c4;
    }
    ctx->pc = 0x1C02BCu;
    SET_GPR_U32(ctx, 31, 0x1C02C4u);
    ctx->pc = 0x1C02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02BCu;
    // 0x1c02c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25C8u, 0x1C02BCu, 0x1C02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02C4u;
label_1c02c4:
    // 0x1c02c4: 0x8e6205b8  lw          $v0, 0x5B8($s3)
    ctx->pc = 0x1c02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1464)));
label_1c02c8:
    // 0x1c02c8: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1c02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1c02cc:
    // 0x1c02cc: 0x9e6305b0  lwu         $v1, 0x5B0($s3)
    ctx->pc = 0x1c02ccu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 1456)));
label_1c02d0:
    // 0x1c02d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1c02d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1c02d4:
    // 0x1c02d4: 0x3197b  dsra        $v1, $v1, 5
    ctx->pc = 0x1c02d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 5);
label_1c02d8:
    // 0x1c02d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c02d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c02dc:
    // 0x1c02dc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_1c02e0:
    if (ctx->pc == 0x1C02E0u) {
        ctx->pc = 0x1C02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02DCu;
        // 0x1c02e0: 0xae6205b8  sw          $v0, 0x5B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02E4u;
        goto label_1c02e4;
    }
    ctx->pc = 0x1C02DCu;
    {
        const bool branch_taken_0x1c02dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02DCu;
        // 0x1c02e0: 0xae6205b8  sw          $v0, 0x5B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02dc) {
            ctx->pc = 0x1C0348u;
            goto label_1c0348;
        }
    }
    ctx->pc = 0x1C02E4u;
label_1c02e4:
    // 0x1c02e4: 0x86620662  lh          $v0, 0x662($s3)
    ctx->pc = 0x1c02e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1634)));
label_1c02e8:
    // 0x1c02e8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_1c02ec:
    if (ctx->pc == 0x1C02ECu) {
        ctx->pc = 0x1C02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E8u;
        // 0x1c02ec: 0x8e640560  lw          $a0, 0x560($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02F0u;
        goto label_1c02f0;
    }
    ctx->pc = 0x1C02E8u;
    {
        const bool branch_taken_0x1c02e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02e8) {
            ctx->pc = 0x1C02ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C02E8u;
            // 0x1c02ec: 0x8e640560  lw          $a0, 0x560($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C034Cu;
            goto label_1c034c;
        }
    }
    ctx->pc = 0x1C02F0u;
label_1c02f0:
    // 0x1c02f0: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c02f4:
    // 0x1c02f4: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1c02f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_1c02f8:
    // 0x1c02f8: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1c02f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_1c02fc:
    // 0x1c02fc: 0x967202fe  lhu         $s2, 0x2FE($s3)
    ctx->pc = 0x1c02fcu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 766)));
label_1c0300:
    // 0x1c0300: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c0304:
    // 0x1c0304: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c0304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0308:
    // 0x1c0308: 0x40f809  jalr        $v0
label_1c030c:
    if (ctx->pc == 0x1C030Cu) {
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0310u;
        goto label_1c0310;
    }
    ctx->pc = 0x1C0308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0310u);
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0308u, 0x1C0310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0310u;
label_1c0310:
    // 0x1c0310: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c0310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c0314:
    // 0x1c0314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0318:
    // 0x1c0318: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c0318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c031c:
    // 0x1c031c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c0320:
    // 0x1c0320: 0x40f809  jalr        $v0
label_1c0324:
    if (ctx->pc == 0x1C0324u) {
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0328u;
        goto label_1c0328;
    }
    ctx->pc = 0x1C0320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0328u);
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0320u, 0x1C0328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0328u;
label_1c0328:
    // 0x1c0328: 0x8e680560  lw          $t0, 0x560($s3)
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c032c:
    // 0x1c032c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0330:
    // 0x1c0330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0334:
    // 0x1c0334: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c0334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0338:
    // 0x1c0338: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c0338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c033c:
    // 0x1c033c: 0xc07ebfc  jal         func_1FAFF0
label_1c0340:
    if (ctx->pc == 0x1C0340u) {
        ctx->pc = 0x1C0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C033Cu;
        // 0x1c0340: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0344u;
        goto label_1c0344;
    }
    ctx->pc = 0x1C033Cu;
    SET_GPR_U32(ctx, 31, 0x1C0344u);
    ctx->pc = 0x1C0340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C033Cu;
    // 0x1c0340: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1C033Cu, 0x1C0344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0344u;
label_1c0344:
    // 0x1c0344: 0xa6620662  sh          $v0, 0x662($s3)
    ctx->pc = 0x1c0344u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1634), (uint16_t)GPR_U32(ctx, 2));
label_1c0348:
    // 0x1c0348: 0x8e640560  lw          $a0, 0x560($s3)
    ctx->pc = 0x1c0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c034c:
    // 0x1c034c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0350:
    // 0x1c0350: 0x92630676  lbu         $v1, 0x676($s3)
    ctx->pc = 0x1c0350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1654)));
label_1c0354:
    // 0x1c0354: 0xae64067c  sw          $a0, 0x67C($s3)
    ctx->pc = 0x1c0354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 4));
label_1c0358:
    // 0x1c0358: 0xa2630677  sb          $v1, 0x677($s3)
    ctx->pc = 0x1c0358u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1655), (uint8_t)GPR_U32(ctx, 3));
label_1c035c:
    // 0x1c035c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c035cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c0360:
    // 0x1c0360: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c0360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0364:
    // 0x1c0364: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c0364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0368:
    // 0x1c0368: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1c0368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c036c:
    // 0x1c036c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c036cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0370:
    // 0x1c0370: 0x3e00008  jr          $ra
label_1c0374:
    if (ctx->pc == 0x1C0374u) {
        ctx->pc = 0x1C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0370u;
        // 0x1c0374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0378u;
        goto label_fallthrough_0x1c0370;
    }
    ctx->pc = 0x1C0370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0370u;
        // 0x1c0374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0370:
    ctx->pc = 0x1C0378u;
}
