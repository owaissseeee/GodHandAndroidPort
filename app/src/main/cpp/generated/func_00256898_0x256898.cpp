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

// Function: func_00256898
// Address: 0x256898 - 0x257560
void func_00256898_0x256898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00256898_0x256898");
#endif

    switch (ctx->pc) {
        case 0x256908u: goto label_256908;
        case 0x25693cu: goto label_25693c;
        case 0x25694cu: goto label_25694c;
        case 0x25696cu: goto label_25696c;
        case 0x2569a4u: goto label_2569a4;
        case 0x256a34u: goto label_256a34;
        case 0x256a94u: goto label_256a94;
        case 0x256af4u: goto label_256af4;
        case 0x256b84u: goto label_256b84;
        case 0x256c14u: goto label_256c14;
        case 0x256c74u: goto label_256c74;
        case 0x256cccu: goto label_256ccc;
        case 0x256cf8u: goto label_256cf8;
        case 0x256d24u: goto label_256d24;
        case 0x256d48u: goto label_256d48;
        case 0x256d80u: goto label_256d80;
        case 0x256db0u: goto label_256db0;
        case 0x256ddcu: goto label_256ddc;
        case 0x256decu: goto label_256dec;
        case 0x256e4cu: goto label_256e4c;
        case 0x256eacu: goto label_256eac;
        case 0x256f3cu: goto label_256f3c;
        case 0x256fccu: goto label_256fcc;
        case 0x25705cu: goto label_25705c;
        case 0x2570e0u: goto label_2570e0;
        case 0x257104u: goto label_257104;
        case 0x257114u: goto label_257114;
        case 0x25713cu: goto label_25713c;
        case 0x257214u: goto label_257214;
        case 0x257220u: goto label_257220;
        case 0x25722cu: goto label_25722c;
        case 0x257298u: goto label_257298;
        case 0x2572a4u: goto label_2572a4;
        case 0x2572c8u: goto label_2572c8;
        case 0x257308u: goto label_257308;
        case 0x2573c8u: goto label_2573c8;
        case 0x2573ecu: goto label_2573ec;
        case 0x257448u: goto label_257448;
        case 0x2574d8u: goto label_2574d8;
        case 0x257500u: goto label_257500;
        default: break;
    }

    ctx->pc = 0x256898u;

    // 0x256898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25689c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2568a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2568a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2568a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2568a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2568a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2568a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2568ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2568acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2568b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2568b4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2568b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2568b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2568bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2568bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2568c0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2568c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2568c4: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x2568c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x2568c8: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2568c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2568cc: 0x924502f6  lbu         $a1, 0x2F6($s2)
    ctx->pc = 0x2568ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2568d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2568d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2568d4: 0x2ca30006  sltiu       $v1, $a1, 0x6
    ctx->pc = 0x2568d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2568d8: 0x10600319  beqz        $v1, . + 4 + (0x319 << 2)
    ctx->pc = 0x2568D8u;
    {
        const bool branch_taken_0x2568d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568D8u;
        // 0x2568dc: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568d8) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x2568E0u;
    // 0x2568e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2568e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2568e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2568e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2568e8: 0x24421f80  addiu       $v0, $v0, 0x1F80
    ctx->pc = 0x2568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x2568ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2568ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2568f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2568f4: 0x800008  jr          $a0
    ctx->pc = 0x2568F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2568FCu: goto label_2568fc;
            case 0x257194u: goto label_257194;
            case 0x257278u: goto label_257278;
            case 0x25732Cu: goto label_25732c;
            case 0x257450u: goto label_257450;
            case 0x257514u: goto label_257514;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2568F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2568FCu;
label_2568fc:
    // 0x2568fc: 0xae401710  sw          $zero, 0x1710($s2)
    ctx->pc = 0x2568fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
    // 0x256900: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x256900u;
    SET_GPR_U32(ctx, 31, 0x256908u);
    ctx->pc = 0x256904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256900u;
    // 0x256904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x256900u, 0x256908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256908u;
label_256908:
    // 0x256908: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x256908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x25690c: 0x3c013ea6  lui         $at, 0x3EA6
    ctx->pc = 0x25690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16038 << 16));
    // 0x256910: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x256914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256918: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x256918u;
    {
        const bool branch_taken_0x256918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256918) {
            ctx->pc = 0x25691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256918u;
            // 0x25691c: 0xe64005c4  swc1        $f0, 0x5C4($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x256934u;
            goto label_256934;
        }
    }
    ctx->pc = 0x256920u;
    // 0x256920: 0x3c013e47  lui         $at, 0x3E47
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15943 << 16));
    // 0x256924: 0x3421ae15  ori         $at, $at, 0xAE15
    ctx->pc = 0x256924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44565);
    // 0x256928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x256928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25692c: 0x0  nop
    ctx->pc = 0x25692cu;
    // NOP
    // 0x256930: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x256930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
label_256934:
    // 0x256934: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x256934u;
    SET_GPR_U32(ctx, 31, 0x25693Cu);
    ctx->pc = 0x256938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256934u;
    // 0x256938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x256934u, 0x25693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25693Cu;
label_25693c:
    // 0x25693c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25693Cu;
    {
        const bool branch_taken_0x25693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25693c) {
            ctx->pc = 0x256964u;
            goto label_256964;
        }
    }
    ctx->pc = 0x256944u;
    // 0x256944: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256944u;
    SET_GPR_U32(ctx, 31, 0x25694Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256944u, 0x25694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25694Cu;
label_25694c:
    // 0x25694c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256950u;
    {
        const bool branch_taken_0x256950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256950u;
        // 0x256954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256950) {
            ctx->pc = 0x256960u;
            goto label_256960;
        }
    }
    ctx->pc = 0x256958u;
    // 0x256958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x256958u;
    {
        const bool branch_taken_0x256958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256958u;
        // 0x25695c: 0xa24217c3  sb          $v0, 0x17C3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256958) {
            ctx->pc = 0x256964u;
            goto label_256964;
        }
    }
    ctx->pc = 0x256960u;
label_256960:
    // 0x256960: 0xa24017c3  sb          $zero, 0x17C3($s2)
    ctx->pc = 0x256960u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6083), (uint8_t)GPR_U32(ctx, 0));
label_256964:
    // 0x256964: 0xc09d91a  jal         func_276468
    ctx->pc = 0x256964u;
    SET_GPR_U32(ctx, 31, 0x25696Cu);
    ctx->pc = 0x256968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256964u;
    // 0x256968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x256964u, 0x25696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25696Cu;
label_25696c:
    // 0x25696c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x25696cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x256970: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x256974: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x256978: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x256978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x25697c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25697Cu;
    {
        const bool branch_taken_0x25697c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25697Cu;
        // 0x256980: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25697c) {
            ctx->pc = 0x25699Cu;
            goto label_25699c;
        }
    }
    ctx->pc = 0x256984u;
    // 0x256984: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256988: 0x24421fa0  addiu       $v0, $v0, 0x1FA0
    ctx->pc = 0x256988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8096));
    // 0x25698c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256990: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256994: 0x800008  jr          $a0
    ctx->pc = 0x256994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25699Cu: goto label_25699c;
            case 0x256A2Cu: goto label_256a2c;
            case 0x256A8Cu: goto label_256a8c;
            case 0x256AECu: goto label_256aec;
            case 0x256B7Cu: goto label_256b7c;
            case 0x256C0Cu: goto label_256c0c;
            case 0x256C6Cu: goto label_256c6c;
            case 0x256D2Cu: goto label_256d2c;
            case 0x256DE4u: goto label_256de4;
            case 0x256E44u: goto label_256e44;
            case 0x256EA4u: goto label_256ea4;
            case 0x256F34u: goto label_256f34;
            case 0x256FC4u: goto label_256fc4;
            case 0x257054u: goto label_257054;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256994u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25699Cu;
label_25699c:
    // 0x25699c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25699Cu;
    SET_GPR_U32(ctx, 31, 0x2569A4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25699Cu, 0x2569A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569A4u;
label_2569a4:
    // 0x2569a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2569a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2569a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2569ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2569ACu;
    {
        const bool branch_taken_0x2569ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2569ac) {
            ctx->pc = 0x2569B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2569ACu;
            // 0x2569b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569B4u;
            goto label_2569b4;
        }
    }
    ctx->pc = 0x2569B4u;
label_2569b4:
    // 0x2569b4: 0x2010  mfhi        $a0
    ctx->pc = 0x2569b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2569b8: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2569b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2569bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2569BCu;
    {
        const bool branch_taken_0x2569bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569BCu;
        // 0x2569c0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569bc) {
            ctx->pc = 0x2569DCu;
            goto label_2569dc;
        }
    }
    ctx->pc = 0x2569C4u;
    // 0x2569c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2569c8: 0x24422190  addiu       $v0, $v0, 0x2190
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8592));
    // 0x2569cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2569ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2569d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2569d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2569d4: 0x800008  jr          $a0
    ctx->pc = 0x2569D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2569DCu: goto label_2569dc;
            case 0x2569ECu: goto label_2569ec;
            case 0x2569FCu: goto label_2569fc;
            case 0x256A0Cu: goto label_256a0c;
            case 0x256A1Cu: goto label_256a1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2569D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2569DCu;
label_2569dc:
    // 0x2569dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2569dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2569e0: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x2569e4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x2569E4u;
    {
        const bool branch_taken_0x2569e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569E4u;
        // 0x2569e8: 0x8c440314  lw          $a0, 0x314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569e4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x2569ECu;
label_2569ec:
    // 0x2569ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2569f0: 0x8c430318  lw          $v1, 0x318($v0)
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
    // 0x2569f4: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x2569F4u;
    {
        const bool branch_taken_0x2569f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569F4u;
        // 0x2569f8: 0x8c44031c  lw          $a0, 0x31C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569f4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x2569FCu;
label_2569fc:
    // 0x2569fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256a00: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x256a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x256a04: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x256A04u;
    {
        const bool branch_taken_0x256a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A04u;
        // 0x256a08: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a04) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A0Cu;
label_256a0c:
    // 0x256a0c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256a10: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x256a14: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x256A14u;
    {
        const bool branch_taken_0x256a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A14u;
        // 0x256a18: 0x8c44032c  lw          $a0, 0x32C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a14) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A1Cu;
label_256a1c:
    // 0x256a1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256a20: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x256a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x256a24: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x256A24u;
    {
        const bool branch_taken_0x256a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A24u;
        // 0x256a28: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a24) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A2Cu;
label_256a2c:
    // 0x256a2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256A2Cu;
    SET_GPR_U32(ctx, 31, 0x256A34u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256A2Cu, 0x256A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A34u;
label_256a34:
    // 0x256a34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256a3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256a3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256a40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256A40u;
    {
        const bool branch_taken_0x256a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256a40) {
            ctx->pc = 0x256A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256A40u;
            // 0x256a44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A48u;
            goto label_256a48;
        }
    }
    ctx->pc = 0x256A48u;
label_256a48:
    // 0x256a48: 0x2810  mfhi        $a1
    ctx->pc = 0x256a48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256a4c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256A4Cu;
    {
        const bool branch_taken_0x256a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256a4c) {
            ctx->pc = 0x256A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256A4Cu;
            // 0x256a50: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A74u;
            goto label_256a74;
        }
    }
    ctx->pc = 0x256A54u;
    // 0x256a54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256A54u;
    {
        const bool branch_taken_0x256a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A54u;
        // 0x256a58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a54) {
            ctx->pc = 0x256A64u;
            goto label_256a64;
        }
    }
    ctx->pc = 0x256A5Cu;
    // 0x256a5c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256A5Cu;
    {
        const bool branch_taken_0x256a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256a5c) {
            ctx->pc = 0x256A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256A5Cu;
            // 0x256a60: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A80u;
            goto label_256a80;
        }
    }
    ctx->pc = 0x256A64u;
label_256a64:
    // 0x256a64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256a68: 0x8c431b68  lw          $v1, 0x1B68($v0)
    ctx->pc = 0x256a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x256a6c: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x256A6Cu;
    {
        const bool branch_taken_0x256a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A6Cu;
        // 0x256a70: 0x8c441b6c  lw          $a0, 0x1B6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a6c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A74u;
label_256a74:
    // 0x256a74: 0x8c431b70  lw          $v1, 0x1B70($v0)
    ctx->pc = 0x256a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x256a78: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x256A78u;
    {
        const bool branch_taken_0x256a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A78u;
        // 0x256a7c: 0x8c441b74  lw          $a0, 0x1B74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a78) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A80u;
label_256a80:
    // 0x256a80: 0x8c431b78  lw          $v1, 0x1B78($v0)
    ctx->pc = 0x256a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7032)));
    // 0x256a84: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x256A84u;
    {
        const bool branch_taken_0x256a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A84u;
        // 0x256a88: 0x8c441b7c  lw          $a0, 0x1B7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a84) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256A8Cu;
label_256a8c:
    // 0x256a8c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256A8Cu;
    SET_GPR_U32(ctx, 31, 0x256A94u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256A8Cu, 0x256A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A94u;
label_256a94:
    // 0x256a94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256a9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256a9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256aa0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256AA0u;
    {
        const bool branch_taken_0x256aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256aa0) {
            ctx->pc = 0x256AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256AA0u;
            // 0x256aa4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256AA8u;
            goto label_256aa8;
        }
    }
    ctx->pc = 0x256AA8u;
label_256aa8:
    // 0x256aa8: 0x2810  mfhi        $a1
    ctx->pc = 0x256aa8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256aac: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256AACu;
    {
        const bool branch_taken_0x256aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256aac) {
            ctx->pc = 0x256AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256AACu;
            // 0x256ab0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256AD4u;
            goto label_256ad4;
        }
    }
    ctx->pc = 0x256AB4u;
    // 0x256ab4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256AB4u;
    {
        const bool branch_taken_0x256ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AB4u;
        // 0x256ab8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ab4) {
            ctx->pc = 0x256AC4u;
            goto label_256ac4;
        }
    }
    ctx->pc = 0x256ABCu;
    // 0x256abc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256ABCu;
    {
        const bool branch_taken_0x256abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256abc) {
            ctx->pc = 0x256AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256ABCu;
            // 0x256ac0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256AE0u;
            goto label_256ae0;
        }
    }
    ctx->pc = 0x256AC4u;
label_256ac4:
    // 0x256ac4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256ac8: 0x8c432c04  lw          $v1, 0x2C04($v0)
    ctx->pc = 0x256ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x256acc: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x256ACCu;
    {
        const bool branch_taken_0x256acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256ACCu;
        // 0x256ad0: 0x8c442c08  lw          $a0, 0x2C08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256acc) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256AD4u;
label_256ad4:
    // 0x256ad4: 0x8c432c0c  lw          $v1, 0x2C0C($v0)
    ctx->pc = 0x256ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11276)));
    // 0x256ad8: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x256AD8u;
    {
        const bool branch_taken_0x256ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AD8u;
        // 0x256adc: 0x8c442c10  lw          $a0, 0x2C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ad8) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256AE0u;
label_256ae0:
    // 0x256ae0: 0x8c432c14  lw          $v1, 0x2C14($v0)
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11284)));
    // 0x256ae4: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x256AE4u;
    {
        const bool branch_taken_0x256ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256AE4u;
        // 0x256ae8: 0x8c442c18  lw          $a0, 0x2C18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ae4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256AECu;
label_256aec:
    // 0x256aec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256AECu;
    SET_GPR_U32(ctx, 31, 0x256AF4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256AECu, 0x256AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256AF4u;
label_256af4:
    // 0x256af4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256af8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256af8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256afc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256AFCu;
    {
        const bool branch_taken_0x256afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256afc) {
            ctx->pc = 0x256B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256AFCu;
            // 0x256b00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B04u;
            goto label_256b04;
        }
    }
    ctx->pc = 0x256B04u;
label_256b04:
    // 0x256b04: 0x2010  mfhi        $a0
    ctx->pc = 0x256b04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256b08: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x256b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x256b0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256B0Cu;
    {
        const bool branch_taken_0x256b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B0Cu;
        // 0x256b10: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b0c) {
            ctx->pc = 0x256B2Cu;
            goto label_256b2c;
        }
    }
    ctx->pc = 0x256B14u;
    // 0x256b14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256b18: 0x244221b0  addiu       $v0, $v0, 0x21B0
    ctx->pc = 0x256b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x256b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256b20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256b24: 0x800008  jr          $a0
    ctx->pc = 0x256B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256B2Cu: goto label_256b2c;
            case 0x256B3Cu: goto label_256b3c;
            case 0x256B4Cu: goto label_256b4c;
            case 0x256B5Cu: goto label_256b5c;
            case 0x256B6Cu: goto label_256b6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256B2Cu;
label_256b2c:
    // 0x256b2c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256b30: 0x8c430ed4  lw          $v1, 0xED4($v0)
    ctx->pc = 0x256b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3796)));
    // 0x256b34: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x256B34u;
    {
        const bool branch_taken_0x256b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B34u;
        // 0x256b38: 0x8c440ed8  lw          $a0, 0xED8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b34) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256B3Cu;
label_256b3c:
    // 0x256b3c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256b40: 0x8c430edc  lw          $v1, 0xEDC($v0)
    ctx->pc = 0x256b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3804)));
    // 0x256b44: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x256B44u;
    {
        const bool branch_taken_0x256b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B44u;
        // 0x256b48: 0x8c440ee0  lw          $a0, 0xEE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b44) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256B4Cu;
label_256b4c:
    // 0x256b4c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256b50: 0x8c430ee4  lw          $v1, 0xEE4($v0)
    ctx->pc = 0x256b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3812)));
    // 0x256b54: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x256B54u;
    {
        const bool branch_taken_0x256b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B54u;
        // 0x256b58: 0x8c440ee8  lw          $a0, 0xEE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b54) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256B5Cu;
label_256b5c:
    // 0x256b5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256b60: 0x8c430eec  lw          $v1, 0xEEC($v0)
    ctx->pc = 0x256b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3820)));
    // 0x256b64: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x256B64u;
    {
        const bool branch_taken_0x256b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B64u;
        // 0x256b68: 0x8c440ef0  lw          $a0, 0xEF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b64) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256B6Cu;
label_256b6c:
    // 0x256b6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256b70: 0x8c430ef4  lw          $v1, 0xEF4($v0)
    ctx->pc = 0x256b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3828)));
    // 0x256b74: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x256B74u;
    {
        const bool branch_taken_0x256b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B74u;
        // 0x256b78: 0x8c440ef8  lw          $a0, 0xEF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b74) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256B7Cu;
label_256b7c:
    // 0x256b7c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256B7Cu;
    SET_GPR_U32(ctx, 31, 0x256B84u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256B7Cu, 0x256B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256B84u;
label_256b84:
    // 0x256b84: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256b88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256b88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256b8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256B8Cu;
    {
        const bool branch_taken_0x256b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256b8c) {
            ctx->pc = 0x256B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256B8Cu;
            // 0x256b90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256B94u;
            goto label_256b94;
        }
    }
    ctx->pc = 0x256B94u;
label_256b94:
    // 0x256b94: 0x2010  mfhi        $a0
    ctx->pc = 0x256b94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256b98: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x256b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x256b9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256B9Cu;
    {
        const bool branch_taken_0x256b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B9Cu;
        // 0x256ba0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256b9c) {
            ctx->pc = 0x256BBCu;
            goto label_256bbc;
        }
    }
    ctx->pc = 0x256BA4u;
    // 0x256ba4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256ba8: 0x244221d0  addiu       $v0, $v0, 0x21D0
    ctx->pc = 0x256ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8656));
    // 0x256bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256bb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256bb4: 0x800008  jr          $a0
    ctx->pc = 0x256BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256BBCu: goto label_256bbc;
            case 0x256BCCu: goto label_256bcc;
            case 0x256BDCu: goto label_256bdc;
            case 0x256BECu: goto label_256bec;
            case 0x256BFCu: goto label_256bfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256BB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256BBCu;
label_256bbc:
    // 0x256bbc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256bc0: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x256bc4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x256BC4u;
    {
        const bool branch_taken_0x256bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BC4u;
        // 0x256bc8: 0x8c440a98  lw          $a0, 0xA98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bc4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256BCCu;
label_256bcc:
    // 0x256bcc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256bd0: 0x8c430a9c  lw          $v1, 0xA9C($v0)
    ctx->pc = 0x256bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x256bd4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x256BD4u;
    {
        const bool branch_taken_0x256bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BD4u;
        // 0x256bd8: 0x8c440aa0  lw          $a0, 0xAA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bd4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256BDCu;
label_256bdc:
    // 0x256bdc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256be0: 0x8c430aa4  lw          $v1, 0xAA4($v0)
    ctx->pc = 0x256be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2724)));
    // 0x256be4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x256BE4u;
    {
        const bool branch_taken_0x256be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BE4u;
        // 0x256be8: 0x8c440aa8  lw          $a0, 0xAA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256be4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256BECu;
label_256bec:
    // 0x256bec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256bf0: 0x8c430aac  lw          $v1, 0xAAC($v0)
    ctx->pc = 0x256bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2732)));
    // 0x256bf4: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x256BF4u;
    {
        const bool branch_taken_0x256bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256BF4u;
        // 0x256bf8: 0x8c440ab0  lw          $a0, 0xAB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bf4) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256BFCu;
label_256bfc:
    // 0x256bfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256c00: 0x8c430ab4  lw          $v1, 0xAB4($v0)
    ctx->pc = 0x256c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2740)));
    // 0x256c04: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x256C04u;
    {
        const bool branch_taken_0x256c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C04u;
        // 0x256c08: 0x8c440ab8  lw          $a0, 0xAB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c04) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256C0Cu;
label_256c0c:
    // 0x256c0c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256C0Cu;
    SET_GPR_U32(ctx, 31, 0x256C14u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256C0Cu, 0x256C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C14u;
label_256c14:
    // 0x256c14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256c18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256c1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256c1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256c20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256C20u;
    {
        const bool branch_taken_0x256c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c20) {
            ctx->pc = 0x256C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C20u;
            // 0x256c24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C28u;
            goto label_256c28;
        }
    }
    ctx->pc = 0x256C28u;
label_256c28:
    // 0x256c28: 0x2810  mfhi        $a1
    ctx->pc = 0x256c28u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256c2c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256C2Cu;
    {
        const bool branch_taken_0x256c2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256c2c) {
            ctx->pc = 0x256C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C2Cu;
            // 0x256c30: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C54u;
            goto label_256c54;
        }
    }
    ctx->pc = 0x256C34u;
    // 0x256c34: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256C34u;
    {
        const bool branch_taken_0x256c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C34u;
        // 0x256c38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c34) {
            ctx->pc = 0x256C44u;
            goto label_256c44;
        }
    }
    ctx->pc = 0x256C3Cu;
    // 0x256c3c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256C3Cu;
    {
        const bool branch_taken_0x256c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256c3c) {
            ctx->pc = 0x256C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C3Cu;
            // 0x256c40: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C60u;
            goto label_256c60;
        }
    }
    ctx->pc = 0x256C44u;
label_256c44:
    // 0x256c44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256c48: 0x8c43318c  lw          $v1, 0x318C($v0)
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12684)));
    // 0x256c4c: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x256C4Cu;
    {
        const bool branch_taken_0x256c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C4Cu;
        // 0x256c50: 0x8c443190  lw          $a0, 0x3190($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c4c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256C54u;
label_256c54:
    // 0x256c54: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x256c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x256c58: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x256C58u;
    {
        const bool branch_taken_0x256c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C58u;
        // 0x256c5c: 0x8c443198  lw          $a0, 0x3198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c58) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256C60u;
label_256c60:
    // 0x256c60: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x256c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x256c64: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x256C64u;
    {
        const bool branch_taken_0x256c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C64u;
        // 0x256c68: 0x8c4431a0  lw          $a0, 0x31A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c64) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256C6Cu;
label_256c6c:
    // 0x256c6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256C6Cu;
    SET_GPR_U32(ctx, 31, 0x256C74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256C6Cu, 0x256C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C74u;
label_256c74:
    // 0x256c74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256c7c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256c7cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256c80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256C80u;
    {
        const bool branch_taken_0x256c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c80) {
            ctx->pc = 0x256C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C80u;
            // 0x256c84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C88u;
            goto label_256c88;
        }
    }
    ctx->pc = 0x256C88u;
label_256c88:
    // 0x256c88: 0x2810  mfhi        $a1
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256c8c: 0x50a40011  beql        $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x256C8Cu;
    {
        const bool branch_taken_0x256c8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256c8c) {
            ctx->pc = 0x256C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C8Cu;
            // 0x256c90: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256CD4u;
            goto label_256cd4;
        }
    }
    ctx->pc = 0x256C94u;
    // 0x256c94: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256C94u;
    {
        const bool branch_taken_0x256c94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C94u;
        // 0x256c98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c94) {
            ctx->pc = 0x256CA4u;
            goto label_256ca4;
        }
    }
    ctx->pc = 0x256C9Cu;
    // 0x256c9c: 0x50a20018  beql        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x256C9Cu;
    {
        const bool branch_taken_0x256c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256c9c) {
            ctx->pc = 0x256CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C9Cu;
            // 0x256ca0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256D00u;
            goto label_256d00;
        }
    }
    ctx->pc = 0x256CA4u;
label_256ca4:
    // 0x256ca4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256ca8: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x256ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x256cac: 0x8c433368  lw          $v1, 0x3368($v0)
    ctx->pc = 0x256cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13160)));
    // 0x256cb0: 0x8c44336c  lw          $a0, 0x336C($v0)
    ctx->pc = 0x256cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13164)));
    // 0x256cb4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x256cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256cb8: 0x10e000ff  beqz        $a3, . + 4 + (0xFF << 2)
    ctx->pc = 0x256CB8u;
    {
        const bool branch_taken_0x256cb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB8u;
        // 0x256cbc: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cb8) {
            ctx->pc = 0x2570B8u;
            goto label_2570b8;
        }
    }
    ctx->pc = 0x256CC0u;
    // 0x256cc0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x256cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256cc4: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x256CC4u;
    SET_GPR_U32(ctx, 31, 0x256CCCu);
    ctx->pc = 0x256CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CC4u;
    // 0x256cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x256CC4u, 0x256CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CCCu;
label_256ccc:
    // 0x256ccc: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x256CCCu;
    {
        const bool branch_taken_0x256ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CCCu;
        // 0x256cd0: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ccc) {
            ctx->pc = 0x2570BCu;
            goto label_2570bc;
        }
    }
    ctx->pc = 0x256CD4u;
label_256cd4:
    // 0x256cd4: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x256cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x256cd8: 0x8c433370  lw          $v1, 0x3370($v0)
    ctx->pc = 0x256cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13168)));
    // 0x256cdc: 0x8c443374  lw          $a0, 0x3374($v0)
    ctx->pc = 0x256cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13172)));
    // 0x256ce0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x256ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256ce4: 0x10e000f4  beqz        $a3, . + 4 + (0xF4 << 2)
    ctx->pc = 0x256CE4u;
    {
        const bool branch_taken_0x256ce4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CE4u;
        // 0x256ce8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ce4) {
            ctx->pc = 0x2570B8u;
            goto label_2570b8;
        }
    }
    ctx->pc = 0x256CECu;
    // 0x256cec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x256cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256cf0: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x256CF0u;
    SET_GPR_U32(ctx, 31, 0x256CF8u);
    ctx->pc = 0x256CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CF0u;
    // 0x256cf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x256CF0u, 0x256CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CF8u;
label_256cf8:
    // 0x256cf8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x256CF8u;
    {
        const bool branch_taken_0x256cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CF8u;
        // 0x256cfc: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cf8) {
            ctx->pc = 0x2570BCu;
            goto label_2570bc;
        }
    }
    ctx->pc = 0x256D00u;
label_256d00:
    // 0x256d00: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x256d04: 0x8c433378  lw          $v1, 0x3378($v0)
    ctx->pc = 0x256d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13176)));
    // 0x256d08: 0x8c44337c  lw          $a0, 0x337C($v0)
    ctx->pc = 0x256d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13180)));
    // 0x256d0c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x256d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256d10: 0x10e000e9  beqz        $a3, . + 4 + (0xE9 << 2)
    ctx->pc = 0x256D10u;
    {
        const bool branch_taken_0x256d10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D10u;
        // 0x256d14: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d10) {
            ctx->pc = 0x2570B8u;
            goto label_2570b8;
        }
    }
    ctx->pc = 0x256D18u;
    // 0x256d18: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x256d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256d1c: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x256D1Cu;
    SET_GPR_U32(ctx, 31, 0x256D24u);
    ctx->pc = 0x256D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D1Cu;
    // 0x256d20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x256D1Cu, 0x256D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D24u;
label_256d24:
    // 0x256d24: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x256D24u;
    {
        const bool branch_taken_0x256d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D24u;
        // 0x256d28: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d24) {
            ctx->pc = 0x2570BCu;
            goto label_2570bc;
        }
    }
    ctx->pc = 0x256D2Cu;
label_256d2c:
    // 0x256d2c: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x256d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x256d30: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x256d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x256d34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256d38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x256D38u;
    {
        const bool branch_taken_0x256d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d38) {
            ctx->pc = 0x256D78u;
            goto label_256d78;
        }
    }
    ctx->pc = 0x256D40u;
    // 0x256d40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256D40u;
    SET_GPR_U32(ctx, 31, 0x256D48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256D40u, 0x256D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D48u;
label_256d48:
    // 0x256d48: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x256d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256d4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256D4Cu;
    {
        const bool branch_taken_0x256d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D4Cu;
        // 0x256d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d4c) {
            ctx->pc = 0x256D5Cu;
            goto label_256d5c;
        }
    }
    ctx->pc = 0x256D54u;
    // 0x256d54: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256D54u;
    {
        const bool branch_taken_0x256d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x256d54) {
            ctx->pc = 0x256D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D54u;
            // 0x256d58: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256D6Cu;
            goto label_256d6c;
        }
    }
    ctx->pc = 0x256D5Cu;
label_256d5c:
    // 0x256d5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256d60: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x256d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x256d64: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x256D64u;
    {
        const bool branch_taken_0x256d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D64u;
        // 0x256d68: 0x8c443794  lw          $a0, 0x3794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d64) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256D6Cu;
label_256d6c:
    // 0x256d6c: 0x8c433798  lw          $v1, 0x3798($v0)
    ctx->pc = 0x256d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14232)));
    // 0x256d70: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x256D70u;
    {
        const bool branch_taken_0x256d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D70u;
        // 0x256d74: 0x8c44379c  lw          $a0, 0x379C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d70) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256D78u;
label_256d78:
    // 0x256d78: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256D78u;
    SET_GPR_U32(ctx, 31, 0x256D80u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256D78u, 0x256D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D80u;
label_256d80:
    // 0x256d80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x256d84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x256D84u;
    {
        const bool branch_taken_0x256d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D84u;
        // 0x256d88: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d84) {
            ctx->pc = 0x256DB8u;
            goto label_256db8;
        }
    }
    ctx->pc = 0x256D8Cu;
    // 0x256d8c: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x256d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x256d90: 0x8c433780  lw          $v1, 0x3780($v0)
    ctx->pc = 0x256d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14208)));
    // 0x256d94: 0x8c443784  lw          $a0, 0x3784($v0)
    ctx->pc = 0x256d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14212)));
    // 0x256d98: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256d9c: 0x10e000c6  beqz        $a3, . + 4 + (0xC6 << 2)
    ctx->pc = 0x256D9Cu;
    {
        const bool branch_taken_0x256d9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D9Cu;
        // 0x256da0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d9c) {
            ctx->pc = 0x2570B8u;
            goto label_2570b8;
        }
    }
    ctx->pc = 0x256DA4u;
    // 0x256da4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256da8: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x256DA8u;
    SET_GPR_U32(ctx, 31, 0x256DB0u);
    ctx->pc = 0x256DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DA8u;
    // 0x256dac: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x256DA8u, 0x256DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DB0u;
label_256db0:
    // 0x256db0: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x256DB0u;
    {
        const bool branch_taken_0x256db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DB0u;
        // 0x256db4: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256db0) {
            ctx->pc = 0x2570BCu;
            goto label_2570bc;
        }
    }
    ctx->pc = 0x256DB8u;
label_256db8:
    // 0x256db8: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x256db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x256dbc: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x256dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x256dc0: 0x8c44378c  lw          $a0, 0x378C($v0)
    ctx->pc = 0x256dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14220)));
    // 0x256dc4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x256dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256dc8: 0x10e000bb  beqz        $a3, . + 4 + (0xBB << 2)
    ctx->pc = 0x256DC8u;
    {
        const bool branch_taken_0x256dc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DC8u;
        // 0x256dcc: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256dc8) {
            ctx->pc = 0x2570B8u;
            goto label_2570b8;
        }
    }
    ctx->pc = 0x256DD0u;
    // 0x256dd0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x256dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dd4: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x256DD4u;
    SET_GPR_U32(ctx, 31, 0x256DDCu);
    ctx->pc = 0x256DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DD4u;
    // 0x256dd8: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x256DD4u, 0x256DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DDCu;
label_256ddc:
    // 0x256ddc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x256DDCu;
    {
        const bool branch_taken_0x256ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256DDCu;
        // 0x256de0: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ddc) {
            ctx->pc = 0x2570BCu;
            goto label_2570bc;
        }
    }
    ctx->pc = 0x256DE4u;
label_256de4:
    // 0x256de4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256DE4u;
    SET_GPR_U32(ctx, 31, 0x256DECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256DE4u, 0x256DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DECu;
label_256dec:
    // 0x256dec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256df4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256df4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256df8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256DF8u;
    {
        const bool branch_taken_0x256df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256df8) {
            ctx->pc = 0x256DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256DF8u;
            // 0x256dfc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E00u;
            goto label_256e00;
        }
    }
    ctx->pc = 0x256E00u;
label_256e00:
    // 0x256e00: 0x2810  mfhi        $a1
    ctx->pc = 0x256e00u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256e04: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256E04u;
    {
        const bool branch_taken_0x256e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256e04) {
            ctx->pc = 0x256E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E04u;
            // 0x256e08: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E2Cu;
            goto label_256e2c;
        }
    }
    ctx->pc = 0x256E0Cu;
    // 0x256e0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E0Cu;
    {
        const bool branch_taken_0x256e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E0Cu;
        // 0x256e10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e0c) {
            ctx->pc = 0x256E1Cu;
            goto label_256e1c;
        }
    }
    ctx->pc = 0x256E14u;
    // 0x256e14: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256E14u;
    {
        const bool branch_taken_0x256e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256e14) {
            ctx->pc = 0x256E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E14u;
            // 0x256e18: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E38u;
            goto label_256e38;
        }
    }
    ctx->pc = 0x256E1Cu;
label_256e1c:
    // 0x256e1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256e20: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x256e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x256e24: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x256E24u;
    {
        const bool branch_taken_0x256e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E24u;
        // 0x256e28: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e24) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256E2Cu;
label_256e2c:
    // 0x256e2c: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x256e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x256e30: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x256E30u;
    {
        const bool branch_taken_0x256e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E30u;
        // 0x256e34: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e30) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256E38u;
label_256e38:
    // 0x256e38: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x256e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x256e3c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x256E3Cu;
    {
        const bool branch_taken_0x256e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E3Cu;
        // 0x256e40: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e3c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256E44u;
label_256e44:
    // 0x256e44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256E44u;
    SET_GPR_U32(ctx, 31, 0x256E4Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256E44u, 0x256E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256E4Cu;
label_256e4c:
    // 0x256e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x256e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x256e50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x256e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x256e54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256e54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256e58: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256E58u;
    {
        const bool branch_taken_0x256e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256e58) {
            ctx->pc = 0x256E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E58u;
            // 0x256e5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E60u;
            goto label_256e60;
        }
    }
    ctx->pc = 0x256E60u;
label_256e60:
    // 0x256e60: 0x2810  mfhi        $a1
    ctx->pc = 0x256e60u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x256e64: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256E64u;
    {
        const bool branch_taken_0x256e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x256e64) {
            ctx->pc = 0x256E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E64u;
            // 0x256e68: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E8Cu;
            goto label_256e8c;
        }
    }
    ctx->pc = 0x256E6Cu;
    // 0x256e6c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x256E6Cu;
    {
        const bool branch_taken_0x256e6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E6Cu;
        // 0x256e70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e6c) {
            ctx->pc = 0x256E7Cu;
            goto label_256e7c;
        }
    }
    ctx->pc = 0x256E74u;
    // 0x256e74: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256E74u;
    {
        const bool branch_taken_0x256e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x256e74) {
            ctx->pc = 0x256E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256E74u;
            // 0x256e78: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256E98u;
            goto label_256e98;
        }
    }
    ctx->pc = 0x256E7Cu;
label_256e7c:
    // 0x256e7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256e80: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x256e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x256e84: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x256E84u;
    {
        const bool branch_taken_0x256e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E84u;
        // 0x256e88: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e84) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256E8Cu;
label_256e8c:
    // 0x256e8c: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x256e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x256e90: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x256E90u;
    {
        const bool branch_taken_0x256e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E90u;
        // 0x256e94: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e90) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256E98u;
label_256e98:
    // 0x256e98: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x256e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x256e9c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x256E9Cu;
    {
        const bool branch_taken_0x256e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E9Cu;
        // 0x256ea0: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256e9c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256EA4u;
label_256ea4:
    // 0x256ea4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256EA4u;
    SET_GPR_U32(ctx, 31, 0x256EACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256EA4u, 0x256EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256EACu;
label_256eac:
    // 0x256eac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256eb0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256eb0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256eb4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256EB4u;
    {
        const bool branch_taken_0x256eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256eb4) {
            ctx->pc = 0x256EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256EB4u;
            // 0x256eb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256EBCu;
            goto label_256ebc;
        }
    }
    ctx->pc = 0x256EBCu;
label_256ebc:
    // 0x256ebc: 0x2010  mfhi        $a0
    ctx->pc = 0x256ebcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256ec0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x256ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x256ec4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256EC4u;
    {
        const bool branch_taken_0x256ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EC4u;
        // 0x256ec8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ec4) {
            ctx->pc = 0x256EE4u;
            goto label_256ee4;
        }
    }
    ctx->pc = 0x256ECCu;
    // 0x256ecc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256ed0: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x256ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x256ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256ed8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256edc: 0x800008  jr          $a0
    ctx->pc = 0x256EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256EE4u: goto label_256ee4;
            case 0x256EF4u: goto label_256ef4;
            case 0x256F04u: goto label_256f04;
            case 0x256F14u: goto label_256f14;
            case 0x256F24u: goto label_256f24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256EE4u;
label_256ee4:
    // 0x256ee4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256ee8: 0x8c431d18  lw          $v1, 0x1D18($v0)
    ctx->pc = 0x256ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7448)));
    // 0x256eec: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x256EECu;
    {
        const bool branch_taken_0x256eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EECu;
        // 0x256ef0: 0x8c441d1c  lw          $a0, 0x1D1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256eec) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256EF4u;
label_256ef4:
    // 0x256ef4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256ef8: 0x8c431d20  lw          $v1, 0x1D20($v0)
    ctx->pc = 0x256ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7456)));
    // 0x256efc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x256EFCu;
    {
        const bool branch_taken_0x256efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256EFCu;
        // 0x256f00: 0x8c441d24  lw          $a0, 0x1D24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256efc) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F04u;
label_256f04:
    // 0x256f04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f08: 0x8c431d28  lw          $v1, 0x1D28($v0)
    ctx->pc = 0x256f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7464)));
    // 0x256f0c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x256F0Cu;
    {
        const bool branch_taken_0x256f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F0Cu;
        // 0x256f10: 0x8c441d2c  lw          $a0, 0x1D2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f0c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F14u;
label_256f14:
    // 0x256f14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f18: 0x8c431d30  lw          $v1, 0x1D30($v0)
    ctx->pc = 0x256f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7472)));
    // 0x256f1c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x256F1Cu;
    {
        const bool branch_taken_0x256f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F1Cu;
        // 0x256f20: 0x8c441d34  lw          $a0, 0x1D34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f1c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F24u;
label_256f24:
    // 0x256f24: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f28: 0x8c431d38  lw          $v1, 0x1D38($v0)
    ctx->pc = 0x256f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7480)));
    // 0x256f2c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x256F2Cu;
    {
        const bool branch_taken_0x256f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F2Cu;
        // 0x256f30: 0x8c441d3c  lw          $a0, 0x1D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f2c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F34u;
label_256f34:
    // 0x256f34: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256F34u;
    SET_GPR_U32(ctx, 31, 0x256F3Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256F34u, 0x256F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256F3Cu;
label_256f3c:
    // 0x256f3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256f40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256f40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256f44: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256F44u;
    {
        const bool branch_taken_0x256f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256f44) {
            ctx->pc = 0x256F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256F44u;
            // 0x256f48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256F4Cu;
            goto label_256f4c;
        }
    }
    ctx->pc = 0x256F4Cu;
label_256f4c:
    // 0x256f4c: 0x2010  mfhi        $a0
    ctx->pc = 0x256f4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256f50: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x256f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x256f54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256F54u;
    {
        const bool branch_taken_0x256f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F54u;
        // 0x256f58: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f54) {
            ctx->pc = 0x256F74u;
            goto label_256f74;
        }
    }
    ctx->pc = 0x256F5Cu;
    // 0x256f5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256f60: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x256f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x256f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256f68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256f6c: 0x800008  jr          $a0
    ctx->pc = 0x256F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x256F74u: goto label_256f74;
            case 0x256F84u: goto label_256f84;
            case 0x256F94u: goto label_256f94;
            case 0x256FA4u: goto label_256fa4;
            case 0x256FB4u: goto label_256fb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256F6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x256F74u;
label_256f74:
    // 0x256f74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f78: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x256f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x256f7c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x256F7Cu;
    {
        const bool branch_taken_0x256f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F7Cu;
        // 0x256f80: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f7c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F84u;
label_256f84:
    // 0x256f84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f88: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x256f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x256f8c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x256F8Cu;
    {
        const bool branch_taken_0x256f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F8Cu;
        // 0x256f90: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f8c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256F94u;
label_256f94:
    // 0x256f94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256f98: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x256f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x256f9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x256F9Cu;
    {
        const bool branch_taken_0x256f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256F9Cu;
        // 0x256fa0: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256f9c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256FA4u;
label_256fa4:
    // 0x256fa4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256fa8: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x256fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x256fac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x256FACu;
    {
        const bool branch_taken_0x256fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FACu;
        // 0x256fb0: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fac) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256FB4u;
label_256fb4:
    // 0x256fb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x256fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x256fb8: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x256fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x256fbc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x256FBCu;
    {
        const bool branch_taken_0x256fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FBCu;
        // 0x256fc0: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fbc) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x256FC4u;
label_256fc4:
    // 0x256fc4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x256FC4u;
    SET_GPR_U32(ctx, 31, 0x256FCCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x256FC4u, 0x256FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256FCCu;
label_256fcc:
    // 0x256fcc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256fd0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x256fd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x256fd4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x256FD4u;
    {
        const bool branch_taken_0x256fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256fd4) {
            ctx->pc = 0x256FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256FD4u;
            // 0x256fd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x256FDCu;
            goto label_256fdc;
        }
    }
    ctx->pc = 0x256FDCu;
label_256fdc:
    // 0x256fdc: 0x2010  mfhi        $a0
    ctx->pc = 0x256fdcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x256fe0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x256fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x256fe4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x256FE4u;
    {
        const bool branch_taken_0x256fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256FE4u;
        // 0x256fe8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256fe4) {
            ctx->pc = 0x257004u;
            goto label_257004;
        }
    }
    ctx->pc = 0x256FECu;
    // 0x256fec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x256fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x256ff0: 0x24422230  addiu       $v0, $v0, 0x2230
    ctx->pc = 0x256ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8752));
    // 0x256ff4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x256ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x256ff8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x256ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256ffc: 0x800008  jr          $a0
    ctx->pc = 0x256FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257004u: goto label_257004;
            case 0x257014u: goto label_257014;
            case 0x257024u: goto label_257024;
            case 0x257034u: goto label_257034;
            case 0x257044u: goto label_257044;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256FFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x257004u;
label_257004:
    // 0x257004: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257008: 0x8c431300  lw          $v1, 0x1300($v0)
    ctx->pc = 0x257008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4864)));
    // 0x25700c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25700Cu;
    {
        const bool branch_taken_0x25700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25700Cu;
        // 0x257010: 0x8c441304  lw          $a0, 0x1304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25700c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257014u;
label_257014:
    // 0x257014: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257018: 0x8c431308  lw          $v1, 0x1308($v0)
    ctx->pc = 0x257018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x25701c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25701Cu;
    {
        const bool branch_taken_0x25701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25701Cu;
        // 0x257020: 0x8c44130c  lw          $a0, 0x130C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25701c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257024u;
label_257024:
    // 0x257024: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257028: 0x8c431310  lw          $v1, 0x1310($v0)
    ctx->pc = 0x257028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x25702c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25702Cu;
    {
        const bool branch_taken_0x25702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25702Cu;
        // 0x257030: 0x8c441314  lw          $a0, 0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25702c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257034u;
label_257034:
    // 0x257034: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257038: 0x8c431318  lw          $v1, 0x1318($v0)
    ctx->pc = 0x257038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x25703c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25703Cu;
    {
        const bool branch_taken_0x25703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25703Cu;
        // 0x257040: 0x8c44131c  lw          $a0, 0x131C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25703c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257044u;
label_257044:
    // 0x257044: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x257044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257048: 0x8c431320  lw          $v1, 0x1320($v0)
    ctx->pc = 0x257048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4896)));
    // 0x25704c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25704Cu;
    {
        const bool branch_taken_0x25704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25704Cu;
        // 0x257050: 0x8c441324  lw          $a0, 0x1324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25704c) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x257054u;
label_257054:
    // 0x257054: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257054u;
    SET_GPR_U32(ctx, 31, 0x25705Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257054u, 0x25705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25705Cu;
label_25705c:
    // 0x25705c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x257060: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x257060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257064: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x257064u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x257068: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257068u;
    {
        const bool branch_taken_0x257068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257068) {
            ctx->pc = 0x25706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257068u;
            // 0x25706c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x257070u;
            goto label_257070;
        }
    }
    ctx->pc = 0x257070u;
label_257070:
    // 0x257070: 0x2810  mfhi        $a1
    ctx->pc = 0x257070u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x257074: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x257074u;
    {
        const bool branch_taken_0x257074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x257074) {
            ctx->pc = 0x257078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257074u;
            // 0x257078: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25709Cu;
            goto label_25709c;
        }
    }
    ctx->pc = 0x25707Cu;
    // 0x25707c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25707Cu;
    {
        const bool branch_taken_0x25707c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x257080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25707Cu;
        // 0x257080: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25707c) {
            ctx->pc = 0x25708Cu;
            goto label_25708c;
        }
    }
    ctx->pc = 0x257084u;
    // 0x257084: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257084u;
    {
        const bool branch_taken_0x257084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x257084) {
            ctx->pc = 0x257088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257084u;
            // 0x257088: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2570A8u;
            goto label_2570a8;
        }
    }
    ctx->pc = 0x25708Cu;
label_25708c:
    // 0x25708c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x257090: 0x8c4323c0  lw          $v1, 0x23C0($v0)
    ctx->pc = 0x257090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9152)));
    // 0x257094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257094u;
    {
        const bool branch_taken_0x257094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257094u;
        // 0x257098: 0x8c4423c4  lw          $a0, 0x23C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257094) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x25709Cu;
label_25709c:
    // 0x25709c: 0x8c4323c8  lw          $v1, 0x23C8($v0)
    ctx->pc = 0x25709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9160)));
    // 0x2570a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2570A0u;
    {
        const bool branch_taken_0x2570a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570A0u;
        // 0x2570a4: 0x8c4423cc  lw          $a0, 0x23CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570a0) {
            ctx->pc = 0x2570B0u;
            goto label_2570b0;
        }
    }
    ctx->pc = 0x2570A8u;
label_2570a8:
    // 0x2570a8: 0x8c4323d0  lw          $v1, 0x23D0($v0)
    ctx->pc = 0x2570a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9168)));
    // 0x2570ac: 0x8c4423d4  lw          $a0, 0x23D4($v0)
    ctx->pc = 0x2570acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9172)));
label_2570b0:
    // 0x2570b0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2570b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2570b4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2570b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2570b8:
    // 0x2570b8: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2570b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_2570bc:
    // 0x2570bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2570BCu;
    {
        const bool branch_taken_0x2570bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570BCu;
        // 0x2570c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570bc) {
            ctx->pc = 0x2570E8u;
            goto label_2570e8;
        }
    }
    ctx->pc = 0x2570C4u;
    // 0x2570c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2570c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2570c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2570c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2570ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2570d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2570d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2570d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2570D8u;
    SET_GPR_U32(ctx, 31, 0x2570E0u);
    ctx->pc = 0x2570DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570D8u;
    // 0x2570dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2570D8u, 0x2570E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570E0u;
label_2570e0:
    // 0x2570e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2570E0u;
    {
        const bool branch_taken_0x2570e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2570E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2570E0u;
        // 0x2570e4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2570e0) {
            ctx->pc = 0x257108u;
            goto label_257108;
        }
    }
    ctx->pc = 0x2570E8u;
label_2570e8:
    // 0x2570e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2570e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2570ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2570ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570f0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2570f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2570f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570f8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2570f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2570fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2570FCu;
    SET_GPR_U32(ctx, 31, 0x257104u);
    ctx->pc = 0x257100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2570FCu;
    // 0x257100: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2570FCu, 0x257104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257104u;
label_257104:
    // 0x257104: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x257104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_257108:
    // 0x257108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25710c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25710Cu;
    SET_GPR_U32(ctx, 31, 0x257114u);
    ctx->pc = 0x257110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25710Cu;
    // 0x257110: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25710Cu, 0x257114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257114u;
label_257114:
    // 0x257114: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x257114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x257118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25711c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25711cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x257120: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257124: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x257128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25712c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25712cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257130: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x257130u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257134: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x257134u;
    SET_GPR_U32(ctx, 31, 0x25713Cu);
    ctx->pc = 0x257138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257134u;
    // 0x257138: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x257134u, 0x25713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25713Cu;
label_25713c:
    // 0x25713c: 0x924302f7  lbu         $v1, 0x2F7($s2)
    ctx->pc = 0x25713cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x257140: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x257140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x257144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257148: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x257148u;
    {
        const bool branch_taken_0x257148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257148) {
            ctx->pc = 0x25714Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257148u;
            // 0x25714c: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x257160u;
            goto label_257160;
        }
    }
    ctx->pc = 0x257150u;
    // 0x257150: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x257150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x257154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x257154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257158: 0x0  nop
    ctx->pc = 0x257158u;
    // NOP
    // 0x25715c: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x25715cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
label_257160:
    // 0x257160: 0x924317c1  lbu         $v1, 0x17C1($s2)
    ctx->pc = 0x257160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6081)));
    // 0x257164: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x257164u;
    {
        const bool branch_taken_0x257164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257164) {
            ctx->pc = 0x257168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257164u;
            // 0x257168: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25718Cu;
            goto label_25718c;
        }
    }
    ctx->pc = 0x25716Cu;
    // 0x25716c: 0x86420548  lh          $v0, 0x548($s2)
    ctx->pc = 0x25716cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x257170: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257174: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257174u;
    {
        const bool branch_taken_0x257174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257174u;
        // 0x257178: 0x96440548  lhu         $a0, 0x548($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257174) {
            ctx->pc = 0x257184u;
            goto label_257184;
        }
    }
    ctx->pc = 0x25717Cu;
    // 0x25717c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25717Cu;
    {
        const bool branch_taken_0x25717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25717Cu;
        // 0x257180: 0xa644054a  sh          $a0, 0x54A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25717c) {
            ctx->pc = 0x257188u;
            goto label_257188;
        }
    }
    ctx->pc = 0x257184u;
label_257184:
    // 0x257184: 0xa640054a  sh          $zero, 0x54A($s2)
    ctx->pc = 0x257184u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 0));
label_257188:
    // 0x257188: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x257188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_25718c:
    // 0x25718c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257190: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x257190u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_257194:
    // 0x257194: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x257194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x257198: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x257198u;
    {
        const bool branch_taken_0x257198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257198) {
            ctx->pc = 0x257204u;
            goto label_257204;
        }
    }
    ctx->pc = 0x2571A0u;
    // 0x2571a0: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x2571a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2571a4: 0xc64105c4  lwc1        $f1, 0x5C4($s2)
    ctx->pc = 0x2571a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2571a8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2571a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2571ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2571acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2571b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2571b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2571b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2571b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2571b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2571b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2571bc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2571bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2571c0: 0xc64305c4  lwc1        $f3, 0x5C4($s2)
    ctx->pc = 0x2571c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2571c4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2571c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2571c8: 0x0  nop
    ctx->pc = 0x2571c8u;
    // NOP
    // 0x2571cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2571CCu;
    {
        const bool branch_taken_0x2571cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2571D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571CCu;
        // 0x2571d0: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571cc) {
            ctx->pc = 0x2571E8u;
            goto label_2571e8;
        }
    }
    ctx->pc = 0x2571D4u;
    // 0x2571d4: 0x3c013bff  lui         $at, 0x3BFF
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15359 << 16));
    // 0x2571d8: 0x34219725  ori         $at, $at, 0x9725
    ctx->pc = 0x2571d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38693);
    // 0x2571dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2571dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2571e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2571E0u;
    {
        const bool branch_taken_0x2571e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2571E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571E0u;
        // 0x2571e4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2571e0) {
            ctx->pc = 0x2571FCu;
            goto label_2571fc;
        }
    }
    ctx->pc = 0x2571E8u;
label_2571e8:
    // 0x2571e8: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x2571e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x2571ec: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2571ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2571f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2571f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2571f4: 0x0  nop
    ctx->pc = 0x2571f4u;
    // NOP
    // 0x2571f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2571f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2571fc:
    // 0x2571fc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2571fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x257200: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x257200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
label_257204:
    // 0x257204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x257204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x257208: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x257208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25720c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25720Cu;
    SET_GPR_U32(ctx, 31, 0x257214u);
    ctx->pc = 0x257210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25720Cu;
    // 0x257210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25720Cu, 0x257214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257214u;
label_257214:
    // 0x257214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257218: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x257218u;
    SET_GPR_U32(ctx, 31, 0x257220u);
    ctx->pc = 0x25721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257218u;
    // 0x25721c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x257218u, 0x257220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257220u;
label_257220:
    // 0x257220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x257220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257224: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x257224u;
    SET_GPR_U32(ctx, 31, 0x25722Cu);
    ctx->pc = 0x257228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257224u;
    // 0x257228: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x257224u, 0x25722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25722Cu;
label_25722c:
    // 0x25722c: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x25722cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x257230: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x257230u;
    {
        const bool branch_taken_0x257230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257230u;
        // 0x257234: 0xc64005a8  lwc1        $f0, 0x5A8($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257230) {
            ctx->pc = 0x257260u;
            goto label_257260;
        }
    }
    ctx->pc = 0x257238u;
    // 0x257238: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x257238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25723c: 0x0  nop
    ctx->pc = 0x25723cu;
    // NOP
    // 0x257240: 0x450000bf  bc1f        . + 4 + (0xBF << 2)
    ctx->pc = 0x257240u;
    {
        const bool branch_taken_0x257240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x257244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257240u;
        // 0x257244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257240) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257248u;
    // 0x257248: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x257248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25724c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257250: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x257250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x257254: 0xa24302f7  sb          $v1, 0x2F7($s2)
    ctx->pc = 0x257254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x257258: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x257258u;
    {
        const bool branch_taken_0x257258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257258u;
        // 0x25725c: 0xa24402f5  sb          $a0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257258) {
            ctx->pc = 0x25753Cu;
            goto label_25753c;
        }
    }
    ctx->pc = 0x257260u;
label_257260:
    // 0x257260: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x257260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x257264: 0x0  nop
    ctx->pc = 0x257264u;
    // NOP
    // 0x257268: 0x450000b5  bc1f        . + 4 + (0xB5 << 2)
    ctx->pc = 0x257268u;
    {
        const bool branch_taken_0x257268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257268u;
        // 0x25726c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257268) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257270u;
    // 0x257270: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x257270u;
    {
        const bool branch_taken_0x257270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257270u;
        // 0x257274: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257270) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257278u;
label_257278:
    // 0x257278: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x257278u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x25727c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x25727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x257280: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x257284: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x257284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257288: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x257288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25728c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x25728cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257290: 0xc0c194a  jal         func_306528
    ctx->pc = 0x257290u;
    SET_GPR_U32(ctx, 31, 0x257298u);
    ctx->pc = 0x257294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257290u;
    // 0x257294: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x257290u, 0x257298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257298u;
label_257298:
    // 0x257298: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x257298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x25729c: 0xc0a4bc6  jal         func_292F18
    ctx->pc = 0x25729Cu;
    SET_GPR_U32(ctx, 31, 0x2572A4u);
    ctx->pc = 0x2572A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25729Cu;
    // 0x2572a0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F18u, 0x25729Cu, 0x2572A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572A4u;
label_2572a4:
    // 0x2572a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2572A4u;
    {
        const bool branch_taken_0x2572a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2572A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572A4u;
        // 0x2572a8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572a4) {
            ctx->pc = 0x2572C8u;
            goto label_2572c8;
        }
    }
    ctx->pc = 0x2572ACu;
    // 0x2572ac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2572acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2572b0: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x2572b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x2572b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2572b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2572b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2572bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2572c0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2572C0u;
    SET_GPR_U32(ctx, 31, 0x2572C8u);
    ctx->pc = 0x2572C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2572C0u;
    // 0x2572c4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2572C0u, 0x2572C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2572C8u;
label_2572c8:
    // 0x2572c8: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x2572c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x2572cc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2572ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2572d0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2572d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2572d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2572d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2572d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2572D8u;
    {
        const bool branch_taken_0x2572d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2572DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572D8u;
        // 0x2572dc: 0xae4305f4  sw          $v1, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572d8) {
            ctx->pc = 0x2572F4u;
            goto label_2572f4;
        }
    }
    ctx->pc = 0x2572E0u;
    // 0x2572e0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x2572e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x2572e4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2572E4u;
    {
        const bool branch_taken_0x2572e4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2572E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2572E4u;
        // 0x2572e8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2572e4) {
            ctx->pc = 0x2572F8u;
            goto label_2572f8;
        }
    }
    ctx->pc = 0x2572ECu;
    // 0x2572ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2572ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2572f0: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x2572f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
label_2572f4:
    // 0x2572f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2572f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2572f8:
    // 0x2572f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2572f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2572fc: 0xae4305fc  sw          $v1, 0x5FC($s2)
    ctx->pc = 0x2572fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 3));
    // 0x257300: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x257300u;
    SET_GPR_U32(ctx, 31, 0x257308u);
    ctx->pc = 0x257304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257300u;
    // 0x257304: 0xae4205f8  sw          $v0, 0x5F8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x257300u, 0x257308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257308u;
label_257308:
    // 0x257308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x257308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25730c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25730cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x257310: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x257310u;
    {
        const bool branch_taken_0x257310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257310) {
            ctx->pc = 0x257314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257310u;
            // 0x257314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x257318u;
            goto label_257318;
        }
    }
    ctx->pc = 0x257318u;
label_257318:
    // 0x257318: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x257318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x25731c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x257320: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x257320u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x257324: 0x2010  mfhi        $a0
    ctx->pc = 0x257324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x257328: 0xae440600  sw          $a0, 0x600($s2)
    ctx->pc = 0x257328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1536), GPR_U32(ctx, 4));
label_25732c:
    // 0x25732c: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x257330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257330u;
    {
        const bool branch_taken_0x257330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257330u;
        // 0x257334: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257330) {
            ctx->pc = 0x257340u;
            goto label_257340;
        }
    }
    ctx->pc = 0x257338u;
    // 0x257338: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x257338u;
    {
        const bool branch_taken_0x257338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257338u;
        // 0x25733c: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257338) {
            ctx->pc = 0x257388u;
            goto label_257388;
        }
    }
    ctx->pc = 0x257340u;
label_257340:
    // 0x257340: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x257344: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x257344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x257348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x257348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25734c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25734Cu;
    {
        const bool branch_taken_0x25734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25734Cu;
        // 0x257350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25734c) {
            ctx->pc = 0x257374u;
            goto label_257374;
        }
    }
    ctx->pc = 0x257354u;
    // 0x257354: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x257358: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x257358u;
    {
        const bool branch_taken_0x257358 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257358u;
        // 0x25735c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257358) {
            ctx->pc = 0x257374u;
            goto label_257374;
        }
    }
    ctx->pc = 0x257360u;
    // 0x257360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257364: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x257364u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x257368: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x257368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25736c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x25736Cu;
    {
        const bool branch_taken_0x25736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25736Cu;
        // 0x257370: 0xa24202f4  sb          $v0, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25736c) {
            ctx->pc = 0x25753Cu;
            goto label_25753c;
        }
    }
    ctx->pc = 0x257374u;
label_257374:
    // 0x257374: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257378: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x257378u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x25737c: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x25737cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x257380: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x257380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x257384: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x257384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_257388:
    // 0x257388: 0x8e4205f8  lw          $v0, 0x5F8($s2)
    ctx->pc = 0x257388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1528)));
    // 0x25738c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25738Cu;
    {
        const bool branch_taken_0x25738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25738Cu;
        // 0x257390: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25738c) {
            ctx->pc = 0x2573ECu;
            goto label_2573ec;
        }
    }
    ctx->pc = 0x257394u;
    // 0x257394: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x257394u;
    {
        const bool branch_taken_0x257394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257394u;
        // 0x257398: 0xae4205f8  sw          $v0, 0x5F8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257394) {
            ctx->pc = 0x2573ECu;
            goto label_2573ec;
        }
    }
    ctx->pc = 0x25739Cu;
    // 0x25739c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25739cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2573a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573a4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2573a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2573a8: 0x24060129  addiu       $a2, $zero, 0x129
    ctx->pc = 0x2573a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    // 0x2573ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2573acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2573b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2573b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2573b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2573bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573c0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2573C0u;
    SET_GPR_U32(ctx, 31, 0x2573C8u);
    ctx->pc = 0x2573C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2573C0u;
    // 0x2573c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2573C0u, 0x2573C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2573C8u;
label_2573c8:
    // 0x2573c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2573c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2573ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573d0: 0x2406012a  addiu       $a2, $zero, 0x12A
    ctx->pc = 0x2573d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x2573d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2573d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2573d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2573dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2573e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2573E4u;
    SET_GPR_U32(ctx, 31, 0x2573ECu);
    ctx->pc = 0x2573E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2573E4u;
    // 0x2573e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2573E4u, 0x2573ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2573ECu;
label_2573ec:
    // 0x2573ec: 0x8e4205fc  lw          $v0, 0x5FC($s2)
    ctx->pc = 0x2573ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1532)));
    // 0x2573f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2573F0u;
    {
        const bool branch_taken_0x2573f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573F0u;
        // 0x2573f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573f0) {
            ctx->pc = 0x257400u;
            goto label_257400;
        }
    }
    ctx->pc = 0x2573F8u;
    // 0x2573f8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2573F8u;
    {
        const bool branch_taken_0x2573f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2573FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2573F8u;
        // 0x2573fc: 0xae4205fc  sw          $v0, 0x5FC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2573f8) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257400u;
label_257400:
    // 0x257400: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x257400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x257404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257404u;
    {
        const bool branch_taken_0x257404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257404u;
        // 0x257408: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257404) {
            ctx->pc = 0x257418u;
            goto label_257418;
        }
    }
    ctx->pc = 0x25740Cu;
    // 0x25740c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x257410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257410u;
    {
        const bool branch_taken_0x257410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257410u;
        // 0x257414: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257410) {
            ctx->pc = 0x25741Cu;
            goto label_25741c;
        }
    }
    ctx->pc = 0x257418u;
label_257418:
    // 0x257418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x257418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25741c:
    // 0x25741c: 0x52000049  beql        $s0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x25741Cu;
    {
        const bool branch_taken_0x25741c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25741c) {
            ctx->pc = 0x257420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25741Cu;
            // 0x257420: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257544u;
            goto label_257544;
        }
    }
    ctx->pc = 0x257424u;
    // 0x257424: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x257424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257428: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x257428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
    // 0x25742c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x25742cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x257430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x257430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x257434: 0x0  nop
    ctx->pc = 0x257434u;
    // NOP
    // 0x257438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25743c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25743cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x257440: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x257440u;
    SET_GPR_U32(ctx, 31, 0x257448u);
    ctx->pc = 0x257444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257440u;
    // 0x257444: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x257440u, 0x257448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257448u;
label_257448:
    // 0x257448: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x257448u;
    {
        const bool branch_taken_0x257448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257448u;
        // 0x25744c: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257448) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257450u;
label_257450:
    // 0x257450: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x257450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x257454: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x257454u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257458: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x257458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25745c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x25745cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x257460: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257460u;
    {
        const bool branch_taken_0x257460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257460u;
        // 0x257464: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257460) {
            ctx->pc = 0x257474u;
            goto label_257474;
        }
    }
    ctx->pc = 0x257468u;
    // 0x257468: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x25746c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25746Cu;
    {
        const bool branch_taken_0x25746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25746Cu;
        // 0x257470: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25746c) {
            ctx->pc = 0x257478u;
            goto label_257478;
        }
    }
    ctx->pc = 0x257474u;
label_257474:
    // 0x257474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257478:
    // 0x257478: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x257478u;
    {
        const bool branch_taken_0x257478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257478u;
        // 0x25747c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257478) {
            ctx->pc = 0x2574A4u;
            goto label_2574a4;
        }
    }
    ctx->pc = 0x257480u;
    // 0x257480: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x257480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x257484: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257484u;
    {
        const bool branch_taken_0x257484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x257488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257484u;
        // 0x257488: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257484) {
            ctx->pc = 0x2574A8u;
            goto label_2574a8;
        }
    }
    ctx->pc = 0x25748Cu;
    // 0x25748c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257490: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x257490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x257494: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x257494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257498: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x257498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25749c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574a0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2574a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2574a4:
    // 0x2574a4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2574a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2574a8:
    // 0x2574a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2574a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2574acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2574b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2574b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2574b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2574b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2574b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2574bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2574bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2574c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2574c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2574c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2574c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2574c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2574cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2574ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2574d0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x2574D0u;
    SET_GPR_U32(ctx, 31, 0x2574D8u);
    ctx->pc = 0x2574D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2574D0u;
    // 0x2574d4: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x2574D0u, 0x2574D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2574D8u;
label_2574d8:
    // 0x2574d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2574dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2574dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2574e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2574e4: 0x24060112  addiu       $a2, $zero, 0x112
    ctx->pc = 0x2574e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x2574e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2574e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2574ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2574f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2574f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574f8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2574F8u;
    SET_GPR_U32(ctx, 31, 0x257500u);
    ctx->pc = 0x2574FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2574F8u;
    // 0x2574fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2574F8u, 0x257500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257500u;
label_257500:
    // 0x257500: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x257500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x257504: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x257504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x257508: 0xae4205f4  sw          $v0, 0x5F4($s2)
    ctx->pc = 0x257508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
    // 0x25750c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257510: 0xa24302f6  sb          $v1, 0x2F6($s2)
    ctx->pc = 0x257510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
label_257514:
    // 0x257514: 0x8e4205f4  lw          $v0, 0x5F4($s2)
    ctx->pc = 0x257514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1524)));
    // 0x257518: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257518u;
    {
        const bool branch_taken_0x257518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257518u;
        // 0x25751c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257518) {
            ctx->pc = 0x257528u;
            goto label_257528;
        }
    }
    ctx->pc = 0x257520u;
    // 0x257520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x257520u;
    {
        const bool branch_taken_0x257520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257520u;
        // 0x257524: 0xae4205f4  sw          $v0, 0x5F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257520) {
            ctx->pc = 0x257540u;
            goto label_257540;
        }
    }
    ctx->pc = 0x257528u;
label_257528:
    // 0x257528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25752c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x25752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257530: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x257530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x257534: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x257534u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x257538: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x257538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_25753c:
    // 0x25753c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x25753cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_257540:
    // 0x257540: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x257540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_257544:
    // 0x257544: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x257544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x257548: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x257548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25754c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25754cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257554: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x257554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x257558: 0x3e00008  jr          $ra
    ctx->pc = 0x257558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257558u;
        // 0x25755c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257560u;
}
