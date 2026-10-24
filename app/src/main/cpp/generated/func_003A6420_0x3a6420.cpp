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

// Function: func_003A6420
// Address: 0x3a6420 - 0x3a6830
void func_003A6420_0x3a6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6420_0x3a6420");
#endif

    switch (ctx->pc) {
        case 0x3a6420u: goto label_3a6420;
        case 0x3a6424u: goto label_3a6424;
        case 0x3a6428u: goto label_3a6428;
        case 0x3a642cu: goto label_3a642c;
        case 0x3a6430u: goto label_3a6430;
        case 0x3a6434u: goto label_3a6434;
        case 0x3a6438u: goto label_3a6438;
        case 0x3a643cu: goto label_3a643c;
        case 0x3a6440u: goto label_3a6440;
        case 0x3a6444u: goto label_3a6444;
        case 0x3a6448u: goto label_3a6448;
        case 0x3a644cu: goto label_3a644c;
        case 0x3a6450u: goto label_3a6450;
        case 0x3a6454u: goto label_3a6454;
        case 0x3a6458u: goto label_3a6458;
        case 0x3a645cu: goto label_3a645c;
        case 0x3a6460u: goto label_3a6460;
        case 0x3a6464u: goto label_3a6464;
        case 0x3a6468u: goto label_3a6468;
        case 0x3a646cu: goto label_3a646c;
        case 0x3a6470u: goto label_3a6470;
        case 0x3a6474u: goto label_3a6474;
        case 0x3a6478u: goto label_3a6478;
        case 0x3a647cu: goto label_3a647c;
        case 0x3a6480u: goto label_3a6480;
        case 0x3a6484u: goto label_3a6484;
        case 0x3a6488u: goto label_3a6488;
        case 0x3a648cu: goto label_3a648c;
        case 0x3a6490u: goto label_3a6490;
        case 0x3a6494u: goto label_3a6494;
        case 0x3a6498u: goto label_3a6498;
        case 0x3a649cu: goto label_3a649c;
        case 0x3a64a0u: goto label_3a64a0;
        case 0x3a64a4u: goto label_3a64a4;
        case 0x3a64a8u: goto label_3a64a8;
        case 0x3a64acu: goto label_3a64ac;
        case 0x3a64b0u: goto label_3a64b0;
        case 0x3a64b4u: goto label_3a64b4;
        case 0x3a64b8u: goto label_3a64b8;
        case 0x3a64bcu: goto label_3a64bc;
        case 0x3a64c0u: goto label_3a64c0;
        case 0x3a64c4u: goto label_3a64c4;
        case 0x3a64c8u: goto label_3a64c8;
        case 0x3a64ccu: goto label_3a64cc;
        case 0x3a64d0u: goto label_3a64d0;
        case 0x3a64d4u: goto label_3a64d4;
        case 0x3a64d8u: goto label_3a64d8;
        case 0x3a64dcu: goto label_3a64dc;
        case 0x3a64e0u: goto label_3a64e0;
        case 0x3a64e4u: goto label_3a64e4;
        case 0x3a64e8u: goto label_3a64e8;
        case 0x3a64ecu: goto label_3a64ec;
        case 0x3a64f0u: goto label_3a64f0;
        case 0x3a64f4u: goto label_3a64f4;
        case 0x3a64f8u: goto label_3a64f8;
        case 0x3a64fcu: goto label_3a64fc;
        case 0x3a6500u: goto label_3a6500;
        case 0x3a6504u: goto label_3a6504;
        case 0x3a6508u: goto label_3a6508;
        case 0x3a650cu: goto label_3a650c;
        case 0x3a6510u: goto label_3a6510;
        case 0x3a6514u: goto label_3a6514;
        case 0x3a6518u: goto label_3a6518;
        case 0x3a651cu: goto label_3a651c;
        case 0x3a6520u: goto label_3a6520;
        case 0x3a6524u: goto label_3a6524;
        case 0x3a6528u: goto label_3a6528;
        case 0x3a652cu: goto label_3a652c;
        case 0x3a6530u: goto label_3a6530;
        case 0x3a6534u: goto label_3a6534;
        case 0x3a6538u: goto label_3a6538;
        case 0x3a653cu: goto label_3a653c;
        case 0x3a6540u: goto label_3a6540;
        case 0x3a6544u: goto label_3a6544;
        case 0x3a6548u: goto label_3a6548;
        case 0x3a654cu: goto label_3a654c;
        case 0x3a6550u: goto label_3a6550;
        case 0x3a6554u: goto label_3a6554;
        case 0x3a6558u: goto label_3a6558;
        case 0x3a655cu: goto label_3a655c;
        case 0x3a6560u: goto label_3a6560;
        case 0x3a6564u: goto label_3a6564;
        case 0x3a6568u: goto label_3a6568;
        case 0x3a656cu: goto label_3a656c;
        case 0x3a6570u: goto label_3a6570;
        case 0x3a6574u: goto label_3a6574;
        case 0x3a6578u: goto label_3a6578;
        case 0x3a657cu: goto label_3a657c;
        case 0x3a6580u: goto label_3a6580;
        case 0x3a6584u: goto label_3a6584;
        case 0x3a6588u: goto label_3a6588;
        case 0x3a658cu: goto label_3a658c;
        case 0x3a6590u: goto label_3a6590;
        case 0x3a6594u: goto label_3a6594;
        case 0x3a6598u: goto label_3a6598;
        case 0x3a659cu: goto label_3a659c;
        case 0x3a65a0u: goto label_3a65a0;
        case 0x3a65a4u: goto label_3a65a4;
        case 0x3a65a8u: goto label_3a65a8;
        case 0x3a65acu: goto label_3a65ac;
        case 0x3a65b0u: goto label_3a65b0;
        case 0x3a65b4u: goto label_3a65b4;
        case 0x3a65b8u: goto label_3a65b8;
        case 0x3a65bcu: goto label_3a65bc;
        case 0x3a65c0u: goto label_3a65c0;
        case 0x3a65c4u: goto label_3a65c4;
        case 0x3a65c8u: goto label_3a65c8;
        case 0x3a65ccu: goto label_3a65cc;
        case 0x3a65d0u: goto label_3a65d0;
        case 0x3a65d4u: goto label_3a65d4;
        case 0x3a65d8u: goto label_3a65d8;
        case 0x3a65dcu: goto label_3a65dc;
        case 0x3a65e0u: goto label_3a65e0;
        case 0x3a65e4u: goto label_3a65e4;
        case 0x3a65e8u: goto label_3a65e8;
        case 0x3a65ecu: goto label_3a65ec;
        case 0x3a65f0u: goto label_3a65f0;
        case 0x3a65f4u: goto label_3a65f4;
        case 0x3a65f8u: goto label_3a65f8;
        case 0x3a65fcu: goto label_3a65fc;
        case 0x3a6600u: goto label_3a6600;
        case 0x3a6604u: goto label_3a6604;
        case 0x3a6608u: goto label_3a6608;
        case 0x3a660cu: goto label_3a660c;
        case 0x3a6610u: goto label_3a6610;
        case 0x3a6614u: goto label_3a6614;
        case 0x3a6618u: goto label_3a6618;
        case 0x3a661cu: goto label_3a661c;
        case 0x3a6620u: goto label_3a6620;
        case 0x3a6624u: goto label_3a6624;
        case 0x3a6628u: goto label_3a6628;
        case 0x3a662cu: goto label_3a662c;
        case 0x3a6630u: goto label_3a6630;
        case 0x3a6634u: goto label_3a6634;
        case 0x3a6638u: goto label_3a6638;
        case 0x3a663cu: goto label_3a663c;
        case 0x3a6640u: goto label_3a6640;
        case 0x3a6644u: goto label_3a6644;
        case 0x3a6648u: goto label_3a6648;
        case 0x3a664cu: goto label_3a664c;
        case 0x3a6650u: goto label_3a6650;
        case 0x3a6654u: goto label_3a6654;
        case 0x3a6658u: goto label_3a6658;
        case 0x3a665cu: goto label_3a665c;
        case 0x3a6660u: goto label_3a6660;
        case 0x3a6664u: goto label_3a6664;
        case 0x3a6668u: goto label_3a6668;
        case 0x3a666cu: goto label_3a666c;
        case 0x3a6670u: goto label_3a6670;
        case 0x3a6674u: goto label_3a6674;
        case 0x3a6678u: goto label_3a6678;
        case 0x3a667cu: goto label_3a667c;
        case 0x3a6680u: goto label_3a6680;
        case 0x3a6684u: goto label_3a6684;
        case 0x3a6688u: goto label_3a6688;
        case 0x3a668cu: goto label_3a668c;
        case 0x3a6690u: goto label_3a6690;
        case 0x3a6694u: goto label_3a6694;
        case 0x3a6698u: goto label_3a6698;
        case 0x3a669cu: goto label_3a669c;
        case 0x3a66a0u: goto label_3a66a0;
        case 0x3a66a4u: goto label_3a66a4;
        case 0x3a66a8u: goto label_3a66a8;
        case 0x3a66acu: goto label_3a66ac;
        case 0x3a66b0u: goto label_3a66b0;
        case 0x3a66b4u: goto label_3a66b4;
        case 0x3a66b8u: goto label_3a66b8;
        case 0x3a66bcu: goto label_3a66bc;
        case 0x3a66c0u: goto label_3a66c0;
        case 0x3a66c4u: goto label_3a66c4;
        case 0x3a66c8u: goto label_3a66c8;
        case 0x3a66ccu: goto label_3a66cc;
        case 0x3a66d0u: goto label_3a66d0;
        case 0x3a66d4u: goto label_3a66d4;
        case 0x3a66d8u: goto label_3a66d8;
        case 0x3a66dcu: goto label_3a66dc;
        case 0x3a66e0u: goto label_3a66e0;
        case 0x3a66e4u: goto label_3a66e4;
        case 0x3a66e8u: goto label_3a66e8;
        case 0x3a66ecu: goto label_3a66ec;
        case 0x3a66f0u: goto label_3a66f0;
        case 0x3a66f4u: goto label_3a66f4;
        case 0x3a66f8u: goto label_3a66f8;
        case 0x3a66fcu: goto label_3a66fc;
        case 0x3a6700u: goto label_3a6700;
        case 0x3a6704u: goto label_3a6704;
        case 0x3a6708u: goto label_3a6708;
        case 0x3a670cu: goto label_3a670c;
        case 0x3a6710u: goto label_3a6710;
        case 0x3a6714u: goto label_3a6714;
        case 0x3a6718u: goto label_3a6718;
        case 0x3a671cu: goto label_3a671c;
        case 0x3a6720u: goto label_3a6720;
        case 0x3a6724u: goto label_3a6724;
        case 0x3a6728u: goto label_3a6728;
        case 0x3a672cu: goto label_3a672c;
        case 0x3a6730u: goto label_3a6730;
        case 0x3a6734u: goto label_3a6734;
        case 0x3a6738u: goto label_3a6738;
        case 0x3a673cu: goto label_3a673c;
        case 0x3a6740u: goto label_3a6740;
        case 0x3a6744u: goto label_3a6744;
        case 0x3a6748u: goto label_3a6748;
        case 0x3a674cu: goto label_3a674c;
        case 0x3a6750u: goto label_3a6750;
        case 0x3a6754u: goto label_3a6754;
        case 0x3a6758u: goto label_3a6758;
        case 0x3a675cu: goto label_3a675c;
        case 0x3a6760u: goto label_3a6760;
        case 0x3a6764u: goto label_3a6764;
        case 0x3a6768u: goto label_3a6768;
        case 0x3a676cu: goto label_3a676c;
        case 0x3a6770u: goto label_3a6770;
        case 0x3a6774u: goto label_3a6774;
        case 0x3a6778u: goto label_3a6778;
        case 0x3a677cu: goto label_3a677c;
        case 0x3a6780u: goto label_3a6780;
        case 0x3a6784u: goto label_3a6784;
        case 0x3a6788u: goto label_3a6788;
        case 0x3a678cu: goto label_3a678c;
        case 0x3a6790u: goto label_3a6790;
        case 0x3a6794u: goto label_3a6794;
        case 0x3a6798u: goto label_3a6798;
        case 0x3a679cu: goto label_3a679c;
        case 0x3a67a0u: goto label_3a67a0;
        case 0x3a67a4u: goto label_3a67a4;
        case 0x3a67a8u: goto label_3a67a8;
        case 0x3a67acu: goto label_3a67ac;
        case 0x3a67b0u: goto label_3a67b0;
        case 0x3a67b4u: goto label_3a67b4;
        case 0x3a67b8u: goto label_3a67b8;
        case 0x3a67bcu: goto label_3a67bc;
        case 0x3a67c0u: goto label_3a67c0;
        case 0x3a67c4u: goto label_3a67c4;
        case 0x3a67c8u: goto label_3a67c8;
        case 0x3a67ccu: goto label_3a67cc;
        case 0x3a67d0u: goto label_3a67d0;
        case 0x3a67d4u: goto label_3a67d4;
        case 0x3a67d8u: goto label_3a67d8;
        case 0x3a67dcu: goto label_3a67dc;
        case 0x3a67e0u: goto label_3a67e0;
        case 0x3a67e4u: goto label_3a67e4;
        case 0x3a67e8u: goto label_3a67e8;
        case 0x3a67ecu: goto label_3a67ec;
        case 0x3a67f0u: goto label_3a67f0;
        case 0x3a67f4u: goto label_3a67f4;
        case 0x3a67f8u: goto label_3a67f8;
        case 0x3a67fcu: goto label_3a67fc;
        case 0x3a6800u: goto label_3a6800;
        case 0x3a6804u: goto label_3a6804;
        case 0x3a6808u: goto label_3a6808;
        case 0x3a680cu: goto label_3a680c;
        case 0x3a6810u: goto label_3a6810;
        case 0x3a6814u: goto label_3a6814;
        case 0x3a6818u: goto label_3a6818;
        case 0x3a681cu: goto label_3a681c;
        case 0x3a6820u: goto label_3a6820;
        case 0x3a6824u: goto label_3a6824;
        case 0x3a6828u: goto label_3a6828;
        case 0x3a682cu: goto label_3a682c;
        default: break;
    }

    ctx->pc = 0x3a6420u;

label_3a6420:
    // 0x3a6420: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3a6420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3a6424:
    // 0x3a6424: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3a6424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3a6428:
    // 0x3a6428: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3a6428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3a642c:
    // 0x3a642c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a642cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6430:
    // 0x3a6430: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3a6430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3a6434:
    // 0x3a6434: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3a6434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a6438:
    // 0x3a6438: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3a6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3a643c:
    // 0x3a643c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3a643cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3a6440:
    // 0x3a6440: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3a6440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3a6444:
    // 0x3a6444: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3a6444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3a6448:
    // 0x3a6448: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a6448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a644c:
    // 0x3a644c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3a6450:
    // 0x3a6450: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a6454:
    // 0x3a6454: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3a6458:
    if (ctx->pc == 0x3A6458u) {
        ctx->pc = 0x3A6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6454u;
        // 0x3a6458: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A645Cu;
        goto label_3a645c;
    }
    ctx->pc = 0x3A6454u;
    {
        const bool branch_taken_0x3a6454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6454u;
        // 0x3a6458: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6454) {
            ctx->pc = 0x3A6468u;
            goto label_3a6468;
        }
    }
    ctx->pc = 0x3A645Cu;
label_3a645c:
    // 0x3a645c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a645cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a6460:
    // 0x3a6460: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a6460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a6464:
    // 0x3a6464: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a6464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a6468:
    // 0x3a6468: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a646c:
    // 0x3a646c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3a646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3a6470:
    // 0x3a6470: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3a6474:
    if (ctx->pc == 0x3A6474u) {
        ctx->pc = 0x3A6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6470u;
        // 0x3a6474: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6478u;
        goto label_3a6478;
    }
    ctx->pc = 0x3A6470u;
    {
        const bool branch_taken_0x3a6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6470) {
            ctx->pc = 0x3A6474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6470u;
            // 0x3a6474: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6484u;
            goto label_3a6484;
        }
    }
    ctx->pc = 0x3A6478u;
label_3a6478:
    // 0x3a6478: 0xc0e987c  jal         func_3A61F0
label_3a647c:
    if (ctx->pc == 0x3A647Cu) {
        ctx->pc = 0x3A6480u;
        goto label_3a6480;
    }
    ctx->pc = 0x3A6478u;
    SET_GPR_U32(ctx, 31, 0x3A6480u);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3A6478u, 0x3A6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6480u;
label_3a6480:
    // 0x3a6480: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3a6480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6484:
    // 0x3a6484: 0x24030108  addiu       $v1, $zero, 0x108
    ctx->pc = 0x3a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_3a6488:
    // 0x3a6488: 0x30420108  andi        $v0, $v0, 0x108
    ctx->pc = 0x3a6488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)264);
label_3a648c:
    // 0x3a648c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3a6490:
    if (ctx->pc == 0x3A6490u) {
        ctx->pc = 0x3A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A648Cu;
        // 0x3a6490: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6494u;
        goto label_3a6494;
    }
    ctx->pc = 0x3A648Cu;
    {
        const bool branch_taken_0x3a648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A648Cu;
        // 0x3a6490: 0x8e110054  lw          $s1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a648c) {
            ctx->pc = 0x3A649Cu;
            goto label_3a649c;
        }
    }
    ctx->pc = 0x3A6494u;
label_3a6494:
    // 0x3a6494: 0xc0e9808  jal         func_3A6020
label_3a6498:
    if (ctx->pc == 0x3A6498u) {
        ctx->pc = 0x3A6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6494u;
        // 0x3a6498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A649Cu;
        goto label_3a649c;
    }
    ctx->pc = 0x3A6494u;
    SET_GPR_U32(ctx, 31, 0x3A649Cu);
    ctx->pc = 0x3A6498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6494u;
    // 0x3a6498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3A6494u, 0x3A649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A649Cu;
label_3a649c:
    // 0x3a649c: 0x8e150028  lw          $s5, 0x28($s0)
    ctx->pc = 0x3a649cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3a64a0:
    // 0x3a64a0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_3a64a4:
    if (ctx->pc == 0x3A64A4u) {
        ctx->pc = 0x3A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A0u;
        // 0x3a64a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64A8u;
        goto label_3a64a8;
    }
    ctx->pc = 0x3A64A0u;
    {
        const bool branch_taken_0x3a64a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A0u;
        // 0x3a64a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a0) {
            ctx->pc = 0x3A64B0u;
            goto label_3a64b0;
        }
    }
    ctx->pc = 0x3A64A8u;
label_3a64a8:
    // 0x3a64a8: 0x10000036  b           . + 4 + (0x36 << 2)
label_3a64ac:
    if (ctx->pc == 0x3A64ACu) {
        ctx->pc = 0x3A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A8u;
        // 0x3a64ac: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64B0u;
        goto label_3a64b0;
    }
    ctx->pc = 0x3A64A8u;
    {
        const bool branch_taken_0x3a64a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64A8u;
        // 0x3a64ac: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64a8) {
            ctx->pc = 0x3A6584u;
            goto label_3a6584;
        }
    }
    ctx->pc = 0x3A64B0u;
label_3a64b0:
    // 0x3a64b0: 0x1282000b  beq         $s4, $v0, . + 4 + (0xB << 2)
label_3a64b4:
    if (ctx->pc == 0x3A64B4u) {
        ctx->pc = 0x3A64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64B0u;
        // 0x3a64b4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64B8u;
        goto label_3a64b8;
    }
    ctx->pc = 0x3A64B0u;
    {
        const bool branch_taken_0x3a64b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A64B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64B0u;
        // 0x3a64b4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64b0) {
            ctx->pc = 0x3A64E0u;
            goto label_3a64e0;
        }
    }
    ctx->pc = 0x3A64B8u;
label_3a64b8:
    // 0x3a64b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a64bc:
    if (ctx->pc == 0x3A64BCu) {
        ctx->pc = 0x3A64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64B8u;
        // 0x3a64bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64C0u;
        goto label_3a64c0;
    }
    ctx->pc = 0x3A64B8u;
    {
        const bool branch_taken_0x3a64b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64B8u;
        // 0x3a64bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64b8) {
            ctx->pc = 0x3A64D0u;
            goto label_3a64d0;
        }
    }
    ctx->pc = 0x3A64C0u;
label_3a64c0:
    // 0x3a64c0: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
label_3a64c4:
    if (ctx->pc == 0x3A64C4u) {
        ctx->pc = 0x3A64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64C0u;
        // 0x3a64c4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64C8u;
        goto label_3a64c8;
    }
    ctx->pc = 0x3A64C0u;
    {
        const bool branch_taken_0x3a64c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64C0u;
        // 0x3a64c4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64c0) {
            ctx->pc = 0x3A6578u;
            goto label_3a6578;
        }
    }
    ctx->pc = 0x3A64C8u;
label_3a64c8:
    // 0x3a64c8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3a64cc:
    if (ctx->pc == 0x3A64CCu) {
        ctx->pc = 0x3A64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64C8u;
        // 0x3a64cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64D0u;
        goto label_3a64d0;
    }
    ctx->pc = 0x3A64C8u;
    {
        const bool branch_taken_0x3a64c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64C8u;
        // 0x3a64cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64c8) {
            ctx->pc = 0x3A6588u;
            goto label_3a6588;
        }
    }
    ctx->pc = 0x3A64D0u;
label_3a64d0:
    // 0x3a64d0: 0x12820029  beq         $s4, $v0, . + 4 + (0x29 << 2)
label_3a64d4:
    if (ctx->pc == 0x3A64D4u) {
        ctx->pc = 0x3A64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64D0u;
        // 0x3a64d4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64D8u;
        goto label_3a64d8;
    }
    ctx->pc = 0x3A64D0u;
    {
        const bool branch_taken_0x3a64d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64D0u;
        // 0x3a64d4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64d0) {
            ctx->pc = 0x3A6578u;
            goto label_3a6578;
        }
    }
    ctx->pc = 0x3A64D8u;
label_3a64d8:
    // 0x3a64d8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3a64dc:
    if (ctx->pc == 0x3A64DCu) {
        ctx->pc = 0x3A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64D8u;
        // 0x3a64dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64E0u;
        goto label_3a64e0;
    }
    ctx->pc = 0x3A64D8u;
    {
        const bool branch_taken_0x3a64d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64D8u;
        // 0x3a64dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a64d8) {
            ctx->pc = 0x3A6588u;
            goto label_3a6588;
        }
    }
    ctx->pc = 0x3A64E0u;
label_3a64e0:
    // 0x3a64e0: 0xc0e9808  jal         func_3A6020
label_3a64e4:
    if (ctx->pc == 0x3A64E4u) {
        ctx->pc = 0x3A64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64E0u;
        // 0x3a64e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64E8u;
        goto label_3a64e8;
    }
    ctx->pc = 0x3A64E0u;
    SET_GPR_U32(ctx, 31, 0x3A64E8u);
    ctx->pc = 0x3A64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A64E0u;
    // 0x3a64e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3A64E0u, 0x3A64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A64E8u;
label_3a64e8:
    // 0x3a64e8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a64e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a64ec:
    // 0x3a64ec: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x3a64ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_3a64f0:
    // 0x3a64f0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_3a64f4:
    if (ctx->pc == 0x3A64F4u) {
        ctx->pc = 0x3A64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A64F0u;
        // 0x3a64f4: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A64F8u;
        goto label_3a64f8;
    }
    ctx->pc = 0x3A64F0u;
    {
        const bool branch_taken_0x3a64f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a64f0) {
            ctx->pc = 0x3A64F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A64F0u;
            // 0x3a64f4: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6520u;
            goto label_3a6520;
        }
    }
    ctx->pc = 0x3A64F8u;
label_3a64f8:
    // 0x3a64f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a64fc:
    // 0x3a64fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a64fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6500:
    // 0x3a6500: 0x2a0f809  jalr        $s5
label_3a6504:
    if (ctx->pc == 0x3A6504u) {
        ctx->pc = 0x3A6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6500u;
        // 0x3a6504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6508u;
        goto label_3a6508;
    }
    ctx->pc = 0x3A6500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3A6508u);
        ctx->pc = 0x3A6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6500u;
        // 0x3a6504: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6500u, 0x3A6508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6508u;
label_3a6508:
    // 0x3a6508: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a6508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a650c:
    // 0x3a650c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a6510:
    // 0x3a6510: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
label_3a6514:
    if (ctx->pc == 0x3A6514u) {
        ctx->pc = 0x3A6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6510u;
        // 0x3a6514: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6518u;
        goto label_3a6518;
    }
    ctx->pc = 0x3A6510u;
    {
        const bool branch_taken_0x3a6510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a6510) {
            ctx->pc = 0x3A6514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6510u;
            // 0x3a6514: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6524u;
            goto label_3a6524;
        }
    }
    ctx->pc = 0x3A6518u;
label_3a6518:
    // 0x3a6518: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_3a651c:
    if (ctx->pc == 0x3A651Cu) {
        ctx->pc = 0x3A651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6518u;
        // 0x3a651c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6520u;
        goto label_3a6520;
    }
    ctx->pc = 0x3A6518u;
    {
        const bool branch_taken_0x3a6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6518u;
        // 0x3a651c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6518) {
            ctx->pc = 0x3A6800u;
            goto label_3a6800;
        }
    }
    ctx->pc = 0x3A6520u;
label_3a6520:
    // 0x3a6520: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a6520u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6524:
    // 0x3a6524: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a6524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a6528:
    // 0x3a6528: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3a652c:
    if (ctx->pc == 0x3A652Cu) {
        ctx->pc = 0x3A652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6528u;
        // 0x3a652c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6530u;
        goto label_3a6530;
    }
    ctx->pc = 0x3A6528u;
    {
        const bool branch_taken_0x3a6528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6528u;
        // 0x3a652c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6528) {
            ctx->pc = 0x3A6550u;
            goto label_3a6550;
        }
    }
    ctx->pc = 0x3A6530u;
label_3a6530:
    // 0x3a6530: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a6530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a6534:
    // 0x3a6534: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3a6534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3a6538:
    // 0x3a6538: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x3a6538u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_3a653c:
    // 0x3a653c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3a6540:
    if (ctx->pc == 0x3A6540u) {
        ctx->pc = 0x3A6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A653Cu;
        // 0x3a6540: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6544u;
        goto label_3a6544;
    }
    ctx->pc = 0x3A653Cu;
    {
        const bool branch_taken_0x3a653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A653Cu;
        // 0x3a6540: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a653c) {
            ctx->pc = 0x3A6568u;
            goto label_3a6568;
        }
    }
    ctx->pc = 0x3A6544u;
label_3a6544:
    // 0x3a6544: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a6548:
    // 0x3a6548: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a654c:
    if (ctx->pc == 0x3A654Cu) {
        ctx->pc = 0x3A654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6548u;
        // 0x3a654c: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6550u;
        goto label_3a6550;
    }
    ctx->pc = 0x3A6548u;
    {
        const bool branch_taken_0x3a6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6548u;
        // 0x3a654c: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6548) {
            ctx->pc = 0x3A6568u;
            goto label_3a6568;
        }
    }
    ctx->pc = 0x3A6550u;
label_3a6550:
    // 0x3a6550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a6554:
    if (ctx->pc == 0x3A6554u) {
        ctx->pc = 0x3A6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6550u;
        // 0x3a6554: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6558u;
        goto label_3a6558;
    }
    ctx->pc = 0x3A6550u;
    {
        const bool branch_taken_0x3a6550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6550u;
        // 0x3a6554: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6550) {
            ctx->pc = 0x3A6568u;
            goto label_3a6568;
        }
    }
    ctx->pc = 0x3A6558u;
label_3a6558:
    // 0x3a6558: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a6558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a655c:
    // 0x3a655c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3a6560:
    if (ctx->pc == 0x3A6560u) {
        ctx->pc = 0x3A6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A655Cu;
        // 0x3a6560: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6564u;
        goto label_3a6564;
    }
    ctx->pc = 0x3A655Cu;
    {
        const bool branch_taken_0x3a655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A655Cu;
        // 0x3a6560: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a655c) {
            ctx->pc = 0x3A6568u;
            goto label_3a6568;
        }
    }
    ctx->pc = 0x3A6564u;
label_3a6564:
    // 0x3a6564: 0x242902d  daddu       $s2, $s2, $v0
    ctx->pc = 0x3a6564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_3a6568:
    // 0x3a6568: 0x2d2b02d  daddu       $s6, $s6, $s2
    ctx->pc = 0x3a6568u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 18));
label_3a656c:
    // 0x3a656c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a656cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6570:
    // 0x3a6570: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6574:
    if (ctx->pc == 0x3A6574u) {
        ctx->pc = 0x3A6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6570u;
        // 0x3a6574: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6578u;
        goto label_3a6578;
    }
    ctx->pc = 0x3A6570u;
    {
        const bool branch_taken_0x3a6570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6570u;
        // 0x3a6574: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6570) {
            ctx->pc = 0x3A6590u;
            goto label_3a6590;
        }
    }
    ctx->pc = 0x3A6578u;
label_3a6578:
    // 0x3a6578: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a6578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a657c:
    // 0x3a657c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a6580:
    if (ctx->pc == 0x3A6580u) {
        ctx->pc = 0x3A6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A657Cu;
        // 0x3a6580: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6584u;
        goto label_3a6584;
    }
    ctx->pc = 0x3A657Cu;
    {
        const bool branch_taken_0x3a657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A657Cu;
        // 0x3a6580: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a657c) {
            ctx->pc = 0x3A6590u;
            goto label_3a6590;
        }
    }
    ctx->pc = 0x3A6584u;
label_3a6584:
    // 0x3a6584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a6588:
    // 0x3a6588: 0x1000009d  b           . + 4 + (0x9D << 2)
label_3a658c:
    if (ctx->pc == 0x3A658Cu) {
        ctx->pc = 0x3A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6588u;
        // 0x3a658c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6590u;
        goto label_3a6590;
    }
    ctx->pc = 0x3A6588u;
    {
        const bool branch_taken_0x3a6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6588u;
        // 0x3a658c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6588) {
            ctx->pc = 0x3A6800u;
            goto label_3a6800;
        }
    }
    ctx->pc = 0x3A6590u;
label_3a6590:
    // 0x3a6590: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
label_3a6594:
    if (ctx->pc == 0x3A6594u) {
        ctx->pc = 0x3A6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6590u;
        // 0x3a6594: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6598u;
        goto label_3a6598;
    }
    ctx->pc = 0x3A6590u;
    {
        const bool branch_taken_0x3a6590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6590) {
            ctx->pc = 0x3A6594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6590u;
            // 0x3a6594: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A65A4u;
            goto label_3a65a4;
        }
    }
    ctx->pc = 0x3A6598u;
label_3a6598:
    // 0x3a6598: 0xc0e9a54  jal         func_3A6950
label_3a659c:
    if (ctx->pc == 0x3A659Cu) {
        ctx->pc = 0x3A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6598u;
        // 0x3a659c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65A0u;
        goto label_3a65a0;
    }
    ctx->pc = 0x3A6598u;
    SET_GPR_U32(ctx, 31, 0x3A65A0u);
    ctx->pc = 0x3A659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6598u;
    // 0x3a659c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6950u, 0x3A6598u, 0x3A65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65A0u;
label_3a65a0:
    // 0x3a65a0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a65a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a65a4:
    // 0x3a65a4: 0x3062081a  andi        $v0, $v1, 0x81A
    ctx->pc = 0x3a65a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2074);
label_3a65a8:
    // 0x3a65a8: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_3a65ac:
    if (ctx->pc == 0x3A65ACu) {
        ctx->pc = 0x3A65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65A8u;
        // 0x3a65ac: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65B0u;
        goto label_3a65b0;
    }
    ctx->pc = 0x3A65A8u;
    {
        const bool branch_taken_0x3a65a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65A8u;
        // 0x3a65ac: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65a8) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A65B0u;
label_3a65b0:
    // 0x3a65b0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3a65b4:
    if (ctx->pc == 0x3A65B4u) {
        ctx->pc = 0x3A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65B0u;
        // 0x3a65b4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65B8u;
        goto label_3a65b8;
    }
    ctx->pc = 0x3A65B0u;
    {
        const bool branch_taken_0x3a65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65B0u;
        // 0x3a65b4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65b0) {
            ctx->pc = 0x3A6614u;
            goto label_3a6614;
        }
    }
    ctx->pc = 0x3A65B8u;
label_3a65b8:
    // 0x3a65b8: 0x24426e60  addiu       $v0, $v0, 0x6E60
    ctx->pc = 0x3a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
label_3a65bc:
    // 0x3a65bc: 0x56a2000e  bnel        $s5, $v0, . + 4 + (0xE << 2)
label_3a65c0:
    if (ctx->pc == 0x3A65C0u) {
        ctx->pc = 0x3A65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65BCu;
        // 0x3a65c0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65C4u;
        goto label_3a65c4;
    }
    ctx->pc = 0x3A65BCu;
    {
        const bool branch_taken_0x3a65bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a65bc) {
            ctx->pc = 0x3A65C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A65BCu;
            // 0x3a65c0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A65F8u;
            goto label_3a65f8;
        }
    }
    ctx->pc = 0x3A65C4u;
label_3a65c4:
    // 0x3a65c4: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3a65c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_3a65c8:
    // 0x3a65c8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_3a65cc:
    if (ctx->pc == 0x3A65CCu) {
        ctx->pc = 0x3A65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65C8u;
        // 0x3a65cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65D0u;
        goto label_3a65d0;
    }
    ctx->pc = 0x3A65C8u;
    {
        const bool branch_taken_0x3a65c8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3A65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65C8u;
        // 0x3a65cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65c8) {
            ctx->pc = 0x3A65F4u;
            goto label_3a65f4;
        }
    }
    ctx->pc = 0x3A65D0u;
label_3a65d0:
    // 0x3a65d0: 0xc0eb7ea  jal         func_3ADFA8
label_3a65d4:
    if (ctx->pc == 0x3A65D4u) {
        ctx->pc = 0x3A65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65D0u;
        // 0x3a65d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65D8u;
        goto label_3a65d8;
    }
    ctx->pc = 0x3A65D0u;
    SET_GPR_U32(ctx, 31, 0x3A65D8u);
    ctx->pc = 0x3A65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A65D0u;
    // 0x3a65d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADFA8u, 0x3A65D0u, 0x3A65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A65D8u;
label_3a65d8:
    // 0x3a65d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3a65dc:
    if (ctx->pc == 0x3A65DCu) {
        ctx->pc = 0x3A65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65D8u;
        // 0x3a65dc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65E0u;
        goto label_3a65e0;
    }
    ctx->pc = 0x3A65D8u;
    {
        const bool branch_taken_0x3a65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a65d8) {
            ctx->pc = 0x3A65DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A65D8u;
            // 0x3a65dc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A65F8u;
            goto label_3a65f8;
        }
    }
    ctx->pc = 0x3A65E0u;
label_3a65e0:
    // 0x3a65e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a65e4:
    // 0x3a65e4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3a65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3a65e8:
    // 0x3a65e8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3a65e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_3a65ec:
    // 0x3a65ec: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
label_3a65f0:
    if (ctx->pc == 0x3A65F0u) {
        ctx->pc = 0x3A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65ECu;
        // 0x3a65f0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A65F4u;
        goto label_3a65f4;
    }
    ctx->pc = 0x3A65ECu;
    {
        const bool branch_taken_0x3a65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a65ec) {
            ctx->pc = 0x3A65F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A65ECu;
            // 0x3a65f0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6604u;
            goto label_3a6604;
        }
    }
    ctx->pc = 0x3A65F4u;
label_3a65f4:
    // 0x3a65f4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a65f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a65f8:
    // 0x3a65f8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3a65f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3a65fc:
    // 0x3a65fc: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3a6600:
    if (ctx->pc == 0x3A6600u) {
        ctx->pc = 0x3A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65FCu;
        // 0x3a6600: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6604u;
        goto label_3a6604;
    }
    ctx->pc = 0x3A65FCu;
    {
        const bool branch_taken_0x3a65fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A65FCu;
        // 0x3a6600: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a65fc) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A6604u;
label_3a6604:
    // 0x3a6604: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3a6604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3a6608:
    // 0x3a6608: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x3a6608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_3a660c:
    // 0x3a660c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x3a660cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_3a6610:
    // 0x3a6610: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a6610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3a6614:
    // 0x3a6614: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_3a6618:
    if (ctx->pc == 0x3A6618u) {
        ctx->pc = 0x3A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6614u;
        // 0x3a6618: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A661Cu;
        goto label_3a661c;
    }
    ctx->pc = 0x3A6614u;
    {
        const bool branch_taken_0x3a6614 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6614) {
            ctx->pc = 0x3A6618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6614u;
            // 0x3a6618: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6624u;
            goto label_3a6624;
        }
    }
    ctx->pc = 0x3A661Cu;
label_3a661c:
    // 0x3a661c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6620:
    if (ctx->pc == 0x3A6620u) {
        ctx->pc = 0x3A6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A661Cu;
        // 0x3a6620: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6624u;
        goto label_3a6624;
    }
    ctx->pc = 0x3A661Cu;
    {
        const bool branch_taken_0x3a661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A661Cu;
        // 0x3a6620: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a661c) {
            ctx->pc = 0x3A663Cu;
            goto label_3a663c;
        }
    }
    ctx->pc = 0x3A6624u;
label_3a6624:
    // 0x3a6624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a6628:
    // 0x3a6628: 0xc0eb7ea  jal         func_3ADFA8
label_3a662c:
    if (ctx->pc == 0x3A662Cu) {
        ctx->pc = 0x3A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6628u;
        // 0x3a662c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6630u;
        goto label_3a6630;
    }
    ctx->pc = 0x3A6628u;
    SET_GPR_U32(ctx, 31, 0x3A6630u);
    ctx->pc = 0x3A662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6628u;
    // 0x3a662c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADFA8u, 0x3A6628u, 0x3A6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6630u;
label_3a6630:
    // 0x3a6630: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_3a6634:
    if (ctx->pc == 0x3A6634u) {
        ctx->pc = 0x3A6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6630u;
        // 0x3a6634: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6638u;
        goto label_3a6638;
    }
    ctx->pc = 0x3A6630u;
    {
        const bool branch_taken_0x3a6630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6630u;
        // 0x3a6634: 0xdfa20010  ld          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6630) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A6638u;
label_3a6638:
    // 0x3a6638: 0x56982d  daddu       $s3, $v0, $s6
    ctx->pc = 0x3a6638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 22));
label_3a663c:
    // 0x3a663c: 0x56e00015  bnel        $s7, $zero, . + 4 + (0x15 << 2)
label_3a6640:
    if (ctx->pc == 0x3A6640u) {
        ctx->pc = 0x3A6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A663Cu;
        // 0x3a6640: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6644u;
        goto label_3a6644;
    }
    ctx->pc = 0x3A663Cu;
    {
        const bool branch_taken_0x3a663c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a663c) {
            ctx->pc = 0x3A6640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A663Cu;
            // 0x3a6640: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6694u;
            goto label_3a6694;
        }
    }
    ctx->pc = 0x3A6644u;
label_3a6644:
    // 0x3a6644: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6648:
    // 0x3a6648: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3a6648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_3a664c:
    // 0x3a664c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3a6650:
    if (ctx->pc == 0x3A6650u) {
        ctx->pc = 0x3A6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A664Cu;
        // 0x3a6650: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6654u;
        goto label_3a6654;
    }
    ctx->pc = 0x3A664Cu;
    {
        const bool branch_taken_0x3a664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a664c) {
            ctx->pc = 0x3A6650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A664Cu;
            // 0x3a6650: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A665Cu;
            goto label_3a665c;
        }
    }
    ctx->pc = 0x3A6654u;
label_3a6654:
    // 0x3a6654: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a6658:
    if (ctx->pc == 0x3A6658u) {
        ctx->pc = 0x3A6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6654u;
        // 0x3a6658: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A665Cu;
        goto label_3a665c;
    }
    ctx->pc = 0x3A6654u;
    {
        const bool branch_taken_0x3a6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6654u;
        // 0x3a6658: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6654) {
            ctx->pc = 0x3A6678u;
            goto label_3a6678;
        }
    }
    ctx->pc = 0x3A665Cu;
label_3a665c:
    // 0x3a665c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a665cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6660:
    // 0x3a6660: 0x2a0f809  jalr        $s5
label_3a6664:
    if (ctx->pc == 0x3A6664u) {
        ctx->pc = 0x3A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6660u;
        // 0x3a6664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6668u;
        goto label_3a6668;
    }
    ctx->pc = 0x3A6660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3A6668u);
        ctx->pc = 0x3A6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6660u;
        // 0x3a6664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6660u, 0x3A6668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6668u;
label_3a6668:
    // 0x3a6668: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a6668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a666c:
    // 0x3a666c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a6670:
    // 0x3a6670: 0x12420052  beq         $s2, $v0, . + 4 + (0x52 << 2)
label_3a6674:
    if (ctx->pc == 0x3A6674u) {
        ctx->pc = 0x3A6678u;
        goto label_3a6678;
    }
    ctx->pc = 0x3A6670u;
    {
        const bool branch_taken_0x3a6670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a6670) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A6678u;
label_3a6678:
    // 0x3a6678: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a667c:
    // 0x3a667c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3a667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3a6680:
    // 0x3a6680: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_3a6684:
    if (ctx->pc == 0x3A6684u) {
        ctx->pc = 0x3A6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6680u;
        // 0x3a6684: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6688u;
        goto label_3a6688;
    }
    ctx->pc = 0x3A6680u;
    {
        const bool branch_taken_0x3a6680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6680u;
        // 0x3a6684: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6680) {
            ctx->pc = 0x3A66C8u;
            goto label_3a66c8;
        }
    }
    ctx->pc = 0x3A6688u;
label_3a6688:
    // 0x3a6688: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a668c:
    // 0x3a668c: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x3a668cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_3a6690:
    // 0x3a6690: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3a6690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3a6694:
    // 0x3a6694: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3a6698:
    if (ctx->pc == 0x3A6698u) {
        ctx->pc = 0x3A6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6694u;
        // 0x3a6698: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A669Cu;
        goto label_3a669c;
    }
    ctx->pc = 0x3A6694u;
    {
        const bool branch_taken_0x3a6694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6694) {
            ctx->pc = 0x3A6698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6694u;
            // 0x3a6698: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A66CCu;
            goto label_3a66cc;
        }
    }
    ctx->pc = 0x3A669Cu;
label_3a669c:
    // 0x3a669c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a66a0:
    // 0x3a66a0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3a66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3a66a4:
    // 0x3a66a4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3a66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a66a8:
    // 0x3a66a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a66a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a66ac:
    // 0x3a66ac: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x3a66acu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a66b0:
    // 0x3a66b0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3a66b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a66b4:
    // 0x3a66b4: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3a66b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_3a66b8:
    // 0x3a66b8: 0x245902d  daddu       $s2, $s2, $a1
    ctx->pc = 0x3a66b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 5));
label_3a66bc:
    // 0x3a66bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3a66c0:
    // 0x3a66c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a66c4:
    if (ctx->pc == 0x3A66C4u) {
        ctx->pc = 0x3A66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66C0u;
        // 0x3a66c4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A66C8u;
        goto label_3a66c8;
    }
    ctx->pc = 0x3A66C0u;
    {
        const bool branch_taken_0x3a66c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66C0u;
        // 0x3a66c4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a66c0) {
            ctx->pc = 0x3A66E8u;
            goto label_3a66e8;
        }
    }
    ctx->pc = 0x3A66C8u;
label_3a66c8:
    // 0x3a66c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a66cc:
    // 0x3a66cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a66d0:
    // 0x3a66d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3a66d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a66d4:
    // 0x3a66d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3a66d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a66d8:
    // 0x3a66d8: 0x838823  subu        $s1, $a0, $v1
    ctx->pc = 0x3a66d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3a66dc:
    // 0x3a66dc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3a66dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_3a66e0:
    // 0x3a66e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3a66e4:
    // 0x3a66e4: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x3a66e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3a66e8:
    // 0x3a66e8: 0x242902f  dsubu       $s2, $s2, $v0
    ctx->pc = 0x3a66e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
label_3a66ec:
    // 0x3a66ec: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a66ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a66f0:
    // 0x3a66f0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x3a66f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_3a66f4:
    // 0x3a66f4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3a66f8:
    if (ctx->pc == 0x3A66F8u) {
        ctx->pc = 0x3A66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A66F4u;
        // 0x3a66f8: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A66FCu;
        goto label_3a66fc;
    }
    ctx->pc = 0x3A66F4u;
    {
        const bool branch_taken_0x3a66f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a66f4) {
            ctx->pc = 0x3A66F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A66F4u;
            // 0x3a66f8: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6744u;
            goto label_3a6744;
        }
    }
    ctx->pc = 0x3A66FCu;
label_3a66fc:
    // 0x3a66fc: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3a66fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a6700:
    // 0x3a6700: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_3a6704:
    if (ctx->pc == 0x3A6704u) {
        ctx->pc = 0x3A6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6700u;
        // 0x3a6704: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6708u;
        goto label_3a6708;
    }
    ctx->pc = 0x3A6700u;
    {
        const bool branch_taken_0x3a6700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6700) {
            ctx->pc = 0x3A6704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6700u;
            // 0x3a6704: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6744u;
            goto label_3a6744;
        }
    }
    ctx->pc = 0x3A6708u;
label_3a6708:
    // 0x3a6708: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3a6708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_3a670c:
    // 0x3a670c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3a6710:
    // 0x3a6710: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x3a6710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_3a6714:
    // 0x3a6714: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x3a6714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a6718:
    // 0x3a6718: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3a671c:
    if (ctx->pc == 0x3A671Cu) {
        ctx->pc = 0x3A671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6718u;
        // 0x3a671c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6720u;
        goto label_3a6720;
    }
    ctx->pc = 0x3A6718u;
    {
        const bool branch_taken_0x3a6718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6718u;
        // 0x3a671c: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6718) {
            ctx->pc = 0x3A6740u;
            goto label_3a6740;
        }
    }
    ctx->pc = 0x3A6720u;
label_3a6720:
    // 0x3a6720: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x3a6720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_3a6724:
    // 0x3a6724: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3a6728:
    // 0x3a6728: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a6728u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a672c:
    // 0x3a672c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x3a672cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_3a6730:
    // 0x3a6730: 0x2222023  subu        $a0, $s1, $v0
    ctx->pc = 0x3a6730u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a6734:
    // 0x3a6734: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3a6734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3a6738:
    // 0x3a6738: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3a673c:
    if (ctx->pc == 0x3A673Cu) {
        ctx->pc = 0x3A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6738u;
        // 0x3a673c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6740u;
        goto label_3a6740;
    }
    ctx->pc = 0x3A6738u;
    {
        const bool branch_taken_0x3a6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6738u;
        // 0x3a673c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6738) {
            ctx->pc = 0x3A67B0u;
            goto label_3a67b0;
        }
    }
    ctx->pc = 0x3A6740u;
label_3a6740:
    // 0x3a6740: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3a6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3a6744:
    // 0x3a6744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6748:
    // 0x3a6748: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a6748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a674c:
    // 0x3a674c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3a674cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3a6750:
    // 0x3a6750: 0x539024  and         $s2, $v0, $s3
    ctx->pc = 0x3a6750u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_3a6754:
    // 0x3a6754: 0x2a0f809  jalr        $s5
label_3a6758:
    if (ctx->pc == 0x3A6758u) {
        ctx->pc = 0x3A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6754u;
        // 0x3a6758: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A675Cu;
        goto label_3a675c;
    }
    ctx->pc = 0x3A6754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3A675Cu);
        ctx->pc = 0x3A6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6754u;
        // 0x3a6758: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6754u, 0x3A675Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A675Cu;
label_3a675c:
    // 0x3a675c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a6760:
    // 0x3a6760: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_3a6764:
    if (ctx->pc == 0x3A6764u) {
        ctx->pc = 0x3A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6760u;
        // 0x3a6764: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6768u;
        goto label_3a6768;
    }
    ctx->pc = 0x3A6760u;
    {
        const bool branch_taken_0x3a6760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6760u;
        // 0x3a6764: 0x272102f  dsubu       $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6760) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A6768u;
label_3a6768:
    // 0x3a6768: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a6768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a676c:
    // 0x3a676c: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x3a676cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_3a6770:
    // 0x3a6770: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x3a6770u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_3a6774:
    // 0x3a6774: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a6774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a6778:
    // 0x3a6778: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x3a6778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_3a677c:
    // 0x3a677c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3a6780:
    if (ctx->pc == 0x3A6780u) {
        ctx->pc = 0x3A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A677Cu;
        // 0x3a6780: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6784u;
        goto label_3a6784;
    }
    ctx->pc = 0x3A677Cu;
    {
        const bool branch_taken_0x3a677c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A677Cu;
        // 0x3a6780: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a677c) {
            ctx->pc = 0x3A67B4u;
            goto label_3a67b4;
        }
    }
    ctx->pc = 0x3A6784u;
label_3a6784:
    // 0x3a6784: 0xc0e9aaa  jal         func_3A6AA8
label_3a6788:
    if (ctx->pc == 0x3A6788u) {
        ctx->pc = 0x3A6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6784u;
        // 0x3a6788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A678Cu;
        goto label_3a678c;
    }
    ctx->pc = 0x3A6784u;
    SET_GPR_U32(ctx, 31, 0x3A678Cu);
    ctx->pc = 0x3A6788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6784u;
    // 0x3a6788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A6784u, 0x3A678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A678Cu;
label_3a678c:
    // 0x3a678c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3a6790:
    if (ctx->pc == 0x3A6790u) {
        ctx->pc = 0x3A6794u;
        goto label_3a6794;
    }
    ctx->pc = 0x3A678Cu;
    {
        const bool branch_taken_0x3a678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a678c) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A6794u;
label_3a6794:
    // 0x3a6794: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3a6794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a6798:
    // 0x3a6798: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3a6798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a679c:
    // 0x3a679c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3a67a0:
    if (ctx->pc == 0x3A67A0u) {
        ctx->pc = 0x3A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A679Cu;
        // 0x3a67a0: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67A4u;
        goto label_3a67a4;
    }
    ctx->pc = 0x3A679Cu;
    {
        const bool branch_taken_0x3a679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A679Cu;
        // 0x3a67a0: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a679c) {
            ctx->pc = 0x3A67BCu;
            goto label_3a67bc;
        }
    }
    ctx->pc = 0x3A67A4u;
label_3a67a4:
    // 0x3a67a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a67a8:
    // 0x3a67a8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3a67a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3a67ac:
    // 0x3a67ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a67b0:
    // 0x3a67b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3a67b4:
    // 0x3a67b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a67b8:
    if (ctx->pc == 0x3A67B8u) {
        ctx->pc = 0x3A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67B4u;
        // 0x3a67b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67BCu;
        goto label_3a67bc;
    }
    ctx->pc = 0x3A67B4u;
    {
        const bool branch_taken_0x3a67b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67B4u;
        // 0x3a67b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67b4) {
            ctx->pc = 0x3A6800u;
            goto label_3a6800;
        }
    }
    ctx->pc = 0x3A67BCu;
label_3a67bc:
    // 0x3a67bc: 0xc0e9808  jal         func_3A6020
label_3a67c0:
    if (ctx->pc == 0x3A67C0u) {
        ctx->pc = 0x3A67C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67BCu;
        // 0x3a67c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67C4u;
        goto label_3a67c4;
    }
    ctx->pc = 0x3A67BCu;
    SET_GPR_U32(ctx, 31, 0x3A67C4u);
    ctx->pc = 0x3A67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A67BCu;
    // 0x3a67c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3A67BCu, 0x3A67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A67C4u;
label_3a67c4:
    // 0x3a67c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3a67c8:
    if (ctx->pc == 0x3A67C8u) {
        ctx->pc = 0x3A67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67C4u;
        // 0x3a67c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67CCu;
        goto label_3a67cc;
    }
    ctx->pc = 0x3A67C4u;
    {
        const bool branch_taken_0x3a67c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67C4u;
        // 0x3a67c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67c4) {
            ctx->pc = 0x3A6800u;
            goto label_3a6800;
        }
    }
    ctx->pc = 0x3A67CCu;
label_3a67cc:
    // 0x3a67cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a67d0:
    // 0x3a67d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3a67d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a67d4:
    // 0x3a67d4: 0x2a0f809  jalr        $s5
label_3a67d8:
    if (ctx->pc == 0x3A67D8u) {
        ctx->pc = 0x3A67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67D4u;
        // 0x3a67d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67DCu;
        goto label_3a67dc;
    }
    ctx->pc = 0x3A67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3A67DCu);
        ctx->pc = 0x3A67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67D4u;
        // 0x3a67d8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A67D4u, 0x3A67DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A67DCu;
label_3a67dc:
    // 0x3a67dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a67e0:
    // 0x3a67e0: 0x1043ff4d  beq         $v0, $v1, . + 4 + (-0xB3 << 2)
label_3a67e4:
    if (ctx->pc == 0x3A67E4u) {
        ctx->pc = 0x3A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67E0u;
        // 0x3a67e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A67E8u;
        goto label_3a67e8;
    }
    ctx->pc = 0x3A67E0u;
    {
        const bool branch_taken_0x3a67e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A67E0u;
        // 0x3a67e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a67e0) {
            ctx->pc = 0x3A6518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6518;
        }
    }
    ctx->pc = 0x3A67E8u;
label_3a67e8:
    // 0x3a67e8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a67e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a67ec:
    // 0x3a67ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3a67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a67f0:
    // 0x3a67f0: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x3a67f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
label_3a67f4:
    // 0x3a67f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a67f8:
    // 0x3a67f8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x3a67f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_3a67fc:
    // 0x3a67fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3a67fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3a6800:
    // 0x3a6800: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3a6800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3a6804:
    // 0x3a6804: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3a6804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3a6808:
    // 0x3a6808: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3a6808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3a680c:
    // 0x3a680c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3a680cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a6810:
    // 0x3a6810: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3a6810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a6814:
    // 0x3a6814: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3a6814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a6818:
    // 0x3a6818: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3a6818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a681c:
    // 0x3a681c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a681cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a6820:
    // 0x3a6820: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a6820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a6824:
    // 0x3a6824: 0x3e00008  jr          $ra
label_3a6828:
    if (ctx->pc == 0x3A6828u) {
        ctx->pc = 0x3A6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6824u;
        // 0x3a6828: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A682Cu;
        goto label_3a682c;
    }
    ctx->pc = 0x3A6824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6824u;
        // 0x3a6828: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A682Cu;
label_3a682c:
    // 0x3a682c: 0x0  nop
    ctx->pc = 0x3a682cu;
    // NOP
    ctx->pc = 0x3a6830u;
}
