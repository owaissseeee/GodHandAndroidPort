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

// Function: func_00225110
// Address: 0x225110 - 0x2256c8
void func_00225110_0x225110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00225110_0x225110");
#endif

    switch (ctx->pc) {
        case 0x225164u: goto label_225164;
        case 0x225198u: goto label_225198;
        case 0x2251b8u: goto label_2251b8;
        case 0x2251e4u: goto label_2251e4;
        case 0x2251fcu: goto label_2251fc;
        case 0x22521cu: goto label_22521c;
        case 0x225224u: goto label_225224;
        case 0x22524cu: goto label_22524c;
        case 0x225258u: goto label_225258;
        case 0x22526cu: goto label_22526c;
        case 0x225298u: goto label_225298;
        case 0x2252f0u: goto label_2252f0;
        case 0x22535cu: goto label_22535c;
        case 0x225368u: goto label_225368;
        case 0x2253e0u: goto label_2253e0;
        case 0x2254acu: goto label_2254ac;
        case 0x22553cu: goto label_22553c;
        case 0x22555cu: goto label_22555c;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255d8u: goto label_2255d8;
        case 0x2255e8u: goto label_2255e8;
        case 0x225614u: goto label_225614;
        case 0x225628u: goto label_225628;
        case 0x225638u: goto label_225638;
        case 0x225650u: goto label_225650;
        case 0x22565cu: goto label_22565c;
        case 0x225664u: goto label_225664;
        default: break;
    }

    ctx->pc = 0x225110u;

    // 0x225110: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x225110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x225114: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x225114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x225118: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x225118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x22511c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22511cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225120: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x225120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x225124: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x225124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x225128: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x225128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x22512c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x22512cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x225130: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x225130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x225134: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x225134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225138: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x225138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22513c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22513cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225140: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x225140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x225144: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x225144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x225148: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x225148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22514c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225150: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x225150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x225154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225158: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x225158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22515c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x22515Cu;
    SET_GPR_U32(ctx, 31, 0x225164u);
    ctx->pc = 0x225160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22515Cu;
    // 0x225160: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x22515Cu, 0x225164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225164u;
label_225164:
    // 0x225164: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x225164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x225168: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x225168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22516c: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x22516Cu;
    {
        const bool branch_taken_0x22516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22516Cu;
        // 0x225170: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22516c) {
            ctx->pc = 0x22565Cu;
            goto label_22565c;
        }
    }
    ctx->pc = 0x225174u;
    // 0x225174: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225178: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x225178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x22517c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225180: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225184: 0x800008  jr          $a0
    ctx->pc = 0x225184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22518Cu: goto label_22518c;
            case 0x2251F4u: goto label_2251f4;
            case 0x225260u: goto label_225260;
            case 0x2252D8u: goto label_2252d8;
            case 0x2255E0u: goto label_2255e0;
            case 0x225620u: goto label_225620;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22518Cu;
label_22518c:
    // 0x22518c: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x22518cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x225190: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225190u;
    SET_GPR_U32(ctx, 31, 0x225198u);
    ctx->pc = 0x225194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225190u;
    // 0x225194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225190u, 0x225198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225198u;
label_225198:
    // 0x225198: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x225198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22519c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x22519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2251a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2251a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2251a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2251a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251a8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2251a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2251ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2251acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251b0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2251B0u;
    SET_GPR_U32(ctx, 31, 0x2251B8u);
    ctx->pc = 0x2251B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251B0u;
    // 0x2251b4: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2251B0u, 0x2251B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251B8u;
label_2251b8:
    // 0x2251b8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2251b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2251bc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2251bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2251c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2251c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2251c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251c8: 0x8c450974  lw          $a1, 0x974($v0)
    ctx->pc = 0x2251c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2420)));
    // 0x2251cc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2251ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2251d0: 0x8c460978  lw          $a2, 0x978($v0)
    ctx->pc = 0x2251d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2424)));
    // 0x2251d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2251d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2251d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2251d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2251dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2251DCu;
    SET_GPR_U32(ctx, 31, 0x2251E4u);
    ctx->pc = 0x2251E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2251DCu;
    // 0x2251e0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2251DCu, 0x2251E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251E4u;
label_2251e4:
    // 0x2251e4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2251e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2251e8: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2251e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2251ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2251ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2251f0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2251f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2251f4:
    // 0x2251f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2251F4u;
    SET_GPR_U32(ctx, 31, 0x2251FCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2251F4u, 0x2251FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251FCu;
label_2251fc:
    // 0x2251fc: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2251fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225204: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x225208: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x225208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22520c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22520cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225210: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x225210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x225214: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x225214u;
    SET_GPR_U32(ctx, 31, 0x22521Cu);
    ctx->pc = 0x225218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225214u;
    // 0x225218: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x225214u, 0x22521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22521Cu;
label_22521c:
    // 0x22521c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22521Cu;
    SET_GPR_U32(ctx, 31, 0x225224u);
    ctx->pc = 0x225220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22521Cu;
    // 0x225220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22521Cu, 0x225224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225224u;
label_225224:
    // 0x225224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225224u;
    {
        const bool branch_taken_0x225224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225224) {
            ctx->pc = 0x225238u;
            goto label_225238;
        }
    }
    ctx->pc = 0x22522Cu;
    // 0x22522c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x22522cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x225230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x225234: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x225234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_225238:
    // 0x225238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22523c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22523cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225244: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225244u;
    SET_GPR_U32(ctx, 31, 0x22524Cu);
    ctx->pc = 0x225248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225244u;
    // 0x225248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225244u, 0x22524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22524Cu;
label_22524c:
    // 0x22524c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22524cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225250: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225250u;
    SET_GPR_U32(ctx, 31, 0x225258u);
    ctx->pc = 0x225254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225250u;
    // 0x225254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225250u, 0x225258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225258u;
label_225258:
    // 0x225258: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x225258u;
    {
        const bool branch_taken_0x225258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225258) {
            ctx->pc = 0x22565Cu;
            goto label_22565c;
        }
    }
    ctx->pc = 0x225260u;
label_225260:
    // 0x225260: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x225260u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225264: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225264u;
    SET_GPR_U32(ctx, 31, 0x22526Cu);
    ctx->pc = 0x225268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225264u;
    // 0x225268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225264u, 0x22526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22526Cu;
label_22526c:
    // 0x22526c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x225270: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x225270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225278: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x225278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22527c: 0x8c65097c  lw          $a1, 0x97C($v1)
    ctx->pc = 0x22527cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2428)));
    // 0x225280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225284: 0x8c660980  lw          $a2, 0x980($v1)
    ctx->pc = 0x225284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2432)));
    // 0x225288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22528c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x225290: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225290u;
    SET_GPR_U32(ctx, 31, 0x225298u);
    ctx->pc = 0x225294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225290u;
    // 0x225294: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225290u, 0x225298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225298u;
label_225298:
    // 0x225298: 0xc621170c  lwc1        $f1, 0x170C($s1)
    ctx->pc = 0x225298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22529c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2252a0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2252a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2252a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2252a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2252a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2252ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2252acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2252b0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2252b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2252b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2252b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2252b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2252bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2252bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2252c0: 0xe6340600  swc1        $f20, 0x600($s1)
    ctx->pc = 0x2252c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2252c4: 0xe6220588  swc1        $f2, 0x588($s1)
    ctx->pc = 0x2252c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    // 0x2252c8: 0xe6210584  swc1        $f1, 0x584($s1)
    ctx->pc = 0x2252c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
    // 0x2252cc: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2252ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2252d0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2252d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2252d4: 0xe6340580  swc1        $f20, 0x580($s1)
    ctx->pc = 0x2252d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
label_2252d8:
    // 0x2252d8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2252d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2252dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2252dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2252e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2252e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2252e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2252e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2252e8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2252E8u;
    SET_GPR_U32(ctx, 31, 0x2252F0u);
    ctx->pc = 0x2252ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2252E8u;
    // 0x2252ec: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2252E8u, 0x2252F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252F0u;
label_2252f0:
    // 0x2252f0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2252f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2252f4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2252f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2252f8: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x2252f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x2252fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2252fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225300: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x225300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x225304: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x225304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x225308: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x225308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22530c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22530cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x225310: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x225310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x225314: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x225314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x225318: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x225318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22531c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x225320: 0x26220330  addiu       $v0, $s1, 0x330
    ctx->pc = 0x225320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x225324: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x225328: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x225328u;
    {
        const bool branch_taken_0x225328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x22532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225328u;
        // 0x22532c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225328) {
            ctx->pc = 0x225344u;
            goto label_225344;
        }
    }
    ctx->pc = 0x225330u;
    // 0x225330: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x225330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225334: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x225334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x225338: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x225338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22533c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x22533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225340: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x225340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_225344:
    // 0x225344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225348: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22534c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225350: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x225350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x225354: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225354u;
    SET_GPR_U32(ctx, 31, 0x22535Cu);
    ctx->pc = 0x225358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225354u;
    // 0x225358: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225354u, 0x22535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22535Cu;
label_22535c:
    // 0x22535c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22535cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225360: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225360u;
    SET_GPR_U32(ctx, 31, 0x225368u);
    ctx->pc = 0x225364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225360u;
    // 0x225364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225360u, 0x225368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225368u;
label_225368:
    // 0x225368: 0xc6200584  lwc1        $f0, 0x584($s1)
    ctx->pc = 0x225368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22536c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x22536cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225370: 0x0  nop
    ctx->pc = 0x225370u;
    // NOP
    // 0x225374: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x225374u;
    {
        const bool branch_taken_0x225374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225374u;
        // 0x225378: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225374) {
            ctx->pc = 0x225454u;
            goto label_225454;
        }
    }
    ctx->pc = 0x22537Cu;
    // 0x22537c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22537cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225380: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x225380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x225384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225388: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x225388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22538c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x22538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x225390: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x225394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225398: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x225398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x22539c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22539cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2253a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2253a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2253a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2253a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253a8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2253a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2253ac: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x2253acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2253b0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2253b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2253b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2253b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2253b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2253bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2253bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2253c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2253c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2253c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2253c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2253c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2253c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2253cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2253ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2253d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2253d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2253d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2253d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2253d8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2253D8u;
    SET_GPR_U32(ctx, 31, 0x2253E0u);
    ctx->pc = 0x2253DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253D8u;
    // 0x2253dc: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2253D8u, 0x2253E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253E0u;
label_2253e0:
    // 0x2253e0: 0x54500041  bnel        $v0, $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2253E0u;
    {
        const bool branch_taken_0x2253e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2253e0) {
            ctx->pc = 0x2253E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2253E0u;
            // 0x2253e4: 0xc620170c  lwc1        $f0, 0x170C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2253E8u;
    // 0x2253e8: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2253e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2253ec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2253ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2253f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2253f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2253f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2253f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2253f8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2253fc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2253fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225400: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x225400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225408: 0x0  nop
    ctx->pc = 0x225408u;
    // NOP
    // 0x22540c: 0x45020036  bc1fl       . + 4 + (0x36 << 2)
    ctx->pc = 0x22540Cu;
    {
        const bool branch_taken_0x22540c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22540c) {
            ctx->pc = 0x225410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22540Cu;
            // 0x225410: 0xc620170c  lwc1        $f0, 0x170C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x225414u;
    // 0x225414: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x225414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x225418: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x225418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x22541c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x22541cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225420: 0xc620170c  lwc1        $f0, 0x170C($s1)
    ctx->pc = 0x225420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225424: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x225424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x225428: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x225428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x22542c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22542cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x225430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x225434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x225438: 0xe6210600  swc1        $f1, 0x600($s1)
    ctx->pc = 0x225438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22543c: 0xe6200584  swc1        $f0, 0x584($s1)
    ctx->pc = 0x22543cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
    // 0x225440: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x225440u;
    {
        const bool branch_taken_0x225440 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x225444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225440u;
        // 0x225444: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225440) {
            ctx->pc = 0x2254E4u;
            goto label_2254e4;
        }
    }
    ctx->pc = 0x225448u;
    // 0x225448: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22544c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22544Cu;
    {
        const bool branch_taken_0x22544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22544Cu;
        // 0x225450: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22544c) {
            ctx->pc = 0x2254E4u;
            goto label_2254e4;
        }
    }
    ctx->pc = 0x225454u;
label_225454:
    // 0x225454: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x225454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x225458: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x225458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x22545c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22545cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225460: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x225460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x225464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225468: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x225468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22546c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225470: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225474: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x225474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x225478: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x225478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22547c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22547cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x225480: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x225480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x225484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x225484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x225488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22548c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x225490: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x225490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225494: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x225494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x225498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22549c: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x22549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2254a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2254a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2254a4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2254A4u;
    SET_GPR_U32(ctx, 31, 0x2254ACu);
    ctx->pc = 0x2254A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2254A4u;
    // 0x2254a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2254A4u, 0x2254ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254ACu;
label_2254ac:
    // 0x2254ac: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2254ACu;
    {
        const bool branch_taken_0x2254ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2254ac) {
            ctx->pc = 0x2254B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254ACu;
            // 0x2254b0: 0xc620170c  lwc1        $f0, 0x170C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2254B4u;
    // 0x2254b4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x2254b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2254b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2254b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2254bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2254bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2254c0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2254c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2254c4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2254c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2254c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2254c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2254cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2254ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2254d0: 0x0  nop
    ctx->pc = 0x2254d0u;
    // NOP
    // 0x2254d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2254D4u;
    {
        const bool branch_taken_0x2254d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2254d4) {
            ctx->pc = 0x2254D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254D4u;
            // 0x2254d8: 0xc620170c  lwc1        $f0, 0x170C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254E8u;
            goto label_2254e8;
        }
    }
    ctx->pc = 0x2254DCu;
    // 0x2254dc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2254dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2254e0: 0xe6350584  swc1        $f21, 0x584($s1)
    ctx->pc = 0x2254e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
label_2254e4:
    // 0x2254e4: 0xc620170c  lwc1        $f0, 0x170C($s1)
    ctx->pc = 0x2254e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2254e8:
    // 0x2254e8: 0xc62405a8  lwc1        $f4, 0x5A8($s1)
    ctx->pc = 0x2254e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2254ec: 0xc6210584  lwc1        $f1, 0x584($s1)
    ctx->pc = 0x2254ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2254f0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2254f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2254f4: 0xc6230600  lwc1        $f3, 0x600($s1)
    ctx->pc = 0x2254f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2254f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2254f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2254fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2254fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x225500: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x225500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225504: 0x0  nop
    ctx->pc = 0x225504u;
    // NOP
    // 0x225508: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x225508u;
    {
        const bool branch_taken_0x225508 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225508u;
        // 0x22550c: 0xe6210584  swc1        $f1, 0x584($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x225508) {
            ctx->pc = 0x22555Cu;
            goto label_22555c;
        }
    }
    ctx->pc = 0x225510u;
    // 0x225510: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x225510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225514: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x225514u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x225518: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x225518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x22551c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22551cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225520: 0x0  nop
    ctx->pc = 0x225520u;
    // NOP
    // 0x225524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x225524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225528: 0x0  nop
    ctx->pc = 0x225528u;
    // NOP
    // 0x22552c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22552Cu;
    {
        const bool branch_taken_0x22552c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22552Cu;
        // 0x225530: 0xe6220600  swc1        $f2, 0x600($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22552c) {
            ctx->pc = 0x22555Cu;
            goto label_22555c;
        }
    }
    ctx->pc = 0x225534u;
    // 0x225534: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x225534u;
    SET_GPR_U32(ctx, 31, 0x22553Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x225534u, 0x22553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22553Cu;
label_22553c:
    // 0x22553c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225544: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x225548: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x225548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22554c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22554cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225550: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x225554: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x225554u;
    SET_GPR_U32(ctx, 31, 0x22555Cu);
    ctx->pc = 0x225558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225554u;
    // 0x225558: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x225554u, 0x22555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22555Cu;
label_22555c:
    // 0x22555c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x22555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225560: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x225560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x225564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x225564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225568: 0x0  nop
    ctx->pc = 0x225568u;
    // NOP
    // 0x22556c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22556cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225570: 0x0  nop
    ctx->pc = 0x225570u;
    // NOP
    // 0x225574: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x225574u;
    {
        const bool branch_taken_0x225574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x225578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225574u;
        // 0x225578: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225574) {
            ctx->pc = 0x225598u;
            goto label_225598;
        }
    }
    ctx->pc = 0x22557Cu;
    // 0x22557c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x22557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x225580: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x225580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225584: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225584u;
    {
        const bool branch_taken_0x225584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225584u;
        // 0x225588: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225584) {
            ctx->pc = 0x225598u;
            goto label_225598;
        }
    }
    ctx->pc = 0x22558Cu;
    // 0x22558c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225590: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x225590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x225594: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_225598:
    // 0x225598: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x225598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22559c: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x22559Cu;
    SET_GPR_U32(ctx, 31, 0x2255A4u);
    ctx->pc = 0x2255A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22559Cu;
    // 0x2255a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x22559Cu, 0x2255A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255A4u;
label_2255a4:
    // 0x2255a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2255A4u;
    {
        const bool branch_taken_0x2255a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2255A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255A4u;
        // 0x2255a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255a4) {
            ctx->pc = 0x2255BCu;
            goto label_2255bc;
        }
    }
    ctx->pc = 0x2255ACu;
    // 0x2255ac: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2255ACu;
    SET_GPR_U32(ctx, 31, 0x2255B4u);
    ctx->pc = 0x2255B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255ACu;
    // 0x2255b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2255ACu, 0x2255B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255B4u;
label_2255b4:
    // 0x2255b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2255B4u;
    {
        const bool branch_taken_0x2255b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2255B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255B4u;
        // 0x2255b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255b4) {
            ctx->pc = 0x2255C0u;
            goto label_2255c0;
        }
    }
    ctx->pc = 0x2255BCu;
label_2255bc:
    // 0x2255bc: 0xa2221864  sb          $v0, 0x1864($s1)
    ctx->pc = 0x2255bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 2));
label_2255c0:
    // 0x2255c0: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x2255c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x2255c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2255C4u;
    {
        const bool branch_taken_0x2255c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2255c4) {
            ctx->pc = 0x2255C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2255C4u;
            // 0x2255c8: 0xae2005f0  sw          $zero, 0x5F0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2255CCu;
            goto label_2255cc;
        }
    }
    ctx->pc = 0x2255CCu;
label_2255cc:
    // 0x2255cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2255ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255d0: 0xc0989d4  jal         func_262750
    ctx->pc = 0x2255D0u;
    SET_GPR_U32(ctx, 31, 0x2255D8u);
    ctx->pc = 0x2255D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255D0u;
    // 0x2255d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x2255D0u, 0x2255D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255D8u;
label_2255d8:
    // 0x2255d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2255D8u;
    {
        const bool branch_taken_0x2255d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2255d8) {
            ctx->pc = 0x22565Cu;
            goto label_22565c;
        }
    }
    ctx->pc = 0x2255E0u;
label_2255e0:
    // 0x2255e0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2255E0u;
    SET_GPR_U32(ctx, 31, 0x2255E8u);
    ctx->pc = 0x2255E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2255E0u;
    // 0x2255e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2255E0u, 0x2255E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2255E8u;
label_2255e8:
    // 0x2255e8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2255e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2255ec: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2255ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2255f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2255f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2255f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2255f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2255f8: 0x8c650984  lw          $a1, 0x984($v1)
    ctx->pc = 0x2255f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2436)));
    // 0x2255fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2255fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225600: 0x8c660988  lw          $a2, 0x988($v1)
    ctx->pc = 0x225600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2440)));
    // 0x225604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x225604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225608: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x225608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22560c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22560Cu;
    SET_GPR_U32(ctx, 31, 0x225614u);
    ctx->pc = 0x225610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22560Cu;
    // 0x225610: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22560Cu, 0x225614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225614u;
label_225614:
    // 0x225614: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x225614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x225618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x225618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22561c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22561cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_225620:
    // 0x225620: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225620u;
    SET_GPR_U32(ctx, 31, 0x225628u);
    ctx->pc = 0x225624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225620u;
    // 0x225624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225620u, 0x225628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225628u;
label_225628:
    // 0x225628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225628u;
    {
        const bool branch_taken_0x225628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225628u;
        // 0x22562c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225628) {
            ctx->pc = 0x225640u;
            goto label_225640;
        }
    }
    ctx->pc = 0x225630u;
    // 0x225630: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x225630u;
    SET_GPR_U32(ctx, 31, 0x225638u);
    ctx->pc = 0x225634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225630u;
    // 0x225634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x225630u, 0x225638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225638u;
label_225638:
    // 0x225638: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x225638u;
    {
        const bool branch_taken_0x225638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225638u;
        // 0x22563c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225638) {
            ctx->pc = 0x2256ACu;
            goto label_2256ac;
        }
    }
    ctx->pc = 0x225640u;
label_225640:
    // 0x225640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x225644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x225644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225648: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225648u;
    SET_GPR_U32(ctx, 31, 0x225650u);
    ctx->pc = 0x22564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225648u;
    // 0x22564c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225648u, 0x225650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225650u;
label_225650:
    // 0x225650: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x225650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225654: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225654u;
    SET_GPR_U32(ctx, 31, 0x22565Cu);
    ctx->pc = 0x225658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225654u;
    // 0x225658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225654u, 0x22565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22565Cu;
label_22565c:
    // 0x22565c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22565Cu;
    SET_GPR_U32(ctx, 31, 0x225664u);
    ctx->pc = 0x225660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22565Cu;
    // 0x225660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22565Cu, 0x225664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225664u;
label_225664:
    // 0x225664: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x225664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x225668: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x225668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22566c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22566Cu;
    {
        const bool branch_taken_0x22566c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22566Cu;
        // 0x225670: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22566c) {
            ctx->pc = 0x22568Cu;
            goto label_22568c;
        }
    }
    ctx->pc = 0x225674u;
    // 0x225674: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x225674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x225678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22567c: 0xae2316f8  sw          $v1, 0x16F8($s1)
    ctx->pc = 0x22567cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5880), GPR_U32(ctx, 3));
    // 0x225680: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x225680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x225684: 0xae2405fc  sw          $a0, 0x5FC($s1)
    ctx->pc = 0x225684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 4));
    // 0x225688: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x225688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_22568c:
    // 0x22568c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x225690: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225690u;
    {
        const bool branch_taken_0x225690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225690u;
        // 0x225694: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225690) {
            ctx->pc = 0x2256ACu;
            goto label_2256ac;
        }
    }
    ctx->pc = 0x225698u;
    // 0x225698: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x225698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22569c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2256a0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2256a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2256a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2256a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2256a8: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2256a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2256ac:
    // 0x2256ac: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2256acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2256b0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2256b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2256b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2256b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2256b8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2256b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2256bc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2256bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2256c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2256C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2256C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256C0u;
        // 0x2256c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2256C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2256C8u;
}
