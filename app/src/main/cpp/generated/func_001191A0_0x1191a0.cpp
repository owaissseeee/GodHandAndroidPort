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

// Function: func_001191A0
// Address: 0x1191a0 - 0x119750
void func_001191A0_0x1191a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001191A0_0x1191a0");
#endif

    switch (ctx->pc) {
        case 0x1191f8u: goto label_1191f8;
        case 0x119208u: goto label_119208;
        case 0x119214u: goto label_119214;
        case 0x119254u: goto label_119254;
        case 0x11925cu: goto label_11925c;
        case 0x119300u: goto label_119300;
        case 0x119334u: goto label_119334;
        case 0x1193a4u: goto label_1193a4;
        case 0x1193bcu: goto label_1193bc;
        case 0x1193ccu: goto label_1193cc;
        case 0x1193e8u: goto label_1193e8;
        case 0x11940cu: goto label_11940c;
        case 0x119414u: goto label_119414;
        case 0x11943cu: goto label_11943c;
        case 0x119464u: goto label_119464;
        case 0x119634u: goto label_119634;
        case 0x11963cu: goto label_11963c;
        case 0x119644u: goto label_119644;
        case 0x119670u: goto label_119670;
        case 0x11967cu: goto label_11967c;
        case 0x119698u: goto label_119698;
        case 0x1196e4u: goto label_1196e4;
        case 0x1196ecu: goto label_1196ec;
        case 0x119700u: goto label_119700;
        case 0x119724u: goto label_119724;
        case 0x119730u: goto label_119730;
        default: break;
    }

    ctx->pc = 0x1191a0u;

    // 0x1191a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1191a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1191a4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1191a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1191a8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1191a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1191ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1191acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1191b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1191b4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1191b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1191b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1191b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1191bc: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x1191bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x1191c0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1191c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1191c4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1191c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1191c8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1191cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1191ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1191d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1191d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1191d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1191d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1191d8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1191d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1191dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1191dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1191e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1191e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191e4: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1191e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1191e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1191e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191ec: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1191ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1191f0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1191F0u;
    SET_GPR_U32(ctx, 31, 0x1191F8u);
    ctx->pc = 0x1191F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1191F0u;
    // 0x1191f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1191F0u, 0x1191F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191F8u;
label_1191f8:
    // 0x1191f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1191f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1191fc: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1191fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x119200: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x119200u;
    SET_GPR_U32(ctx, 31, 0x119208u);
    ctx->pc = 0x119204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119200u;
    // 0x119204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x119200u, 0x119208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119208u;
label_119208:
    // 0x119208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11920c: 0xc0a480c  jal         func_292030
    ctx->pc = 0x11920Cu;
    SET_GPR_U32(ctx, 31, 0x119214u);
    ctx->pc = 0x119210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11920Cu;
    // 0x119210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x11920Cu, 0x119214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119214u;
label_119214:
    // 0x119214: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x119214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x119218: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x119218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x11921c: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x11921cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119224: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x119224u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x119228: 0x10800141  beqz        $a0, . + 4 + (0x141 << 2)
    ctx->pc = 0x119228u;
    {
        const bool branch_taken_0x119228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119228u;
        // 0x11922c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119228) {
            ctx->pc = 0x119730u;
            goto label_119730;
        }
    }
    ctx->pc = 0x119230u;
    // 0x119230: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x119230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x119234: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x119234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x119238: 0x2442c470  addiu       $v0, $v0, -0x3B90
    ctx->pc = 0x119238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952048));
    // 0x11923c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119240: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x119240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119244: 0x800008  jr          $a0
    ctx->pc = 0x119244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11924Cu: goto label_11924c;
            case 0x1193E0u: goto label_1193e0;
            case 0x119428u: goto label_119428;
            case 0x11945Cu: goto label_11945c;
            case 0x119684u: goto label_119684;
            case 0x1196ACu: goto label_1196ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119244u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11924Cu;
label_11924c:
    // 0x11924c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11924Cu;
    SET_GPR_U32(ctx, 31, 0x119254u);
    ctx->pc = 0x119250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11924Cu;
    // 0x119250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11924Cu, 0x119254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119254u;
label_119254:
    // 0x119254: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x119254u;
    SET_GPR_U32(ctx, 31, 0x11925Cu);
    ctx->pc = 0x119258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119254u;
    // 0x119258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x119254u, 0x11925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11925Cu;
label_11925c:
    // 0x11925c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x119260: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x119260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x119264: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x119264u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x119268: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x119268u;
    {
        const bool branch_taken_0x119268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119268u;
        // 0x11926c: 0x24020602  addiu       $v0, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119268) {
            ctx->pc = 0x1192A0u;
            goto label_1192a0;
        }
    }
    ctx->pc = 0x119270u;
    // 0x119270: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x119270u;
    {
        const bool branch_taken_0x119270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x119274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119270u;
        // 0x119274: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119270) {
            ctx->pc = 0x1192B4u;
            goto label_1192b4;
        }
    }
    ctx->pc = 0x119278u;
    // 0x119278: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11927c: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11927Cu;
    {
        const bool branch_taken_0x11927c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11927c) {
            ctx->pc = 0x119280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11927Cu;
            // 0x119280: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1192D8u;
            goto label_1192d8;
        }
    }
    ctx->pc = 0x119284u;
    // 0x119284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x119284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119288: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x119288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11928c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119290: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x119290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x119294: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x119294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119298u;
    {
        const bool branch_taken_0x119298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119298u;
        // 0x11929c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119298) {
            ctx->pc = 0x1192D4u;
            goto label_1192d4;
        }
    }
    ctx->pc = 0x1192A0u;
label_1192a0:
    // 0x1192a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1192a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1192a4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1192a8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1192a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1192ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1192ACu;
    {
        const bool branch_taken_0x1192ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192ACu;
        // 0x1192b0: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192ac) {
            ctx->pc = 0x1192D4u;
            goto label_1192d4;
        }
    }
    ctx->pc = 0x1192B4u;
label_1192b4:
    // 0x1192b4: 0x3c01c159  lui         $at, 0xC159
    ctx->pc = 0x1192b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49497 << 16));
    // 0x1192b8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1192b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1192bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1192bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1192c0: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x1192c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x1192c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1192c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1192c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1192c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1192cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1192ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1192d0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1192d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1192d4:
    // 0x1192d4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1192d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1192d8:
    // 0x1192d8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1192D8u;
    {
        const bool branch_taken_0x1192d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1192DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192D8u;
        // 0x1192dc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192d8) {
            ctx->pc = 0x1192F4u;
            goto label_1192f4;
        }
    }
    ctx->pc = 0x1192E0u;
    // 0x1192e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1192e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1192e4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1192e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1192e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1192e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1192ec: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1192ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1192f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1192f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1192f4:
    // 0x1192f4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1192f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1192f8: 0xc051e62  jal         func_147988
    ctx->pc = 0x1192F8u;
    SET_GPR_U32(ctx, 31, 0x119300u);
    ctx->pc = 0x1192FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192F8u;
    // 0x1192fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1192F8u, 0x119300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119300u;
label_119300:
    // 0x119300: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x119304: 0x3421d289  ori         $at, $at, 0xD289
    ctx->pc = 0x119304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53897);
    // 0x119308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11930c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x119310: 0x3c01c08c  lui         $at, 0xC08C
    ctx->pc = 0x119310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49292 << 16));
    // 0x119314: 0x34217c85  ori         $at, $at, 0x7C85
    ctx->pc = 0x119314u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31877);
    // 0x119318: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11931c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119320: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119324: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x119324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x119328: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x119328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11932c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11932Cu;
    SET_GPR_U32(ctx, 31, 0x119334u);
    ctx->pc = 0x119330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11932Cu;
    // 0x119330: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11932Cu, 0x119334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119334u;
label_119334:
    // 0x119334: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x119338: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11933c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x11933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x119340: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x119340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119344: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x119344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x119348: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x119348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11934c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11934cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119350: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119354: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x119354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x119358: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x119358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11935c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11935cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x119360: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x119360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119364: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x119368: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119368u;
    {
        const bool branch_taken_0x119368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119368u;
        // 0x11936c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119368) {
            ctx->pc = 0x119384u;
            goto label_119384;
        }
    }
    ctx->pc = 0x119370u;
    // 0x119370: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x119370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x119374: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x119374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119378: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x119378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11937c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119380: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x119380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_119384:
    // 0x119384: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x119384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x119388: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11938c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11938cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119390: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x119390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119394: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x119394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x119398: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x119398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11939c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11939Cu;
    SET_GPR_U32(ctx, 31, 0x1193A4u);
    ctx->pc = 0x1193A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11939Cu;
    // 0x1193a0: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11939Cu, 0x1193A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193A4u;
label_1193a4:
    // 0x1193a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1193a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1193a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1193a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193ac: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x1193acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    // 0x1193b0: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x1193b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1193b4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1193B4u;
    SET_GPR_U32(ctx, 31, 0x1193BCu);
    ctx->pc = 0x1193B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193B4u;
    // 0x1193b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1193B4u, 0x1193BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193BCu;
label_1193bc:
    // 0x1193bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1193c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1193c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1193c4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1193C4u;
    SET_GPR_U32(ctx, 31, 0x1193CCu);
    ctx->pc = 0x1193C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193C4u;
    // 0x1193c8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1193C4u, 0x1193CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193CCu;
label_1193cc:
    // 0x1193cc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1193ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1193d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1193d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1193d4: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x1193d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x1193d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1193d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1193dc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1193dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1193e0:
    // 0x1193e0: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x1193E0u;
    SET_GPR_U32(ctx, 31, 0x1193E8u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x1193E0u, 0x1193E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193E8u;
label_1193e8:
    // 0x1193e8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1193E8u;
    {
        const bool branch_taken_0x1193e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193E8u;
        // 0x1193ec: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193e8) {
            ctx->pc = 0x119404u;
            goto label_119404;
        }
    }
    ctx->pc = 0x1193F0u;
    // 0x1193f0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1193f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1193f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1193f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1193f8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1193f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1193fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1193fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119400: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x119400u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_119404:
    // 0x119404: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119404u;
    SET_GPR_U32(ctx, 31, 0x11940Cu);
    ctx->pc = 0x119408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119404u;
    // 0x119408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119404u, 0x11940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11940Cu;
label_11940c:
    // 0x11940c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11940Cu;
    SET_GPR_U32(ctx, 31, 0x119414u);
    ctx->pc = 0x119410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11940Cu;
    // 0x119410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11940Cu, 0x119414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119414u;
label_119414:
    // 0x119414: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x119414u;
    {
        const bool branch_taken_0x119414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119414) {
            ctx->pc = 0x11965Cu;
            goto label_11965c;
        }
    }
    ctx->pc = 0x11941Cu;
    // 0x11941c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11941cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119420: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x119420u;
    {
        const bool branch_taken_0x119420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119420u;
        // 0x119424: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119420) {
            ctx->pc = 0x119658u;
            goto label_119658;
        }
    }
    ctx->pc = 0x119428u;
label_119428:
    // 0x119428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11942c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119430: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x119430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x119434: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119434u;
    SET_GPR_U32(ctx, 31, 0x11943Cu);
    ctx->pc = 0x119438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119434u;
    // 0x119438: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119434u, 0x11943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11943Cu;
label_11943c:
    // 0x11943c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11943cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x119440: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x119440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x119444: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x119444u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x119448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x119448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11944c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11944cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x119450: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x119450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x119454: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x119454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x119458: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x119458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_11945c:
    // 0x11945c: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x11945Cu;
    SET_GPR_U32(ctx, 31, 0x119464u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x11945Cu, 0x119464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119464u;
label_119464:
    // 0x119464: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x119464u;
    {
        const bool branch_taken_0x119464 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119464u;
        // 0x119468: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119464) {
            ctx->pc = 0x119480u;
            goto label_119480;
        }
    }
    ctx->pc = 0x11946Cu;
    // 0x11946c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119470: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x119470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119474: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x119474u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119478: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11947c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11947cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_119480:
    // 0x119480: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x119480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x119484: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119484u;
    {
        const bool branch_taken_0x119484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119484u;
        // 0x119488: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119484) {
            ctx->pc = 0x119494u;
            goto label_119494;
        }
    }
    ctx->pc = 0x11948Cu;
    // 0x11948c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119490: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x119490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_119494:
    // 0x119494: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x119494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x119498: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119498u;
    {
        const bool branch_taken_0x119498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119498u;
        // 0x11949c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119498) {
            ctx->pc = 0x1194A4u;
            goto label_1194a4;
        }
    }
    ctx->pc = 0x1194A0u;
    // 0x1194a0: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x1194a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_1194a4:
    // 0x1194a4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1194a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x1194a8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1194a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1194ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1194acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1194b0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x1194b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x1194b4: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x1194b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x1194b8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1194b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1194bc: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1194BCu;
    {
        const bool branch_taken_0x1194bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1194bc) {
            ctx->pc = 0x1194C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1194BCu;
            // 0x1194c0: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119580u;
            goto label_119580;
        }
    }
    ctx->pc = 0x1194C4u;
    // 0x1194c4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x1194c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1194c8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1194c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1194cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1194CCu;
    {
        const bool branch_taken_0x1194cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194CCu;
        // 0x1194d0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194cc) {
            ctx->pc = 0x1194ECu;
            goto label_1194ec;
        }
    }
    ctx->pc = 0x1194D4u;
    // 0x1194d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1194d8: 0x2442c490  addiu       $v0, $v0, -0x3B70
    ctx->pc = 0x1194d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
    // 0x1194dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1194dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1194e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1194e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1194e4: 0x800008  jr          $a0
    ctx->pc = 0x1194E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1194ECu: goto label_1194ec;
            case 0x1194F4u: goto label_1194f4;
            case 0x1194FCu: goto label_1194fc;
            case 0x119504u: goto label_119504;
            case 0x11950Cu: goto label_11950c;
            case 0x119514u: goto label_119514;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1194ECu;
label_1194ec:
    // 0x1194ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1194ECu;
    {
        const bool branch_taken_0x1194ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194ECu;
        // 0x1194f0: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194ec) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x1194F4u;
label_1194f4:
    // 0x1194f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1194F4u;
    {
        const bool branch_taken_0x1194f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F4u;
        // 0x1194f8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194f4) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x1194FCu;
label_1194fc:
    // 0x1194fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1194FCu;
    {
        const bool branch_taken_0x1194fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194FCu;
        // 0x119500: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194fc) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x119504u;
label_119504:
    // 0x119504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x119504u;
    {
        const bool branch_taken_0x119504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119504u;
        // 0x119508: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119504) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x11950Cu;
label_11950c:
    // 0x11950c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11950Cu;
    {
        const bool branch_taken_0x11950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11950Cu;
        // 0x119510: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11950c) {
            ctx->pc = 0x119518u;
            goto label_119518;
        }
    }
    ctx->pc = 0x119514u;
label_119514:
    // 0x119514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x119514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_119518:
    // 0x119518: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x119518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11951c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x119520: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119520u;
    {
        const bool branch_taken_0x119520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119520) {
            ctx->pc = 0x119524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119520u;
            // 0x119524: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119538u;
            goto label_119538;
        }
    }
    ctx->pc = 0x119528u;
    // 0x119528: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11952c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119530: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119534: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x119534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_119538:
    // 0x119538: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11953c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11953Cu;
    {
        const bool branch_taken_0x11953c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11953Cu;
        // 0x119540: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11953c) {
            ctx->pc = 0x119550u;
            goto label_119550;
        }
    }
    ctx->pc = 0x119544u;
    // 0x119544: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119548: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x119548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x11954c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_119550:
    // 0x119550: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x119550u;
    {
        const bool branch_taken_0x119550 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x119550) {
            ctx->pc = 0x119554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119550u;
            // 0x119554: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119558u;
            goto label_119558;
        }
    }
    ctx->pc = 0x119558u;
label_119558:
    // 0x119558: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11955c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x11955cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x119560: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119560u;
    {
        const bool branch_taken_0x119560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119560u;
        // 0x119564: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119560) {
            ctx->pc = 0x119574u;
            goto label_119574;
        }
    }
    ctx->pc = 0x119568u;
    // 0x119568: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11956c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11956cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x119570: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x119570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_119574:
    // 0x119574: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x119574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x119578: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x119578u;
    {
        const bool branch_taken_0x119578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119578u;
        // 0x11957c: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119578) {
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x119580u;
label_119580:
    // 0x119580: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119580u;
    {
        const bool branch_taken_0x119580 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x119580) {
            ctx->pc = 0x119584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119580u;
            // 0x119584: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1195A8u;
            goto label_1195a8;
        }
    }
    ctx->pc = 0x119588u;
    // 0x119588: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11958c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x119590: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x119590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x119594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119598: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119598u;
    {
        const bool branch_taken_0x119598 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119598u;
        // 0x11959c: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119598) {
            ctx->pc = 0x1195A4u;
            goto label_1195a4;
        }
    }
    ctx->pc = 0x1195A0u;
    // 0x1195a0: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x1195a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_1195a4:
    // 0x1195a4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x1195a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_1195a8:
    // 0x1195a8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1195a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1195ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1195ACu;
    {
        const bool branch_taken_0x1195ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195ACu;
        // 0x1195b0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195ac) {
            ctx->pc = 0x1195CCu;
            goto label_1195cc;
        }
    }
    ctx->pc = 0x1195B4u;
    // 0x1195b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1195b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1195b8: 0x2442c4b0  addiu       $v0, $v0, -0x3B50
    ctx->pc = 0x1195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952112));
    // 0x1195bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1195bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1195c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1195c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1195c4: 0x800008  jr          $a0
    ctx->pc = 0x1195C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1195CCu: goto label_1195cc;
            case 0x1195E0u: goto label_1195e0;
            case 0x1195F0u: goto label_1195f0;
            case 0x119604u: goto label_119604;
            case 0x119618u: goto label_119618;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1195CCu;
label_1195cc:
    // 0x1195cc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1195ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1195d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1195d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1195d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1195d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1195d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1195D8u;
    {
        const bool branch_taken_0x1195d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195D8u;
        // 0x1195dc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d8) {
            ctx->pc = 0x119628u;
            goto label_119628;
        }
    }
    ctx->pc = 0x1195E0u;
label_1195e0:
    // 0x1195e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1195e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1195e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1195e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1195e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1195E8u;
    {
        const bool branch_taken_0x1195e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195E8u;
        // 0x1195ec: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195e8) {
            ctx->pc = 0x119628u;
            goto label_119628;
        }
    }
    ctx->pc = 0x1195F0u;
label_1195f0:
    // 0x1195f0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1195f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1195f4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1195f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1195f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1195f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1195fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1195FCu;
    {
        const bool branch_taken_0x1195fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195FCu;
        // 0x119600: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195fc) {
            ctx->pc = 0x119628u;
            goto label_119628;
        }
    }
    ctx->pc = 0x119604u;
label_119604:
    // 0x119604: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x119604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x119608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x119608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11960c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11960cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119610: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x119610u;
    {
        const bool branch_taken_0x119610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119610u;
        // 0x119614: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x119610) {
            ctx->pc = 0x119628u;
            goto label_119628;
        }
    }
    ctx->pc = 0x119618u;
label_119618:
    // 0x119618: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x119618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11961c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11961cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119620: 0x0  nop
    ctx->pc = 0x119620u;
    // NOP
    // 0x119624: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x119624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_119628:
    // 0x119628: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x119628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11962c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x11962Cu;
    SET_GPR_U32(ctx, 31, 0x119634u);
    ctx->pc = 0x119630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11962Cu;
    // 0x119630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x11962Cu, 0x119634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119634u;
label_119634:
    // 0x119634: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x119634u;
    SET_GPR_U32(ctx, 31, 0x11963Cu);
    ctx->pc = 0x119638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119634u;
    // 0x119638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x119634u, 0x11963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11963Cu;
label_11963c:
    // 0x11963c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11963Cu;
    SET_GPR_U32(ctx, 31, 0x119644u);
    ctx->pc = 0x119640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11963Cu;
    // 0x119640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11963Cu, 0x119644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119644u;
label_119644:
    // 0x119644: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119644u;
    {
        const bool branch_taken_0x119644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119644) {
            ctx->pc = 0x11965Cu;
            goto label_11965c;
        }
    }
    ctx->pc = 0x11964Cu;
    // 0x11964c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x11964cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x119650: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119650u;
    {
        const bool branch_taken_0x119650 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x119654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119650u;
        // 0x119654: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119650) {
            ctx->pc = 0x11965Cu;
            goto label_11965c;
        }
    }
    ctx->pc = 0x119658u;
label_119658:
    // 0x119658: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x119658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11965c:
    // 0x11965c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11965cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119660: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119668: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x119668u;
    SET_GPR_U32(ctx, 31, 0x119670u);
    ctx->pc = 0x11966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119668u;
    // 0x11966c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x119668u, 0x119670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119670u;
label_119670:
    // 0x119670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119674: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119674u;
    SET_GPR_U32(ctx, 31, 0x11967Cu);
    ctx->pc = 0x119678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119674u;
    // 0x119678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119674u, 0x11967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11967Cu;
label_11967c:
    // 0x11967c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11967Cu;
    {
        const bool branch_taken_0x11967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11967Cu;
        // 0x119680: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11967c) {
            ctx->pc = 0x119734u;
            goto label_119734;
        }
    }
    ctx->pc = 0x119684u;
label_119684:
    // 0x119684: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x119688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11968c: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x119690: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x119690u;
    SET_GPR_U32(ctx, 31, 0x119698u);
    ctx->pc = 0x119694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119690u;
    // 0x119694: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x119690u, 0x119698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119698u;
label_119698:
    // 0x119698: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x119698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11969c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1196a0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x1196a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1196a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1196a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1196a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1196a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1196ac:
    // 0x1196ac: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x1196b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1196B0u;
    {
        const bool branch_taken_0x1196b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196B0u;
        // 0x1196b4: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b0) {
            ctx->pc = 0x1196DCu;
            goto label_1196dc;
        }
    }
    ctx->pc = 0x1196B8u;
    // 0x1196b8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1196B8u;
    {
        const bool branch_taken_0x1196b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196B8u;
        // 0x1196bc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196b8) {
            ctx->pc = 0x1196DCu;
            goto label_1196dc;
        }
    }
    ctx->pc = 0x1196C0u;
    // 0x1196c0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1196c4: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x1196c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1196c8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x1196cc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1196ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1196d0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1196d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196d4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1196d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1196d8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1196d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1196dc:
    // 0x1196dc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1196DCu;
    SET_GPR_U32(ctx, 31, 0x1196E4u);
    ctx->pc = 0x1196E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196DCu;
    // 0x1196e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1196DCu, 0x1196E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196E4u;
label_1196e4:
    // 0x1196e4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1196E4u;
    SET_GPR_U32(ctx, 31, 0x1196ECu);
    ctx->pc = 0x1196E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196E4u;
    // 0x1196e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1196E4u, 0x1196ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1196ECu;
label_1196ec:
    // 0x1196ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1196ECu;
    {
        const bool branch_taken_0x1196ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196ECu;
        // 0x1196f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196ec) {
            ctx->pc = 0x119710u;
            goto label_119710;
        }
    }
    ctx->pc = 0x1196F4u;
    // 0x1196f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1196F8u;
    SET_GPR_U32(ctx, 31, 0x119700u);
    ctx->pc = 0x1196FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196F8u;
    // 0x1196fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1196F8u, 0x119700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119700u;
label_119700:
    // 0x119700: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x119700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x119704: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x119704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x119708: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x119708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11970c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11970cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_119710:
    // 0x119710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119714: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11971c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11971Cu;
    SET_GPR_U32(ctx, 31, 0x119724u);
    ctx->pc = 0x119720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11971Cu;
    // 0x119720: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11971Cu, 0x119724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119724u;
label_119724:
    // 0x119724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119728: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119728u;
    SET_GPR_U32(ctx, 31, 0x119730u);
    ctx->pc = 0x11972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119728u;
    // 0x11972c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119728u, 0x119730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119730u;
label_119730:
    // 0x119730: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x119730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_119734:
    // 0x119734: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x119734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x119738: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x119738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11973c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119740: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x119740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119744: 0x3e00008  jr          $ra
    ctx->pc = 0x119744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119744u;
        // 0x119748: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11974Cu;
    // 0x11974c: 0x0  nop
    ctx->pc = 0x11974cu;
    // NOP
    ctx->pc = 0x119750u;
}
