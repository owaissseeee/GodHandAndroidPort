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

// Function: func_001A6558
// Address: 0x1a6558 - 0x1a6a78
void func_001A6558_0x1a6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6558_0x1a6558");
#endif

    switch (ctx->pc) {
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a671cu: goto label_1a671c;
        case 0x1a6720u: goto label_1a6720;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6728u: goto label_1a6728;
        case 0x1a672cu: goto label_1a672c;
        case 0x1a6730u: goto label_1a6730;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a673cu: goto label_1a673c;
        case 0x1a6740u: goto label_1a6740;
        case 0x1a6744u: goto label_1a6744;
        case 0x1a6748u: goto label_1a6748;
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6750u: goto label_1a6750;
        case 0x1a6754u: goto label_1a6754;
        case 0x1a6758u: goto label_1a6758;
        case 0x1a675cu: goto label_1a675c;
        case 0x1a6760u: goto label_1a6760;
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6768u: goto label_1a6768;
        case 0x1a676cu: goto label_1a676c;
        case 0x1a6770u: goto label_1a6770;
        case 0x1a6774u: goto label_1a6774;
        case 0x1a6778u: goto label_1a6778;
        case 0x1a677cu: goto label_1a677c;
        case 0x1a6780u: goto label_1a6780;
        case 0x1a6784u: goto label_1a6784;
        case 0x1a6788u: goto label_1a6788;
        case 0x1a678cu: goto label_1a678c;
        case 0x1a6790u: goto label_1a6790;
        case 0x1a6794u: goto label_1a6794;
        case 0x1a6798u: goto label_1a6798;
        case 0x1a679cu: goto label_1a679c;
        case 0x1a67a0u: goto label_1a67a0;
        case 0x1a67a4u: goto label_1a67a4;
        case 0x1a67a8u: goto label_1a67a8;
        case 0x1a67acu: goto label_1a67ac;
        case 0x1a67b0u: goto label_1a67b0;
        case 0x1a67b4u: goto label_1a67b4;
        case 0x1a67b8u: goto label_1a67b8;
        case 0x1a67bcu: goto label_1a67bc;
        case 0x1a67c0u: goto label_1a67c0;
        case 0x1a67c4u: goto label_1a67c4;
        case 0x1a67c8u: goto label_1a67c8;
        case 0x1a67ccu: goto label_1a67cc;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a67d4u: goto label_1a67d4;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67dcu: goto label_1a67dc;
        case 0x1a67e0u: goto label_1a67e0;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a67e8u: goto label_1a67e8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a67f0u: goto label_1a67f0;
        case 0x1a67f4u: goto label_1a67f4;
        case 0x1a67f8u: goto label_1a67f8;
        case 0x1a67fcu: goto label_1a67fc;
        case 0x1a6800u: goto label_1a6800;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6808u: goto label_1a6808;
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6810u: goto label_1a6810;
        case 0x1a6814u: goto label_1a6814;
        case 0x1a6818u: goto label_1a6818;
        case 0x1a681cu: goto label_1a681c;
        case 0x1a6820u: goto label_1a6820;
        case 0x1a6824u: goto label_1a6824;
        case 0x1a6828u: goto label_1a6828;
        case 0x1a682cu: goto label_1a682c;
        case 0x1a6830u: goto label_1a6830;
        case 0x1a6834u: goto label_1a6834;
        case 0x1a6838u: goto label_1a6838;
        case 0x1a683cu: goto label_1a683c;
        case 0x1a6840u: goto label_1a6840;
        case 0x1a6844u: goto label_1a6844;
        case 0x1a6848u: goto label_1a6848;
        case 0x1a684cu: goto label_1a684c;
        case 0x1a6850u: goto label_1a6850;
        case 0x1a6854u: goto label_1a6854;
        case 0x1a6858u: goto label_1a6858;
        case 0x1a685cu: goto label_1a685c;
        case 0x1a6860u: goto label_1a6860;
        case 0x1a6864u: goto label_1a6864;
        case 0x1a6868u: goto label_1a6868;
        case 0x1a686cu: goto label_1a686c;
        case 0x1a6870u: goto label_1a6870;
        case 0x1a6874u: goto label_1a6874;
        case 0x1a6878u: goto label_1a6878;
        case 0x1a687cu: goto label_1a687c;
        case 0x1a6880u: goto label_1a6880;
        case 0x1a6884u: goto label_1a6884;
        case 0x1a6888u: goto label_1a6888;
        case 0x1a688cu: goto label_1a688c;
        case 0x1a6890u: goto label_1a6890;
        case 0x1a6894u: goto label_1a6894;
        case 0x1a6898u: goto label_1a6898;
        case 0x1a689cu: goto label_1a689c;
        case 0x1a68a0u: goto label_1a68a0;
        case 0x1a68a4u: goto label_1a68a4;
        case 0x1a68a8u: goto label_1a68a8;
        case 0x1a68acu: goto label_1a68ac;
        case 0x1a68b0u: goto label_1a68b0;
        case 0x1a68b4u: goto label_1a68b4;
        case 0x1a68b8u: goto label_1a68b8;
        case 0x1a68bcu: goto label_1a68bc;
        case 0x1a68c0u: goto label_1a68c0;
        case 0x1a68c4u: goto label_1a68c4;
        case 0x1a68c8u: goto label_1a68c8;
        case 0x1a68ccu: goto label_1a68cc;
        case 0x1a68d0u: goto label_1a68d0;
        case 0x1a68d4u: goto label_1a68d4;
        case 0x1a68d8u: goto label_1a68d8;
        case 0x1a68dcu: goto label_1a68dc;
        case 0x1a68e0u: goto label_1a68e0;
        case 0x1a68e4u: goto label_1a68e4;
        case 0x1a68e8u: goto label_1a68e8;
        case 0x1a68ecu: goto label_1a68ec;
        case 0x1a68f0u: goto label_1a68f0;
        case 0x1a68f4u: goto label_1a68f4;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a68fcu: goto label_1a68fc;
        case 0x1a6900u: goto label_1a6900;
        case 0x1a6904u: goto label_1a6904;
        case 0x1a6908u: goto label_1a6908;
        case 0x1a690cu: goto label_1a690c;
        case 0x1a6910u: goto label_1a6910;
        case 0x1a6914u: goto label_1a6914;
        case 0x1a6918u: goto label_1a6918;
        case 0x1a691cu: goto label_1a691c;
        case 0x1a6920u: goto label_1a6920;
        case 0x1a6924u: goto label_1a6924;
        case 0x1a6928u: goto label_1a6928;
        case 0x1a692cu: goto label_1a692c;
        case 0x1a6930u: goto label_1a6930;
        case 0x1a6934u: goto label_1a6934;
        case 0x1a6938u: goto label_1a6938;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6940u: goto label_1a6940;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6948u: goto label_1a6948;
        case 0x1a694cu: goto label_1a694c;
        case 0x1a6950u: goto label_1a6950;
        case 0x1a6954u: goto label_1a6954;
        case 0x1a6958u: goto label_1a6958;
        case 0x1a695cu: goto label_1a695c;
        case 0x1a6960u: goto label_1a6960;
        case 0x1a6964u: goto label_1a6964;
        case 0x1a6968u: goto label_1a6968;
        case 0x1a696cu: goto label_1a696c;
        case 0x1a6970u: goto label_1a6970;
        case 0x1a6974u: goto label_1a6974;
        case 0x1a6978u: goto label_1a6978;
        case 0x1a697cu: goto label_1a697c;
        case 0x1a6980u: goto label_1a6980;
        case 0x1a6984u: goto label_1a6984;
        case 0x1a6988u: goto label_1a6988;
        case 0x1a698cu: goto label_1a698c;
        case 0x1a6990u: goto label_1a6990;
        case 0x1a6994u: goto label_1a6994;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a699cu: goto label_1a699c;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69a8u: goto label_1a69a8;
        case 0x1a69acu: goto label_1a69ac;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69b4u: goto label_1a69b4;
        case 0x1a69b8u: goto label_1a69b8;
        case 0x1a69bcu: goto label_1a69bc;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69c4u: goto label_1a69c4;
        case 0x1a69c8u: goto label_1a69c8;
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a5cu: goto label_1a6a5c;
        case 0x1a6a60u: goto label_1a6a60;
        case 0x1a6a64u: goto label_1a6a64;
        case 0x1a6a68u: goto label_1a6a68;
        case 0x1a6a6cu: goto label_1a6a6c;
        case 0x1a6a70u: goto label_1a6a70;
        case 0x1a6a74u: goto label_1a6a74;
        default: break;
    }

    ctx->pc = 0x1a6558u;

label_1a6558:
    // 0x1a6558: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1a655c:
    // 0x1a655c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1a655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1a6560:
    // 0x1a6560: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1a6560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1a6564:
    // 0x1a6564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6568:
    // 0x1a6568: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1a6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1a656c:
    // 0x1a656c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1a6570:
    // 0x1a6570: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1a6570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1a6574:
    // 0x1a6574: 0x92430604  lbu         $v1, 0x604($s2)
    ctx->pc = 0x1a6574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1540)));
label_1a6578:
    // 0x1a6578: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1a6578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a657c:
    // 0x1a657c: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
label_1a6580:
    if (ctx->pc == 0x1A6580u) {
        ctx->pc = 0x1A6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A657Cu;
        // 0x1a6580: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6584u;
        goto label_1a6584;
    }
    ctx->pc = 0x1A657Cu;
    {
        const bool branch_taken_0x1a657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A657Cu;
        // 0x1a6580: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a657c) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A6584u;
label_1a6584:
    // 0x1a6584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a6588:
    // 0x1a6588: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1a6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
label_1a658c:
    // 0x1a658c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a6590:
    // 0x1a6590: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a6594:
    // 0x1a6594: 0x800008  jr          $a0
label_1a6598:
    if (ctx->pc == 0x1A6598u) {
        ctx->pc = 0x1A659Cu;
        goto label_1a659c;
    }
    ctx->pc = 0x1A6594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A659Cu: goto label_1a659c;
            case 0x1A65ACu: goto label_1a65ac;
            case 0x1A65C8u: goto label_1a65c8;
            case 0x1A674Cu: goto label_1a674c;
            case 0x1A69BCu: goto label_1a69bc;
            case 0x1A6A58u: goto label_1a6a58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6594u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A659Cu;
label_1a659c:
    // 0x1a659c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65a0:
    // 0x1a65a0: 0xa2400605  sb          $zero, 0x605($s2)
    ctx->pc = 0x1a65a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1541), (uint8_t)GPR_U32(ctx, 0));
label_1a65a4:
    // 0x1a65a4: 0xa2420604  sb          $v0, 0x604($s2)
    ctx->pc = 0x1a65a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 2));
label_1a65a8:
    // 0x1a65a8: 0xa2400606  sb          $zero, 0x606($s2)
    ctx->pc = 0x1a65a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1542), (uint8_t)GPR_U32(ctx, 0));
label_1a65ac:
    // 0x1a65ac: 0x92430605  lbu         $v1, 0x605($s2)
    ctx->pc = 0x1a65acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1541)));
label_1a65b0:
    // 0x1a65b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65b4:
    // 0x1a65b4: 0x14620129  bne         $v1, $v0, . + 4 + (0x129 << 2)
label_1a65b8:
    if (ctx->pc == 0x1A65B8u) {
        ctx->pc = 0x1A65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B4u;
        // 0x1a65b8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65BCu;
        goto label_1a65bc;
    }
    ctx->pc = 0x1A65B4u;
    {
        const bool branch_taken_0x1a65b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B4u;
        // 0x1a65b8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65b4) {
            ctx->pc = 0x1A6A5Cu;
            goto label_1a6a5c;
        }
    }
    ctx->pc = 0x1A65BCu;
label_1a65bc:
    // 0x1a65bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a65c0:
    // 0x1a65c0: 0x10000126  b           . + 4 + (0x126 << 2)
label_1a65c4:
    if (ctx->pc == 0x1A65C4u) {
        ctx->pc = 0x1A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65C0u;
        // 0x1a65c4: 0xa2420604  sb          $v0, 0x604($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65C8u;
        goto label_1a65c8;
    }
    ctx->pc = 0x1A65C0u;
    {
        const bool branch_taken_0x1a65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65C0u;
        // 0x1a65c4: 0xa2420604  sb          $v0, 0x604($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65c0) {
            ctx->pc = 0x1A6A5Cu;
            goto label_1a6a5c;
        }
    }
    ctx->pc = 0x1A65C8u;
label_1a65c8:
    // 0x1a65c8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a65c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a65cc:
    // 0x1a65cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a65d0:
    // 0x1a65d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a65d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a65d4:
    // 0x1a65d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a65d8:
    if (ctx->pc == 0x1A65D8u) {
        ctx->pc = 0x1A65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65D4u;
        // 0x1a65d8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65DCu;
        goto label_1a65dc;
    }
    ctx->pc = 0x1A65D4u;
    {
        const bool branch_taken_0x1a65d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65D4u;
        // 0x1a65d8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65d4) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A65DCu;
label_1a65dc:
    // 0x1a65dc: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1a65e0:
    // 0x1a65e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a65e4:
    if (ctx->pc == 0x1A65E4u) {
        ctx->pc = 0x1A65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E0u;
        // 0x1a65e4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65E8u;
        goto label_1a65e8;
    }
    ctx->pc = 0x1A65E0u;
    {
        const bool branch_taken_0x1a65e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E0u;
        // 0x1a65e4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65e0) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A65E8u;
label_1a65e8:
    // 0x1a65e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a65e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a65ec:
    // 0x1a65ec: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_1a65f0:
    if (ctx->pc == 0x1A65F0u) {
        ctx->pc = 0x1A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65ECu;
        // 0x1a65f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A65F4u;
        goto label_1a65f4;
    }
    ctx->pc = 0x1A65ECu;
    {
        const bool branch_taken_0x1a65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65ECu;
        // 0x1a65f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65ec) {
            ctx->pc = 0x1A6744u;
            goto label_1a6744;
        }
    }
    ctx->pc = 0x1A65F4u;
label_1a65f4:
    // 0x1a65f4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a65f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a65f8:
    // 0x1a65f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a65f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a65fc:
    // 0x1a65fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a6600:
    if (ctx->pc == 0x1A6600u) {
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6604u;
        goto label_1a6604;
    }
    ctx->pc = 0x1A65FCu;
    {
        const bool branch_taken_0x1a65fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65FCu;
        // 0x1a6600: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65fc) {
            ctx->pc = 0x1A6610u;
            goto label_1a6610;
        }
    }
    ctx->pc = 0x1A6604u;
label_1a6604:
    // 0x1a6604: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1a6604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1a6608:
    // 0x1a6608: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a660c:
    if (ctx->pc == 0x1A660Cu) {
        ctx->pc = 0x1A660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6608u;
        // 0x1a660c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6610u;
        goto label_1a6610;
    }
    ctx->pc = 0x1A6608u;
    {
        const bool branch_taken_0x1a6608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6608u;
        // 0x1a660c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6608) {
            ctx->pc = 0x1A6614u;
            goto label_1a6614;
        }
    }
    ctx->pc = 0x1A6610u;
label_1a6610:
    // 0x1a6610: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a6610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6614:
    // 0x1a6614: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1a6614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_1a6618:
    // 0x1a6618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a661c:
    // 0x1a661c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1a6620:
    // 0x1a6620: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1a6620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_1a6624:
    // 0x1a6624: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1a6624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a6628:
    // 0x1a6628: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1a6628u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a662c:
    // 0x1a662c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1a6630:
    if (ctx->pc == 0x1A6630u) {
        ctx->pc = 0x1A6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A662Cu;
        // 0x1a6630: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6634u;
        goto label_1a6634;
    }
    ctx->pc = 0x1A662Cu;
    {
        const bool branch_taken_0x1a662c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A662Cu;
        // 0x1a6630: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a662c) {
            ctx->pc = 0x1A6640u;
            goto label_1a6640;
        }
    }
    ctx->pc = 0x1A6634u;
label_1a6634:
    // 0x1a6634: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1a6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1a6638:
    // 0x1a6638: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a663c:
    if (ctx->pc == 0x1A663Cu) {
        ctx->pc = 0x1A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6638u;
        // 0x1a663c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6640u;
        goto label_1a6640;
    }
    ctx->pc = 0x1A6638u;
    {
        const bool branch_taken_0x1a6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6638u;
        // 0x1a663c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6638) {
            ctx->pc = 0x1A6644u;
            goto label_1a6644;
        }
    }
    ctx->pc = 0x1A6640u;
label_1a6640:
    // 0x1a6640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6644:
    // 0x1a6644: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x1a6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_1a6648:
    // 0x1a6648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a664c:
    // 0x1a664c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a6650:
    // 0x1a6650: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a6650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a6654:
    // 0x1a6654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6658:
    // 0x1a6658: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1a6658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1a665c:
    // 0x1a665c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1a6660:
    // 0x1a6660: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a6660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a6664:
    // 0x1a6664: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a6664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6668:
    // 0x1a6668: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x1a6668u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_1a666c:
    // 0x1a666c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a666cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1a6670:
    // 0x1a6670: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a6670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a6674:
    // 0x1a6674: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1a6674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_1a6678:
    // 0x1a6678: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1a6678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_1a667c:
    // 0x1a667c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a667cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6680:
    // 0x1a6680: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1a6680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1a6684:
    // 0x1a6684: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1a6684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1a6688:
    // 0x1a6688: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1a6688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1a668c:
    // 0x1a668c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a668cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6690:
    // 0x1a6690: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a6694:
    // 0x1a6694: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1a6694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1a6698:
    // 0x1a6698: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a6698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a669c:
    // 0x1a669c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1a66a0:
    // 0x1a66a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a66a4:
    if (ctx->pc == 0x1A66A4u) {
        ctx->pc = 0x1A66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A0u;
        // 0x1a66a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66A8u;
        goto label_1a66a8;
    }
    ctx->pc = 0x1A66A0u;
    {
        const bool branch_taken_0x1a66a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66A0u;
        // 0x1a66a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66a0) {
            ctx->pc = 0x1A66B4u;
            goto label_1a66b4;
        }
    }
    ctx->pc = 0x1A66A8u;
label_1a66a8:
    // 0x1a66a8: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1a66ac:
    // 0x1a66ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a66b0:
    if (ctx->pc == 0x1A66B0u) {
        ctx->pc = 0x1A66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66ACu;
        // 0x1a66b0: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66B4u;
        goto label_1a66b4;
    }
    ctx->pc = 0x1A66ACu;
    {
        const bool branch_taken_0x1a66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66ACu;
        // 0x1a66b0: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66ac) {
            ctx->pc = 0x1A66B8u;
            goto label_1a66b8;
        }
    }
    ctx->pc = 0x1A66B4u;
label_1a66b4:
    // 0x1a66b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b8:
    // 0x1a66b8: 0x26500630  addiu       $s0, $s2, 0x630
    ctx->pc = 0x1a66b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1a66bc:
    // 0x1a66bc: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x1a66bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1a66c0:
    // 0x1a66c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a66c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a66c4:
    // 0x1a66c4: 0xc05bd90  jal         func_16F640
label_1a66c8:
    if (ctx->pc == 0x1A66C8u) {
        ctx->pc = 0x1A66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66C4u;
        // 0x1a66c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66CCu;
        goto label_1a66cc;
    }
    ctx->pc = 0x1A66C4u;
    SET_GPR_U32(ctx, 31, 0x1A66CCu);
    ctx->pc = 0x1A66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66C4u;
    // 0x1a66c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A66C4u, 0x1A66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66CCu;
label_1a66cc:
    // 0x1a66cc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1a66ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
label_1a66d0:
    // 0x1a66d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a66d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1a66d4:
    // 0x1a66d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a66d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a66d8:
    // 0x1a66d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a66d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a66dc:
    // 0x1a66dc: 0xc05ce66  jal         func_173998
label_1a66e0:
    if (ctx->pc == 0x1A66E0u) {
        ctx->pc = 0x1A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66DCu;
        // 0x1a66e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66E4u;
        goto label_1a66e4;
    }
    ctx->pc = 0x1A66DCu;
    SET_GPR_U32(ctx, 31, 0x1A66E4u);
    ctx->pc = 0x1A66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66DCu;
    // 0x1a66e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1A66DCu, 0x1A66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a66e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a66e8:
    // 0x1a66e8: 0xc051f18  jal         func_147C60
label_1a66ec:
    if (ctx->pc == 0x1A66ECu) {
        ctx->pc = 0x1A66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66E8u;
        // 0x1a66ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A66F0u;
        goto label_1a66f0;
    }
    ctx->pc = 0x1A66E8u;
    SET_GPR_U32(ctx, 31, 0x1A66F0u);
    ctx->pc = 0x1A66ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66E8u;
    // 0x1a66ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1A66E8u, 0x1A66F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66F0u;
label_1a66f0:
    // 0x1a66f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a66f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a66f4:
    // 0x1a66f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a66f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a66f8:
    // 0x1a66f8: 0xc051f22  jal         func_147C88
label_1a66fc:
    if (ctx->pc == 0x1A66FCu) {
        ctx->pc = 0x1A66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F8u;
        // 0x1a66fc: 0x26440640  addiu       $a0, $s2, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6700u;
        goto label_1a6700;
    }
    ctx->pc = 0x1A66F8u;
    SET_GPR_U32(ctx, 31, 0x1A6700u);
    ctx->pc = 0x1A66FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66F8u;
    // 0x1a66fc: 0x26440640  addiu       $a0, $s2, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1A66F8u, 0x1A6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6700u;
label_1a6700:
    // 0x1a6700: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a6704:
    // 0x1a6704: 0xc05ce42  jal         func_173908
label_1a6708:
    if (ctx->pc == 0x1A6708u) {
        ctx->pc = 0x1A6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6704u;
        // 0x1a6708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A670Cu;
        goto label_1a670c;
    }
    ctx->pc = 0x1A6704u;
    SET_GPR_U32(ctx, 31, 0x1A670Cu);
    ctx->pc = 0x1A6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6704u;
    // 0x1a6708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1A6704u, 0x1A670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A670Cu;
label_1a670c:
    // 0x1a670c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a670cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a6710:
    // 0x1a6710: 0xc05ce4e  jal         func_173938
label_1a6714:
    if (ctx->pc == 0x1A6714u) {
        ctx->pc = 0x1A6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6710u;
        // 0x1a6714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6718u;
        goto label_1a6718;
    }
    ctx->pc = 0x1A6710u;
    SET_GPR_U32(ctx, 31, 0x1A6718u);
    ctx->pc = 0x1A6714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6710u;
    // 0x1a6714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1A6710u, 0x1A6718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6718u;
label_1a6718:
    // 0x1a6718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a6718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a671c:
    // 0x1a671c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a6720:
    // 0x1a6720: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a6724:
    // 0x1a6724: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6728:
    // 0x1a6728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a672c:
    // 0x1a672c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a672cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a6730:
    // 0x1a6730: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1a6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a6734:
    // 0x1a6734: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a6734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a6738:
    // 0x1a6738: 0xc05ce5a  jal         func_173968
label_1a673c:
    if (ctx->pc == 0x1A673Cu) {
        ctx->pc = 0x1A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6738u;
        // 0x1a673c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6740u;
        goto label_1a6740;
    }
    ctx->pc = 0x1A6738u;
    SET_GPR_U32(ctx, 31, 0x1A6740u);
    ctx->pc = 0x1A673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6738u;
    // 0x1a673c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1A6738u, 0x1A6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6740u;
label_1a6740:
    // 0x1a6740: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1a6740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1a6744:
    // 0x1a6744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6748:
    // 0x1a6748: 0xa2420604  sb          $v0, 0x604($s2)
    ctx->pc = 0x1a6748u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 2));
label_1a674c:
    // 0x1a674c: 0x26440630  addiu       $a0, $s2, 0x630
    ctx->pc = 0x1a674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
label_1a6750:
    // 0x1a6750: 0xc05ce40  jal         func_173900
label_1a6754:
    if (ctx->pc == 0x1A6754u) {
        ctx->pc = 0x1A6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6750u;
        // 0x1a6754: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6758u;
        goto label_1a6758;
    }
    ctx->pc = 0x1A6750u;
    SET_GPR_U32(ctx, 31, 0x1A6758u);
    ctx->pc = 0x1A6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6750u;
    // 0x1a6754: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1A6750u, 0x1A6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6758u;
label_1a6758:
    // 0x1a6758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a675c:
    // 0x1a675c: 0x54430042  bnel        $v0, $v1, . + 4 + (0x42 << 2)
label_1a6760:
    if (ctx->pc == 0x1A6760u) {
        ctx->pc = 0x1A6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A675Cu;
        // 0x1a6760: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6764u;
        goto label_1a6764;
    }
    ctx->pc = 0x1A675Cu;
    {
        const bool branch_taken_0x1a675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a675c) {
            ctx->pc = 0x1A6760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A675Cu;
            // 0x1a6760: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6868u;
            goto label_1a6868;
        }
    }
    ctx->pc = 0x1A6764u;
label_1a6764:
    // 0x1a6764: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1a6768:
    // 0x1a6768: 0xc0a4bd4  jal         func_292F50
label_1a676c:
    if (ctx->pc == 0x1A676Cu) {
        ctx->pc = 0x1A676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6768u;
        // 0x1a676c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6770u;
        goto label_1a6770;
    }
    ctx->pc = 0x1A6768u;
    SET_GPR_U32(ctx, 31, 0x1A6770u);
    ctx->pc = 0x1A676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6768u;
    // 0x1a676c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1A6768u, 0x1A6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6770u;
label_1a6770:
    // 0x1a6770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a6770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a6774:
    // 0x1a6774: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a6778:
    // 0x1a6778: 0x26420650  addiu       $v0, $s2, 0x650
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
label_1a677c:
    // 0x1a677c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a677cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6780:
    // 0x1a6780: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a6784:
    // 0x1a6784: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a6784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6788:
    // 0x1a6788: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a6788u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a678c:
    // 0x1a678c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a678cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a6790:
    // 0x1a6790: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a6790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a6794:
    // 0x1a6794: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a6794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a6798:
    // 0x1a6798: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a6798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a679c:
    // 0x1a679c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1a679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67a0:
    // 0x1a67a0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1a67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a67a4:
    // 0x1a67a4: 0xda440630  lqc2        $vf4, 0x630($s2)
    ctx->pc = 0x1a67a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1584)));
label_1a67a8:
    // 0x1a67a8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1a67a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a67ac:
    // 0x1a67ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a67acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a67b0:
    // 0x1a67b0: 0xfa440630  sqc2        $vf4, 0x630($s2)
    ctx->pc = 0x1a67b0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1584), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67b4:
    // 0x1a67b4: 0x26420660  addiu       $v0, $s2, 0x660
    ctx->pc = 0x1a67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
label_1a67b8:
    // 0x1a67b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a67b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a67bc:
    // 0x1a67bc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a67bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67c0:
    // 0x1a67c0: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a67c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a67c4:
    // 0x1a67c4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1a67c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1a67c8:
    // 0x1a67c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a67c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1a67cc:
    // 0x1a67cc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a67ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a67d0:
    // 0x1a67d0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1a67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67d4:
    // 0x1a67d4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1a67d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a67d8:
    // 0x1a67d8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1a67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67dc:
    // 0x1a67dc: 0x26500640  addiu       $s0, $s2, 0x640
    ctx->pc = 0x1a67dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_1a67e0:
    // 0x1a67e0: 0xda440640  lqc2        $vf4, 0x640($s2)
    ctx->pc = 0x1a67e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1600)));
label_1a67e4:
    // 0x1a67e4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1a67e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a67e8:
    // 0x1a67e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a67e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a67ec:
    // 0x1a67ec: 0xfa440640  sqc2        $vf4, 0x640($s2)
    ctx->pc = 0x1a67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1600), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a67f0:
    // 0x1a67f0: 0xc07df68  jal         func_1F7DA0
label_1a67f4:
    if (ctx->pc == 0x1A67F4u) {
        ctx->pc = 0x1A67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67F0u;
        // 0x1a67f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67F8u;
        goto label_1a67f8;
    }
    ctx->pc = 0x1A67F0u;
    SET_GPR_U32(ctx, 31, 0x1A67F8u);
    ctx->pc = 0x1A67F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67F0u;
    // 0x1a67f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1A67F0u, 0x1A67F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67F8u;
label_1a67f8:
    // 0x1a67f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a67fc:
    // 0x1a67fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a67fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6800:
    // 0x1a6800: 0xc051dca  jal         func_147728
label_1a6804:
    if (ctx->pc == 0x1A6804u) {
        ctx->pc = 0x1A6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6800u;
        // 0x1a6804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6808u;
        goto label_1a6808;
    }
    ctx->pc = 0x1A6800u;
    SET_GPR_U32(ctx, 31, 0x1A6808u);
    ctx->pc = 0x1A6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6800u;
    // 0x1a6804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1A6800u, 0x1A6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6808u;
label_1a6808:
    // 0x1a6808: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a6808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a680c:
    // 0x1a680c: 0xc051f10  jal         func_147C40
label_1a6810:
    if (ctx->pc == 0x1A6810u) {
        ctx->pc = 0x1A6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A680Cu;
        // 0x1a6810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6814u;
        goto label_1a6814;
    }
    ctx->pc = 0x1A680Cu;
    SET_GPR_U32(ctx, 31, 0x1A6814u);
    ctx->pc = 0x1A6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A680Cu;
    // 0x1a6810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A680Cu, 0x1A6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6814u;
label_1a6814:
    // 0x1a6814: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1a6814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a6818:
    // 0x1a6818: 0x26460670  addiu       $a2, $s2, 0x670
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1648));
label_1a681c:
    // 0x1a681c: 0xc051efe  jal         func_147BF8
label_1a6820:
    if (ctx->pc == 0x1A6820u) {
        ctx->pc = 0x1A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A681Cu;
        // 0x1a6820: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6824u;
        goto label_1a6824;
    }
    ctx->pc = 0x1A681Cu;
    SET_GPR_U32(ctx, 31, 0x1A6824u);
    ctx->pc = 0x1A6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A681Cu;
    // 0x1a6820: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1A681Cu, 0x1A6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6824u;
label_1a6824:
    // 0x1a6824: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1a6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1a6828:
    // 0x1a6828: 0xc051d4a  jal         func_147528
label_1a682c:
    if (ctx->pc == 0x1A682Cu) {
        ctx->pc = 0x1A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6828u;
        // 0x1a682c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6830u;
        goto label_1a6830;
    }
    ctx->pc = 0x1A6828u;
    SET_GPR_U32(ctx, 31, 0x1A6830u);
    ctx->pc = 0x1A682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6828u;
    // 0x1a682c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1A6828u, 0x1A6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6830u;
label_1a6830:
    // 0x1a6830: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1a6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6834:
    // 0x1a6834: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1a6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6838:
    // 0x1a6838: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a6838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a683c:
    // 0x1a683c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1a683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1a6840:
    // 0x1a6840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a6840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a6844:
    // 0x1a6844: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a6844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6848:
    // 0x1a6848: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1a6848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a684c:
    // 0x1a684c: 0x0  nop
    ctx->pc = 0x1a684cu;
    // NOP
label_1a6850:
    // 0x1a6850: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a6854:
    if (ctx->pc == 0x1A6854u) {
        ctx->pc = 0x1A6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6850u;
        // 0x1a6854: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6858u;
        goto label_1a6858;
    }
    ctx->pc = 0x1A6850u;
    {
        const bool branch_taken_0x1a6850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6850u;
        // 0x1a6854: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6850) {
            ctx->pc = 0x1A6864u;
            goto label_1a6864;
        }
    }
    ctx->pc = 0x1A6858u;
label_1a6858:
    // 0x1a6858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a685c:
    // 0x1a685c: 0xc05bd90  jal         func_16F640
label_1a6860:
    if (ctx->pc == 0x1A6860u) {
        ctx->pc = 0x1A6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A685Cu;
        // 0x1a6860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6864u;
        goto label_1a6864;
    }
    ctx->pc = 0x1A685Cu;
    SET_GPR_U32(ctx, 31, 0x1A6864u);
    ctx->pc = 0x1A6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A685Cu;
    // 0x1a6860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A685Cu, 0x1A6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6864u;
label_1a6864:
    // 0x1a6864: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1a6864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1a6868:
    // 0x1a6868: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a6868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a686c:
    // 0x1a686c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a6870:
    // 0x1a6870: 0x40f809  jalr        $v0
label_1a6874:
    if (ctx->pc == 0x1A6874u) {
        ctx->pc = 0x1A6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6870u;
        // 0x1a6874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6878u;
        goto label_1a6878;
    }
    ctx->pc = 0x1A6870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6878u);
        ctx->pc = 0x1A6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6870u;
        // 0x1a6874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6870u, 0x1A6878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6878u;
label_1a6878:
    // 0x1a6878: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a6878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a687c:
    // 0x1a687c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a687cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a6880:
    // 0x1a6880: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6884:
    // 0x1a6884: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6888:
    // 0x1a6888: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a6888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a688c:
    // 0x1a688c: 0x0  nop
    ctx->pc = 0x1a688cu;
    // NOP
label_1a6890:
    // 0x1a6890: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1a6894:
    if (ctx->pc == 0x1A6894u) {
        ctx->pc = 0x1A6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6890u;
        // 0x1a6894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6898u;
        goto label_1a6898;
    }
    ctx->pc = 0x1A6890u;
    {
        const bool branch_taken_0x1a6890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6890u;
        // 0x1a6894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6890) {
            ctx->pc = 0x1A689Cu;
            goto label_1a689c;
        }
    }
    ctx->pc = 0x1A6898u;
label_1a6898:
    // 0x1a6898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a689c:
    // 0x1a689c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a68a0:
    // 0x1a68a0: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_1a68a4:
    if (ctx->pc == 0x1A68A4u) {
        ctx->pc = 0x1A68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A0u;
        // 0x1a68a4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68A8u;
        goto label_1a68a8;
    }
    ctx->pc = 0x1A68A0u;
    {
        const bool branch_taken_0x1a68a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A0u;
        // 0x1a68a4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68a0) {
            ctx->pc = 0x1A6A5Cu;
            goto label_1a6a5c;
        }
    }
    ctx->pc = 0x1A68A8u;
label_1a68a8:
    // 0x1a68a8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1a68a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a68ac:
    // 0x1a68ac: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a68acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a68b0:
    // 0x1a68b0: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1a68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1a68b4:
    // 0x1a68b4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a68b8:
    // 0x1a68b8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a68bc:
    // 0x1a68bc: 0x40f809  jalr        $v0
label_1a68c0:
    if (ctx->pc == 0x1A68C0u) {
        ctx->pc = 0x1A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68BCu;
        // 0x1a68c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A68C4u;
        goto label_1a68c4;
    }
    ctx->pc = 0x1A68BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A68C4u);
        ctx->pc = 0x1A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68BCu;
        // 0x1a68c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A68BCu, 0x1A68C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A68C4u;
label_1a68c4:
    // 0x1a68c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a68c8:
    // 0x1a68c8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a68cc:
    // 0x1a68cc: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1a68d0:
    // 0x1a68d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a68d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a68d4:
    // 0x1a68d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a68d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a68d8:
    // 0x1a68d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a68dc:
    // 0x1a68dc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1a68dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1a68e0:
    // 0x1a68e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1a68e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1a68e4:
    // 0x1a68e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a68e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a68e8:
    // 0x1a68e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a68e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a68ec:
    // 0x1a68ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a68f0:
    // 0x1a68f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a68f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a68f4:
    // 0x1a68f4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1a68f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a68f8:
    // 0x1a68f8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a68fc:
    // 0x1a68fc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a68fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a6900:
    // 0x1a6900: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a6900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1a6904:
    // 0x1a6904: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_1a6908:
    if (ctx->pc == 0x1A6908u) {
        ctx->pc = 0x1A6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6904u;
        // 0x1a6908: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A690Cu;
        goto label_1a690c;
    }
    ctx->pc = 0x1A6904u;
    {
        const bool branch_taken_0x1a6904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6904u;
        // 0x1a6908: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6904) {
            ctx->pc = 0x1A6924u;
            goto label_1a6924;
        }
    }
    ctx->pc = 0x1A690Cu;
label_1a690c:
    // 0x1a690c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6910:
    // 0x1a6910: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a6910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6914:
    // 0x1a6914: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1a6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6918:
    // 0x1a6918: 0xe6400630  swc1        $f0, 0x630($s2)
    ctx->pc = 0x1a6918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1584), bits); }
label_1a691c:
    // 0x1a691c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1a691cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1a6920:
    // 0x1a6920: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1a6920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a6924:
    // 0x1a6924: 0x26500640  addiu       $s0, $s2, 0x640
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
label_1a6928:
    // 0x1a6928: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
label_1a692c:
    if (ctx->pc == 0x1A692Cu) {
        ctx->pc = 0x1A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6928u;
        // 0x1a692c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6930u;
        goto label_1a6930;
    }
    ctx->pc = 0x1A6928u;
    {
        const bool branch_taken_0x1a6928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6928u;
        // 0x1a692c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6928) {
            ctx->pc = 0x1A6944u;
            goto label_1a6944;
        }
    }
    ctx->pc = 0x1A6930u;
label_1a6930:
    // 0x1a6930: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6934:
    // 0x1a6934: 0xe6400640  swc1        $f0, 0x640($s2)
    ctx->pc = 0x1a6934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
label_1a6938:
    // 0x1a6938: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a6938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1a693c:
    // 0x1a693c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1a693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6940:
    // 0x1a6940: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a6940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a6944:
    // 0x1a6944: 0xc07df68  jal         func_1F7DA0
label_1a6948:
    if (ctx->pc == 0x1A6948u) {
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A694Cu;
        goto label_1a694c;
    }
    ctx->pc = 0x1A6944u;
    SET_GPR_U32(ctx, 31, 0x1A694Cu);
    ctx->pc = 0x1A6948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6944u;
    // 0x1a6948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1A6944u, 0x1A694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A694Cu;
label_1a694c:
    // 0x1a694c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a6950:
    // 0x1a6950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6954:
    // 0x1a6954: 0xc051dca  jal         func_147728
label_1a6958:
    if (ctx->pc == 0x1A6958u) {
        ctx->pc = 0x1A6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6954u;
        // 0x1a6958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A695Cu;
        goto label_1a695c;
    }
    ctx->pc = 0x1A6954u;
    SET_GPR_U32(ctx, 31, 0x1A695Cu);
    ctx->pc = 0x1A6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6954u;
    // 0x1a6958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1A6954u, 0x1A695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A695Cu;
label_1a695c:
    // 0x1a695c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a6960:
    // 0x1a6960: 0xc051f10  jal         func_147C40
label_1a6964:
    if (ctx->pc == 0x1A6964u) {
        ctx->pc = 0x1A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6960u;
        // 0x1a6964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6968u;
        goto label_1a6968;
    }
    ctx->pc = 0x1A6960u;
    SET_GPR_U32(ctx, 31, 0x1A6968u);
    ctx->pc = 0x1A6964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6960u;
    // 0x1a6964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1A6960u, 0x1A6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6968u;
label_1a6968:
    // 0x1a6968: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a696c:
    // 0x1a696c: 0x26460670  addiu       $a2, $s2, 0x670
    ctx->pc = 0x1a696cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1648));
label_1a6970:
    // 0x1a6970: 0xc051efe  jal         func_147BF8
label_1a6974:
    if (ctx->pc == 0x1A6974u) {
        ctx->pc = 0x1A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6970u;
        // 0x1a6974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6978u;
        goto label_1a6978;
    }
    ctx->pc = 0x1A6970u;
    SET_GPR_U32(ctx, 31, 0x1A6978u);
    ctx->pc = 0x1A6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6970u;
    // 0x1a6974: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1A6970u, 0x1A6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6978u;
label_1a6978:
    // 0x1a6978: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1a697c:
    // 0x1a697c: 0xc051d4a  jal         func_147528
label_1a6980:
    if (ctx->pc == 0x1A6980u) {
        ctx->pc = 0x1A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A697Cu;
        // 0x1a6980: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6984u;
        goto label_1a6984;
    }
    ctx->pc = 0x1A697Cu;
    SET_GPR_U32(ctx, 31, 0x1A6984u);
    ctx->pc = 0x1A6980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A697Cu;
    // 0x1a6980: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1A697Cu, 0x1A6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6984u;
label_1a6984:
    // 0x1a6984: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a6988:
    // 0x1a6988: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a6988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1a698c:
    // 0x1a698c: 0xa2420604  sb          $v0, 0x604($s2)
    ctx->pc = 0x1a698cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1540), (uint8_t)GPR_U32(ctx, 2));
label_1a6990:
    // 0x1a6990: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1a6994:
    // 0x1a6994: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a6994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6998:
    // 0x1a6998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a699c:
    // 0x1a699c: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1a699cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_1a69a0:
    // 0x1a69a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a69a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a69a4:
    // 0x1a69a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a69a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a69a8:
    // 0x1a69a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a69a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a69ac:
    // 0x1a69ac: 0xc0b2e92  jal         func_2CBA48
label_1a69b0:
    if (ctx->pc == 0x1A69B0u) {
        ctx->pc = 0x1A69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69ACu;
        // 0x1a69b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69B4u;
        goto label_1a69b4;
    }
    ctx->pc = 0x1A69ACu;
    SET_GPR_U32(ctx, 31, 0x1A69B4u);
    ctx->pc = 0x1A69B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69ACu;
    // 0x1a69b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A69ACu, 0x1A69B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69B4u;
label_1a69b4:
    // 0x1a69b4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a69b8:
    if (ctx->pc == 0x1A69B8u) {
        ctx->pc = 0x1A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B4u;
        // 0x1a69b8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69BCu;
        goto label_1a69bc;
    }
    ctx->pc = 0x1A69B4u;
    {
        const bool branch_taken_0x1a69b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B4u;
        // 0x1a69b8: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69b4) {
            ctx->pc = 0x1A6A5Cu;
            goto label_1a6a5c;
        }
    }
    ctx->pc = 0x1A69BCu;
label_1a69bc:
    // 0x1a69bc: 0xc0b6dac  jal         func_2DB6B0
label_1a69c0:
    if (ctx->pc == 0x1A69C0u) {
        ctx->pc = 0x1A69C4u;
        goto label_1a69c4;
    }
    ctx->pc = 0x1A69BCu;
    SET_GPR_U32(ctx, 31, 0x1A69C4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1A69BCu, 0x1A69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69C4u;
label_1a69c4:
    // 0x1a69c4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1a69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1a69c8:
    // 0x1a69c8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a69cc:
    // 0x1a69cc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1a69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a69d0:
    // 0x1a69d0: 0xa0f809  jalr        $a1
label_1a69d4:
    if (ctx->pc == 0x1A69D4u) {
        ctx->pc = 0x1A69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69D0u;
        // 0x1a69d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69D8u;
        goto label_1a69d8;
    }
    ctx->pc = 0x1A69D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1A69D8u);
        ctx->pc = 0x1A69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69D0u;
        // 0x1a69d4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69D0u, 0x1A69D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A69D8u;
label_1a69d8:
    // 0x1a69d8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1a69dc:
    // 0x1a69dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a69dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a69e0:
    // 0x1a69e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a69e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a69e4:
    // 0x1a69e4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a69e8:
    // 0x1a69e8: 0x40f809  jalr        $v0
label_1a69ec:
    if (ctx->pc == 0x1A69ECu) {
        ctx->pc = 0x1A69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69E8u;
        // 0x1a69ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69F0u;
        goto label_1a69f0;
    }
    ctx->pc = 0x1A69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A69F0u);
        ctx->pc = 0x1A69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69E8u;
        // 0x1a69ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69E8u, 0x1A69F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A69F0u;
label_1a69f0:
    // 0x1a69f0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a69f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a69f4:
    // 0x1a69f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a69f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a69f8:
    // 0x1a69f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1a69f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a69fc:
    // 0x1a69fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1a69fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1a6a00:
    // 0x1a6a00: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a6a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a6a04:
    // 0x1a6a04: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a6a08:
    // 0x1a6a08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a6a08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6a0c:
    // 0x1a6a0c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a6a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1a6a10:
    // 0x1a6a10: 0xc07df8a  jal         func_1F7E28
label_1a6a14:
    if (ctx->pc == 0x1A6A14u) {
        ctx->pc = 0x1A6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A10u;
        // 0x1a6a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A18u;
        goto label_1a6a18;
    }
    ctx->pc = 0x1A6A10u;
    SET_GPR_U32(ctx, 31, 0x1A6A18u);
    ctx->pc = 0x1A6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A10u;
    // 0x1a6a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1A6A10u, 0x1A6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A18u;
label_1a6a18:
    // 0x1a6a18: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_1a6a1c:
    // 0x1a6a1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a6a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a6a20:
    // 0x1a6a20: 0x0  nop
    ctx->pc = 0x1a6a20u;
    // NOP
label_1a6a24:
    // 0x1a6a24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a6a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6a28:
    // 0x1a6a28: 0x0  nop
    ctx->pc = 0x1a6a28u;
    // NOP
label_1a6a2c:
    // 0x1a6a2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1a6a30:
    if (ctx->pc == 0x1A6A30u) {
        ctx->pc = 0x1A6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A2Cu;
        // 0x1a6a30: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A34u;
        goto label_1a6a34;
    }
    ctx->pc = 0x1A6A2Cu;
    {
        const bool branch_taken_0x1a6a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A2Cu;
        // 0x1a6a30: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a2c) {
            ctx->pc = 0x1A6A58u;
            goto label_1a6a58;
        }
    }
    ctx->pc = 0x1A6A34u;
label_1a6a34:
    // 0x1a6a34: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
label_1a6a38:
    // 0x1a6a38: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1a6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1a6a3c:
    // 0x1a6a3c: 0x25086a78  addiu       $t0, $t0, 0x6A78
    ctx->pc = 0x1a6a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27256));
label_1a6a40:
    // 0x1a6a40: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a6a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a44:
    // 0x1a6a44: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a6a48:
    // 0x1a6a48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6a4c:
    // 0x1a6a4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a50:
    // 0x1a6a50: 0xc07de16  jal         func_1F7858
label_1a6a54:
    if (ctx->pc == 0x1A6A54u) {
        ctx->pc = 0x1A6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A50u;
        // 0x1a6a54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A58u;
        goto label_1a6a58;
    }
    ctx->pc = 0x1A6A50u;
    SET_GPR_U32(ctx, 31, 0x1A6A58u);
    ctx->pc = 0x1A6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A50u;
    // 0x1a6a54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1A6A50u, 0x1A6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A58u;
label_1a6a58:
    // 0x1a6a58: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1a6a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a6a5c:
    // 0x1a6a5c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a6a60:
    // 0x1a6a60: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1a6a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a6a64:
    // 0x1a6a64: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a6a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a6a68:
    // 0x1a6a68: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1a6a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a6a6c:
    // 0x1a6a6c: 0x3e00008  jr          $ra
label_1a6a70:
    if (ctx->pc == 0x1A6A70u) {
        ctx->pc = 0x1A6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A6Cu;
        // 0x1a6a70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A74u;
        goto label_1a6a74;
    }
    ctx->pc = 0x1A6A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A6Cu;
        // 0x1a6a70: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A74u;
label_1a6a74:
    // 0x1a6a74: 0x0  nop
    ctx->pc = 0x1a6a74u;
    // NOP
    ctx->pc = 0x1a6a78u;
}
