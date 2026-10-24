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

// Function: func_002373B0
// Address: 0x2373b0 - 0x2376c0
void func_002373B0_0x2373b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002373B0_0x2373b0");
#endif

    switch (ctx->pc) {
        case 0x2373b0u: goto label_2373b0;
        case 0x2373b4u: goto label_2373b4;
        case 0x2373b8u: goto label_2373b8;
        case 0x2373bcu: goto label_2373bc;
        case 0x2373c0u: goto label_2373c0;
        case 0x2373c4u: goto label_2373c4;
        case 0x2373c8u: goto label_2373c8;
        case 0x2373ccu: goto label_2373cc;
        case 0x2373d0u: goto label_2373d0;
        case 0x2373d4u: goto label_2373d4;
        case 0x2373d8u: goto label_2373d8;
        case 0x2373dcu: goto label_2373dc;
        case 0x2373e0u: goto label_2373e0;
        case 0x2373e4u: goto label_2373e4;
        case 0x2373e8u: goto label_2373e8;
        case 0x2373ecu: goto label_2373ec;
        case 0x2373f0u: goto label_2373f0;
        case 0x2373f4u: goto label_2373f4;
        case 0x2373f8u: goto label_2373f8;
        case 0x2373fcu: goto label_2373fc;
        case 0x237400u: goto label_237400;
        case 0x237404u: goto label_237404;
        case 0x237408u: goto label_237408;
        case 0x23740cu: goto label_23740c;
        case 0x237410u: goto label_237410;
        case 0x237414u: goto label_237414;
        case 0x237418u: goto label_237418;
        case 0x23741cu: goto label_23741c;
        case 0x237420u: goto label_237420;
        case 0x237424u: goto label_237424;
        case 0x237428u: goto label_237428;
        case 0x23742cu: goto label_23742c;
        case 0x237430u: goto label_237430;
        case 0x237434u: goto label_237434;
        case 0x237438u: goto label_237438;
        case 0x23743cu: goto label_23743c;
        case 0x237440u: goto label_237440;
        case 0x237444u: goto label_237444;
        case 0x237448u: goto label_237448;
        case 0x23744cu: goto label_23744c;
        case 0x237450u: goto label_237450;
        case 0x237454u: goto label_237454;
        case 0x237458u: goto label_237458;
        case 0x23745cu: goto label_23745c;
        case 0x237460u: goto label_237460;
        case 0x237464u: goto label_237464;
        case 0x237468u: goto label_237468;
        case 0x23746cu: goto label_23746c;
        case 0x237470u: goto label_237470;
        case 0x237474u: goto label_237474;
        case 0x237478u: goto label_237478;
        case 0x23747cu: goto label_23747c;
        case 0x237480u: goto label_237480;
        case 0x237484u: goto label_237484;
        case 0x237488u: goto label_237488;
        case 0x23748cu: goto label_23748c;
        case 0x237490u: goto label_237490;
        case 0x237494u: goto label_237494;
        case 0x237498u: goto label_237498;
        case 0x23749cu: goto label_23749c;
        case 0x2374a0u: goto label_2374a0;
        case 0x2374a4u: goto label_2374a4;
        case 0x2374a8u: goto label_2374a8;
        case 0x2374acu: goto label_2374ac;
        case 0x2374b0u: goto label_2374b0;
        case 0x2374b4u: goto label_2374b4;
        case 0x2374b8u: goto label_2374b8;
        case 0x2374bcu: goto label_2374bc;
        case 0x2374c0u: goto label_2374c0;
        case 0x2374c4u: goto label_2374c4;
        case 0x2374c8u: goto label_2374c8;
        case 0x2374ccu: goto label_2374cc;
        case 0x2374d0u: goto label_2374d0;
        case 0x2374d4u: goto label_2374d4;
        case 0x2374d8u: goto label_2374d8;
        case 0x2374dcu: goto label_2374dc;
        case 0x2374e0u: goto label_2374e0;
        case 0x2374e4u: goto label_2374e4;
        case 0x2374e8u: goto label_2374e8;
        case 0x2374ecu: goto label_2374ec;
        case 0x2374f0u: goto label_2374f0;
        case 0x2374f4u: goto label_2374f4;
        case 0x2374f8u: goto label_2374f8;
        case 0x2374fcu: goto label_2374fc;
        case 0x237500u: goto label_237500;
        case 0x237504u: goto label_237504;
        case 0x237508u: goto label_237508;
        case 0x23750cu: goto label_23750c;
        case 0x237510u: goto label_237510;
        case 0x237514u: goto label_237514;
        case 0x237518u: goto label_237518;
        case 0x23751cu: goto label_23751c;
        case 0x237520u: goto label_237520;
        case 0x237524u: goto label_237524;
        case 0x237528u: goto label_237528;
        case 0x23752cu: goto label_23752c;
        case 0x237530u: goto label_237530;
        case 0x237534u: goto label_237534;
        case 0x237538u: goto label_237538;
        case 0x23753cu: goto label_23753c;
        case 0x237540u: goto label_237540;
        case 0x237544u: goto label_237544;
        case 0x237548u: goto label_237548;
        case 0x23754cu: goto label_23754c;
        case 0x237550u: goto label_237550;
        case 0x237554u: goto label_237554;
        case 0x237558u: goto label_237558;
        case 0x23755cu: goto label_23755c;
        case 0x237560u: goto label_237560;
        case 0x237564u: goto label_237564;
        case 0x237568u: goto label_237568;
        case 0x23756cu: goto label_23756c;
        case 0x237570u: goto label_237570;
        case 0x237574u: goto label_237574;
        case 0x237578u: goto label_237578;
        case 0x23757cu: goto label_23757c;
        case 0x237580u: goto label_237580;
        case 0x237584u: goto label_237584;
        case 0x237588u: goto label_237588;
        case 0x23758cu: goto label_23758c;
        case 0x237590u: goto label_237590;
        case 0x237594u: goto label_237594;
        case 0x237598u: goto label_237598;
        case 0x23759cu: goto label_23759c;
        case 0x2375a0u: goto label_2375a0;
        case 0x2375a4u: goto label_2375a4;
        case 0x2375a8u: goto label_2375a8;
        case 0x2375acu: goto label_2375ac;
        case 0x2375b0u: goto label_2375b0;
        case 0x2375b4u: goto label_2375b4;
        case 0x2375b8u: goto label_2375b8;
        case 0x2375bcu: goto label_2375bc;
        case 0x2375c0u: goto label_2375c0;
        case 0x2375c4u: goto label_2375c4;
        case 0x2375c8u: goto label_2375c8;
        case 0x2375ccu: goto label_2375cc;
        case 0x2375d0u: goto label_2375d0;
        case 0x2375d4u: goto label_2375d4;
        case 0x2375d8u: goto label_2375d8;
        case 0x2375dcu: goto label_2375dc;
        case 0x2375e0u: goto label_2375e0;
        case 0x2375e4u: goto label_2375e4;
        case 0x2375e8u: goto label_2375e8;
        case 0x2375ecu: goto label_2375ec;
        case 0x2375f0u: goto label_2375f0;
        case 0x2375f4u: goto label_2375f4;
        case 0x2375f8u: goto label_2375f8;
        case 0x2375fcu: goto label_2375fc;
        case 0x237600u: goto label_237600;
        case 0x237604u: goto label_237604;
        case 0x237608u: goto label_237608;
        case 0x23760cu: goto label_23760c;
        case 0x237610u: goto label_237610;
        case 0x237614u: goto label_237614;
        case 0x237618u: goto label_237618;
        case 0x23761cu: goto label_23761c;
        case 0x237620u: goto label_237620;
        case 0x237624u: goto label_237624;
        case 0x237628u: goto label_237628;
        case 0x23762cu: goto label_23762c;
        case 0x237630u: goto label_237630;
        case 0x237634u: goto label_237634;
        case 0x237638u: goto label_237638;
        case 0x23763cu: goto label_23763c;
        case 0x237640u: goto label_237640;
        case 0x237644u: goto label_237644;
        case 0x237648u: goto label_237648;
        case 0x23764cu: goto label_23764c;
        case 0x237650u: goto label_237650;
        case 0x237654u: goto label_237654;
        case 0x237658u: goto label_237658;
        case 0x23765cu: goto label_23765c;
        case 0x237660u: goto label_237660;
        case 0x237664u: goto label_237664;
        case 0x237668u: goto label_237668;
        case 0x23766cu: goto label_23766c;
        case 0x237670u: goto label_237670;
        case 0x237674u: goto label_237674;
        case 0x237678u: goto label_237678;
        case 0x23767cu: goto label_23767c;
        case 0x237680u: goto label_237680;
        case 0x237684u: goto label_237684;
        case 0x237688u: goto label_237688;
        case 0x23768cu: goto label_23768c;
        case 0x237690u: goto label_237690;
        case 0x237694u: goto label_237694;
        case 0x237698u: goto label_237698;
        case 0x23769cu: goto label_23769c;
        case 0x2376a0u: goto label_2376a0;
        case 0x2376a4u: goto label_2376a4;
        case 0x2376a8u: goto label_2376a8;
        case 0x2376acu: goto label_2376ac;
        case 0x2376b0u: goto label_2376b0;
        case 0x2376b4u: goto label_2376b4;
        case 0x2376b8u: goto label_2376b8;
        case 0x2376bcu: goto label_2376bc;
        default: break;
    }

    ctx->pc = 0x2373b0u;

label_2373b0:
    // 0x2373b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2373b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2373b4:
    // 0x2373b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2373b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2373b8:
    // 0x2373b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2373b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2373bc:
    // 0x2373bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2373bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2373c0:
    // 0x2373c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2373c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2373c4:
    // 0x2373c4: 0xc0b6dac  jal         func_2DB6B0
label_2373c8:
    if (ctx->pc == 0x2373C8u) {
        ctx->pc = 0x2373C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C4u;
        // 0x2373c8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373CCu;
        goto label_2373cc;
    }
    ctx->pc = 0x2373C4u;
    SET_GPR_U32(ctx, 31, 0x2373CCu);
    ctx->pc = 0x2373C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373C4u;
    // 0x2373c8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2373C4u, 0x2373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373CCu;
label_2373cc:
    // 0x2373cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2373ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2373d0:
    // 0x2373d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2373d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2373d4:
    // 0x2373d4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2373d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2373d8:
    // 0x2373d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2373d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2373dc:
    // 0x2373dc: 0xc04d476  jal         func_1351D8
label_2373e0:
    if (ctx->pc == 0x2373E0u) {
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373E4u;
        goto label_2373e4;
    }
    ctx->pc = 0x2373DCu;
    SET_GPR_U32(ctx, 31, 0x2373E4u);
    ctx->pc = 0x2373E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373DCu;
    // 0x2373e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2373DCu, 0x2373E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373E4u;
label_2373e4:
    // 0x2373e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2373e8:
    // 0x2373e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2373e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2373ec:
    // 0x2373ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2373ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2373f0:
    // 0x2373f0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2373f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2373f4:
    // 0x2373f4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_2373f8:
    if (ctx->pc == 0x2373F8u) {
        ctx->pc = 0x2373F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373F4u;
        // 0x2373f8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373FCu;
        goto label_2373fc;
    }
    ctx->pc = 0x2373F4u;
    {
        const bool branch_taken_0x2373f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2373F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373F4u;
        // 0x2373f8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373f4) {
            ctx->pc = 0x2374E0u;
            goto label_2374e0;
        }
    }
    ctx->pc = 0x2373FCu;
label_2373fc:
    // 0x2373fc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2373fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_237400:
    // 0x237400: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237404:
    if (ctx->pc == 0x237404u) {
        ctx->pc = 0x237404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237400u;
        // 0x237404: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237408u;
        goto label_237408;
    }
    ctx->pc = 0x237400u;
    {
        const bool branch_taken_0x237400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237400) {
            ctx->pc = 0x237404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237400u;
            // 0x237404: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237418u;
            goto label_237418;
        }
    }
    ctx->pc = 0x237408u;
label_237408:
    // 0x237408: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_23740c:
    if (ctx->pc == 0x23740Cu) {
        ctx->pc = 0x23740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237408u;
        // 0x23740c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237410u;
        goto label_237410;
    }
    ctx->pc = 0x237408u;
    {
        const bool branch_taken_0x237408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237408) {
            ctx->pc = 0x23740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237408u;
            // 0x23740c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237430u;
            goto label_237430;
        }
    }
    ctx->pc = 0x237410u;
label_237410:
    // 0x237410: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_237414:
    if (ctx->pc == 0x237414u) {
        ctx->pc = 0x237414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237410u;
        // 0x237414: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237418u;
        goto label_237418;
    }
    ctx->pc = 0x237410u;
    {
        const bool branch_taken_0x237410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237410u;
        // 0x237414: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237410) {
            ctx->pc = 0x2376ACu;
            goto label_2376ac;
        }
    }
    ctx->pc = 0x237418u;
label_237418:
    // 0x237418: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_23741c:
    if (ctx->pc == 0x23741Cu) {
        ctx->pc = 0x23741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237418u;
        // 0x23741c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237420u;
        goto label_237420;
    }
    ctx->pc = 0x237418u;
    {
        const bool branch_taken_0x237418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237418u;
        // 0x23741c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237418) {
            ctx->pc = 0x237608u;
            goto label_237608;
        }
    }
    ctx->pc = 0x237420u;
label_237420:
    // 0x237420: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
label_237424:
    if (ctx->pc == 0x237424u) {
        ctx->pc = 0x237428u;
        goto label_237428;
    }
    ctx->pc = 0x237420u;
    {
        const bool branch_taken_0x237420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x237420) {
            ctx->pc = 0x23760Cu;
            goto label_23760c;
        }
    }
    ctx->pc = 0x237428u;
label_237428:
    // 0x237428: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_23742c:
    if (ctx->pc == 0x23742Cu) {
        ctx->pc = 0x23742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237428u;
        // 0x23742c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237430u;
        goto label_237430;
    }
    ctx->pc = 0x237428u;
    {
        const bool branch_taken_0x237428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237428u;
        // 0x23742c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237428) {
            ctx->pc = 0x2376ACu;
            goto label_2376ac;
        }
    }
    ctx->pc = 0x237430u;
label_237430:
    // 0x237430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237434:
    // 0x237434: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x237434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
label_237438:
    // 0x237438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23743c:
    // 0x23743c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23743cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_237440:
    // 0x237440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237444:
    // 0x237444: 0x8c4520d8  lw          $a1, 0x20D8($v0)
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8408)));
label_237448:
    // 0x237448: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23744c:
    // 0x23744c: 0x8c4620dc  lw          $a2, 0x20DC($v0)
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8412)));
label_237450:
    // 0x237450: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_237454:
    // 0x237454: 0xc0aa15e  jal         func_2A8578
label_237458:
    if (ctx->pc == 0x237458u) {
        ctx->pc = 0x237458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237454u;
        // 0x237458: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23745Cu;
        goto label_23745c;
    }
    ctx->pc = 0x237454u;
    SET_GPR_U32(ctx, 31, 0x23745Cu);
    ctx->pc = 0x237458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237454u;
    // 0x237458: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x237454u, 0x23745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23745Cu;
label_23745c:
    // 0x23745c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_237460:
    // 0x237460: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_237464:
    // 0x237464: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x237464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_237468:
    // 0x237468: 0xc07e804  jal         func_1FA010
label_23746c:
    if (ctx->pc == 0x23746Cu) {
        ctx->pc = 0x23746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237468u;
        // 0x23746c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237470u;
        goto label_237470;
    }
    ctx->pc = 0x237468u;
    SET_GPR_U32(ctx, 31, 0x237470u);
    ctx->pc = 0x23746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237468u;
    // 0x23746c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x237468u, 0x237470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237470u;
label_237470:
    // 0x237470: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x237470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_237474:
    // 0x237474: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x237474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_237478:
    // 0x237478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23747c:
    if (ctx->pc == 0x23747Cu) {
        ctx->pc = 0x23747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237478u;
        // 0x23747c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237480u;
        goto label_237480;
    }
    ctx->pc = 0x237478u;
    {
        const bool branch_taken_0x237478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237478u;
        // 0x23747c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237478) {
            ctx->pc = 0x237498u;
            goto label_237498;
        }
    }
    ctx->pc = 0x237480u;
label_237480:
    // 0x237480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x237480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_237484:
    // 0x237484: 0x2442a2e0  addiu       $v0, $v0, -0x5D20
    ctx->pc = 0x237484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943456));
label_237488:
    // 0x237488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23748c:
    // 0x23748c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_237490:
    // 0x237490: 0x800008  jr          $a0
label_237494:
    if (ctx->pc == 0x237494u) {
        ctx->pc = 0x237498u;
        goto label_237498;
    }
    ctx->pc = 0x237490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237498u: goto label_237498;
            case 0x2374A0u: goto label_2374a0;
            case 0x2374A8u: goto label_2374a8;
            case 0x2374B0u: goto label_2374b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x237498u;
label_237498:
    // 0x237498: 0x10000006  b           . + 4 + (0x6 << 2)
label_23749c:
    if (ctx->pc == 0x23749Cu) {
        ctx->pc = 0x23749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237498u;
        // 0x23749c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374A0u;
        goto label_2374a0;
    }
    ctx->pc = 0x237498u;
    {
        const bool branch_taken_0x237498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237498u;
        // 0x23749c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237498) {
            ctx->pc = 0x2374B4u;
            goto label_2374b4;
        }
    }
    ctx->pc = 0x2374A0u;
label_2374a0:
    // 0x2374a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2374a4:
    if (ctx->pc == 0x2374A4u) {
        ctx->pc = 0x2374A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A0u;
        // 0x2374a4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374A8u;
        goto label_2374a8;
    }
    ctx->pc = 0x2374A0u;
    {
        const bool branch_taken_0x2374a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A0u;
        // 0x2374a4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374a0) {
            ctx->pc = 0x2374B4u;
            goto label_2374b4;
        }
    }
    ctx->pc = 0x2374A8u;
label_2374a8:
    // 0x2374a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2374ac:
    if (ctx->pc == 0x2374ACu) {
        ctx->pc = 0x2374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A8u;
        // 0x2374ac: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374B0u;
        goto label_2374b0;
    }
    ctx->pc = 0x2374A8u;
    {
        const bool branch_taken_0x2374a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A8u;
        // 0x2374ac: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374a8) {
            ctx->pc = 0x2374B4u;
            goto label_2374b4;
        }
    }
    ctx->pc = 0x2374B0u;
label_2374b0:
    // 0x2374b0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2374b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2374b4:
    // 0x2374b4: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2374b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2374b8:
    // 0x2374b8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2374b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_2374bc:
    // 0x2374bc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2374c0:
    // 0x2374c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2374c4:
    if (ctx->pc == 0x2374C4u) {
        ctx->pc = 0x2374C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374C0u;
        // 0x2374c4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374C8u;
        goto label_2374c8;
    }
    ctx->pc = 0x2374C0u;
    {
        const bool branch_taken_0x2374c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374C0u;
        // 0x2374c4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374c0) {
            ctx->pc = 0x2374CCu;
            goto label_2374cc;
        }
    }
    ctx->pc = 0x2374C8u;
label_2374c8:
    // 0x2374c8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2374c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2374cc:
    // 0x2374cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2374ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2374d0:
    // 0x2374d0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2374d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2374d4:
    // 0x2374d4: 0xa603056a  sh          $v1, 0x56A($s0)
    ctx->pc = 0x2374d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 3));
label_2374d8:
    // 0x2374d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2374d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2374dc:
    // 0x2374dc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2374dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2374e0:
    // 0x2374e0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2374e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_2374e4:
    // 0x2374e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2374e8:
    if (ctx->pc == 0x2374E8u) {
        ctx->pc = 0x2374E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374E4u;
        // 0x2374e8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374ECu;
        goto label_2374ec;
    }
    ctx->pc = 0x2374E4u;
    {
        const bool branch_taken_0x2374e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374E4u;
        // 0x2374e8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374e4) {
            ctx->pc = 0x23750Cu;
            goto label_23750c;
        }
    }
    ctx->pc = 0x2374ECu;
label_2374ec:
    // 0x2374ec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2374ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2374f0:
    // 0x2374f0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2374f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2374f4:
    // 0x2374f4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x2374f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_2374f8:
    // 0x2374f8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x2374f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_2374fc:
    // 0x2374fc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2374fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_237500:
    // 0x237500: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x237500u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_237504:
    // 0x237504: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x237504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_237508:
    // 0x237508: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x237508u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_23750c:
    // 0x23750c: 0xc055f06  jal         func_157C18
label_237510:
    if (ctx->pc == 0x237510u) {
        ctx->pc = 0x237510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23750Cu;
        // 0x237510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237514u;
        goto label_237514;
    }
    ctx->pc = 0x23750Cu;
    SET_GPR_U32(ctx, 31, 0x237514u);
    ctx->pc = 0x237510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23750Cu;
    // 0x237510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23750Cu, 0x237514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237514u;
label_237514:
    // 0x237514: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237518:
    if (ctx->pc == 0x237518u) {
        ctx->pc = 0x237518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237514u;
        // 0x237518: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23751Cu;
        goto label_23751c;
    }
    ctx->pc = 0x237514u;
    {
        const bool branch_taken_0x237514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237514u;
        // 0x237518: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237514) {
            ctx->pc = 0x23752Cu;
            goto label_23752c;
        }
    }
    ctx->pc = 0x23751Cu;
label_23751c:
    // 0x23751c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23751cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_237520:
    // 0x237520: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_237524:
    // 0x237524: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_237528:
    // 0x237528: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x237528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23752c:
    // 0x23752c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237530:
    // 0x237530: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237534:
    // 0x237534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237538:
    // 0x237538: 0xc053e7c  jal         func_14F9F0
label_23753c:
    if (ctx->pc == 0x23753Cu) {
        ctx->pc = 0x23753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237538u;
        // 0x23753c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237540u;
        goto label_237540;
    }
    ctx->pc = 0x237538u;
    SET_GPR_U32(ctx, 31, 0x237540u);
    ctx->pc = 0x23753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237538u;
    // 0x23753c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237538u, 0x237540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237540u;
label_237540:
    // 0x237540: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_237544:
    // 0x237544: 0xc053e4a  jal         func_14F928
label_237548:
    if (ctx->pc == 0x237548u) {
        ctx->pc = 0x237548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237544u;
        // 0x237548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23754Cu;
        goto label_23754c;
    }
    ctx->pc = 0x237544u;
    SET_GPR_U32(ctx, 31, 0x23754Cu);
    ctx->pc = 0x237548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237544u;
    // 0x237548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237544u, 0x23754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23754Cu;
label_23754c:
    // 0x23754c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_237550:
    // 0x237550: 0x58400056  blezl       $v0, . + 4 + (0x56 << 2)
label_237554:
    if (ctx->pc == 0x237554u) {
        ctx->pc = 0x237554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237550u;
        // 0x237554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237558u;
        goto label_237558;
    }
    ctx->pc = 0x237550u;
    {
        const bool branch_taken_0x237550 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x237550) {
            ctx->pc = 0x237554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237550u;
            // 0x237554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376ACu;
            goto label_2376ac;
        }
    }
    ctx->pc = 0x237558u;
label_237558:
    // 0x237558: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_23755c:
    // 0x23755c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_237560:
    if (ctx->pc == 0x237560u) {
        ctx->pc = 0x237560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23755Cu;
        // 0x237560: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237564u;
        goto label_237564;
    }
    ctx->pc = 0x23755Cu;
    {
        const bool branch_taken_0x23755c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23755Cu;
        // 0x237560: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23755c) {
            ctx->pc = 0x237570u;
            goto label_237570;
        }
    }
    ctx->pc = 0x237564u;
label_237564:
    // 0x237564: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x237564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_237568:
    // 0x237568: 0x10000014  b           . + 4 + (0x14 << 2)
label_23756c:
    if (ctx->pc == 0x23756Cu) {
        ctx->pc = 0x23756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237568u;
        // 0x23756c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237570u;
        goto label_237570;
    }
    ctx->pc = 0x237568u;
    {
        const bool branch_taken_0x237568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237568u;
        // 0x23756c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237568) {
            ctx->pc = 0x2375BCu;
            goto label_2375bc;
        }
    }
    ctx->pc = 0x237570u;
label_237570:
    // 0x237570: 0xc0b6ddc  jal         func_2DB770
label_237574:
    if (ctx->pc == 0x237574u) {
        ctx->pc = 0x237578u;
        goto label_237578;
    }
    ctx->pc = 0x237570u;
    SET_GPR_U32(ctx, 31, 0x237578u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x237570u, 0x237578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237578u;
label_237578:
    // 0x237578: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x237578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_23757c:
    // 0x23757c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x23757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_237580:
    // 0x237580: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x237580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_237584:
    // 0x237584: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x237584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_237588:
    // 0x237588: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23758c:
    if (ctx->pc == 0x23758Cu) {
        ctx->pc = 0x23758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237588u;
        // 0x23758c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237590u;
        goto label_237590;
    }
    ctx->pc = 0x237588u;
    {
        const bool branch_taken_0x237588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237588) {
            ctx->pc = 0x23758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237588u;
            // 0x23758c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375A0u;
            goto label_2375a0;
        }
    }
    ctx->pc = 0x237590u;
label_237590:
    // 0x237590: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x237590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_237594:
    // 0x237594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_237598:
    // 0x237598: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x237598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_23759c:
    // 0x23759c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2375a0:
    // 0x2375a0: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x2375a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
label_2375a4:
    // 0x2375a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2375a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2375a8:
    // 0x2375a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2375ac:
    if (ctx->pc == 0x2375ACu) {
        ctx->pc = 0x2375ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375A8u;
        // 0x2375ac: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375B0u;
        goto label_2375b0;
    }
    ctx->pc = 0x2375A8u;
    {
        const bool branch_taken_0x2375a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2375a8) {
            ctx->pc = 0x2375ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2375A8u;
            // 0x2375ac: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2375C0u;
            goto label_2375c0;
        }
    }
    ctx->pc = 0x2375B0u;
label_2375b0:
    // 0x2375b0: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2375b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2375b4:
    // 0x2375b4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2375b8:
    // 0x2375b8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2375b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2375bc:
    // 0x2375bc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2375bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2375c0:
    // 0x2375c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2375c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2375c4:
    // 0x2375c4: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_2375c8:
    if (ctx->pc == 0x2375C8u) {
        ctx->pc = 0x2375C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375C4u;
        // 0x2375c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375CCu;
        goto label_2375cc;
    }
    ctx->pc = 0x2375C4u;
    {
        const bool branch_taken_0x2375c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2375c4) {
            ctx->pc = 0x2375C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2375C4u;
            // 0x2375c8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2376ACu;
            goto label_2376ac;
        }
    }
    ctx->pc = 0x2375CCu;
label_2375cc:
    // 0x2375cc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2375ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_2375d0:
    // 0x2375d0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_2375d4:
    if (ctx->pc == 0x2375D4u) {
        ctx->pc = 0x2375D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375D0u;
        // 0x2375d4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375D8u;
        goto label_2375d8;
    }
    ctx->pc = 0x2375D0u;
    {
        const bool branch_taken_0x2375d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2375D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375D0u;
        // 0x2375d4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375d0) {
            ctx->pc = 0x237600u;
            goto label_237600;
        }
    }
    ctx->pc = 0x2375D8u;
label_2375d8:
    // 0x2375d8: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2375d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_2375dc:
    // 0x2375dc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_2375e0:
    if (ctx->pc == 0x2375E0u) {
        ctx->pc = 0x2375E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375DCu;
        // 0x2375e0: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375E4u;
        goto label_2375e4;
    }
    ctx->pc = 0x2375DCu;
    {
        const bool branch_taken_0x2375dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2375E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375DCu;
        // 0x2375e0: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375dc) {
            ctx->pc = 0x237600u;
            goto label_237600;
        }
    }
    ctx->pc = 0x2375E4u;
label_2375e4:
    // 0x2375e4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2375e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2375e8:
    // 0x2375e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2375e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2375ec:
    // 0x2375ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2375ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2375f0:
    // 0x2375f0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2375f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2375f4:
    // 0x2375f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2375f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2375f8:
    // 0x2375f8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2375f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2375fc:
    // 0x2375fc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2375fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_237600:
    // 0x237600: 0x10000029  b           . + 4 + (0x29 << 2)
label_237604:
    if (ctx->pc == 0x237604u) {
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237600u;
        // 0x237604: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237608u;
        goto label_237608;
    }
    ctx->pc = 0x237600u;
    {
        const bool branch_taken_0x237600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237600u;
        // 0x237604: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237600) {
            ctx->pc = 0x2376A8u;
            goto label_2376a8;
        }
    }
    ctx->pc = 0x237608u;
label_237608:
    // 0x237608: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x237608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23760c:
    // 0x23760c: 0xc055f06  jal         func_157C18
label_237610:
    if (ctx->pc == 0x237610u) {
        ctx->pc = 0x237610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23760Cu;
        // 0x237610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237614u;
        goto label_237614;
    }
    ctx->pc = 0x23760Cu;
    SET_GPR_U32(ctx, 31, 0x237614u);
    ctx->pc = 0x237610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23760Cu;
    // 0x237610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23760Cu, 0x237614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237614u;
label_237614:
    // 0x237614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237618:
    if (ctx->pc == 0x237618u) {
        ctx->pc = 0x237618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237614u;
        // 0x237618: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23761Cu;
        goto label_23761c;
    }
    ctx->pc = 0x237614u;
    {
        const bool branch_taken_0x237614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237614u;
        // 0x237618: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237614) {
            ctx->pc = 0x23762Cu;
            goto label_23762c;
        }
    }
    ctx->pc = 0x23761Cu;
label_23761c:
    // 0x23761c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23761cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_237620:
    // 0x237620: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x237620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_237624:
    // 0x237624: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x237624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_237628:
    // 0x237628: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x237628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23762c:
    // 0x23762c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_237630:
    // 0x237630: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x237630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_237634:
    // 0x237634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237638:
    // 0x237638: 0xc053e7c  jal         func_14F9F0
label_23763c:
    if (ctx->pc == 0x23763Cu) {
        ctx->pc = 0x23763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237638u;
        // 0x23763c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237640u;
        goto label_237640;
    }
    ctx->pc = 0x237638u;
    SET_GPR_U32(ctx, 31, 0x237640u);
    ctx->pc = 0x23763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237638u;
    // 0x23763c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x237638u, 0x237640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237640u;
label_237640:
    // 0x237640: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x237640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_237644:
    // 0x237644: 0xc053e4a  jal         func_14F928
label_237648:
    if (ctx->pc == 0x237648u) {
        ctx->pc = 0x237648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237644u;
        // 0x237648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23764Cu;
        goto label_23764c;
    }
    ctx->pc = 0x237644u;
    SET_GPR_U32(ctx, 31, 0x23764Cu);
    ctx->pc = 0x237648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237644u;
    // 0x237648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x237644u, 0x23764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23764Cu;
label_23764c:
    // 0x23764c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23764cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_237650:
    // 0x237650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_237654:
    // 0x237654: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_237658:
    if (ctx->pc == 0x237658u) {
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23765Cu;
        goto label_23765c;
    }
    ctx->pc = 0x237654u;
    {
        const bool branch_taken_0x237654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237654) {
            ctx->pc = 0x2376A8u;
            goto label_2376a8;
        }
    }
    ctx->pc = 0x23765Cu;
label_23765c:
    // 0x23765c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x23765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_237660:
    // 0x237660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237664:
    // 0x237664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x237664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237668:
    // 0x237668: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x237668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_23766c:
    // 0x23766c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23766cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237670:
    // 0x237670: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x237670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_237674:
    // 0x237674: 0x40f809  jalr        $v0
label_237678:
    if (ctx->pc == 0x237678u) {
        ctx->pc = 0x237678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237674u;
        // 0x237678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23767Cu;
        goto label_23767c;
    }
    ctx->pc = 0x237674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23767Cu);
        ctx->pc = 0x237678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237674u;
        // 0x237678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237674u, 0x23767Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23767Cu;
label_23767c:
    // 0x23767c: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x23767cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_237680:
    // 0x237680: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_237684:
    if (ctx->pc == 0x237684u) {
        ctx->pc = 0x237684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237680u;
        // 0x237684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237688u;
        goto label_237688;
    }
    ctx->pc = 0x237680u;
    {
        const bool branch_taken_0x237680 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x237684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237680u;
        // 0x237684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237680) {
            ctx->pc = 0x237694u;
            goto label_237694;
        }
    }
    ctx->pc = 0x237688u;
label_237688:
    // 0x237688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23768c:
    // 0x23768c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x23768cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_237690:
    // 0x237690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237694:
    // 0x237694: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x237694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_237698:
    // 0x237698: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x237698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_23769c:
    // 0x23769c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x23769cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_2376a0:
    // 0x2376a0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2376a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2376a4:
    // 0x2376a4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2376a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2376a8:
    // 0x2376a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2376a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2376ac:
    // 0x2376ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2376acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2376b0:
    // 0x2376b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2376b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2376b4:
    // 0x2376b4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2376b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2376b8:
    // 0x2376b8: 0x3e00008  jr          $ra
label_2376bc:
    if (ctx->pc == 0x2376BCu) {
        ctx->pc = 0x2376BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376B8u;
        // 0x2376bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376C0u;
        goto label_fallthrough_0x2376b8;
    }
    ctx->pc = 0x2376B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2376BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376B8u;
        // 0x2376bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2376B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2376b8:
    ctx->pc = 0x2376C0u;
}
