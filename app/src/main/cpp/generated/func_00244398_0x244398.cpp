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

// Function: func_00244398
// Address: 0x244398 - 0x244610
void func_00244398_0x244398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00244398_0x244398");
#endif

    switch (ctx->pc) {
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        default: break;
    }

    ctx->pc = 0x244398u;

label_244398:
    // 0x244398: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x244398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24439c:
    // 0x24439c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24439cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2443a0:
    // 0x2443a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2443a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2443a4:
    // 0x2443a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2443a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2443a8:
    // 0x2443a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2443a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2443ac:
    // 0x2443ac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2443acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2443b0:
    // 0x2443b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2443b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2443b4:
    // 0x2443b4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_2443b8:
    // 0x2443b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2443b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2443bc:
    // 0x2443bc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2443bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2443c0:
    // 0x2443c0: 0xc04d476  jal         func_1351D8
label_2443c4:
    if (ctx->pc == 0x2443C4u) {
        ctx->pc = 0x2443C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443C0u;
        // 0x2443c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443C8u;
        goto label_2443c8;
    }
    ctx->pc = 0x2443C0u;
    SET_GPR_U32(ctx, 31, 0x2443C8u);
    ctx->pc = 0x2443C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443C0u;
    // 0x2443c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2443C0u, 0x2443C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443C8u;
label_2443c8:
    // 0x2443c8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2443c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_2443cc:
    // 0x2443cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2443d0:
    // 0x2443d0: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x2443d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2443d4:
    // 0x2443d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2443d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2443d8:
    // 0x2443d8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2443dc:
    if (ctx->pc == 0x2443DCu) {
        ctx->pc = 0x2443DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D8u;
        // 0x2443dc: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443E0u;
        goto label_2443e0;
    }
    ctx->pc = 0x2443D8u;
    {
        const bool branch_taken_0x2443d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D8u;
        // 0x2443dc: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443d8) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x2443E0u;
label_2443e0:
    // 0x2443e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2443e4:
    // 0x2443e4: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
label_2443e8:
    if (ctx->pc == 0x2443E8u) {
        ctx->pc = 0x2443E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443E4u;
        // 0x2443e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443ECu;
        goto label_2443ec;
    }
    ctx->pc = 0x2443E4u;
    {
        const bool branch_taken_0x2443e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2443E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443E4u;
        // 0x2443e8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443e4) {
            ctx->pc = 0x244464u;
            goto label_244464;
        }
    }
    ctx->pc = 0x2443ECu;
label_2443ec:
    // 0x2443ec: 0x10000083  b           . + 4 + (0x83 << 2)
label_2443f0:
    if (ctx->pc == 0x2443F0u) {
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443F4u;
        goto label_2443f4;
    }
    ctx->pc = 0x2443ECu;
    {
        const bool branch_taken_0x2443ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443ECu;
        // 0x2443f0: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443ec) {
            ctx->pc = 0x2445FCu;
            goto label_2445fc;
        }
    }
    ctx->pc = 0x2443F4u;
label_2443f4:
    // 0x2443f4: 0xc09d91a  jal         func_276468
label_2443f8:
    if (ctx->pc == 0x2443F8u) {
        ctx->pc = 0x2443F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443F4u;
        // 0x2443f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443FCu;
        goto label_2443fc;
    }
    ctx->pc = 0x2443F4u;
    SET_GPR_U32(ctx, 31, 0x2443FCu);
    ctx->pc = 0x2443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443F4u;
    // 0x2443f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2443F4u, 0x2443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2443FCu;
label_2443fc:
    // 0x2443fc: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2443fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_244400:
    // 0x244400: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x244400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_244404:
    // 0x244404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_244408:
    // 0x244408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24440c:
    // 0x24440c: 0x8c65246c  lw          $a1, 0x246C($v1)
    ctx->pc = 0x24440cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9324)));
label_244410:
    // 0x244410: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x244410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244414:
    // 0x244414: 0x8c662470  lw          $a2, 0x2470($v1)
    ctx->pc = 0x244414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9328)));
label_244418:
    // 0x244418: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24441c:
    // 0x24441c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_244420:
    // 0x244420: 0xc0aa15e  jal         func_2A8578
label_244424:
    if (ctx->pc == 0x244424u) {
        ctx->pc = 0x244424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244420u;
        // 0x244424: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244428u;
        goto label_244428;
    }
    ctx->pc = 0x244420u;
    SET_GPR_U32(ctx, 31, 0x244428u);
    ctx->pc = 0x244424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244420u;
    // 0x244424: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244420u, 0x244428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244428u;
label_244428:
    // 0x244428: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x244428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
label_24442c:
    // 0x24442c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24442cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244430:
    // 0x244430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244434:
    // 0x244434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244438:
    // 0x244438: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x244438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24443c:
    // 0x24443c: 0xc0c1880  jal         func_306200
label_244440:
    if (ctx->pc == 0x244440u) {
        ctx->pc = 0x244440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24443Cu;
        // 0x244440: 0xe6201730  swc1        $f0, 0x1730($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5936), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244444u;
        goto label_244444;
    }
    ctx->pc = 0x24443Cu;
    SET_GPR_U32(ctx, 31, 0x244444u);
    ctx->pc = 0x244440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24443Cu;
    // 0x244440: 0xe6201730  swc1        $f0, 0x1730($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5936), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x24443Cu, 0x244444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244444u;
label_244444:
    // 0x244444: 0x8e2416d4  lw          $a0, 0x16D4($s1)
    ctx->pc = 0x244444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_244448:
    // 0x244448: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x244448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_24444c:
    // 0x24444c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x24444cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_244450:
    // 0x244450: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x244450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
label_244454:
    // 0x244454: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x244454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_244458:
    // 0x244458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x244458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24445c:
    // 0x24445c: 0xae2416d4  sw          $a0, 0x16D4($s1)
    ctx->pc = 0x24445cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 4));
label_244460:
    // 0x244460: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x244460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_244464:
    // 0x244464: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x244464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_244468:
    // 0x244468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24446c:
    // 0x24446c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244470:
    // 0x244470: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x244470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_244474:
    // 0x244474: 0xc0989d4  jal         func_262750
label_244478:
    if (ctx->pc == 0x244478u) {
        ctx->pc = 0x244478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244474u;
        // 0x244478: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24447Cu;
        goto label_24447c;
    }
    ctx->pc = 0x244474u;
    SET_GPR_U32(ctx, 31, 0x24447Cu);
    ctx->pc = 0x244478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244474u;
    // 0x244478: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x244474u, 0x24447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24447Cu;
label_24447c:
    // 0x24447c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x24447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_244480:
    // 0x244480: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_244484:
    // 0x244484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244488:
    // 0x244488: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x244488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24448c:
    // 0x24448c: 0xc055f06  jal         func_157C18
label_244490:
    if (ctx->pc == 0x244490u) {
        ctx->pc = 0x244490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24448Cu;
        // 0x244490: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244494u;
        goto label_244494;
    }
    ctx->pc = 0x24448Cu;
    SET_GPR_U32(ctx, 31, 0x244494u);
    ctx->pc = 0x244490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24448Cu;
    // 0x244490: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24448Cu, 0x244494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244494u;
label_244494:
    // 0x244494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244498:
    if (ctx->pc == 0x244498u) {
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24449Cu;
        goto label_24449c;
    }
    ctx->pc = 0x244494u;
    {
        const bool branch_taken_0x244494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244494) {
            ctx->pc = 0x2444B4u;
            goto label_2444b4;
        }
    }
    ctx->pc = 0x24449Cu;
label_24449c:
    // 0x24449c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2444a0:
    // 0x2444a0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x2444a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_2444a4:
    // 0x2444a4: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x2444a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_2444a8:
    // 0x2444a8: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x2444a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_2444ac:
    // 0x2444ac: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x2444acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_2444b0:
    // 0x2444b0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2444b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2444b4:
    // 0x2444b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2444b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2444b8:
    // 0x2444b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2444b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2444bc:
    // 0x2444bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2444bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2444c0:
    // 0x2444c0: 0xc053e7c  jal         func_14F9F0
label_2444c4:
    if (ctx->pc == 0x2444C4u) {
        ctx->pc = 0x2444C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444C0u;
        // 0x2444c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444C8u;
        goto label_2444c8;
    }
    ctx->pc = 0x2444C0u;
    SET_GPR_U32(ctx, 31, 0x2444C8u);
    ctx->pc = 0x2444C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444C0u;
    // 0x2444c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2444C0u, 0x2444C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444C8u;
label_2444c8:
    // 0x2444c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2444c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2444cc:
    // 0x2444cc: 0xc053e4a  jal         func_14F928
label_2444d0:
    if (ctx->pc == 0x2444D0u) {
        ctx->pc = 0x2444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444CCu;
        // 0x2444d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444D4u;
        goto label_2444d4;
    }
    ctx->pc = 0x2444CCu;
    SET_GPR_U32(ctx, 31, 0x2444D4u);
    ctx->pc = 0x2444D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444CCu;
    // 0x2444d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2444CCu, 0x2444D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444D4u;
label_2444d4:
    // 0x2444d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2444d8:
    // 0x2444d8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2444d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_2444dc:
    // 0x2444dc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2444dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_2444e0:
    // 0x2444e0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2444e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_2444e4:
    // 0x2444e4: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x2444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_2444e8:
    // 0x2444e8: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_2444ec:
    if (ctx->pc == 0x2444ECu) {
        ctx->pc = 0x2444ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444E8u;
        // 0x2444ec: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444F0u;
        goto label_2444f0;
    }
    ctx->pc = 0x2444E8u;
    {
        const bool branch_taken_0x2444e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2444e8) {
            ctx->pc = 0x2444ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444E8u;
            // 0x2444ec: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24450Cu;
            goto label_24450c;
        }
    }
    ctx->pc = 0x2444F0u;
label_2444f0:
    // 0x2444f0: 0xc6200490  lwc1        $f0, 0x490($s1)
    ctx->pc = 0x2444f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2444f4:
    // 0x2444f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2444f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2444f8:
    // 0x2444f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2444f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2444fc:
    // 0x2444fc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2444fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_244500:
    // 0x244500: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244504:
    // 0x244504: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x244504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_244508:
    // 0x244508: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24450c:
    // 0x24450c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_244510:
    // 0x244510: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_244514:
    if (ctx->pc == 0x244514u) {
        ctx->pc = 0x244514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244510u;
        // 0x244514: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x244518u;
        goto label_244518;
    }
    ctx->pc = 0x244510u;
    {
        const bool branch_taken_0x244510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x244514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244510u;
        // 0x244514: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244510) {
            ctx->pc = 0x244534u;
            goto label_244534;
        }
    }
    ctx->pc = 0x244518u;
label_244518:
    // 0x244518: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24451c:
    // 0x24451c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_244520:
    // 0x244520: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x244520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244524:
    // 0x244524: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x244524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_244528:
    // 0x244528: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24452c:
    // 0x24452c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_244530:
    // 0x244530: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x244530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244534:
    // 0x244534: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x244534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244538:
    // 0x244538: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x244538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_24453c:
    // 0x24453c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24453cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_244540:
    // 0x244540: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x244540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_244544:
    // 0x244544: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x244544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_244548:
    // 0x244548: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24454c:
    // 0x24454c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24454cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_244550:
    // 0x244550: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x244550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_244554:
    // 0x244554: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x244554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_244558:
    // 0x244558: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24455c:
    // 0x24455c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_244560:
    // 0x244560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244564:
    // 0x244564: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x244564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_244568:
    // 0x244568: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24456c:
    // 0x24456c: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x24456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_244570:
    // 0x244570: 0xc04c784  jal         func_131E10
label_244574:
    if (ctx->pc == 0x244574u) {
        ctx->pc = 0x244574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244570u;
        // 0x244574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244578u;
        goto label_244578;
    }
    ctx->pc = 0x244570u;
    SET_GPR_U32(ctx, 31, 0x244578u);
    ctx->pc = 0x244574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244570u;
    // 0x244574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x244570u, 0x244578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244578u;
label_244578:
    // 0x244578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24457c:
    // 0x24457c: 0x56500014  bnel        $s2, $s0, . + 4 + (0x14 << 2)
label_244580:
    if (ctx->pc == 0x244580u) {
        ctx->pc = 0x244580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24457Cu;
        // 0x244580: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244584u;
        goto label_244584;
    }
    ctx->pc = 0x24457Cu;
    {
        const bool branch_taken_0x24457c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x24457c) {
            ctx->pc = 0x244580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24457Cu;
            // 0x244580: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445D0u;
            goto label_2445d0;
        }
    }
    ctx->pc = 0x244584u;
label_244584:
    // 0x244584: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_244588:
    // 0x244588: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x244588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_24458c:
    // 0x24458c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x24458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244590:
    // 0x244590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244594:
    // 0x244594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244598:
    // 0x244598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24459c:
    // 0x24459c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2445a0:
    // 0x2445a0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2445a4:
    // 0x2445a4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2445a8:
    // 0x2445a8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2445ac:
    // 0x2445ac: 0x40f809  jalr        $v0
label_2445b0:
    if (ctx->pc == 0x2445B0u) {
        ctx->pc = 0x2445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445ACu;
        // 0x2445b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445B4u;
        goto label_2445b4;
    }
    ctx->pc = 0x2445ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2445B4u);
        ctx->pc = 0x2445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445ACu;
        // 0x2445b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2445ACu, 0x2445B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2445B4u;
label_2445b4:
    // 0x2445b4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2445b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2445b8:
    // 0x2445b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2445bc:
    // 0x2445bc: 0xa23202f4  sb          $s2, 0x2F4($s1)
    ctx->pc = 0x2445bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 18));
label_2445c0:
    // 0x2445c0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x2445c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_2445c4:
    // 0x2445c4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2445c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2445c8:
    // 0x2445c8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2445c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_2445cc:
    // 0x2445cc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2445ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2445d0:
    // 0x2445d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2445d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2445d4:
    // 0x2445d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2445d8:
    if (ctx->pc == 0x2445D8u) {
        ctx->pc = 0x2445D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D4u;
        // 0x2445d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445DCu;
        goto label_2445dc;
    }
    ctx->pc = 0x2445D4u;
    {
        const bool branch_taken_0x2445d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D4u;
        // 0x2445d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445d4) {
            ctx->pc = 0x2445F8u;
            goto label_2445f8;
        }
    }
    ctx->pc = 0x2445DCu;
label_2445dc:
    // 0x2445dc: 0x8e240730  lw          $a0, 0x730($s1)
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1840)));
label_2445e0:
    // 0x2445e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2445e4:
    if (ctx->pc == 0x2445E4u) {
        ctx->pc = 0x2445E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445E0u;
        // 0x2445e4: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445E8u;
        goto label_2445e8;
    }
    ctx->pc = 0x2445E0u;
    {
        const bool branch_taken_0x2445e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445e0) {
            ctx->pc = 0x2445E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445E0u;
            // 0x2445e4: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445FCu;
            goto label_2445fc;
        }
    }
    ctx->pc = 0x2445E8u;
label_2445e8:
    // 0x2445e8: 0xc074042  jal         func_1D0108
label_2445ec:
    if (ctx->pc == 0x2445ECu) {
        ctx->pc = 0x2445F0u;
        goto label_2445f0;
    }
    ctx->pc = 0x2445E8u;
    SET_GPR_U32(ctx, 31, 0x2445F0u);
    ctx->pc = 0x1D0108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0108u, 0x2445E8u, 0x2445F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445F0u;
label_2445f0:
    // 0x2445f0: 0xae200730  sw          $zero, 0x730($s1)
    ctx->pc = 0x2445f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1840), GPR_U32(ctx, 0));
label_2445f4:
    // 0x2445f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2445f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2445f8:
    // 0x2445f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2445f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2445fc:
    // 0x2445fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2445fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_244600:
    // 0x244600: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x244600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244604:
    // 0x244604: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x244604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_244608:
    // 0x244608: 0x3e00008  jr          $ra
label_24460c:
    if (ctx->pc == 0x24460Cu) {
        ctx->pc = 0x24460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244608u;
        // 0x24460c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244610u;
        goto label_fallthrough_0x244608;
    }
    ctx->pc = 0x244608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244608u;
        // 0x24460c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244608:
    ctx->pc = 0x244610u;
}
