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

// Function: func_002E64B0
// Address: 0x2e64b0 - 0x2e6868
void func_002E64B0_0x2e64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E64B0_0x2e64b0");
#endif

    switch (ctx->pc) {
        case 0x2e64b0u: goto label_2e64b0;
        case 0x2e64b4u: goto label_2e64b4;
        case 0x2e64b8u: goto label_2e64b8;
        case 0x2e64bcu: goto label_2e64bc;
        case 0x2e64c0u: goto label_2e64c0;
        case 0x2e64c4u: goto label_2e64c4;
        case 0x2e64c8u: goto label_2e64c8;
        case 0x2e64ccu: goto label_2e64cc;
        case 0x2e64d0u: goto label_2e64d0;
        case 0x2e64d4u: goto label_2e64d4;
        case 0x2e64d8u: goto label_2e64d8;
        case 0x2e64dcu: goto label_2e64dc;
        case 0x2e64e0u: goto label_2e64e0;
        case 0x2e64e4u: goto label_2e64e4;
        case 0x2e64e8u: goto label_2e64e8;
        case 0x2e64ecu: goto label_2e64ec;
        case 0x2e64f0u: goto label_2e64f0;
        case 0x2e64f4u: goto label_2e64f4;
        case 0x2e64f8u: goto label_2e64f8;
        case 0x2e64fcu: goto label_2e64fc;
        case 0x2e6500u: goto label_2e6500;
        case 0x2e6504u: goto label_2e6504;
        case 0x2e6508u: goto label_2e6508;
        case 0x2e650cu: goto label_2e650c;
        case 0x2e6510u: goto label_2e6510;
        case 0x2e6514u: goto label_2e6514;
        case 0x2e6518u: goto label_2e6518;
        case 0x2e651cu: goto label_2e651c;
        case 0x2e6520u: goto label_2e6520;
        case 0x2e6524u: goto label_2e6524;
        case 0x2e6528u: goto label_2e6528;
        case 0x2e652cu: goto label_2e652c;
        case 0x2e6530u: goto label_2e6530;
        case 0x2e6534u: goto label_2e6534;
        case 0x2e6538u: goto label_2e6538;
        case 0x2e653cu: goto label_2e653c;
        case 0x2e6540u: goto label_2e6540;
        case 0x2e6544u: goto label_2e6544;
        case 0x2e6548u: goto label_2e6548;
        case 0x2e654cu: goto label_2e654c;
        case 0x2e6550u: goto label_2e6550;
        case 0x2e6554u: goto label_2e6554;
        case 0x2e6558u: goto label_2e6558;
        case 0x2e655cu: goto label_2e655c;
        case 0x2e6560u: goto label_2e6560;
        case 0x2e6564u: goto label_2e6564;
        case 0x2e6568u: goto label_2e6568;
        case 0x2e656cu: goto label_2e656c;
        case 0x2e6570u: goto label_2e6570;
        case 0x2e6574u: goto label_2e6574;
        case 0x2e6578u: goto label_2e6578;
        case 0x2e657cu: goto label_2e657c;
        case 0x2e6580u: goto label_2e6580;
        case 0x2e6584u: goto label_2e6584;
        case 0x2e6588u: goto label_2e6588;
        case 0x2e658cu: goto label_2e658c;
        case 0x2e6590u: goto label_2e6590;
        case 0x2e6594u: goto label_2e6594;
        case 0x2e6598u: goto label_2e6598;
        case 0x2e659cu: goto label_2e659c;
        case 0x2e65a0u: goto label_2e65a0;
        case 0x2e65a4u: goto label_2e65a4;
        case 0x2e65a8u: goto label_2e65a8;
        case 0x2e65acu: goto label_2e65ac;
        case 0x2e65b0u: goto label_2e65b0;
        case 0x2e65b4u: goto label_2e65b4;
        case 0x2e65b8u: goto label_2e65b8;
        case 0x2e65bcu: goto label_2e65bc;
        case 0x2e65c0u: goto label_2e65c0;
        case 0x2e65c4u: goto label_2e65c4;
        case 0x2e65c8u: goto label_2e65c8;
        case 0x2e65ccu: goto label_2e65cc;
        case 0x2e65d0u: goto label_2e65d0;
        case 0x2e65d4u: goto label_2e65d4;
        case 0x2e65d8u: goto label_2e65d8;
        case 0x2e65dcu: goto label_2e65dc;
        case 0x2e65e0u: goto label_2e65e0;
        case 0x2e65e4u: goto label_2e65e4;
        case 0x2e65e8u: goto label_2e65e8;
        case 0x2e65ecu: goto label_2e65ec;
        case 0x2e65f0u: goto label_2e65f0;
        case 0x2e65f4u: goto label_2e65f4;
        case 0x2e65f8u: goto label_2e65f8;
        case 0x2e65fcu: goto label_2e65fc;
        case 0x2e6600u: goto label_2e6600;
        case 0x2e6604u: goto label_2e6604;
        case 0x2e6608u: goto label_2e6608;
        case 0x2e660cu: goto label_2e660c;
        case 0x2e6610u: goto label_2e6610;
        case 0x2e6614u: goto label_2e6614;
        case 0x2e6618u: goto label_2e6618;
        case 0x2e661cu: goto label_2e661c;
        case 0x2e6620u: goto label_2e6620;
        case 0x2e6624u: goto label_2e6624;
        case 0x2e6628u: goto label_2e6628;
        case 0x2e662cu: goto label_2e662c;
        case 0x2e6630u: goto label_2e6630;
        case 0x2e6634u: goto label_2e6634;
        case 0x2e6638u: goto label_2e6638;
        case 0x2e663cu: goto label_2e663c;
        case 0x2e6640u: goto label_2e6640;
        case 0x2e6644u: goto label_2e6644;
        case 0x2e6648u: goto label_2e6648;
        case 0x2e664cu: goto label_2e664c;
        case 0x2e6650u: goto label_2e6650;
        case 0x2e6654u: goto label_2e6654;
        case 0x2e6658u: goto label_2e6658;
        case 0x2e665cu: goto label_2e665c;
        case 0x2e6660u: goto label_2e6660;
        case 0x2e6664u: goto label_2e6664;
        case 0x2e6668u: goto label_2e6668;
        case 0x2e666cu: goto label_2e666c;
        case 0x2e6670u: goto label_2e6670;
        case 0x2e6674u: goto label_2e6674;
        case 0x2e6678u: goto label_2e6678;
        case 0x2e667cu: goto label_2e667c;
        case 0x2e6680u: goto label_2e6680;
        case 0x2e6684u: goto label_2e6684;
        case 0x2e6688u: goto label_2e6688;
        case 0x2e668cu: goto label_2e668c;
        case 0x2e6690u: goto label_2e6690;
        case 0x2e6694u: goto label_2e6694;
        case 0x2e6698u: goto label_2e6698;
        case 0x2e669cu: goto label_2e669c;
        case 0x2e66a0u: goto label_2e66a0;
        case 0x2e66a4u: goto label_2e66a4;
        case 0x2e66a8u: goto label_2e66a8;
        case 0x2e66acu: goto label_2e66ac;
        case 0x2e66b0u: goto label_2e66b0;
        case 0x2e66b4u: goto label_2e66b4;
        case 0x2e66b8u: goto label_2e66b8;
        case 0x2e66bcu: goto label_2e66bc;
        case 0x2e66c0u: goto label_2e66c0;
        case 0x2e66c4u: goto label_2e66c4;
        case 0x2e66c8u: goto label_2e66c8;
        case 0x2e66ccu: goto label_2e66cc;
        case 0x2e66d0u: goto label_2e66d0;
        case 0x2e66d4u: goto label_2e66d4;
        case 0x2e66d8u: goto label_2e66d8;
        case 0x2e66dcu: goto label_2e66dc;
        case 0x2e66e0u: goto label_2e66e0;
        case 0x2e66e4u: goto label_2e66e4;
        case 0x2e66e8u: goto label_2e66e8;
        case 0x2e66ecu: goto label_2e66ec;
        case 0x2e66f0u: goto label_2e66f0;
        case 0x2e66f4u: goto label_2e66f4;
        case 0x2e66f8u: goto label_2e66f8;
        case 0x2e66fcu: goto label_2e66fc;
        case 0x2e6700u: goto label_2e6700;
        case 0x2e6704u: goto label_2e6704;
        case 0x2e6708u: goto label_2e6708;
        case 0x2e670cu: goto label_2e670c;
        case 0x2e6710u: goto label_2e6710;
        case 0x2e6714u: goto label_2e6714;
        case 0x2e6718u: goto label_2e6718;
        case 0x2e671cu: goto label_2e671c;
        case 0x2e6720u: goto label_2e6720;
        case 0x2e6724u: goto label_2e6724;
        case 0x2e6728u: goto label_2e6728;
        case 0x2e672cu: goto label_2e672c;
        case 0x2e6730u: goto label_2e6730;
        case 0x2e6734u: goto label_2e6734;
        case 0x2e6738u: goto label_2e6738;
        case 0x2e673cu: goto label_2e673c;
        case 0x2e6740u: goto label_2e6740;
        case 0x2e6744u: goto label_2e6744;
        case 0x2e6748u: goto label_2e6748;
        case 0x2e674cu: goto label_2e674c;
        case 0x2e6750u: goto label_2e6750;
        case 0x2e6754u: goto label_2e6754;
        case 0x2e6758u: goto label_2e6758;
        case 0x2e675cu: goto label_2e675c;
        case 0x2e6760u: goto label_2e6760;
        case 0x2e6764u: goto label_2e6764;
        case 0x2e6768u: goto label_2e6768;
        case 0x2e676cu: goto label_2e676c;
        case 0x2e6770u: goto label_2e6770;
        case 0x2e6774u: goto label_2e6774;
        case 0x2e6778u: goto label_2e6778;
        case 0x2e677cu: goto label_2e677c;
        case 0x2e6780u: goto label_2e6780;
        case 0x2e6784u: goto label_2e6784;
        case 0x2e6788u: goto label_2e6788;
        case 0x2e678cu: goto label_2e678c;
        case 0x2e6790u: goto label_2e6790;
        case 0x2e6794u: goto label_2e6794;
        case 0x2e6798u: goto label_2e6798;
        case 0x2e679cu: goto label_2e679c;
        case 0x2e67a0u: goto label_2e67a0;
        case 0x2e67a4u: goto label_2e67a4;
        case 0x2e67a8u: goto label_2e67a8;
        case 0x2e67acu: goto label_2e67ac;
        case 0x2e67b0u: goto label_2e67b0;
        case 0x2e67b4u: goto label_2e67b4;
        case 0x2e67b8u: goto label_2e67b8;
        case 0x2e67bcu: goto label_2e67bc;
        case 0x2e67c0u: goto label_2e67c0;
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67c8u: goto label_2e67c8;
        case 0x2e67ccu: goto label_2e67cc;
        case 0x2e67d0u: goto label_2e67d0;
        case 0x2e67d4u: goto label_2e67d4;
        case 0x2e67d8u: goto label_2e67d8;
        case 0x2e67dcu: goto label_2e67dc;
        case 0x2e67e0u: goto label_2e67e0;
        case 0x2e67e4u: goto label_2e67e4;
        case 0x2e67e8u: goto label_2e67e8;
        case 0x2e67ecu: goto label_2e67ec;
        case 0x2e67f0u: goto label_2e67f0;
        case 0x2e67f4u: goto label_2e67f4;
        case 0x2e67f8u: goto label_2e67f8;
        case 0x2e67fcu: goto label_2e67fc;
        case 0x2e6800u: goto label_2e6800;
        case 0x2e6804u: goto label_2e6804;
        case 0x2e6808u: goto label_2e6808;
        case 0x2e680cu: goto label_2e680c;
        case 0x2e6810u: goto label_2e6810;
        case 0x2e6814u: goto label_2e6814;
        case 0x2e6818u: goto label_2e6818;
        case 0x2e681cu: goto label_2e681c;
        case 0x2e6820u: goto label_2e6820;
        case 0x2e6824u: goto label_2e6824;
        case 0x2e6828u: goto label_2e6828;
        case 0x2e682cu: goto label_2e682c;
        case 0x2e6830u: goto label_2e6830;
        case 0x2e6834u: goto label_2e6834;
        case 0x2e6838u: goto label_2e6838;
        case 0x2e683cu: goto label_2e683c;
        case 0x2e6840u: goto label_2e6840;
        case 0x2e6844u: goto label_2e6844;
        case 0x2e6848u: goto label_2e6848;
        case 0x2e684cu: goto label_2e684c;
        case 0x2e6850u: goto label_2e6850;
        case 0x2e6854u: goto label_2e6854;
        case 0x2e6858u: goto label_2e6858;
        case 0x2e685cu: goto label_2e685c;
        case 0x2e6860u: goto label_2e6860;
        case 0x2e6864u: goto label_2e6864;
        default: break;
    }

    ctx->pc = 0x2e64b0u;

label_2e64b0:
    // 0x2e64b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e64b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e64b4:
    // 0x2e64b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e64b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2e64b8:
    // 0x2e64b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e64b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2e64bc:
    // 0x2e64bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e64bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e64c0:
    // 0x2e64c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e64c4:
    // 0x2e64c4: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2e64c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e64c8:
    // 0x2e64c8: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2e64c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e64cc:
    // 0x2e64cc: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x2e64ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_2e64d0:
    // 0x2e64d0: 0x9082012e  lbu         $v0, 0x12E($a0)
    ctx->pc = 0x2e64d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 302)));
label_2e64d4:
    // 0x2e64d4: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x2e64d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_2e64d8:
    // 0x2e64d8: 0x8c83016c  lw          $v1, 0x16C($a0)
    ctx->pc = 0x2e64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
label_2e64dc:
    // 0x2e64dc: 0xae2302d4  sw          $v1, 0x2D4($s1)
    ctx->pc = 0x2e64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 3));
label_2e64e0:
    // 0x2e64e0: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x2e64e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e64e4:
    // 0x2e64e4: 0x8c820170  lw          $v0, 0x170($a0)
    ctx->pc = 0x2e64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
label_2e64e8:
    // 0x2e64e8: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x2e64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
label_2e64ec:
    // 0x2e64ec: 0x90850174  lbu         $a1, 0x174($a0)
    ctx->pc = 0x2e64ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 372)));
label_2e64f0:
    // 0x2e64f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2e64f4:
    if (ctx->pc == 0x2E64F4u) {
        ctx->pc = 0x2E64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64F0u;
        // 0x2e64f4: 0xa22502e4  sb          $a1, 0x2E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E64F8u;
        goto label_2e64f8;
    }
    ctx->pc = 0x2E64F0u;
    {
        const bool branch_taken_0x2e64f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64F0u;
        // 0x2e64f4: 0xa22502e4  sb          $a1, 0x2E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 740), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64f0) {
            ctx->pc = 0x2E6504u;
            goto label_2e6504;
        }
    }
    ctx->pc = 0x2E64F8u;
label_2e64f8:
    // 0x2e64f8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2e64f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2e64fc:
    // 0x2e64fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e6500:
    if (ctx->pc == 0x2E6500u) {
        ctx->pc = 0x2E6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64FCu;
        // 0x2e6500: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6504u;
        goto label_2e6504;
    }
    ctx->pc = 0x2E64FCu;
    {
        const bool branch_taken_0x2e64fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E64FCu;
        // 0x2e6500: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e64fc) {
            ctx->pc = 0x2E650Cu;
            goto label_2e650c;
        }
    }
    ctx->pc = 0x2E6504u;
label_2e6504:
    // 0x2e6504: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2e6508:
    if (ctx->pc == 0x2E6508u) {
        ctx->pc = 0x2E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6504u;
        // 0x2e6508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E650Cu;
        goto label_2e650c;
    }
    ctx->pc = 0x2E6504u;
    {
        const bool branch_taken_0x2e6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6504u;
        // 0x2e6508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6504) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E650Cu;
label_2e650c:
    // 0x2e650c: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
label_2e6510:
    if (ctx->pc == 0x2E6510u) {
        ctx->pc = 0x2E6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E650Cu;
        // 0x2e6510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6514u;
        goto label_2e6514;
    }
    ctx->pc = 0x2E650Cu;
    {
        const bool branch_taken_0x2e650c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E650Cu;
        // 0x2e6510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e650c) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E6514u;
label_2e6514:
    // 0x2e6514: 0xc481013c  lwc1        $f1, 0x13C($a0)
    ctx->pc = 0x2e6514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6518:
    // 0x2e6518: 0x262202c0  addiu       $v0, $s1, 0x2C0
    ctx->pc = 0x2e6518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_2e651c:
    // 0x2e651c: 0xc4820140  lwc1        $f2, 0x140($a0)
    ctx->pc = 0x2e651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e6520:
    // 0x2e6520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e6524:
    // 0x2e6524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6528:
    // 0x2e6528: 0xe62102c0  swc1        $f1, 0x2C0($s1)
    ctx->pc = 0x2e6528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_2e652c:
    // 0x2e652c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2e6530:
    // 0x2e6530: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2e6530u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2e6534:
    // 0x2e6534: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e6534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2e6538:
    // 0x2e6538: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e6538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e653c:
    // 0x2e653c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e653cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e6540:
    // 0x2e6540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e6544:
    // 0x2e6544: 0xda2402c0  lqc2        $vf4, 0x2C0($s1)
    ctx->pc = 0x2e6544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 704)));
label_2e6548:
    // 0x2e6548: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e6548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2e654c:
    // 0x2e654c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e654cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2e6550:
    // 0x2e6550: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e6550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2e6554:
    // 0x2e6554: 0xfa2402c0  sqc2        $vf4, 0x2C0($s1)
    ctx->pc = 0x2e6554u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 704), _mm_castps_si128(ctx->vu0_vf[4]));
label_2e6558:
    // 0x2e6558: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2e6558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e655c:
    // 0x2e655c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6560:
    // 0x2e6560: 0x9082018c  lbu         $v0, 0x18C($a0)
    ctx->pc = 0x2e6560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
label_2e6564:
    // 0x2e6564: 0xa22202d0  sb          $v0, 0x2D0($s1)
    ctx->pc = 0x2e6564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 720), (uint8_t)GPR_U32(ctx, 2));
label_2e6568:
    // 0x2e6568: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e6568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e656c:
    // 0x2e656c: 0x9083018d  lbu         $v1, 0x18D($a0)
    ctx->pc = 0x2e656cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 397)));
label_2e6570:
    // 0x2e6570: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x2e6570u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
label_2e6574:
    // 0x2e6574: 0xa22302d1  sb          $v1, 0x2D1($s1)
    ctx->pc = 0x2e6574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 721), (uint8_t)GPR_U32(ctx, 3));
label_2e6578:
    // 0x2e6578: 0x9082018e  lbu         $v0, 0x18E($a0)
    ctx->pc = 0x2e6578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 398)));
label_2e657c:
    // 0x2e657c: 0xa22202d2  sb          $v0, 0x2D2($s1)
    ctx->pc = 0x2e657cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 722), (uint8_t)GPR_U32(ctx, 2));
label_2e6580:
    // 0x2e6580: 0x9083018f  lbu         $v1, 0x18F($a0)
    ctx->pc = 0x2e6580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 399)));
label_2e6584:
    // 0x2e6584: 0xa22302d3  sb          $v1, 0x2D3($s1)
    ctx->pc = 0x2e6584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 723), (uint8_t)GPR_U32(ctx, 3));
label_2e6588:
    // 0x2e6588: 0x90820190  lbu         $v0, 0x190($a0)
    ctx->pc = 0x2e6588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
label_2e658c:
    // 0x2e658c: 0xa22202e5  sb          $v0, 0x2E5($s1)
    ctx->pc = 0x2e658cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 741), (uint8_t)GPR_U32(ctx, 2));
label_2e6590:
    // 0x2e6590: 0x90830191  lbu         $v1, 0x191($a0)
    ctx->pc = 0x2e6590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 401)));
label_2e6594:
    // 0x2e6594: 0xa22302e6  sb          $v1, 0x2E6($s1)
    ctx->pc = 0x2e6594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 742), (uint8_t)GPR_U32(ctx, 3));
label_2e6598:
    // 0x2e6598: 0x90820192  lbu         $v0, 0x192($a0)
    ctx->pc = 0x2e6598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 402)));
label_2e659c:
    // 0x2e659c: 0x10e50018  beq         $a3, $a1, . + 4 + (0x18 << 2)
label_2e65a0:
    if (ctx->pc == 0x2E65A0u) {
        ctx->pc = 0x2E65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E659Cu;
        // 0x2e65a0: 0xa22202e7  sb          $v0, 0x2E7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65A4u;
        goto label_2e65a4;
    }
    ctx->pc = 0x2E659Cu;
    {
        const bool branch_taken_0x2e659c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E659Cu;
        // 0x2e65a0: 0xa22202e7  sb          $v0, 0x2E7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e659c) {
            ctx->pc = 0x2E6600u;
            goto label_2e6600;
        }
    }
    ctx->pc = 0x2E65A4u;
label_2e65a4:
    // 0x2e65a4: 0x922602d1  lbu         $a2, 0x2D1($s1)
    ctx->pc = 0x2e65a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 721)));
label_2e65a8:
    // 0x2e65a8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2e65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2e65ac:
    // 0x2e65ac: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2e65acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
label_2e65b0:
    // 0x2e65b0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e65b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e65b4:
    // 0x2e65b4: 0xc0c180c  jal         func_306030
label_2e65b8:
    if (ctx->pc == 0x2E65B8u) {
        ctx->pc = 0x2E65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65B4u;
        // 0x2e65b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65BCu;
        goto label_2e65bc;
    }
    ctx->pc = 0x2E65B4u;
    SET_GPR_U32(ctx, 31, 0x2E65BCu);
    ctx->pc = 0x2E65B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E65B4u;
    // 0x2e65b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2E65B4u, 0x2E65BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E65BCu;
label_2e65bc:
    // 0x2e65bc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e65c0:
    if (ctx->pc == 0x2E65C0u) {
        ctx->pc = 0x2E65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65BCu;
        // 0x2e65c0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65C4u;
        goto label_2e65c4;
    }
    ctx->pc = 0x2E65BCu;
    {
        const bool branch_taken_0x2e65bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e65bc) {
            ctx->pc = 0x2E65C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E65BCu;
            // 0x2e65c0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E65DCu;
            goto label_2e65dc;
        }
    }
    ctx->pc = 0x2E65C4u;
label_2e65c4:
    // 0x2e65c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e65c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e65c8:
    // 0x2e65c8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e65cc:
    // 0x2e65cc: 0x808602d0  lb          $a2, 0x2D0($a0)
    ctx->pc = 0x2e65ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 720)));
label_2e65d0:
    // 0x2e65d0: 0x24a5e438  addiu       $a1, $a1, -0x1BC8
    ctx->pc = 0x2e65d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960184));
label_2e65d4:
    // 0x2e65d4: 0x10000029  b           . + 4 + (0x29 << 2)
label_2e65d8:
    if (ctx->pc == 0x2E65D8u) {
        ctx->pc = 0x2E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D4u;
        // 0x2e65d8: 0x908702d1  lbu         $a3, 0x2D1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 721)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65DCu;
        goto label_2e65dc;
    }
    ctx->pc = 0x2E65D4u;
    {
        const bool branch_taken_0x2e65d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65D4u;
        // 0x2e65d8: 0x908702d1  lbu         $a3, 0x2D1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 721)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d4) {
            ctx->pc = 0x2E667Cu;
            goto label_2e667c;
        }
    }
    ctx->pc = 0x2E65DCu;
label_2e65dc:
    // 0x2e65dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2e65e0:
    // 0x2e65e0: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2e65e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
label_2e65e4:
    // 0x2e65e4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2e65e8:
    if (ctx->pc == 0x2E65E8u) {
        ctx->pc = 0x2E65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65E4u;
        // 0x2e65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E65ECu;
        goto label_2e65ec;
    }
    ctx->pc = 0x2E65E4u;
    {
        const bool branch_taken_0x2e65e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65E4u;
        // 0x2e65e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65e4) {
            ctx->pc = 0x2E6620u;
            goto label_2e6620;
        }
    }
    ctx->pc = 0x2E65ECu;
label_2e65ec:
    // 0x2e65ec: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e65ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e65f0:
    // 0x2e65f0: 0x808602d0  lb          $a2, 0x2D0($a0)
    ctx->pc = 0x2e65f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 720)));
label_2e65f4:
    // 0x2e65f4: 0x24a5e460  addiu       $a1, $a1, -0x1BA0
    ctx->pc = 0x2e65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960224));
label_2e65f8:
    // 0x2e65f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_2e65fc:
    if (ctx->pc == 0x2E65FCu) {
        ctx->pc = 0x2E65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F8u;
        // 0x2e65fc: 0x908702d1  lbu         $a3, 0x2D1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 721)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6600u;
        goto label_2e6600;
    }
    ctx->pc = 0x2E65F8u;
    {
        const bool branch_taken_0x2e65f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E65F8u;
        // 0x2e65fc: 0x908702d1  lbu         $a3, 0x2D1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 721)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65f8) {
            ctx->pc = 0x2E667Cu;
            goto label_2e667c;
        }
    }
    ctx->pc = 0x2E6600u;
label_2e6600:
    // 0x2e6600: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2e6600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e6604:
    // 0x2e6604: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2e6608:
    if (ctx->pc == 0x2E6608u) {
        ctx->pc = 0x2E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6604u;
        // 0x2e6608: 0x822502d2  lb          $a1, 0x2D2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 722)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E660Cu;
        goto label_2e660c;
    }
    ctx->pc = 0x2E6604u;
    {
        const bool branch_taken_0x2e6604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6604) {
            ctx->pc = 0x2E6608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6604u;
            // 0x2e6608: 0x822502d2  lb          $a1, 0x2D2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 722)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6624u;
            goto label_2e6624;
        }
    }
    ctx->pc = 0x2E660Cu;
label_2e660c:
    // 0x2e660c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6610:
    // 0x2e6610: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e6610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6614:
    // 0x2e6614: 0x908602e6  lbu         $a2, 0x2E6($a0)
    ctx->pc = 0x2e6614u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 742)));
label_2e6618:
    // 0x2e6618: 0x10000023  b           . + 4 + (0x23 << 2)
label_2e661c:
    if (ctx->pc == 0x2E661Cu) {
        ctx->pc = 0x2E661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6618u;
        // 0x2e661c: 0x24a5e498  addiu       $a1, $a1, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6620u;
        goto label_2e6620;
    }
    ctx->pc = 0x2E6618u;
    {
        const bool branch_taken_0x2e6618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6618u;
        // 0x2e661c: 0x24a5e498  addiu       $a1, $a1, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6618) {
            ctx->pc = 0x2E66A8u;
            goto label_2e66a8;
        }
    }
    ctx->pc = 0x2E6620u;
label_2e6620:
    // 0x2e6620: 0x822502d2  lb          $a1, 0x2D2($s1)
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 722)));
label_2e6624:
    // 0x2e6624: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e6624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6628:
    // 0x2e6628: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
label_2e662c:
    if (ctx->pc == 0x2E662Cu) {
        ctx->pc = 0x2E662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6628u;
        // 0x2e662c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6630u;
        goto label_2e6630;
    }
    ctx->pc = 0x2E6628u;
    {
        const bool branch_taken_0x2e6628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6628u;
        // 0x2e662c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6628) {
            ctx->pc = 0x2E668Cu;
            goto label_2e668c;
        }
    }
    ctx->pc = 0x2E6630u;
label_2e6630:
    // 0x2e6630: 0x922602d3  lbu         $a2, 0x2D3($s1)
    ctx->pc = 0x2e6630u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 723)));
label_2e6634:
    // 0x2e6634: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x2e6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
label_2e6638:
    // 0x2e6638: 0xc0c180c  jal         func_306030
label_2e663c:
    if (ctx->pc == 0x2E663Cu) {
        ctx->pc = 0x2E663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6638u;
        // 0x2e663c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6640u;
        goto label_2e6640;
    }
    ctx->pc = 0x2E6638u;
    SET_GPR_U32(ctx, 31, 0x2E6640u);
    ctx->pc = 0x2E663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6638u;
    // 0x2e663c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x2E6638u, 0x2E6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6640u;
label_2e6640:
    // 0x2e6640: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2e6644:
    if (ctx->pc == 0x2E6644u) {
        ctx->pc = 0x2E6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6640u;
        // 0x2e6644: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6648u;
        goto label_2e6648;
    }
    ctx->pc = 0x2E6640u;
    {
        const bool branch_taken_0x2e6640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6640) {
            ctx->pc = 0x2E6644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6640u;
            // 0x2e6644: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E665Cu;
            goto label_2e665c;
        }
    }
    ctx->pc = 0x2E6648u;
label_2e6648:
    // 0x2e6648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e664c:
    // 0x2e664c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e664cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6650:
    // 0x2e6650: 0x808602d2  lb          $a2, 0x2D2($a0)
    ctx->pc = 0x2e6650u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 722)));
label_2e6654:
    // 0x2e6654: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e6658:
    if (ctx->pc == 0x2E6658u) {
        ctx->pc = 0x2E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6654u;
        // 0x2e6658: 0x24a5e4b8  addiu       $a1, $a1, -0x1B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E665Cu;
        goto label_2e665c;
    }
    ctx->pc = 0x2E6654u;
    {
        const bool branch_taken_0x2e6654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6654u;
        // 0x2e6658: 0x24a5e4b8  addiu       $a1, $a1, -0x1B48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6654) {
            ctx->pc = 0x2E6678u;
            goto label_2e6678;
        }
    }
    ctx->pc = 0x2E665Cu;
label_2e665c:
    // 0x2e665c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2e6660:
    // 0x2e6660: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x2e6660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
label_2e6664:
    // 0x2e6664: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_2e6668:
    if (ctx->pc == 0x2E6668u) {
        ctx->pc = 0x2E6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6664u;
        // 0x2e6668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E666Cu;
        goto label_2e666c;
    }
    ctx->pc = 0x2E6664u;
    {
        const bool branch_taken_0x2e6664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6664u;
        // 0x2e6668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6664) {
            ctx->pc = 0x2E66B8u;
            goto label_2e66b8;
        }
    }
    ctx->pc = 0x2E666Cu;
label_2e666c:
    // 0x2e666c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e666cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e6670:
    // 0x2e6670: 0x808602d2  lb          $a2, 0x2D2($a0)
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 722)));
label_2e6674:
    // 0x2e6674: 0x24a5e4e0  addiu       $a1, $a1, -0x1B20
    ctx->pc = 0x2e6674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960352));
label_2e6678:
    // 0x2e6678: 0x908702d3  lbu         $a3, 0x2D3($a0)
    ctx->pc = 0x2e6678u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 723)));
label_2e667c:
    // 0x2e667c: 0xc0b67da  jal         func_2D9F68
label_2e6680:
    if (ctx->pc == 0x2E6680u) {
        ctx->pc = 0x2E6684u;
        goto label_2e6684;
    }
    ctx->pc = 0x2E667Cu;
    SET_GPR_U32(ctx, 31, 0x2E6684u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E667Cu, 0x2E6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6684u;
label_2e6684:
    // 0x2e6684: 0x10000073  b           . + 4 + (0x73 << 2)
label_2e6688:
    if (ctx->pc == 0x2E6688u) {
        ctx->pc = 0x2E6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6684u;
        // 0x2e6688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E668Cu;
        goto label_2e668c;
    }
    ctx->pc = 0x2E6684u;
    {
        const bool branch_taken_0x2e6684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6684u;
        // 0x2e6688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6684) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E668Cu;
label_2e668c:
    // 0x2e668c: 0x922202e7  lbu         $v0, 0x2E7($s1)
    ctx->pc = 0x2e668cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 743)));
label_2e6690:
    // 0x2e6690: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_2e6694:
    if (ctx->pc == 0x2E6694u) {
        ctx->pc = 0x2E6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6690u;
        // 0x2e6694: 0x86220238  lh          $v0, 0x238($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6698u;
        goto label_2e6698;
    }
    ctx->pc = 0x2E6690u;
    {
        const bool branch_taken_0x2e6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6690) {
            ctx->pc = 0x2E6694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6690u;
            // 0x2e6694: 0x86220238  lh          $v0, 0x238($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E66BCu;
            goto label_2e66bc;
        }
    }
    ctx->pc = 0x2E6698u;
label_2e6698:
    // 0x2e6698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e669c:
    // 0x2e669c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e669cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2e66a0:
    // 0x2e66a0: 0x908602e7  lbu         $a2, 0x2E7($a0)
    ctx->pc = 0x2e66a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 743)));
label_2e66a4:
    // 0x2e66a4: 0x24a5e518  addiu       $a1, $a1, -0x1AE8
    ctx->pc = 0x2e66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960408));
label_2e66a8:
    // 0x2e66a8: 0xc0b67da  jal         func_2D9F68
label_2e66ac:
    if (ctx->pc == 0x2E66ACu) {
        ctx->pc = 0x2E66B0u;
        goto label_2e66b0;
    }
    ctx->pc = 0x2E66A8u;
    SET_GPR_U32(ctx, 31, 0x2E66B0u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2E66A8u, 0x2E66B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E66B0u;
label_2e66b0:
    // 0x2e66b0: 0x10000068  b           . + 4 + (0x68 << 2)
label_2e66b4:
    if (ctx->pc == 0x2E66B4u) {
        ctx->pc = 0x2E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B0u;
        // 0x2e66b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66B8u;
        goto label_2e66b8;
    }
    ctx->pc = 0x2E66B0u;
    {
        const bool branch_taken_0x2e66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66B0u;
        // 0x2e66b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e66b0) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E66B8u;
label_2e66b8:
    // 0x2e66b8: 0x86220238  lh          $v0, 0x238($s1)
    ctx->pc = 0x2e66b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
label_2e66bc:
    // 0x2e66bc: 0x5c40000b  bgtzl       $v0, . + 4 + (0xB << 2)
label_2e66c0:
    if (ctx->pc == 0x2E66C0u) {
        ctx->pc = 0x2E66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66BCu;
        // 0x2e66c0: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66C4u;
        goto label_2e66c4;
    }
    ctx->pc = 0x2E66BCu;
    {
        const bool branch_taken_0x2e66bc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x2e66bc) {
            ctx->pc = 0x2E66C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E66BCu;
            // 0x2e66c0: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E66ECu;
            goto label_2e66ec;
        }
    }
    ctx->pc = 0x2E66C4u;
label_2e66c4:
    // 0x2e66c4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2e66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2e66c8:
    // 0x2e66c8: 0x90430293  lbu         $v1, 0x293($v0)
    ctx->pc = 0x2e66c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 659)));
label_2e66cc:
    // 0x2e66cc: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_2e66d0:
    if (ctx->pc == 0x2E66D0u) {
        ctx->pc = 0x2E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E66CCu;
        // 0x2e66d0: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E66D4u;
        goto label_2e66d4;
    }
    ctx->pc = 0x2E66CCu;
    {
        const bool branch_taken_0x2e66cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e66cc) {
            ctx->pc = 0x2E66D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E66CCu;
            // 0x2e66d0: 0x922202e5  lbu         $v0, 0x2E5($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E66ECu;
            goto label_2e66ec;
        }
    }
    ctx->pc = 0x2E66D4u;
label_2e66d4:
    // 0x2e66d4: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_2e66d8:
    // 0x2e66d8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2e66d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2e66dc:
    // 0x2e66dc: 0xa6230238  sh          $v1, 0x238($s1)
    ctx->pc = 0x2e66dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 568), (uint16_t)GPR_U32(ctx, 3));
label_2e66e0:
    // 0x2e66e0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e66e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2e66e4:
    // 0x2e66e4: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e66e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
label_2e66e8:
    // 0x2e66e8: 0x922202e5  lbu         $v0, 0x2E5($s1)
    ctx->pc = 0x2e66e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 741)));
label_2e66ec:
    // 0x2e66ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2e66f0:
    if (ctx->pc == 0x2E66F0u) {
        ctx->pc = 0x2E66F4u;
        goto label_2e66f4;
    }
    ctx->pc = 0x2E66ECu;
    {
        const bool branch_taken_0x2e66ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e66ec) {
            ctx->pc = 0x2E6700u;
            goto label_2e6700;
        }
    }
    ctx->pc = 0x2E66F4u;
label_2e66f4:
    // 0x2e66f4: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
label_2e66f8:
    // 0x2e66f8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e66f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_2e66fc:
    // 0x2e66fc: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e66fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
label_2e6700:
    // 0x2e6700: 0xc0b98f0  jal         func_2E63C0
label_2e6704:
    if (ctx->pc == 0x2E6704u) {
        ctx->pc = 0x2E6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6700u;
        // 0x2e6704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6708u;
        goto label_2e6708;
    }
    ctx->pc = 0x2E6700u;
    SET_GPR_U32(ctx, 31, 0x2E6708u);
    ctx->pc = 0x2E6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6700u;
    // 0x2e6704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E63C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E63C0u, 0x2E6700u, 0x2E6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6708u;
label_2e6708:
    // 0x2e6708: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_2e670c:
    if (ctx->pc == 0x2E670Cu) {
        ctx->pc = 0x2E670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6708u;
        // 0x2e670c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6710u;
        goto label_2e6710;
    }
    ctx->pc = 0x2E6708u;
    {
        const bool branch_taken_0x2e6708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6708u;
        // 0x2e670c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6708) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E6710u;
label_2e6710:
    // 0x2e6710: 0x8e3002b0  lw          $s0, 0x2B0($s1)
    ctx->pc = 0x2e6710u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e6714:
    // 0x2e6714: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_2e6718:
    if (ctx->pc == 0x2E6718u) {
        ctx->pc = 0x2E6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6714u;
        // 0x2e6718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E671Cu;
        goto label_2e671c;
    }
    ctx->pc = 0x2E6714u;
    {
        const bool branch_taken_0x2e6714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6714u;
        // 0x2e6718: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6714) {
            ctx->pc = 0x2E6854u;
            goto label_2e6854;
        }
    }
    ctx->pc = 0x2E671Cu;
label_2e671c:
    // 0x2e671c: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2e671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2e6720:
    // 0x2e6720: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_2e6724:
    // 0x2e6724: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e6724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e6728:
    // 0x2e6728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e672c:
    // 0x2e672c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e672cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e6730:
    // 0x2e6730: 0xc0ad858  jal         func_2B6160
label_2e6734:
    if (ctx->pc == 0x2E6734u) {
        ctx->pc = 0x2E6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6730u;
        // 0x2e6734: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6738u;
        goto label_2e6738;
    }
    ctx->pc = 0x2E6730u;
    SET_GPR_U32(ctx, 31, 0x2E6738u);
    ctx->pc = 0x2E6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6730u;
    // 0x2e6734: 0xae23011c  sw          $v1, 0x11C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E6730u, 0x2E6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6738u;
label_2e6738:
    // 0x2e6738: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2e6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2e673c:
    // 0x2e673c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2e6740:
    if (ctx->pc == 0x2E6740u) {
        ctx->pc = 0x2E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E673Cu;
        // 0x2e6740: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6744u;
        goto label_2e6744;
    }
    ctx->pc = 0x2E673Cu;
    {
        const bool branch_taken_0x2e673c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E673Cu;
        // 0x2e6740: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e673c) {
            ctx->pc = 0x2E6758u;
            goto label_2e6758;
        }
    }
    ctx->pc = 0x2E6744u;
label_2e6744:
    // 0x2e6744: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2e6748:
    // 0x2e6748: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e674c:
    // 0x2e674c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e674cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2e6750:
    // 0x2e6750: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6754:
    // 0x2e6754: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e6754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e6758:
    // 0x2e6758: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e6758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e675c:
    // 0x2e675c: 0xc0ad8b8  jal         func_2B62E0
label_2e6760:
    if (ctx->pc == 0x2E6760u) {
        ctx->pc = 0x2E6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E675Cu;
        // 0x2e6760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6764u;
        goto label_2e6764;
    }
    ctx->pc = 0x2E675Cu;
    SET_GPR_U32(ctx, 31, 0x2E6764u);
    ctx->pc = 0x2E6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E675Cu;
    // 0x2e6760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E675Cu, 0x2E6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6764u;
label_2e6764:
    // 0x2e6764: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6768:
    // 0x2e6768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e676c:
    // 0x2e676c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6770:
    // 0x2e6770: 0xc0ad876  jal         func_2B61D8
label_2e6774:
    if (ctx->pc == 0x2E6774u) {
        ctx->pc = 0x2E6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6770u;
        // 0x2e6774: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6778u;
        goto label_2e6778;
    }
    ctx->pc = 0x2E6770u;
    SET_GPR_U32(ctx, 31, 0x2E6778u);
    ctx->pc = 0x2E6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6770u;
    // 0x2e6774: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E6770u, 0x2E6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6778u;
label_2e6778:
    // 0x2e6778: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e677c:
    // 0x2e677c: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2e677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_2e6780:
    // 0x2e6780: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2e6784:
    if (ctx->pc == 0x2E6784u) {
        ctx->pc = 0x2E6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6780u;
        // 0x2e6784: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6788u;
        goto label_2e6788;
    }
    ctx->pc = 0x2E6780u;
    {
        const bool branch_taken_0x2e6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6780u;
        // 0x2e6784: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6780) {
            ctx->pc = 0x2E679Cu;
            goto label_2e679c;
        }
    }
    ctx->pc = 0x2E6788u;
label_2e6788:
    // 0x2e6788: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2e6788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_2e678c:
    // 0x2e678c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e6790:
    // 0x2e6790: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e6790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2e6794:
    // 0x2e6794: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6798:
    // 0x2e6798: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e679c:
    // 0x2e679c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2e679cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e67a0:
    // 0x2e67a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e67a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e67a4:
    // 0x2e67a4: 0xc0ad834  jal         func_2B60D0
label_2e67a8:
    if (ctx->pc == 0x2E67A8u) {
        ctx->pc = 0x2E67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67A4u;
        // 0x2e67a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67ACu;
        goto label_2e67ac;
    }
    ctx->pc = 0x2E67A4u;
    SET_GPR_U32(ctx, 31, 0x2E67ACu);
    ctx->pc = 0x2E67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67A4u;
    // 0x2e67a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2E67A4u, 0x2E67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67ACu;
label_2e67ac:
    // 0x2e67ac: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e67b0:
    // 0x2e67b0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_2e67b4:
    // 0x2e67b4: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
label_2e67b8:
    if (ctx->pc == 0x2E67B8u) {
        ctx->pc = 0x2E67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67B4u;
        // 0x2e67b8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E67BCu;
        goto label_2e67bc;
    }
    ctx->pc = 0x2E67B4u;
    {
        const bool branch_taken_0x2e67b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67B4u;
        // 0x2e67b8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67b4) {
            ctx->pc = 0x2E67D4u;
            goto label_2e67d4;
        }
    }
    ctx->pc = 0x2E67BCu;
label_2e67bc:
    // 0x2e67bc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2e67bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_2e67c0:
    // 0x2e67c0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e67c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e67c4:
    // 0x2e67c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e67c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2e67c8:
    // 0x2e67c8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e67cc:
    // 0x2e67cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e67ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e67d0:
    // 0x2e67d0: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e67d4:
    // 0x2e67d4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2e67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_2e67d8:
    // 0x2e67d8: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2e67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e67dc:
    // 0x2e67dc: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2e67dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
label_2e67e0:
    // 0x2e67e0: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2e67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e67e4:
    // 0x2e67e4: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x2e67e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e67e8:
    // 0x2e67e8: 0xe4400244  swc1        $f0, 0x244($v0)
    ctx->pc = 0x2e67e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
label_2e67ec:
    // 0x2e67ec: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x2e67ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e67f0:
    // 0x2e67f0: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2e67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e67f4:
    // 0x2e67f4: 0xe4600248  swc1        $f0, 0x248($v1)
    ctx->pc = 0x2e67f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
label_2e67f8:
    // 0x2e67f8: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2e67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e67fc:
    // 0x2e67fc: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2e67fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e6800:
    // 0x2e6800: 0xe480024c  swc1        $f0, 0x24C($a0)
    ctx->pc = 0x2e6800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
label_2e6804:
    // 0x2e6804: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2e6808:
    // 0x2e6808: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e6808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e680c:
    // 0x2e680c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2e6810:
    if (ctx->pc == 0x2E6810u) {
        ctx->pc = 0x2E6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E680Cu;
        // 0x2e6810: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6814u;
        goto label_2e6814;
    }
    ctx->pc = 0x2E680Cu;
    {
        const bool branch_taken_0x2e680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e680c) {
            ctx->pc = 0x2E6810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E680Cu;
            // 0x2e6810: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6828u;
            goto label_2e6828;
        }
    }
    ctx->pc = 0x2E6814u;
label_2e6814:
    // 0x2e6814: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2e6814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_2e6818:
    // 0x2e6818: 0x34a51011  ori         $a1, $a1, 0x1011
    ctx->pc = 0x2e6818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4113);
label_2e681c:
    // 0x2e681c: 0xc0539de  jal         func_14E778
label_2e6820:
    if (ctx->pc == 0x2E6820u) {
        ctx->pc = 0x2E6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E681Cu;
        // 0x2e6820: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6824u;
        goto label_2e6824;
    }
    ctx->pc = 0x2E681Cu;
    SET_GPR_U32(ctx, 31, 0x2E6824u);
    ctx->pc = 0x2E6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E681Cu;
    // 0x2e6820: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E778u, 0x2E681Cu, 0x2E6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6824u;
label_2e6824:
    // 0x2e6824: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2e6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e6828:
    // 0x2e6828: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e6828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2e682c:
    // 0x2e682c: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x2e682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
label_2e6830:
    // 0x2e6830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e6834:
    // 0x2e6834: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x2e6834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
label_2e6838:
    // 0x2e6838: 0x8e2502b0  lw          $a1, 0x2B0($s1)
    ctx->pc = 0x2e6838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2e683c:
    // 0x2e683c: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x2e683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2e6840:
    // 0x2e6840: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2e6840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2e6844:
    // 0x2e6844: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2e6844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2e6848:
    // 0x2e6848: 0x60f809  jalr        $v1
label_2e684c:
    if (ctx->pc == 0x2E684Cu) {
        ctx->pc = 0x2E684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6848u;
        // 0x2e684c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6850u;
        goto label_2e6850;
    }
    ctx->pc = 0x2E6848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E6850u);
        ctx->pc = 0x2E684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6848u;
        // 0x2e684c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6848u, 0x2E6850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E6850u;
label_2e6850:
    // 0x2e6850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6854:
    // 0x2e6854: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e6854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e6858:
    // 0x2e6858: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e6858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e685c:
    // 0x2e685c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e6860:
    // 0x2e6860: 0x3e00008  jr          $ra
label_2e6864:
    if (ctx->pc == 0x2E6864u) {
        ctx->pc = 0x2E6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6860u;
        // 0x2e6864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6868u;
        goto label_fallthrough_0x2e6860;
    }
    ctx->pc = 0x2E6860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6860u;
        // 0x2e6864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e6860:
    ctx->pc = 0x2E6868u;
}
