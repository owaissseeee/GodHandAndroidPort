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

// Function: func_002000F8
// Address: 0x2000f8 - 0x2004c8
void func_002000F8_0x2000f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002000F8_0x2000f8");
#endif

    switch (ctx->pc) {
        case 0x200160u: goto label_200160;
        case 0x20017cu: goto label_20017c;
        case 0x200194u: goto label_200194;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001e4u: goto label_2001e4;
        case 0x2001f8u: goto label_2001f8;
        case 0x200200u: goto label_200200;
        case 0x200208u: goto label_200208;
        case 0x200210u: goto label_200210;
        case 0x200238u: goto label_200238;
        case 0x20027cu: goto label_20027c;
        case 0x2002acu: goto label_2002ac;
        case 0x2002f0u: goto label_2002f0;
        case 0x200318u: goto label_200318;
        case 0x200428u: goto label_200428;
        case 0x200470u: goto label_200470;
        case 0x2004a0u: goto label_2004a0;
        default: break;
    }

    ctx->pc = 0x2000f8u;

    // 0x2000f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2000fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x200100: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x200100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x200104: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x200104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x200108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20010c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x20010cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x200110: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x200110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x200114: 0x24557470  addiu       $s5, $v0, 0x7470
    ctx->pc = 0x200114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x200118: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x200118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20011c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x20011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x200120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200124: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x200124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x200128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200128u;
    {
        const bool branch_taken_0x200128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200128u;
        // 0x20012c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200128) {
            ctx->pc = 0x200140u;
            goto label_200140;
        }
    }
    ctx->pc = 0x200130u;
    // 0x200130: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x200134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200138: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x200138u;
    {
        const bool branch_taken_0x200138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200138u;
        // 0x20013c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200138) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x200140u;
label_200140:
    // 0x200140: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x200144: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x200144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x200148: 0x8e027a78  lw          $v0, 0x7A78($s0)
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x20014c: 0x26147a78  addiu       $s4, $s0, 0x7A78
    ctx->pc = 0x20014cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 31352));
    // 0x200150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x200150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200158: 0xc0801ae  jal         func_2006B8
    ctx->pc = 0x200158u;
    SET_GPR_U32(ctx, 31, 0x200160u);
    ctx->pc = 0x20015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200158u;
    // 0x20015c: 0xae027a78  sw          $v0, 0x7A78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006B8u, 0x200158u, 0x200160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200160u;
label_200160:
    // 0x200160: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x200160u;
    {
        const bool branch_taken_0x200160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200160u;
        // 0x200164: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200160) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x200168u;
    // 0x200168: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x20016c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x200170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x200174: 0xc08018e  jal         func_200638
    ctx->pc = 0x200174u;
    SET_GPR_U32(ctx, 31, 0x20017Cu);
    ctx->pc = 0x200178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200174u;
    // 0x200178: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200638u, 0x200174u, 0x20017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20017Cu;
label_20017c:
    // 0x20017c: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x20017cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x200180: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x200180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x200184: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x200184u;
    {
        const bool branch_taken_0x200184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200184u;
        // 0x200188: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200184) {
            ctx->pc = 0x2002F8u;
            goto label_2002f8;
        }
    }
    ctx->pc = 0x20018Cu;
    // 0x20018c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20018Cu;
    SET_GPR_U32(ctx, 31, 0x200194u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20018Cu, 0x200194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200194u;
label_200194:
    // 0x200194: 0x82630038  lb          $v1, 0x38($s3)
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x200198: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200198u;
    {
        const bool branch_taken_0x200198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200198u;
        // 0x20019c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200198) {
            ctx->pc = 0x2001B4u;
            goto label_2001b4;
        }
    }
    ctx->pc = 0x2001A0u;
    // 0x2001a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2001a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2001a4: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2001A4u;
    {
        const bool branch_taken_0x2001a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2001A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001A4u;
        // 0x2001a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001a4) {
            ctx->pc = 0x2002BCu;
            goto label_2002bc;
        }
    }
    ctx->pc = 0x2001ACu;
    // 0x2001ac: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2001ACu;
    {
        const bool branch_taken_0x2001ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001ACu;
        // 0x2001b0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001ac) {
            ctx->pc = 0x2004A8u;
            goto label_2004a8;
        }
    }
    ctx->pc = 0x2001B4u;
label_2001b4:
    // 0x2001b4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2001b8: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x2001b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2001bc: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x2001bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2001c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2001c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001c4: 0xc66e000c  lwc1        $f14, 0xC($s3)
    ctx->pc = 0x2001c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2001c8: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x2001c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2001cc: 0xc66f0010  lwc1        $f15, 0x10($s3)
    ctx->pc = 0x2001ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2001d0: 0xc0b1110  jal         func_2C4440
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x2001D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001D0u;
    // 0x2001d4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4440u, 0x2001D0u, 0x2001D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001D8u;
label_2001d8:
    // 0x2001d8: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2001d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2001dc: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x2001DCu;
    SET_GPR_U32(ctx, 31, 0x2001E4u);
    ctx->pc = 0x2001E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001DCu;
    // 0x2001e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x2001DCu, 0x2001E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001E4u;
label_2001e4:
    // 0x2001e4: 0x92470140  lbu         $a3, 0x140($s2)
    ctx->pc = 0x2001e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2001e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2001e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2001ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001f0: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x2001F0u;
    SET_GPR_U32(ctx, 31, 0x2001F8u);
    ctx->pc = 0x2001F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001F0u;
    // 0x2001f4: 0x26460100  addiu       $a2, $s2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x2001F0u, 0x2001F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001F8u;
label_2001f8:
    // 0x2001f8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2001F8u;
    SET_GPR_U32(ctx, 31, 0x200200u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2001F8u, 0x200200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200200u;
label_200200:
    // 0x200200: 0xc04b106  jal         func_12C418
    ctx->pc = 0x200200u;
    SET_GPR_U32(ctx, 31, 0x200208u);
    ctx->pc = 0x200204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200200u;
    // 0x200204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x200200u, 0x200208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200208u;
label_200208:
    // 0x200208: 0xc0b0ff0  jal         func_2C3FC0
    ctx->pc = 0x200208u;
    SET_GPR_U32(ctx, 31, 0x200210u);
    ctx->pc = 0x20020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200208u;
    // 0x20020c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC0u, 0x200208u, 0x200210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200210u;
label_200210:
    // 0x200210: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x200210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x200214: 0x2683fa28  addiu       $v1, $s4, -0x5D8
    ctx->pc = 0x200214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965800));
    // 0x200218: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x200218u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20021c: 0x906505b9  lbu         $a1, 0x5B9($v1)
    ctx->pc = 0x20021cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1465)));
    // 0x200220: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x200224: 0xa06505bb  sb          $a1, 0x5BB($v1)
    ctx->pc = 0x200224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1467), (uint8_t)GPR_U32(ctx, 5));
    // 0x200228: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x200228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x20022c: 0xa06205b9  sb          $v0, 0x5B9($v1)
    ctx->pc = 0x20022cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1465), (uint8_t)GPR_U32(ctx, 2));
    // 0x200230: 0xc0b1378  jal         func_2C4DE0
    ctx->pc = 0x200230u;
    SET_GPR_U32(ctx, 31, 0x200238u);
    ctx->pc = 0x200234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200230u;
    // 0x200234: 0xa06205ba  sb          $v0, 0x5BA($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1466), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DE0u, 0x200230u, 0x200238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200238u;
label_200238:
    // 0x200238: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x200238u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x20023c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x20023Cu;
    {
        const bool branch_taken_0x20023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20023c) {
            ctx->pc = 0x200240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20023Cu;
            // 0x200240: 0x92620038  lbu         $v0, 0x38($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2002B0u;
            goto label_2002b0;
        }
    }
    ctx->pc = 0x200244u;
    // 0x200244: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x200248: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x200248u;
    {
        const bool branch_taken_0x200248 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x20024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200248u;
        // 0x20024c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200248) {
            ctx->pc = 0x2002ACu;
            goto label_2002ac;
        }
    }
    ctx->pc = 0x200250u;
    // 0x200250: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x200250u;
    {
        const bool branch_taken_0x200250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200250u;
        // 0x200254: 0x3c0900a0  lui         $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200250) {
            ctx->pc = 0x200284u;
            goto label_200284;
        }
    }
    ctx->pc = 0x200258u;
    // 0x200258: 0x3c0880a0  lui         $t0, 0x80A0
    ctx->pc = 0x200258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32928 << 16));
    // 0x20025c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200264: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x200264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x200268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20026c: 0x3508a0a0  ori         $t0, $t0, 0xA0A0
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41120);
    // 0x200270: 0x3529a0a0  ori         $t1, $t1, 0xA0A0
    ctx->pc = 0x200270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)41120);
    // 0x200274: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x200274u;
    SET_GPR_U32(ctx, 31, 0x20027Cu);
    ctx->pc = 0x200278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200274u;
    // 0x200278: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x200274u, 0x20027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20027Cu;
label_20027c:
    // 0x20027c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20027Cu;
    {
        const bool branch_taken_0x20027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20027Cu;
        // 0x200280: 0x92620038  lbu         $v0, 0x38($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20027c) {
            ctx->pc = 0x2002B0u;
            goto label_2002b0;
        }
    }
    ctx->pc = 0x200284u;
label_200284:
    // 0x200284: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x200284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x200288: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200288u;
    {
        const bool branch_taken_0x200288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200288u;
        // 0x20028c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200288) {
            ctx->pc = 0x2002ACu;
            goto label_2002ac;
        }
    }
    ctx->pc = 0x200290u;
    // 0x200290: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200294: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x200294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x200298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20029c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x2002a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002a4: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x2002A4u;
    SET_GPR_U32(ctx, 31, 0x2002ACu);
    ctx->pc = 0x2002A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002A4u;
    // 0x2002a8: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x2002A4u, 0x2002ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002ACu;
label_2002ac:
    // 0x2002ac: 0x92620038  lbu         $v0, 0x38($s3)
    ctx->pc = 0x2002acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_2002b0:
    // 0x2002b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2002b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2002b4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2002B4u;
    {
        const bool branch_taken_0x2002b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002B4u;
        // 0x2002b8: 0xa2620038  sb          $v0, 0x38($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002b4) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x2002BCu;
label_2002bc:
    // 0x2002bc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2002c0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x2002c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2002c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2002c8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2002cc: 0x8c862f84  lw          $a2, 0x2F84($a0)
    ctx->pc = 0x2002ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2002d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2002d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2002d4: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x2002d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x2002d8: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2002d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2002dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2002dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2002e0: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x2002e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2002e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2002e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2002e8: 0xc080196  jal         func_200658
    ctx->pc = 0x2002E8u;
    SET_GPR_U32(ctx, 31, 0x2002F0u);
    ctx->pc = 0x2002ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002E8u;
    // 0x2002ec: 0xacc20048  sw          $v0, 0x48($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200658u, 0x2002E8u, 0x2002F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002F0u;
label_2002f0:
    // 0x2002f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2002F0u;
    {
        const bool branch_taken_0x2002f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F0u;
        // 0x2002f4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002f0) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x2002F8u;
label_2002f8:
    // 0x2002f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2002f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2002fc: 0xa064ac90  sb          $a0, -0x5370($v1)
    ctx->pc = 0x2002fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294945936), (uint8_t)GPR_U32(ctx, 4));
    // 0x200300: 0x2462ac90  addiu       $v0, $v1, -0x5370
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
    // 0x200304: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x200304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x200308: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x200308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20030c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20030cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x200310: 0xc0801ac  jal         func_2006B0
    ctx->pc = 0x200310u;
    SET_GPR_U32(ctx, 31, 0x200318u);
    ctx->pc = 0x200314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200310u;
    // 0x200314: 0x96640014  lhu         $a0, 0x14($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006B0u, 0x200310u, 0x200318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200318u;
label_200318:
    // 0x200318: 0x2683fa28  addiu       $v1, $s4, -0x5D8
    ctx->pc = 0x200318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965800));
    // 0x20031c: 0x2689ffe8  addiu       $t1, $s4, -0x18
    ctx->pc = 0x20031cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x200320: 0xa46205b4  sh          $v0, 0x5B4($v1)
    ctx->pc = 0x200320u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1460), (uint16_t)GPR_U32(ctx, 2));
    // 0x200324: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
    // 0x200328: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x20032c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x20032cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x200330: 0x92660017  lbu         $a2, 0x17($s3)
    ctx->pc = 0x200330u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x200334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x200334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x200338: 0x8e057a78  lw          $a1, 0x7A78($s0)
    ctx->pc = 0x200338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31352)));
    // 0x20033c: 0x24080500  addiu       $t0, $zero, 0x500
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x200340: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200344: 0xa06605b8  sb          $a2, 0x5B8($v1)
    ctx->pc = 0x200344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1464), (uint8_t)GPR_U32(ctx, 6));
    // 0x200348: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x200348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x20034c: 0x8c6605e0  lw          $a2, 0x5E0($v1)
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1504)));
    // 0x200350: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x200350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x200354: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x200354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200358: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x200358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x20035c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x20035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200360: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x200360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x200364: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x200364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200368: 0xe46105c0  swc1        $f1, 0x5C0($v1)
    ctx->pc = 0x200368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1472), bits); }
    // 0x20036c: 0x946a05b4  lhu         $t2, 0x5B4($v1)
    ctx->pc = 0x20036cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1460)));
    // 0x200370: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x200370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x200374: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x200374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x200378: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x200378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20037c: 0xe46005d0  swc1        $f0, 0x5D0($v1)
    ctx->pc = 0x20037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1488), bits); }
    // 0x200380: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x200380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x200384: 0xae87000c  sw          $a3, 0xC($s4)
    ctx->pc = 0x200384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 7));
    // 0x200388: 0xae057a78  sw          $a1, 0x7A78($s0)
    ctx->pc = 0x200388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31352), GPR_U32(ctx, 5));
    // 0x20038c: 0xa06205ba  sb          $v0, 0x5BA($v1)
    ctx->pc = 0x20038cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1466), (uint8_t)GPR_U32(ctx, 2));
    // 0x200390: 0x11480021  beq         $t2, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x200390u;
    {
        const bool branch_taken_0x200390 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x200394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200390u;
        // 0x200394: 0xac6605e0  sw          $a2, 0x5E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1504), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200390) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x200398u;
    // 0x200398: 0x29420501  slti        $v0, $t2, 0x501
    ctx->pc = 0x200398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)1281) ? 1 : 0);
    // 0x20039c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20039Cu;
    {
        const bool branch_taken_0x20039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20039Cu;
        // 0x2003a0: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20039c) {
            ctx->pc = 0x2003E0u;
            goto label_2003e0;
        }
    }
    ctx->pc = 0x2003A4u;
    // 0x2003a4: 0x1142001c  beq         $t2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2003A4u;
    {
        const bool branch_taken_0x2003a4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003A4u;
        // 0x2003a8: 0x29420201  slti        $v0, $t2, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003a4) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003ACu;
    // 0x2003ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2003ACu;
    {
        const bool branch_taken_0x2003ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003ACu;
        // 0x2003b0: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003ac) {
            ctx->pc = 0x2003C4u;
            goto label_2003c4;
        }
    }
    ctx->pc = 0x2003B4u;
    // 0x2003b4: 0x11420018  beq         $t2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2003B4u;
    {
        const bool branch_taken_0x2003b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003B4u;
        // 0x2003b8: 0x26237470  addiu       $v1, $s1, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003b4) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003BCu;
    // 0x2003bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2003BCu;
    {
        const bool branch_taken_0x2003bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003BCu;
        // 0x2003c0: 0x9062001c  lbu         $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003bc) {
            ctx->pc = 0x200430u;
            goto label_200430;
        }
    }
    ctx->pc = 0x2003C4u;
label_2003c4:
    // 0x2003c4: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2003c8: 0x11420013  beq         $t2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2003C8u;
    {
        const bool branch_taken_0x2003c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C8u;
        // 0x2003cc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003c8) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003D0u;
    // 0x2003d0: 0x11420011  beq         $t2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2003D0u;
    {
        const bool branch_taken_0x2003d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003D0u;
        // 0x2003d4: 0x26237470  addiu       $v1, $s1, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003d0) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003D8u;
    // 0x2003d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2003D8u;
    {
        const bool branch_taken_0x2003d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003D8u;
        // 0x2003dc: 0x9062001c  lbu         $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003d8) {
            ctx->pc = 0x200430u;
            goto label_200430;
        }
    }
    ctx->pc = 0x2003E0u;
label_2003e0:
    // 0x2003e0: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x2003e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x2003e4: 0x1142000c  beq         $t2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2003E4u;
    {
        const bool branch_taken_0x2003e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003E4u;
        // 0x2003e8: 0x29420701  slti        $v0, $t2, 0x701 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)1793) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003e4) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003ECu;
    // 0x2003ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2003ECu;
    {
        const bool branch_taken_0x2003ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003ECu;
        // 0x2003f0: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003ec) {
            ctx->pc = 0x200404u;
            goto label_200404;
        }
    }
    ctx->pc = 0x2003F4u;
    // 0x2003f4: 0x11420008  beq         $t2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2003F4u;
    {
        const bool branch_taken_0x2003f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x2003F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003F4u;
        // 0x2003f8: 0x26237470  addiu       $v1, $s1, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003f4) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x2003FCu;
    // 0x2003fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2003FCu;
    {
        const bool branch_taken_0x2003fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003FCu;
        // 0x200400: 0x9062001c  lbu         $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003fc) {
            ctx->pc = 0x200430u;
            goto label_200430;
        }
    }
    ctx->pc = 0x200404u;
label_200404:
    // 0x200404: 0x24020802  addiu       $v0, $zero, 0x802
    ctx->pc = 0x200404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x200408: 0x11420003  beq         $t2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200408u;
    {
        const bool branch_taken_0x200408 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        ctx->pc = 0x20040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200408u;
        // 0x20040c: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200408) {
            ctx->pc = 0x200418u;
            goto label_200418;
        }
    }
    ctx->pc = 0x200410u;
    // 0x200410: 0x15420006  bne         $t2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200410u;
    {
        const bool branch_taken_0x200410 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x200414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200410u;
        // 0x200414: 0x26237470  addiu       $v1, $s1, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200410) {
            ctx->pc = 0x20042Cu;
            goto label_20042c;
        }
    }
    ctx->pc = 0x200418u;
label_200418:
    // 0x200418: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x200418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20041c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200420: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x200420u;
    SET_GPR_U32(ctx, 31, 0x200428u);
    ctx->pc = 0x200424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200420u;
    // 0x200424: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D48u, 0x200420u, 0x200428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200428u;
label_200428:
    // 0x200428: 0x26237470  addiu       $v1, $s1, 0x7470
    ctx->pc = 0x200428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29808));
label_20042c:
    // 0x20042c: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x20042cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_200430:
    // 0x200430: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x200430u;
    {
        const bool branch_taken_0x200430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200430u;
        // 0x200434: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200430) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x200438u;
    // 0x200438: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x200438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x20043c: 0x4800019  bltz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20043Cu;
    {
        const bool branch_taken_0x20043c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x200440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20043Cu;
        // 0x200440: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20043c) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x200444u;
    // 0x200444: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x200444u;
    {
        const bool branch_taken_0x200444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200444u;
        // 0x200448: 0x3c0900a0  lui         $t1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200444) {
            ctx->pc = 0x200478u;
            goto label_200478;
        }
    }
    ctx->pc = 0x20044Cu;
    // 0x20044c: 0x3c0880a0  lui         $t0, 0x80A0
    ctx->pc = 0x20044cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32928 << 16));
    // 0x200450: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x200450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200458: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x200458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20045c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20045cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200460: 0x3508a0a0  ori         $t0, $t0, 0xA0A0
    ctx->pc = 0x200460u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41120);
    // 0x200464: 0x3529a0a0  ori         $t1, $t1, 0xA0A0
    ctx->pc = 0x200464u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)41120);
    // 0x200468: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x200468u;
    SET_GPR_U32(ctx, 31, 0x200470u);
    ctx->pc = 0x20046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200468u;
    // 0x20046c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x200468u, 0x200470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200470u;
label_200470:
    // 0x200470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x200470u;
    {
        const bool branch_taken_0x200470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200470u;
        // 0x200474: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200470) {
            ctx->pc = 0x2004A4u;
            goto label_2004a4;
        }
    }
    ctx->pc = 0x200478u;
label_200478:
    // 0x200478: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x200478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x20047c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20047Cu;
    {
        const bool branch_taken_0x20047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20047Cu;
        // 0x200480: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20047c) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x200484u;
    // 0x200484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200488: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20048c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20048cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200490: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x200494: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x200494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200498: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x200498u;
    SET_GPR_U32(ctx, 31, 0x2004A0u);
    ctx->pc = 0x20049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200498u;
    // 0x20049c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x200498u, 0x2004A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2004A0u;
label_2004a0:
    // 0x2004a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2004a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2004a4:
    // 0x2004a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2004a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2004a8:
    // 0x2004a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2004a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2004ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2004acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2004b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2004b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2004b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2004b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2004b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2004b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2004BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004BCu;
        // 0x2004c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004C4u;
    // 0x2004c4: 0x0  nop
    ctx->pc = 0x2004c4u;
    // NOP
    ctx->pc = 0x2004c8u;
}
