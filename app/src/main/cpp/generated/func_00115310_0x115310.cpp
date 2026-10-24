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

// Function: func_00115310
// Address: 0x115310 - 0x1156d8
void func_00115310_0x115310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00115310_0x115310");
#endif

    switch (ctx->pc) {
        case 0x115310u: goto label_115310;
        case 0x115314u: goto label_115314;
        case 0x115318u: goto label_115318;
        case 0x11531cu: goto label_11531c;
        case 0x115320u: goto label_115320;
        case 0x115324u: goto label_115324;
        case 0x115328u: goto label_115328;
        case 0x11532cu: goto label_11532c;
        case 0x115330u: goto label_115330;
        case 0x115334u: goto label_115334;
        case 0x115338u: goto label_115338;
        case 0x11533cu: goto label_11533c;
        case 0x115340u: goto label_115340;
        case 0x115344u: goto label_115344;
        case 0x115348u: goto label_115348;
        case 0x11534cu: goto label_11534c;
        case 0x115350u: goto label_115350;
        case 0x115354u: goto label_115354;
        case 0x115358u: goto label_115358;
        case 0x11535cu: goto label_11535c;
        case 0x115360u: goto label_115360;
        case 0x115364u: goto label_115364;
        case 0x115368u: goto label_115368;
        case 0x11536cu: goto label_11536c;
        case 0x115370u: goto label_115370;
        case 0x115374u: goto label_115374;
        case 0x115378u: goto label_115378;
        case 0x11537cu: goto label_11537c;
        case 0x115380u: goto label_115380;
        case 0x115384u: goto label_115384;
        case 0x115388u: goto label_115388;
        case 0x11538cu: goto label_11538c;
        case 0x115390u: goto label_115390;
        case 0x115394u: goto label_115394;
        case 0x115398u: goto label_115398;
        case 0x11539cu: goto label_11539c;
        case 0x1153a0u: goto label_1153a0;
        case 0x1153a4u: goto label_1153a4;
        case 0x1153a8u: goto label_1153a8;
        case 0x1153acu: goto label_1153ac;
        case 0x1153b0u: goto label_1153b0;
        case 0x1153b4u: goto label_1153b4;
        case 0x1153b8u: goto label_1153b8;
        case 0x1153bcu: goto label_1153bc;
        case 0x1153c0u: goto label_1153c0;
        case 0x1153c4u: goto label_1153c4;
        case 0x1153c8u: goto label_1153c8;
        case 0x1153ccu: goto label_1153cc;
        case 0x1153d0u: goto label_1153d0;
        case 0x1153d4u: goto label_1153d4;
        case 0x1153d8u: goto label_1153d8;
        case 0x1153dcu: goto label_1153dc;
        case 0x1153e0u: goto label_1153e0;
        case 0x1153e4u: goto label_1153e4;
        case 0x1153e8u: goto label_1153e8;
        case 0x1153ecu: goto label_1153ec;
        case 0x1153f0u: goto label_1153f0;
        case 0x1153f4u: goto label_1153f4;
        case 0x1153f8u: goto label_1153f8;
        case 0x1153fcu: goto label_1153fc;
        case 0x115400u: goto label_115400;
        case 0x115404u: goto label_115404;
        case 0x115408u: goto label_115408;
        case 0x11540cu: goto label_11540c;
        case 0x115410u: goto label_115410;
        case 0x115414u: goto label_115414;
        case 0x115418u: goto label_115418;
        case 0x11541cu: goto label_11541c;
        case 0x115420u: goto label_115420;
        case 0x115424u: goto label_115424;
        case 0x115428u: goto label_115428;
        case 0x11542cu: goto label_11542c;
        case 0x115430u: goto label_115430;
        case 0x115434u: goto label_115434;
        case 0x115438u: goto label_115438;
        case 0x11543cu: goto label_11543c;
        case 0x115440u: goto label_115440;
        case 0x115444u: goto label_115444;
        case 0x115448u: goto label_115448;
        case 0x11544cu: goto label_11544c;
        case 0x115450u: goto label_115450;
        case 0x115454u: goto label_115454;
        case 0x115458u: goto label_115458;
        case 0x11545cu: goto label_11545c;
        case 0x115460u: goto label_115460;
        case 0x115464u: goto label_115464;
        case 0x115468u: goto label_115468;
        case 0x11546cu: goto label_11546c;
        case 0x115470u: goto label_115470;
        case 0x115474u: goto label_115474;
        case 0x115478u: goto label_115478;
        case 0x11547cu: goto label_11547c;
        case 0x115480u: goto label_115480;
        case 0x115484u: goto label_115484;
        case 0x115488u: goto label_115488;
        case 0x11548cu: goto label_11548c;
        case 0x115490u: goto label_115490;
        case 0x115494u: goto label_115494;
        case 0x115498u: goto label_115498;
        case 0x11549cu: goto label_11549c;
        case 0x1154a0u: goto label_1154a0;
        case 0x1154a4u: goto label_1154a4;
        case 0x1154a8u: goto label_1154a8;
        case 0x1154acu: goto label_1154ac;
        case 0x1154b0u: goto label_1154b0;
        case 0x1154b4u: goto label_1154b4;
        case 0x1154b8u: goto label_1154b8;
        case 0x1154bcu: goto label_1154bc;
        case 0x1154c0u: goto label_1154c0;
        case 0x1154c4u: goto label_1154c4;
        case 0x1154c8u: goto label_1154c8;
        case 0x1154ccu: goto label_1154cc;
        case 0x1154d0u: goto label_1154d0;
        case 0x1154d4u: goto label_1154d4;
        case 0x1154d8u: goto label_1154d8;
        case 0x1154dcu: goto label_1154dc;
        case 0x1154e0u: goto label_1154e0;
        case 0x1154e4u: goto label_1154e4;
        case 0x1154e8u: goto label_1154e8;
        case 0x1154ecu: goto label_1154ec;
        case 0x1154f0u: goto label_1154f0;
        case 0x1154f4u: goto label_1154f4;
        case 0x1154f8u: goto label_1154f8;
        case 0x1154fcu: goto label_1154fc;
        case 0x115500u: goto label_115500;
        case 0x115504u: goto label_115504;
        case 0x115508u: goto label_115508;
        case 0x11550cu: goto label_11550c;
        case 0x115510u: goto label_115510;
        case 0x115514u: goto label_115514;
        case 0x115518u: goto label_115518;
        case 0x11551cu: goto label_11551c;
        case 0x115520u: goto label_115520;
        case 0x115524u: goto label_115524;
        case 0x115528u: goto label_115528;
        case 0x11552cu: goto label_11552c;
        case 0x115530u: goto label_115530;
        case 0x115534u: goto label_115534;
        case 0x115538u: goto label_115538;
        case 0x11553cu: goto label_11553c;
        case 0x115540u: goto label_115540;
        case 0x115544u: goto label_115544;
        case 0x115548u: goto label_115548;
        case 0x11554cu: goto label_11554c;
        case 0x115550u: goto label_115550;
        case 0x115554u: goto label_115554;
        case 0x115558u: goto label_115558;
        case 0x11555cu: goto label_11555c;
        case 0x115560u: goto label_115560;
        case 0x115564u: goto label_115564;
        case 0x115568u: goto label_115568;
        case 0x11556cu: goto label_11556c;
        case 0x115570u: goto label_115570;
        case 0x115574u: goto label_115574;
        case 0x115578u: goto label_115578;
        case 0x11557cu: goto label_11557c;
        case 0x115580u: goto label_115580;
        case 0x115584u: goto label_115584;
        case 0x115588u: goto label_115588;
        case 0x11558cu: goto label_11558c;
        case 0x115590u: goto label_115590;
        case 0x115594u: goto label_115594;
        case 0x115598u: goto label_115598;
        case 0x11559cu: goto label_11559c;
        case 0x1155a0u: goto label_1155a0;
        case 0x1155a4u: goto label_1155a4;
        case 0x1155a8u: goto label_1155a8;
        case 0x1155acu: goto label_1155ac;
        case 0x1155b0u: goto label_1155b0;
        case 0x1155b4u: goto label_1155b4;
        case 0x1155b8u: goto label_1155b8;
        case 0x1155bcu: goto label_1155bc;
        case 0x1155c0u: goto label_1155c0;
        case 0x1155c4u: goto label_1155c4;
        case 0x1155c8u: goto label_1155c8;
        case 0x1155ccu: goto label_1155cc;
        case 0x1155d0u: goto label_1155d0;
        case 0x1155d4u: goto label_1155d4;
        case 0x1155d8u: goto label_1155d8;
        case 0x1155dcu: goto label_1155dc;
        case 0x1155e0u: goto label_1155e0;
        case 0x1155e4u: goto label_1155e4;
        case 0x1155e8u: goto label_1155e8;
        case 0x1155ecu: goto label_1155ec;
        case 0x1155f0u: goto label_1155f0;
        case 0x1155f4u: goto label_1155f4;
        case 0x1155f8u: goto label_1155f8;
        case 0x1155fcu: goto label_1155fc;
        case 0x115600u: goto label_115600;
        case 0x115604u: goto label_115604;
        case 0x115608u: goto label_115608;
        case 0x11560cu: goto label_11560c;
        case 0x115610u: goto label_115610;
        case 0x115614u: goto label_115614;
        case 0x115618u: goto label_115618;
        case 0x11561cu: goto label_11561c;
        case 0x115620u: goto label_115620;
        case 0x115624u: goto label_115624;
        case 0x115628u: goto label_115628;
        case 0x11562cu: goto label_11562c;
        case 0x115630u: goto label_115630;
        case 0x115634u: goto label_115634;
        case 0x115638u: goto label_115638;
        case 0x11563cu: goto label_11563c;
        case 0x115640u: goto label_115640;
        case 0x115644u: goto label_115644;
        case 0x115648u: goto label_115648;
        case 0x11564cu: goto label_11564c;
        case 0x115650u: goto label_115650;
        case 0x115654u: goto label_115654;
        case 0x115658u: goto label_115658;
        case 0x11565cu: goto label_11565c;
        case 0x115660u: goto label_115660;
        case 0x115664u: goto label_115664;
        case 0x115668u: goto label_115668;
        case 0x11566cu: goto label_11566c;
        case 0x115670u: goto label_115670;
        case 0x115674u: goto label_115674;
        case 0x115678u: goto label_115678;
        case 0x11567cu: goto label_11567c;
        case 0x115680u: goto label_115680;
        case 0x115684u: goto label_115684;
        case 0x115688u: goto label_115688;
        case 0x11568cu: goto label_11568c;
        case 0x115690u: goto label_115690;
        case 0x115694u: goto label_115694;
        case 0x115698u: goto label_115698;
        case 0x11569cu: goto label_11569c;
        case 0x1156a0u: goto label_1156a0;
        case 0x1156a4u: goto label_1156a4;
        case 0x1156a8u: goto label_1156a8;
        case 0x1156acu: goto label_1156ac;
        case 0x1156b0u: goto label_1156b0;
        case 0x1156b4u: goto label_1156b4;
        case 0x1156b8u: goto label_1156b8;
        case 0x1156bcu: goto label_1156bc;
        case 0x1156c0u: goto label_1156c0;
        case 0x1156c4u: goto label_1156c4;
        case 0x1156c8u: goto label_1156c8;
        case 0x1156ccu: goto label_1156cc;
        case 0x1156d0u: goto label_1156d0;
        case 0x1156d4u: goto label_1156d4;
        default: break;
    }

    ctx->pc = 0x115310u;

label_115310:
    // 0x115310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_115314:
    // 0x115314: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_115318:
    // 0x115318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x115318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11531c:
    // 0x11531c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_115320:
    // 0x115320: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_115324:
    // 0x115324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x115324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_115328:
    // 0x115328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11532c:
    // 0x11532c: 0x245264f0  addiu       $s2, $v0, 0x64F0
    ctx->pc = 0x11532cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
label_115330:
    // 0x115330: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x115330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_115334:
    // 0x115334: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x115334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_115338:
    // 0x115338: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11533c:
    // 0x11533c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_115340:
    // 0x115340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115344:
    // 0x115344: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x115344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_115348:
    // 0x115348: 0xc0a480c  jal         func_292030
label_11534c:
    if (ctx->pc == 0x11534Cu) {
        ctx->pc = 0x11534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115348u;
        // 0x11534c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115350u;
        goto label_115350;
    }
    ctx->pc = 0x115348u;
    SET_GPR_U32(ctx, 31, 0x115350u);
    ctx->pc = 0x11534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115348u;
    // 0x11534c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x115348u, 0x115350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115350u;
label_115350:
    // 0x115350: 0xc0a4c3c  jal         func_2930F0
label_115354:
    if (ctx->pc == 0x115354u) {
        ctx->pc = 0x115354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115350u;
        // 0x115354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115358u;
        goto label_115358;
    }
    ctx->pc = 0x115350u;
    SET_GPR_U32(ctx, 31, 0x115358u);
    ctx->pc = 0x115354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115350u;
    // 0x115354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x115350u, 0x115358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115358u;
label_115358:
    // 0x115358: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x115358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_11535c:
    // 0x11535c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11535cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115360:
    // 0x115360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115364:
    // 0x115364: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x115364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_115368:
    // 0x115368: 0xe62005dc  swc1        $f0, 0x5DC($s1)
    ctx->pc = 0x115368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1500), bits); }
label_11536c:
    // 0x11536c: 0xc0560a2  jal         func_158288
label_115370:
    if (ctx->pc == 0x115370u) {
        ctx->pc = 0x115370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11536Cu;
        // 0x115370: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115374u;
        goto label_115374;
    }
    ctx->pc = 0x11536Cu;
    SET_GPR_U32(ctx, 31, 0x115374u);
    ctx->pc = 0x115370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11536Cu;
    // 0x115370: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x11536Cu, 0x115374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115374u;
label_115374:
    // 0x115374: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x115374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_115378:
    // 0x115378: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_11537c:
    if (ctx->pc == 0x11537Cu) {
        ctx->pc = 0x11537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115378u;
        // 0x11537c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115380u;
        goto label_115380;
    }
    ctx->pc = 0x115378u;
    {
        const bool branch_taken_0x115378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115378u;
        // 0x11537c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115378) {
            ctx->pc = 0x115390u;
            goto label_115390;
        }
    }
    ctx->pc = 0x115380u;
label_115380:
    // 0x115380: 0x106200a1  beq         $v1, $v0, . + 4 + (0xA1 << 2)
label_115384:
    if (ctx->pc == 0x115384u) {
        ctx->pc = 0x115384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115380u;
        // 0x115384: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115388u;
        goto label_115388;
    }
    ctx->pc = 0x115380u;
    {
        const bool branch_taken_0x115380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115380u;
        // 0x115384: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115380) {
            ctx->pc = 0x115608u;
            goto label_115608;
        }
    }
    ctx->pc = 0x115388u;
label_115388:
    // 0x115388: 0x100000cd  b           . + 4 + (0xCD << 2)
label_11538c:
    if (ctx->pc == 0x11538Cu) {
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115390u;
        goto label_115390;
    }
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115388) {
            ctx->pc = 0x1156C0u;
            goto label_1156c0;
        }
    }
    ctx->pc = 0x115390u;
label_115390:
    // 0x115390: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x115390u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_115394:
    // 0x115394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115398:
    // 0x115398: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x115398u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
label_11539c:
    // 0x11539c: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x11539cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_1153a0:
    // 0x1153a0: 0xc049a3c  jal         func_1268F0
label_1153a4:
    if (ctx->pc == 0x1153A4u) {
        ctx->pc = 0x1153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153A0u;
        // 0x1153a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153A8u;
        goto label_1153a8;
    }
    ctx->pc = 0x1153A0u;
    SET_GPR_U32(ctx, 31, 0x1153A8u);
    ctx->pc = 0x1153A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153A0u;
    // 0x1153a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x1153A0u, 0x1153A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153A8u;
label_1153a8:
    // 0x1153a8: 0xc049396  jal         func_124E58
label_1153ac:
    if (ctx->pc == 0x1153ACu) {
        ctx->pc = 0x1153ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153A8u;
        // 0x1153ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153B0u;
        goto label_1153b0;
    }
    ctx->pc = 0x1153A8u;
    SET_GPR_U32(ctx, 31, 0x1153B0u);
    ctx->pc = 0x1153ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153A8u;
    // 0x1153ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1153A8u, 0x1153B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153B0u;
label_1153b0:
    // 0x1153b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1153b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1153b4:
    // 0x1153b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1153b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1153b8:
    // 0x1153b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1153b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1153bc:
    // 0x1153bc: 0xae200580  sw          $zero, 0x580($s1)
    ctx->pc = 0x1153bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
label_1153c0:
    // 0x1153c0: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1153c4:
    // 0x1153c4: 0xae200584  sw          $zero, 0x584($s1)
    ctx->pc = 0x1153c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 0));
label_1153c8:
    // 0x1153c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1153c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1153cc:
    // 0x1153cc: 0xc0c28ac  jal         func_30A2B0
label_1153d0:
    if (ctx->pc == 0x1153D0u) {
        ctx->pc = 0x1153D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153CCu;
        // 0x1153d0: 0xe6200588  swc1        $f0, 0x588($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153D4u;
        goto label_1153d4;
    }
    ctx->pc = 0x1153CCu;
    SET_GPR_U32(ctx, 31, 0x1153D4u);
    ctx->pc = 0x1153D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153CCu;
    // 0x1153d0: 0xe6200588  swc1        $f0, 0x588($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1153CCu, 0x1153D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153D4u;
label_1153d4:
    // 0x1153d4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1153d8:
    // 0x1153d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1153d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1153dc:
    // 0x1153dc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1153dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1153e0:
    // 0x1153e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1153e4:
    // 0x1153e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1153e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1153e8:
    // 0x1153e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1153e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1153ec:
    // 0x1153ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1153ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1153f0:
    // 0x1153f0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1153f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1153f4:
    // 0x1153f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1153f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1153f8:
    // 0x1153f8: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_1153fc:
    // 0x1153fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1153fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_115400:
    // 0x115400: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x115400u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_115404:
    // 0x115404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115408:
    // 0x115408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11540c:
    // 0x11540c: 0xc0a4404  jal         func_291010
label_115410:
    if (ctx->pc == 0x115410u) {
        ctx->pc = 0x115410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11540Cu;
        // 0x115410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115414u;
        goto label_115414;
    }
    ctx->pc = 0x11540Cu;
    SET_GPR_U32(ctx, 31, 0x115414u);
    ctx->pc = 0x115410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11540Cu;
    // 0x115410: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x11540Cu, 0x115414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115414u;
label_115414:
    // 0x115414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115418:
    // 0x115418: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_11541c:
    if (ctx->pc == 0x11541Cu) {
        ctx->pc = 0x11541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115418u;
        // 0x11541c: 0xae250640  sw          $a1, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115420u;
        goto label_115420;
    }
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115418u;
        // 0x11541c: 0xae250640  sw          $a1, 0x640($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1600), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115418) {
            ctx->pc = 0x1154C4u;
            goto label_1154c4;
        }
    }
    ctx->pc = 0x115420u;
label_115420:
    // 0x115420: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x115420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_115424:
    // 0x115424: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x115424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_115428:
    // 0x115428: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x115428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_11542c:
    // 0x11542c: 0x40f809  jalr        $v0
label_115430:
    if (ctx->pc == 0x115430u) {
        ctx->pc = 0x115430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11542Cu;
        // 0x115430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115434u;
        goto label_115434;
    }
    ctx->pc = 0x11542Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x115434u);
        ctx->pc = 0x115430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11542Cu;
        // 0x115430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11542Cu, 0x115434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115434u;
label_115434:
    // 0x115434: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
label_115438:
    if (ctx->pc == 0x115438u) {
        ctx->pc = 0x115438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115434u;
        // 0x115438: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11543Cu;
        goto label_11543c;
    }
    ctx->pc = 0x115434u;
    {
        const bool branch_taken_0x115434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x115434) {
            ctx->pc = 0x115438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115434u;
            // 0x115438: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115458u;
            goto label_115458;
        }
    }
    ctx->pc = 0x11543Cu;
label_11543c:
    // 0x11543c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x11543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115440:
    // 0x115440: 0xe6200580  swc1        $f0, 0x580($s1)
    ctx->pc = 0x115440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1408), bits); }
label_115444:
    // 0x115444: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x115444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_115448:
    // 0x115448: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x115448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_11544c:
    // 0x11544c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115450:
    // 0x115450: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x115450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_115454:
    // 0x115454: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x115454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_115458:
    // 0x115458: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x115458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_11545c:
    // 0x11545c: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x11545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_115460:
    // 0x115460: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_115464:
    // 0x115464: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_115468:
    // 0x115468: 0x40f809  jalr        $v0
label_11546c:
    if (ctx->pc == 0x11546Cu) {
        ctx->pc = 0x11546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115468u;
        // 0x11546c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115470u;
        goto label_115470;
    }
    ctx->pc = 0x115468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x115470u);
        ctx->pc = 0x11546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115468u;
        // 0x11546c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115468u, 0x115470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115470u;
label_115470:
    // 0x115470: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x115470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_115474:
    // 0x115474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115478:
    // 0x115478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11547c:
    // 0x11547c: 0xc0b680e  jal         func_2DA038
label_115480:
    if (ctx->pc == 0x115480u) {
        ctx->pc = 0x115480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11547Cu;
        // 0x115480: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115484u;
        goto label_115484;
    }
    ctx->pc = 0x11547Cu;
    SET_GPR_U32(ctx, 31, 0x115484u);
    ctx->pc = 0x115480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11547Cu;
    // 0x115480: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x11547Cu, 0x115484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115484u;
label_115484:
    // 0x115484: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x115484u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_115488:
    // 0x115488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x115488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11548c:
    // 0x11548c: 0x0  nop
    ctx->pc = 0x11548cu;
    // NOP
label_115490:
    // 0x115490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x115490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_115494:
    // 0x115494: 0x0  nop
    ctx->pc = 0x115494u;
    // NOP
label_115498:
    // 0x115498: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_11549c:
    if (ctx->pc == 0x11549Cu) {
        ctx->pc = 0x11549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115498u;
        // 0x11549c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154A0u;
        goto label_1154a0;
    }
    ctx->pc = 0x115498u;
    {
        const bool branch_taken_0x115498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115498u;
        // 0x11549c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115498) {
            ctx->pc = 0x1154A4u;
            goto label_1154a4;
        }
    }
    ctx->pc = 0x1154A0u;
label_1154a0:
    // 0x1154a0: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1154a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_1154a4:
    // 0x1154a4: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x1154a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
label_1154a8:
    // 0x1154a8: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x1154a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
label_1154ac:
    // 0x1154ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1154acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1154b0:
    // 0x1154b0: 0x0  nop
    ctx->pc = 0x1154b0u;
    // NOP
label_1154b4:
    // 0x1154b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1154b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1154b8:
    // 0x1154b8: 0x0  nop
    ctx->pc = 0x1154b8u;
    // NOP
label_1154bc:
    // 0x1154bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1154c0:
    if (ctx->pc == 0x1154C0u) {
        ctx->pc = 0x1154C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154BCu;
        // 0x1154c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154C4u;
        goto label_1154c4;
    }
    ctx->pc = 0x1154BCu;
    {
        const bool branch_taken_0x1154bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1154bc) {
            ctx->pc = 0x1154C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1154BCu;
            // 0x1154c0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1154C4u;
            goto label_1154c4;
        }
    }
    ctx->pc = 0x1154C4u;
label_1154c4:
    // 0x1154c4: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x1154c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1154c8:
    // 0x1154c8: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_1154cc:
    if (ctx->pc == 0x1154CCu) {
        ctx->pc = 0x1154CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154C8u;
        // 0x1154cc: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154D0u;
        goto label_1154d0;
    }
    ctx->pc = 0x1154C8u;
    {
        const bool branch_taken_0x1154c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154C8u;
        // 0x1154cc: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154c8) {
            ctx->pc = 0x115578u;
            goto label_115578;
        }
    }
    ctx->pc = 0x1154D0u;
label_1154d0:
    // 0x1154d0: 0xc04ad70  jal         func_12B5C0
label_1154d4:
    if (ctx->pc == 0x1154D4u) {
        ctx->pc = 0x1154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154D0u;
        // 0x1154d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154D8u;
        goto label_1154d8;
    }
    ctx->pc = 0x1154D0u;
    SET_GPR_U32(ctx, 31, 0x1154D8u);
    ctx->pc = 0x1154D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1154D0u;
    // 0x1154d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B5C0u, 0x1154D0u, 0x1154D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1154D8u;
label_1154d8:
    // 0x1154d8: 0x8e2406a0  lw          $a0, 0x6A0($s1)
    ctx->pc = 0x1154d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1154dc:
    // 0x1154dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1154e0:
    if (ctx->pc == 0x1154E0u) {
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1154E4u;
        goto label_1154e4;
    }
    ctx->pc = 0x1154DCu;
    {
        const bool branch_taken_0x1154dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154DCu;
        // 0x1154e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154dc) {
            ctx->pc = 0x115520u;
            goto label_115520;
        }
    }
    ctx->pc = 0x1154E4u;
label_1154e4:
    // 0x1154e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1154e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1154e8:
    // 0x1154e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1154e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1154ec:
    // 0x1154ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1154ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1154f0:
    // 0x1154f0: 0x8c450378  lw          $a1, 0x378($v0)
    ctx->pc = 0x1154f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 888)));
label_1154f4:
    // 0x1154f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1154f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1154f8:
    // 0x1154f8: 0x8c460394  lw          $a2, 0x394($v0)
    ctx->pc = 0x1154f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1154fc:
    // 0x1154fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1154fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_115500:
    // 0x115500: 0xc0aa15e  jal         func_2A8578
label_115504:
    if (ctx->pc == 0x115504u) {
        ctx->pc = 0x115504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115500u;
        // 0x115504: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115508u;
        goto label_115508;
    }
    ctx->pc = 0x115500u;
    SET_GPR_U32(ctx, 31, 0x115508u);
    ctx->pc = 0x115504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115500u;
    // 0x115504: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115500u, 0x115508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115508u;
label_115508:
    // 0x115508: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x115508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_11550c:
    // 0x11550c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_115510:
    // 0x115510: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x115510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_115514:
    // 0x115514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115518:
    // 0x115518: 0xc04cc6e  jal         func_1331B8
label_11551c:
    if (ctx->pc == 0x11551Cu) {
        ctx->pc = 0x11551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115518u;
        // 0x11551c: 0xdc450540  ld          $a1, 0x540($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115520u;
        goto label_115520;
    }
    ctx->pc = 0x115518u;
    SET_GPR_U32(ctx, 31, 0x115520u);
    ctx->pc = 0x11551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115518u;
    // 0x11551c: 0xdc450540  ld          $a1, 0x540($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x115518u, 0x115520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115520u;
label_115520:
    // 0x115520: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_115524:
    // 0x115524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115528:
    // 0x115528: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x115528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11552c:
    // 0x11552c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11552cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115530:
    // 0x115530: 0x8c45035c  lw          $a1, 0x35C($v0)
    ctx->pc = 0x115530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 860)));
label_115534:
    // 0x115534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115538:
    // 0x115538: 0x8c460360  lw          $a2, 0x360($v0)
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
label_11553c:
    // 0x11553c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11553cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115540:
    // 0x115540: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x115540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_115544:
    // 0x115544: 0xc0aa15e  jal         func_2A8578
label_115548:
    if (ctx->pc == 0x115548u) {
        ctx->pc = 0x115548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115544u;
        // 0x115548: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11554Cu;
        goto label_11554c;
    }
    ctx->pc = 0x115544u;
    SET_GPR_U32(ctx, 31, 0x11554Cu);
    ctx->pc = 0x115548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115544u;
    // 0x115548: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x115544u, 0x11554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11554Cu;
label_11554c:
    // 0x11554c: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115550:
    // 0x115550: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x115550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_115554:
    // 0x115554: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x115554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_115558:
    // 0x115558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x115558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11555c:
    // 0x11555c: 0x0  nop
    ctx->pc = 0x11555cu;
    // NOP
label_115560:
    // 0x115560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x115560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_115564:
    // 0x115564: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x115564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_115568:
    // 0x115568: 0xc07df52  jal         func_1F7D48
label_11556c:
    if (ctx->pc == 0x11556Cu) {
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115570u;
        goto label_115570;
    }
    ctx->pc = 0x115568u;
    SET_GPR_U32(ctx, 31, 0x115570u);
    ctx->pc = 0x11556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115568u;
    // 0x11556c: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x115568u, 0x115570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115570u;
label_115570:
    // 0x115570: 0x10000020  b           . + 4 + (0x20 << 2)
label_115574:
    if (ctx->pc == 0x115574u) {
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115570u;
        // 0x115574: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115578u;
        goto label_115578;
    }
    ctx->pc = 0x115570u;
    {
        const bool branch_taken_0x115570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115570u;
        // 0x115574: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115570) {
            ctx->pc = 0x1155F4u;
            goto label_1155f4;
        }
    }
    ctx->pc = 0x115578u;
label_115578:
    // 0x115578: 0xc04ad70  jal         func_12B5C0
label_11557c:
    if (ctx->pc == 0x11557Cu) {
        ctx->pc = 0x11557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115578u;
        // 0x11557c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115580u;
        goto label_115580;
    }
    ctx->pc = 0x115578u;
    SET_GPR_U32(ctx, 31, 0x115580u);
    ctx->pc = 0x11557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115578u;
    // 0x11557c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B5C0u, 0x115578u, 0x115580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115580u;
label_115580:
    // 0x115580: 0x8e2406a0  lw          $a0, 0x6A0($s1)
    ctx->pc = 0x115580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_115584:
    // 0x115584: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_115588:
    if (ctx->pc == 0x115588u) {
        ctx->pc = 0x115588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115584u;
        // 0x115588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11558Cu;
        goto label_11558c;
    }
    ctx->pc = 0x115584u;
    {
        const bool branch_taken_0x115584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x115588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115584u;
        // 0x115588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115584) {
            ctx->pc = 0x1155C8u;
            goto label_1155c8;
        }
    }
    ctx->pc = 0x11558Cu;
label_11558c:
    // 0x11558c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_115590:
    // 0x115590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x115590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_115594:
    // 0x115594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115598:
    // 0x115598: 0x8c4506e8  lw          $a1, 0x6E8($v0)
    ctx->pc = 0x115598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
label_11559c:
    // 0x11559c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11559cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1155a0:
    // 0x1155a0: 0x8c4606ec  lw          $a2, 0x6EC($v0)
    ctx->pc = 0x1155a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
label_1155a4:
    // 0x1155a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1155a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1155a8:
    // 0x1155a8: 0xc0aa15e  jal         func_2A8578
label_1155ac:
    if (ctx->pc == 0x1155ACu) {
        ctx->pc = 0x1155ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A8u;
        // 0x1155ac: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155B0u;
        goto label_1155b0;
    }
    ctx->pc = 0x1155A8u;
    SET_GPR_U32(ctx, 31, 0x1155B0u);
    ctx->pc = 0x1155ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155A8u;
    // 0x1155ac: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1155A8u, 0x1155B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155B0u;
label_1155b0:
    // 0x1155b0: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x1155b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_1155b4:
    // 0x1155b4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1155b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1155b8:
    // 0x1155b8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_1155bc:
    // 0x1155bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1155bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1155c0:
    // 0x1155c0: 0xc04cc6e  jal         func_1331B8
label_1155c4:
    if (ctx->pc == 0x1155C4u) {
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0xdc450540  ld          $a1, 0x540($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155C8u;
        goto label_1155c8;
    }
    ctx->pc = 0x1155C0u;
    SET_GPR_U32(ctx, 31, 0x1155C8u);
    ctx->pc = 0x1155C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155C0u;
    // 0x1155c4: 0xdc450540  ld          $a1, 0x540($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1155C0u, 0x1155C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155C8u;
label_1155c8:
    // 0x1155c8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1155c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1155cc:
    // 0x1155cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1155ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1155d0:
    // 0x1155d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1155d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1155d4:
    // 0x1155d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1155d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1155d8:
    // 0x1155d8: 0x8c4506e0  lw          $a1, 0x6E0($v0)
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1760)));
label_1155dc:
    // 0x1155dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1155dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1155e0:
    // 0x1155e0: 0x8c4606e4  lw          $a2, 0x6E4($v0)
    ctx->pc = 0x1155e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
label_1155e4:
    // 0x1155e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1155e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1155e8:
    // 0x1155e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1155ec:
    // 0x1155ec: 0xc0aa15e  jal         func_2A8578
label_1155f0:
    if (ctx->pc == 0x1155F0u) {
        ctx->pc = 0x1155F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155ECu;
        // 0x1155f0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155F4u;
        goto label_1155f4;
    }
    ctx->pc = 0x1155ECu;
    SET_GPR_U32(ctx, 31, 0x1155F4u);
    ctx->pc = 0x1155F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155ECu;
    // 0x1155f0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1155ECu, 0x1155F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155F4u;
label_1155f4:
    // 0x1155f4: 0xc049396  jal         func_124E58
label_1155f8:
    if (ctx->pc == 0x1155F8u) {
        ctx->pc = 0x1155F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155F4u;
        // 0x1155f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1155FCu;
        goto label_1155fc;
    }
    ctx->pc = 0x1155F4u;
    SET_GPR_U32(ctx, 31, 0x1155FCu);
    ctx->pc = 0x1155F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155F4u;
    // 0x1155f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1155F4u, 0x1155FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155FCu;
label_1155fc:
    // 0x1155fc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1155fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_115600:
    // 0x115600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_115604:
    // 0x115604: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x115604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_115608:
    // 0x115608: 0xc0493b0  jal         func_124EC0
label_11560c:
    if (ctx->pc == 0x11560Cu) {
        ctx->pc = 0x11560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115608u;
        // 0x11560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115610u;
        goto label_115610;
    }
    ctx->pc = 0x115608u;
    SET_GPR_U32(ctx, 31, 0x115610u);
    ctx->pc = 0x11560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115608u;
    // 0x11560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x115608u, 0x115610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115610u;
label_115610:
    // 0x115610: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x115610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_115614:
    // 0x115614: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x115614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_115618:
    // 0x115618: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_11561c:
    if (ctx->pc == 0x11561Cu) {
        ctx->pc = 0x11561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115618u;
        // 0x11561c: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115620u;
        goto label_115620;
    }
    ctx->pc = 0x115618u;
    {
        const bool branch_taken_0x115618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115618u;
        // 0x11561c: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115618) {
            ctx->pc = 0x11566Cu;
            goto label_11566c;
        }
    }
    ctx->pc = 0x115620u;
label_115620:
    // 0x115620: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x115620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_115624:
    // 0x115624: 0x3c013e65  lui         $at, 0x3E65
    ctx->pc = 0x115624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15973 << 16));
label_115628:
    // 0x115628: 0x3421c8fa  ori         $at, $at, 0xC8FA
    ctx->pc = 0x115628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51450);
label_11562c:
    // 0x11562c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x11562cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_115630:
    // 0x115630: 0xc0b680e  jal         func_2DA038
label_115634:
    if (ctx->pc == 0x115634u) {
        ctx->pc = 0x115634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115630u;
        // 0x115634: 0xc62c15c0  lwc1        $f12, 0x15C0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115638u;
        goto label_115638;
    }
    ctx->pc = 0x115630u;
    SET_GPR_U32(ctx, 31, 0x115638u);
    ctx->pc = 0x115634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115630u;
    // 0x115634: 0xc62c15c0  lwc1        $f12, 0x15C0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x115630u, 0x115638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115638u;
label_115638:
    // 0x115638: 0xc62115c0  lwc1        $f1, 0x15C0($s1)
    ctx->pc = 0x115638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11563c:
    // 0x11563c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x11563cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_115640:
    // 0x115640: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x115640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_115644:
    // 0x115644: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x115644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_115648:
    // 0x115648: 0xc07df52  jal         func_1F7D48
label_11564c:
    if (ctx->pc == 0x11564Cu) {
        ctx->pc = 0x11564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115648u;
        // 0x11564c: 0xe62115c0  swc1        $f1, 0x15C0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115650u;
        goto label_115650;
    }
    ctx->pc = 0x115648u;
    SET_GPR_U32(ctx, 31, 0x115650u);
    ctx->pc = 0x11564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115648u;
    // 0x11564c: 0xe62115c0  swc1        $f1, 0x15C0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x115648u, 0x115650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115650u;
label_115650:
    // 0x115650: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x115650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_115654:
    // 0x115654: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x115654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_115658:
    // 0x115658: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x115658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_11565c:
    // 0x11565c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x11565cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_115660:
    // 0x115660: 0xc07df52  jal         func_1F7D48
label_115664:
    if (ctx->pc == 0x115664u) {
        ctx->pc = 0x115664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115660u;
        // 0x115664: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x115668u;
        goto label_115668;
    }
    ctx->pc = 0x115660u;
    SET_GPR_U32(ctx, 31, 0x115668u);
    ctx->pc = 0x115664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115660u;
    // 0x115664: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x115660u, 0x115668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115668u;
label_115668:
    // 0x115668: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x115668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_11566c:
    // 0x11566c: 0xc055f06  jal         func_157C18
label_115670:
    if (ctx->pc == 0x115670u) {
        ctx->pc = 0x115670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11566Cu;
        // 0x115670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115674u;
        goto label_115674;
    }
    ctx->pc = 0x11566Cu;
    SET_GPR_U32(ctx, 31, 0x115674u);
    ctx->pc = 0x115670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11566Cu;
    // 0x115670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11566Cu, 0x115674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115674u;
label_115674:
    // 0x115674: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_115678:
    if (ctx->pc == 0x115678u) {
        ctx->pc = 0x115678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115674u;
        // 0x115678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11567Cu;
        goto label_11567c;
    }
    ctx->pc = 0x115674u;
    {
        const bool branch_taken_0x115674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115674u;
        // 0x115678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115674) {
            ctx->pc = 0x115698u;
            goto label_115698;
        }
    }
    ctx->pc = 0x11567Cu;
label_11567c:
    // 0x11567c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115680:
    // 0x115680: 0xc0493d8  jal         func_124F60
label_115684:
    if (ctx->pc == 0x115684u) {
        ctx->pc = 0x115684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115680u;
        // 0x115684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115688u;
        goto label_115688;
    }
    ctx->pc = 0x115680u;
    SET_GPR_U32(ctx, 31, 0x115688u);
    ctx->pc = 0x115684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115680u;
    // 0x115684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x115680u, 0x115688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115688u;
label_115688:
    // 0x115688: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x115688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_11568c:
    // 0x11568c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11568cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_115690:
    // 0x115690: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x115690u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_115694:
    // 0x115694: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x115694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_115698:
    // 0x115698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x115698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11569c:
    // 0x11569c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11569cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1156a0:
    // 0x1156a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156a4:
    // 0x1156a4: 0xc053e7c  jal         func_14F9F0
label_1156a8:
    if (ctx->pc == 0x1156A8u) {
        ctx->pc = 0x1156A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156A4u;
        // 0x1156a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156ACu;
        goto label_1156ac;
    }
    ctx->pc = 0x1156A4u;
    SET_GPR_U32(ctx, 31, 0x1156ACu);
    ctx->pc = 0x1156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156A4u;
    // 0x1156a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1156A4u, 0x1156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156ACu;
label_1156ac:
    // 0x1156ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1156acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1156b0:
    // 0x1156b0: 0xc053e4a  jal         func_14F928
label_1156b4:
    if (ctx->pc == 0x1156B4u) {
        ctx->pc = 0x1156B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B0u;
        // 0x1156b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156B8u;
        goto label_1156b8;
    }
    ctx->pc = 0x1156B0u;
    SET_GPR_U32(ctx, 31, 0x1156B8u);
    ctx->pc = 0x1156B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1156B0u;
    // 0x1156b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1156B0u, 0x1156B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1156B8u;
label_1156b8:
    // 0x1156b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1156b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1156bc:
    // 0x1156bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1156bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1156c0:
    // 0x1156c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1156c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1156c4:
    // 0x1156c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1156c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1156c8:
    // 0x1156c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1156c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1156cc:
    // 0x1156cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1156ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1156d0:
    // 0x1156d0: 0x3e00008  jr          $ra
label_1156d4:
    if (ctx->pc == 0x1156D4u) {
        ctx->pc = 0x1156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156D0u;
        // 0x1156d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1156D8u;
        goto label_fallthrough_0x1156d0;
    }
    ctx->pc = 0x1156D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156D0u;
        // 0x1156d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1156d0:
    ctx->pc = 0x1156D8u;
}
