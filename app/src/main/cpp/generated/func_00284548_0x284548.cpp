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

// Function: func_00284548
// Address: 0x284548 - 0x2849b8
void func_00284548_0x284548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284548_0x284548");
#endif

    switch (ctx->pc) {
        case 0x2845a4u: goto label_2845a4;
        case 0x28461cu: goto label_28461c;
        case 0x284680u: goto label_284680;
        case 0x2846d8u: goto label_2846d8;
        case 0x284730u: goto label_284730;
        case 0x28477cu: goto label_28477c;
        case 0x2847c8u: goto label_2847c8;
        case 0x284818u: goto label_284818;
        case 0x284864u: goto label_284864;
        case 0x2848b0u: goto label_2848b0;
        case 0x2848fcu: goto label_2848fc;
        case 0x284948u: goto label_284948;
        default: break;
    }

    ctx->pc = 0x284548u;

    // 0x284548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x284548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28454c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28454cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x284550: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x284550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x284554: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x284554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x284558: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x284558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28455c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284560: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x284560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x284564: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x284564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x284568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28456c: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x28456cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x284570: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x284570u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x284574: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x284574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x284578: 0x14a20102  bne         $a1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x284578u;
    {
        const bool branch_taken_0x284578 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284578u;
        // 0x28457c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284578) {
            ctx->pc = 0x284984u;
            goto label_284984;
        }
    }
    ctx->pc = 0x284580u;
    // 0x284580: 0x10800100  beqz        $a0, . + 4 + (0x100 << 2)
    ctx->pc = 0x284580u;
    {
        const bool branch_taken_0x284580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x284584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284580u;
        // 0x284584: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284580) {
            ctx->pc = 0x284984u;
            goto label_284984;
        }
    }
    ctx->pc = 0x284588u;
    // 0x284588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28458c: 0x26105720  addiu       $s0, $s0, 0x5720
    ctx->pc = 0x28458cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22304));
    // 0x284590: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x284598: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x284598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28459c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x28459Cu;
    SET_GPR_U32(ctx, 31, 0x2845A4u);
    ctx->pc = 0x2845A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28459Cu;
    // 0x2845a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x28459Cu, 0x2845A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845A4u;
label_2845a4:
    // 0x2845a4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2845a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2845a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2845a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2845ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2845acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2845b0: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x2845b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2845b4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x2845b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x2845b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2845b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2845bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2845bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2845c0: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x2845c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2845c4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2845c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2845c8: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x2845c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x2845cc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2845ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2845d0: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x2845d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x2845d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2845d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2845d8: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2845d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2845dc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2845dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2845e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2845e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2845e4: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x2845e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2845e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2845e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2845ec: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2845f0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2845f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2845f4: 0x24140016  addiu       $s4, $zero, 0x16
    ctx->pc = 0x2845f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2845f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2845f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2845fc: 0x24150017  addiu       $s5, $zero, 0x17
    ctx->pc = 0x2845fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x284600: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284604: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x284608: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x284608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28460c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284610: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284614: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284614u;
    SET_GPR_U32(ctx, 31, 0x28461Cu);
    ctx->pc = 0x284618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284614u;
    // 0x284618: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284614u, 0x28461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28461Cu;
label_28461c:
    // 0x28461c: 0x3c013de1  lui         $at, 0x3DE1
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15841 << 16));
    // 0x284620: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x284620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x284624: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x284624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x284628: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x284628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x28462c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28462cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x284630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284634: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284638: 0xe6160008  swc1        $f22, 0x8($s0)
    ctx->pc = 0x284638u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28463c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x28463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284640: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x284640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x284644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284648: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x284648u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x28464c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x28464cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284650: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x284650u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x284654: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284658: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x284658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28465c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x28465cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284660: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284664: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284668: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28466c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x284670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284674: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284678: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284678u;
    SET_GPR_U32(ctx, 31, 0x284680u);
    ctx->pc = 0x28467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284678u;
    // 0x28467c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284678u, 0x284680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284680u;
label_284680:
    // 0x284680: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x284680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x284684: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x284684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x284688: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x284688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x28468c: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x28468cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x284690: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284694: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x284694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x284698: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x284698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28469c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x28469cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2846a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2846a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846a4: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2846a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2846a8: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2846a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2846ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2846acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2846b0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2846b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2846b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2846b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2846b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2846b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2846bc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2846bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2846c0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2846c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2846c4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2846c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2846c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2846c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2846ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2846d0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2846D0u;
    SET_GPR_U32(ctx, 31, 0x2846D8u);
    ctx->pc = 0x2846D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2846D0u;
    // 0x2846d4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2846D0u, 0x2846D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846D8u;
label_2846d8:
    // 0x2846d8: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x2846dc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2846dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2846e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2846e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2846e4: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x2846e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x2846e8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2846ec: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x2846ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x2846f0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2846f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2846f4: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x2846f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2846f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2846f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846fc: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2846fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284700: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284704: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284708: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x284708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28470c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28470cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x284710: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284714: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284718: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28471c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x28471cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284724: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x284724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x284728: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284728u;
    SET_GPR_U32(ctx, 31, 0x284730u);
    ctx->pc = 0x28472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284728u;
    // 0x28472c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284728u, 0x284730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284730u;
label_284730:
    // 0x284730: 0xa2120002  sb          $s2, 0x2($s0)
    ctx->pc = 0x284730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 18));
    // 0x284734: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284738: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x284738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x28473c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x28473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284740: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x284740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x284744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284748: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x284748u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28474c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x28474cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284750: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284754: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x284754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284758: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x284758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28475c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28475cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284760: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284764: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x284768: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28476c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28476cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284770: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x284770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x284774: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284774u;
    SET_GPR_U32(ctx, 31, 0x28477Cu);
    ctx->pc = 0x284778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284774u;
    // 0x284778: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284774u, 0x28477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28477Cu;
label_28477c:
    // 0x28477c: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x28477cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x284780: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284784: 0xa2130003  sb          $s3, 0x3($s0)
    ctx->pc = 0x284784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x284788: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x284788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28478c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x28478cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x284790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284794: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x284794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284798: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28479c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28479cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2847a0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2847a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2847a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2847a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2847a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2847a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2847ac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2847acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2847b0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2847b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2847b4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2847b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2847b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2847b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2847bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2847c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2847C0u;
    SET_GPR_U32(ctx, 31, 0x2847C8u);
    ctx->pc = 0x2847C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2847C0u;
    // 0x2847c4: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2847C0u, 0x2847C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847C8u;
label_2847c8:
    // 0x2847c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2847c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2847cc: 0xa2130002  sb          $s3, 0x2($s0)
    ctx->pc = 0x2847ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2847d0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2847d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2847d4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2847d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2847d8: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x2847d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2847dc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2847dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2847e0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2847e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2847e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2847e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2847e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2847e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2847ec: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2847ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2847f0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2847f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2847f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2847f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2847f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2847f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2847fc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2847fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284800: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x284804: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28480c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28480cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x284810: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284810u;
    SET_GPR_U32(ctx, 31, 0x284818u);
    ctx->pc = 0x284814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284810u;
    // 0x284814: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284810u, 0x284818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284818u;
label_284818:
    // 0x284818: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x284818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x28481c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x28481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284820: 0xa2140003  sb          $s4, 0x3($s0)
    ctx->pc = 0x284820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x284824: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x284824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284828: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x284828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28482c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28482cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284830: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x284830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284834: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284838: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x28483c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x28483cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284840: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x284840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x284844: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284848: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x28484c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x28484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x284850: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284858: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x284858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x28485c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x28485Cu;
    SET_GPR_U32(ctx, 31, 0x284864u);
    ctx->pc = 0x284860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28485Cu;
    // 0x284860: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x28485Cu, 0x284864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284864u;
label_284864:
    // 0x284864: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x284864u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x284868: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28486c: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x28486cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x284870: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x284870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284874: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x284874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x284878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28487c: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x28487cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284880: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x284884: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284888: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x284888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28488c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28488cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x284890: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284894: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284898: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28489c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x28489cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2848a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2848a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2848a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2848a8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2848A8u;
    SET_GPR_U32(ctx, 31, 0x2848B0u);
    ctx->pc = 0x2848ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848A8u;
    // 0x2848ac: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2848A8u, 0x2848B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848B0u;
label_2848b0:
    // 0x2848b0: 0xa2140002  sb          $s4, 0x2($s0)
    ctx->pc = 0x2848b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 20));
    // 0x2848b4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2848b8: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x2848b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2848bc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2848c0: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x2848c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2848c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2848c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848c8: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x2848c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2848cc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2848ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2848d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2848d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2848d4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2848d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2848d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2848d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2848dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2848dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2848e0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2848e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2848e4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2848e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2848e8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x2848e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2848ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2848ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2848f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2848f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2848F4u;
    SET_GPR_U32(ctx, 31, 0x2848FCu);
    ctx->pc = 0x2848F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2848F4u;
    // 0x2848f8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2848F4u, 0x2848FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848FCu;
label_2848fc:
    // 0x2848fc: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x2848fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x284900: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284904: 0xa2150003  sb          $s5, 0x3($s0)
    ctx->pc = 0x284904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x284908: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x284908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28490c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x28490cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x284910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284914: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x284914u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284918: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x284918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28491c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284920: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x284920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x284924: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x284924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x284928: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x28492c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x28492cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284930: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x284930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x284934: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x284938: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x284938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x28493c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28493cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284940: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x284940u;
    SET_GPR_U32(ctx, 31, 0x284948u);
    ctx->pc = 0x284944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284940u;
    // 0x284944: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x284940u, 0x284948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284948u;
label_284948:
    // 0x284948: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x284948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28494c: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x28494cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x284950: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x284950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x284954: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x284954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x284958: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x284958u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28495c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x28495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x284960: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x284960u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x284964: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x284964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x284968: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x284968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28496c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28496cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x284970: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x284970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x284974: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x284974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x284978: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x284978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28497c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28497cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x284980: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x284980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_284984:
    // 0x284984: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x284984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284988: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x284988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28498c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28498cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x284990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284994: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x284994u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284998: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x284998u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28499c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2849a0: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x2849a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2849a4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2849a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2849a8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2849a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2849ac: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2849acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2849b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2849B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2849B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2849B0u;
        // 0x2849b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2849B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2849B8u;
}
