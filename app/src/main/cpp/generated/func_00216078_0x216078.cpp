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

// Function: func_00216078
// Address: 0x216078 - 0x216760
void func_00216078_0x216078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00216078_0x216078");
#endif

    switch (ctx->pc) {
        case 0x2160e4u: goto label_2160e4;
        case 0x216104u: goto label_216104;
        case 0x216130u: goto label_216130;
        case 0x21614cu: goto label_21614c;
        case 0x21616cu: goto label_21616c;
        case 0x216174u: goto label_216174;
        case 0x216198u: goto label_216198;
        case 0x2161c4u: goto label_2161c4;
        case 0x2162a4u: goto label_2162a4;
        case 0x216340u: goto label_216340;
        case 0x216394u: goto label_216394;
        case 0x2163b4u: goto label_2163b4;
        case 0x2163c8u: goto label_2163c8;
        case 0x2163d8u: goto label_2163d8;
        case 0x216404u: goto label_216404;
        case 0x216418u: goto label_216418;
        case 0x216428u: goto label_216428;
        case 0x21643cu: goto label_21643c;
        case 0x216448u: goto label_216448;
        case 0x216458u: goto label_216458;
        case 0x216490u: goto label_216490;
        case 0x216574u: goto label_216574;
        case 0x216610u: goto label_216610;
        case 0x216680u: goto label_216680;
        case 0x216694u: goto label_216694;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166acu: goto label_2166ac;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166ecu: goto label_2166ec;
        case 0x216720u: goto label_216720;
        case 0x216738u: goto label_216738;
        default: break;
    }

    ctx->pc = 0x216078u;

    // 0x216078: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x216078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21607c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x21607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x216080: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x216080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x216084: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x216084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216088: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x216088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21608c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x21608cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x216090: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x216090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216094: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x216094u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216098: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x216098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21609c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x21609cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2160a0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2160a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2160a4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2160a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2160a8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2160ac: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x2160acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2160b0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2160b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2160b4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x2160b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2160b8: 0x1060017c  beqz        $v1, . + 4 + (0x17C << 2)
    ctx->pc = 0x2160B8u;
    {
        const bool branch_taken_0x2160b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160B8u;
        // 0x2160bc: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160b8) {
            ctx->pc = 0x2166ACu;
            goto label_2166ac;
        }
    }
    ctx->pc = 0x2160C0u;
    // 0x2160c0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2160c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2160c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2160c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2160c8: 0x24426530  addiu       $v0, $v0, 0x6530
    ctx->pc = 0x2160c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x2160cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2160ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2160d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2160d4: 0x800008  jr          $a0
    ctx->pc = 0x2160D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2160DCu: goto label_2160dc;
            case 0x216144u: goto label_216144;
            case 0x21618Cu: goto label_21618c;
            case 0x2161E8u: goto label_2161e8;
            case 0x2163D0u: goto label_2163d0;
            case 0x216410u: goto label_216410;
            case 0x216450u: goto label_216450;
            case 0x21649Cu: goto label_21649c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2160DCu;
label_2160dc:
    // 0x2160dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2160DCu;
    SET_GPR_U32(ctx, 31, 0x2160E4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2160DCu, 0x2160E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2160E4u;
label_2160e4:
    // 0x2160e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2160e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2160e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2160e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160ec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2160ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2160f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2160F0u;
    {
        const bool branch_taken_0x2160f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2160f0) {
            ctx->pc = 0x2160F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2160F0u;
            // 0x2160f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2160F8u;
            goto label_2160f8;
        }
    }
    ctx->pc = 0x2160F8u;
label_2160f8:
    // 0x2160f8: 0x2810  mfhi        $a1
    ctx->pc = 0x2160f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2160fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2160FCu;
    SET_GPR_U32(ctx, 31, 0x216104u);
    ctx->pc = 0x216100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2160FCu;
    // 0x216100: 0xae2517d0  sw          $a1, 0x17D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6096), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2160FCu, 0x216104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216104u;
label_216104:
    // 0x216104: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x216108: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x216108u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21610c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21610cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216114: 0x8c65161c  lw          $a1, 0x161C($v1)
    ctx->pc = 0x216114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5660)));
    // 0x216118: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21611c: 0x8c661620  lw          $a2, 0x1620($v1)
    ctx->pc = 0x21611cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5664)));
    // 0x216120: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x216120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216124: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x216124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216128: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216128u;
    SET_GPR_U32(ctx, 31, 0x216130u);
    ctx->pc = 0x21612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216128u;
    // 0x21612c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216128u, 0x216130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216130u;
label_216130:
    // 0x216130: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216134: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x216134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x216138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21613c: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x21613cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x216140: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216144:
    // 0x216144: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x216144u;
    SET_GPR_U32(ctx, 31, 0x21614Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x216144u, 0x21614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21614Cu;
label_21614c:
    // 0x21614c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x21614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216154: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x216158: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x216158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x21615c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21615cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216160: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x216164: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x216164u;
    SET_GPR_U32(ctx, 31, 0x21616Cu);
    ctx->pc = 0x216168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216164u;
    // 0x216168: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x216164u, 0x21616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21616Cu;
label_21616c:
    // 0x21616c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x21616Cu;
    SET_GPR_U32(ctx, 31, 0x216174u);
    ctx->pc = 0x216170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21616Cu;
    // 0x216170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21616Cu, 0x216174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216174u;
label_216174:
    // 0x216174: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x216174u;
    {
        const bool branch_taken_0x216174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216174) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x21617Cu;
    // 0x21617c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21617cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216184: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x216184u;
    {
        const bool branch_taken_0x216184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216184u;
        // 0x216188: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216184) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x21618Cu;
label_21618c:
    // 0x21618c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x21618cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216190: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216190u;
    SET_GPR_U32(ctx, 31, 0x216198u);
    ctx->pc = 0x216194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216190u;
    // 0x216194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216190u, 0x216198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216198u;
label_216198:
    // 0x216198: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21619c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x21619cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2161a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2161a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161a4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2161a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2161a8: 0x8c651624  lw          $a1, 0x1624($v1)
    ctx->pc = 0x2161a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5668)));
    // 0x2161ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2161acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2161b0: 0x8c661628  lw          $a2, 0x1628($v1)
    ctx->pc = 0x2161b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5672)));
    // 0x2161b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2161b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2161b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2161bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2161BCu;
    SET_GPR_U32(ctx, 31, 0x2161C4u);
    ctx->pc = 0x2161C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2161BCu;
    // 0x2161c0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2161BCu, 0x2161C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2161C4u;
label_2161c4:
    // 0x2161c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2161c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2161c8: 0x3c013de5  lui         $at, 0x3DE5
    ctx->pc = 0x2161c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15845 << 16));
    // 0x2161cc: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2161ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x2161d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2161d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2161d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2161d8: 0xe63405c8  swc1        $f20, 0x5C8($s1)
    ctx->pc = 0x2161d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x2161dc: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2161dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x2161e0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2161e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2161e4: 0xe63405c0  swc1        $f20, 0x5C0($s1)
    ctx->pc = 0x2161e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
label_2161e8:
    // 0x2161e8: 0xc62105c4  lwc1        $f1, 0x5C4($s1)
    ctx->pc = 0x2161e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2161ec: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2161ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2161f0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2161f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2161f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2161f8: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x2161f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x2161fc: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2161fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x216200: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216204: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x216204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216208: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x216208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21620c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21620cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216210: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x216210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x216214: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x216214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216218: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x216218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21621c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21621cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x216220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x216224: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x216224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216228: 0x0  nop
    ctx->pc = 0x216228u;
    // NOP
    // 0x21622c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x21622Cu;
    {
        const bool branch_taken_0x21622c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x216230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21622Cu;
        // 0x216230: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21622c) {
            ctx->pc = 0x2162E8u;
            goto label_2162e8;
        }
    }
    ctx->pc = 0x216234u;
    // 0x216234: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x216234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216238: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x216238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21623c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x216240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216244: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x216244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216248: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x21624c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216254: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x216254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216258: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x216258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x21625c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21625cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216260: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x216260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216264: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x216264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x216268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21626c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x21626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x216270: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x216270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216274: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x216274u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216278: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21627c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x216280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216284: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x216288: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x216288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21628c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x216290: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x216290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x216294: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x216294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x216298: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x216298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21629c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x21629Cu;
    SET_GPR_U32(ctx, 31, 0x2162A4u);
    ctx->pc = 0x2162A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21629Cu;
    // 0x2162a0: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x21629Cu, 0x2162A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162A4u;
label_2162a4:
    // 0x2162a4: 0x54500035  bnel        $v0, $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2162A4u;
    {
        const bool branch_taken_0x2162a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2162a4) {
            ctx->pc = 0x2162A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162A4u;
            // 0x2162a8: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21637Cu;
            goto label_21637c;
        }
    }
    ctx->pc = 0x2162ACu;
    // 0x2162ac: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2162acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2162b0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2162b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2162b4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2162b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2162b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2162b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2162bc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2162bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2162c0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2162c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2162c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2162c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2162c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2162c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2162cc: 0x0  nop
    ctx->pc = 0x2162ccu;
    // NOP
    // 0x2162d0: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x2162D0u;
    {
        const bool branch_taken_0x2162d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2162d0) {
            ctx->pc = 0x2162D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2162D0u;
            // 0x2162d4: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21637Cu;
            goto label_21637c;
        }
    }
    ctx->pc = 0x2162D8u;
    // 0x2162d8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2162d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2162dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2162dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2162e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2162E0u;
    {
        const bool branch_taken_0x2162e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162E0u;
        // 0x2162e4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162e0) {
            ctx->pc = 0x216378u;
            goto label_216378;
        }
    }
    ctx->pc = 0x2162E8u;
label_2162e8:
    // 0x2162e8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2162e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2162ec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2162ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2162f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2162f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2162f4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2162f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2162f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2162f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2162fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2162fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216300: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x216300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216304: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x216304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216308: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21630c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21630cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x216310: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216314: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x216314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x216318: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x216318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x21631c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21631cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216320: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x216320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x216324: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x216324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x216328: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x216328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21632c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21632cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216330: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x216330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x216334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216338: 0xc04c784  jal         func_131E10
    ctx->pc = 0x216338u;
    SET_GPR_U32(ctx, 31, 0x216340u);
    ctx->pc = 0x21633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216338u;
    // 0x21633c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x216338u, 0x216340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216340u;
label_216340:
    // 0x216340: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x216340u;
    {
        const bool branch_taken_0x216340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x216340) {
            ctx->pc = 0x216344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216340u;
            // 0x216344: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21637Cu;
            goto label_21637c;
        }
    }
    ctx->pc = 0x216348u;
    // 0x216348: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x216348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21634c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x216350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216354: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216358: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x216358u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21635c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216360: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216364: 0x0  nop
    ctx->pc = 0x216364u;
    // NOP
    // 0x216368: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x216368u;
    {
        const bool branch_taken_0x216368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216368) {
            ctx->pc = 0x21636Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216368u;
            // 0x21636c: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21637Cu;
            goto label_21637c;
        }
    }
    ctx->pc = 0x216370u;
    // 0x216370: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x216370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x216374: 0xe63405c4  swc1        $f20, 0x5C4($s1)
    ctx->pc = 0x216374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_216378:
    // 0x216378: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_21637c:
    // 0x21637c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x216380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216384: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21638c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21638Cu;
    SET_GPR_U32(ctx, 31, 0x216394u);
    ctx->pc = 0x216390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21638Cu;
    // 0x216390: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21638Cu, 0x216394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216394u;
label_216394:
    // 0x216394: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x216394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21639c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x21639cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2163a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2163a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2163a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2163a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2163a8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2163a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2163ac: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2163ACu;
    SET_GPR_U32(ctx, 31, 0x2163B4u);
    ctx->pc = 0x2163B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163ACu;
    // 0x2163b0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2163ACu, 0x2163B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163B4u;
label_2163b4:
    // 0x2163b4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x2163b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x2163b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2163b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163bc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2163bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2163c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2163C0u;
    SET_GPR_U32(ctx, 31, 0x2163C8u);
    ctx->pc = 0x2163C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163C0u;
    // 0x2163c4: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2163C0u, 0x2163C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163C8u;
label_2163c8:
    // 0x2163c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2163C8u;
    {
        const bool branch_taken_0x2163c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163C8u;
        // 0x2163cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163c8) {
            ctx->pc = 0x216434u;
            goto label_216434;
        }
    }
    ctx->pc = 0x2163D0u;
label_2163d0:
    // 0x2163d0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2163D0u;
    SET_GPR_U32(ctx, 31, 0x2163D8u);
    ctx->pc = 0x2163D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163D0u;
    // 0x2163d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2163D0u, 0x2163D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163D8u;
label_2163d8:
    // 0x2163d8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2163d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2163dc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2163dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2163e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2163e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2163e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2163e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163e8: 0x8c65162c  lw          $a1, 0x162C($v1)
    ctx->pc = 0x2163e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5676)));
    // 0x2163ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2163ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2163f0: 0x8c661630  lw          $a2, 0x1630($v1)
    ctx->pc = 0x2163f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5680)));
    // 0x2163f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2163f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2163f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2163fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2163FCu;
    SET_GPR_U32(ctx, 31, 0x216404u);
    ctx->pc = 0x216400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163FCu;
    // 0x216400: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2163FCu, 0x216404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216404u;
label_216404:
    // 0x216404: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21640c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21640cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_216410:
    // 0x216410: 0xc055f06  jal         func_157C18
    ctx->pc = 0x216410u;
    SET_GPR_U32(ctx, 31, 0x216418u);
    ctx->pc = 0x216414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216410u;
    // 0x216414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x216410u, 0x216418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216418u;
label_216418:
    // 0x216418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216418u;
    {
        const bool branch_taken_0x216418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216418) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x216420u;
    // 0x216420: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x216420u;
    SET_GPR_U32(ctx, 31, 0x216428u);
    ctx->pc = 0x216424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216420u;
    // 0x216424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x216420u, 0x216428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216428u;
label_216428:
    // 0x216428: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21642c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21642cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216434:
    // 0x216434: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216434u;
    SET_GPR_U32(ctx, 31, 0x21643Cu);
    ctx->pc = 0x216438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216434u;
    // 0x216438: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216434u, 0x21643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21643Cu;
label_21643c:
    // 0x21643c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x21643cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x216440: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x216440u;
    SET_GPR_U32(ctx, 31, 0x216448u);
    ctx->pc = 0x216444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216440u;
    // 0x216444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x216440u, 0x216448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216448u;
label_216448:
    // 0x216448: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x216448u;
    {
        const bool branch_taken_0x216448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216448u;
        // 0x21644c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216448) {
            ctx->pc = 0x2166B0u;
            goto label_2166b0;
        }
    }
    ctx->pc = 0x216450u;
label_216450:
    // 0x216450: 0xc09d91a  jal         func_276468
    ctx->pc = 0x216450u;
    SET_GPR_U32(ctx, 31, 0x216458u);
    ctx->pc = 0x216454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216450u;
    // 0x216454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x216450u, 0x216458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216458u;
label_216458:
    // 0x216458: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x216458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x21645c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216460: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x216460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216464: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x216464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x216468: 0x8c651634  lw          $a1, 0x1634($v1)
    ctx->pc = 0x216468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5684)));
    // 0x21646c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216470: 0x8c661638  lw          $a2, 0x1638($v1)
    ctx->pc = 0x216470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5688)));
    // 0x216474: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x216474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x216478: 0xae2905fc  sw          $t1, 0x5FC($s1)
    ctx->pc = 0x216478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 9));
    // 0x21647c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x216480: 0xae2905f8  sw          $t1, 0x5F8($s1)
    ctx->pc = 0x216480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 9));
    // 0x216484: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x216484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x216488: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x216488u;
    SET_GPR_U32(ctx, 31, 0x216490u);
    ctx->pc = 0x21648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216488u;
    // 0x21648c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x216488u, 0x216490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216490u;
label_216490:
    // 0x216490: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x216490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x216494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x216498: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x216498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_21649c:
    // 0x21649c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x21649cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2164a0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2164a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2164a4: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x2164A4u;
    {
        const bool branch_taken_0x2164a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2164a4) {
            ctx->pc = 0x2164A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2164A4u;
            // 0x2164a8: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21664Cu;
            goto label_21664c;
        }
    }
    ctx->pc = 0x2164ACu;
    // 0x2164ac: 0xc62205a8  lwc1        $f2, 0x5A8($s1)
    ctx->pc = 0x2164acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2164b0: 0xc62105c4  lwc1        $f1, 0x5C4($s1)
    ctx->pc = 0x2164b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2164b4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2164b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2164b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2164b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2164bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2164bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2164c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2164c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2164c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2164c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2164c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2164cc: 0xc62305c4  lwc1        $f3, 0x5C4($s1)
    ctx->pc = 0x2164ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2164d0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x2164d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2164d4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2164d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164d8: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x2164dc: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2164dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x2164e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2164e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2164e4: 0x0  nop
    ctx->pc = 0x2164e4u;
    // NOP
    // 0x2164e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2164e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2164ec: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2164ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2164f0: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2164f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x2164f4: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2164f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2164f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2164f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2164fc: 0x0  nop
    ctx->pc = 0x2164fcu;
    // NOP
    // 0x216500: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x216500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216504: 0x0  nop
    ctx->pc = 0x216504u;
    // NOP
    // 0x216508: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x216508u;
    {
        const bool branch_taken_0x216508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216508u;
        // 0x21650c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216508) {
            ctx->pc = 0x2165B8u;
            goto label_2165b8;
        }
    }
    ctx->pc = 0x216510u;
    // 0x216510: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x216510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216514: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x216514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x216518: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21651c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x21651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216520: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x216520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216524: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x216524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x216528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21652c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x216530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x216530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216534: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x216534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x216538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21653c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x21653cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x216540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216544: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x216544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x216548: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21654c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21654cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216550: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x216550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216554: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x216554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x216558: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x216558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21655c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21655cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x216560: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x216560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x216564: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x216564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x216568: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x216568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21656c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x21656Cu;
    SET_GPR_U32(ctx, 31, 0x216574u);
    ctx->pc = 0x216570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21656Cu;
    // 0x216570: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x21656Cu, 0x216574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216574u;
label_216574:
    // 0x216574: 0x54500035  bnel        $v0, $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x216574u;
    {
        const bool branch_taken_0x216574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x216574) {
            ctx->pc = 0x216578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216574u;
            // 0x216578: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21664Cu;
            goto label_21664c;
        }
    }
    ctx->pc = 0x21657Cu;
    // 0x21657c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x21657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216580: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x216580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x216584: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x216584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x216588: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21658c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x21658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216590: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x216590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x216594: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x216594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216598: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x216598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21659c: 0x0  nop
    ctx->pc = 0x21659cu;
    // NOP
    // 0x2165a0: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x2165A0u;
    {
        const bool branch_taken_0x2165a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2165a0) {
            ctx->pc = 0x2165A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2165A0u;
            // 0x2165a4: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21664Cu;
            goto label_21664c;
        }
    }
    ctx->pc = 0x2165A8u;
    // 0x2165a8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2165a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2165ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2165acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2165b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2165B0u;
    {
        const bool branch_taken_0x2165b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165B0u;
        // 0x2165b4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165b0) {
            ctx->pc = 0x216648u;
            goto label_216648;
        }
    }
    ctx->pc = 0x2165B8u;
label_2165b8:
    // 0x2165b8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2165b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2165bc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2165bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2165c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2165c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2165c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2165c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2165c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2165c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2165cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2165ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2165d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2165d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2165d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2165d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2165d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2165dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2165dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2165e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2165e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2165e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2165e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2165e8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2165e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2165ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2165ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165f0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2165f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2165f4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2165f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2165f8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2165f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2165fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2165fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216600: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x216600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x216604: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x216604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216608: 0xc04c784  jal         func_131E10
    ctx->pc = 0x216608u;
    SET_GPR_U32(ctx, 31, 0x216610u);
    ctx->pc = 0x21660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216608u;
    // 0x21660c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x216608u, 0x216610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216610u;
label_216610:
    // 0x216610: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x216610u;
    {
        const bool branch_taken_0x216610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x216610) {
            ctx->pc = 0x216614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216610u;
            // 0x216614: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21664Cu;
            goto label_21664c;
        }
    }
    ctx->pc = 0x216618u;
    // 0x216618: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x216618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21661c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x21661cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x216620: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x216620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216624: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x216624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x216628: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x216628u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21662c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216630: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216634: 0x0  nop
    ctx->pc = 0x216634u;
    // NOP
    // 0x216638: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x216638u;
    {
        const bool branch_taken_0x216638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216638) {
            ctx->pc = 0x21663Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216638u;
            // 0x21663c: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21664Cu;
            goto label_21664c;
        }
    }
    ctx->pc = 0x216640u;
    // 0x216640: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x216640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x216644: 0xe63405c4  swc1        $f20, 0x5C4($s1)
    ctx->pc = 0x216644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_216648:
    // 0x216648: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x216648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21664c:
    // 0x21664c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x21664cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x216650: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x216650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x216654: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x216654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x216658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21665c: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x21665cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x216660: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x216664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216668: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x216668u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x21666c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21666cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216670: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x216670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x216674: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x216674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x216678: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x216678u;
    SET_GPR_U32(ctx, 31, 0x216680u);
    ctx->pc = 0x21667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216678u;
    // 0x21667c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x216678u, 0x216680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216680u;
label_216680:
    // 0x216680: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x216680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x216684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216688: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x216688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x21668c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x21668Cu;
    SET_GPR_U32(ctx, 31, 0x216694u);
    ctx->pc = 0x216690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21668Cu;
    // 0x216690: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x21668Cu, 0x216694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216694u;
label_216694:
    // 0x216694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216698: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x216698u;
    SET_GPR_U32(ctx, 31, 0x2166A0u);
    ctx->pc = 0x21669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216698u;
    // 0x21669c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x216698u, 0x2166A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166A0u;
label_2166a0:
    // 0x2166a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2166a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2166a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2166A4u;
    SET_GPR_U32(ctx, 31, 0x2166ACu);
    ctx->pc = 0x2166A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166A4u;
    // 0x2166a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2166A4u, 0x2166ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166ACu;
label_2166ac:
    // 0x2166ac: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2166acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2166b0:
    // 0x2166b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2166b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2166b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2166B4u;
    {
        const bool branch_taken_0x2166b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166B4u;
        // 0x2166b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166b4) {
            ctx->pc = 0x2166F4u;
            goto label_2166f4;
        }
    }
    ctx->pc = 0x2166BCu;
    // 0x2166bc: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2166bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2166c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2166C0u;
    {
        const bool branch_taken_0x2166c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166C0u;
        // 0x2166c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166c0) {
            ctx->pc = 0x2166F8u;
            goto label_2166f8;
        }
    }
    ctx->pc = 0x2166C8u;
    // 0x2166c8: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x2166c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x2166cc: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x2166CCu;
    SET_GPR_U32(ctx, 31, 0x2166D4u);
    ctx->pc = 0x2166D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166CCu;
    // 0x2166d0: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x2166CCu, 0x2166D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166D4u;
label_2166d4:
    // 0x2166d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2166D4u;
    {
        const bool branch_taken_0x2166d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166D4u;
        // 0x2166d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166d4) {
            ctx->pc = 0x2166F8u;
            goto label_2166f8;
        }
    }
    ctx->pc = 0x2166DCu;
    // 0x2166dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2166dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166e0: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x2166e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x2166e4: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x2166E4u;
    SET_GPR_U32(ctx, 31, 0x2166ECu);
    ctx->pc = 0x2166E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2166E4u;
    // 0x2166e8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x2166E4u, 0x2166ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2166ECu;
label_2166ec:
    // 0x2166ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2166ECu;
    {
        const bool branch_taken_0x2166ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166ECu;
        // 0x2166f0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166ec) {
            ctx->pc = 0x2166FCu;
            goto label_2166fc;
        }
    }
    ctx->pc = 0x2166F4u;
label_2166f4:
    // 0x2166f4: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x2166f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
label_2166f8:
    // 0x2166f8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2166f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2166fc:
    // 0x2166fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2166fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x216700: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x216700u;
    {
        const bool branch_taken_0x216700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216700u;
        // 0x216704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216700) {
            ctx->pc = 0x216740u;
            goto label_216740;
        }
    }
    ctx->pc = 0x216708u;
    // 0x216708: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x216708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x21670c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21670Cu;
    {
        const bool branch_taken_0x21670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21670Cu;
        // 0x216710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21670c) {
            ctx->pc = 0x216744u;
            goto label_216744;
        }
    }
    ctx->pc = 0x216714u;
    // 0x216714: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x216714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x216718: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x216718u;
    SET_GPR_U32(ctx, 31, 0x216720u);
    ctx->pc = 0x21671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216718u;
    // 0x21671c: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x216718u, 0x216720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216720u;
label_216720:
    // 0x216720: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x216720u;
    {
        const bool branch_taken_0x216720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216720u;
        // 0x216724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216720) {
            ctx->pc = 0x216744u;
            goto label_216744;
        }
    }
    ctx->pc = 0x216728u;
    // 0x216728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x216728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21672c: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x21672cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x216730: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x216730u;
    SET_GPR_U32(ctx, 31, 0x216738u);
    ctx->pc = 0x216734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216730u;
    // 0x216734: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x216730u, 0x216738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216738u;
label_216738:
    // 0x216738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x216738u;
    {
        const bool branch_taken_0x216738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216738u;
        // 0x21673c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216738) {
            ctx->pc = 0x216748u;
            goto label_216748;
        }
    }
    ctx->pc = 0x216740u;
label_216740:
    // 0x216740: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x216740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_216744:
    // 0x216744: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x216744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_216748:
    // 0x216748: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x216748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21674c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216750: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x216750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x216754: 0x3e00008  jr          $ra
    ctx->pc = 0x216754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216754u;
        // 0x216758: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21675Cu;
    // 0x21675c: 0x0  nop
    ctx->pc = 0x21675cu;
    // NOP
    ctx->pc = 0x216760u;
}
