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

// Function: write_int__FR7ostreamUxi
// Address: 0x388660 - 0x388a00
void write_int__FR7ostreamUxi_0x388660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("write_int__FR7ostreamUxi_0x388660");
#endif

    switch (ctx->pc) {
        case 0x388660u: goto label_388660;
        case 0x388664u: goto label_388664;
        case 0x388668u: goto label_388668;
        case 0x38866cu: goto label_38866c;
        case 0x388670u: goto label_388670;
        case 0x388674u: goto label_388674;
        case 0x388678u: goto label_388678;
        case 0x38867cu: goto label_38867c;
        case 0x388680u: goto label_388680;
        case 0x388684u: goto label_388684;
        case 0x388688u: goto label_388688;
        case 0x38868cu: goto label_38868c;
        case 0x388690u: goto label_388690;
        case 0x388694u: goto label_388694;
        case 0x388698u: goto label_388698;
        case 0x38869cu: goto label_38869c;
        case 0x3886a0u: goto label_3886a0;
        case 0x3886a4u: goto label_3886a4;
        case 0x3886a8u: goto label_3886a8;
        case 0x3886acu: goto label_3886ac;
        case 0x3886b0u: goto label_3886b0;
        case 0x3886b4u: goto label_3886b4;
        case 0x3886b8u: goto label_3886b8;
        case 0x3886bcu: goto label_3886bc;
        case 0x3886c0u: goto label_3886c0;
        case 0x3886c4u: goto label_3886c4;
        case 0x3886c8u: goto label_3886c8;
        case 0x3886ccu: goto label_3886cc;
        case 0x3886d0u: goto label_3886d0;
        case 0x3886d4u: goto label_3886d4;
        case 0x3886d8u: goto label_3886d8;
        case 0x3886dcu: goto label_3886dc;
        case 0x3886e0u: goto label_3886e0;
        case 0x3886e4u: goto label_3886e4;
        case 0x3886e8u: goto label_3886e8;
        case 0x3886ecu: goto label_3886ec;
        case 0x3886f0u: goto label_3886f0;
        case 0x3886f4u: goto label_3886f4;
        case 0x3886f8u: goto label_3886f8;
        case 0x3886fcu: goto label_3886fc;
        case 0x388700u: goto label_388700;
        case 0x388704u: goto label_388704;
        case 0x388708u: goto label_388708;
        case 0x38870cu: goto label_38870c;
        case 0x388710u: goto label_388710;
        case 0x388714u: goto label_388714;
        case 0x388718u: goto label_388718;
        case 0x38871cu: goto label_38871c;
        case 0x388720u: goto label_388720;
        case 0x388724u: goto label_388724;
        case 0x388728u: goto label_388728;
        case 0x38872cu: goto label_38872c;
        case 0x388730u: goto label_388730;
        case 0x388734u: goto label_388734;
        case 0x388738u: goto label_388738;
        case 0x38873cu: goto label_38873c;
        case 0x388740u: goto label_388740;
        case 0x388744u: goto label_388744;
        case 0x388748u: goto label_388748;
        case 0x38874cu: goto label_38874c;
        case 0x388750u: goto label_388750;
        case 0x388754u: goto label_388754;
        case 0x388758u: goto label_388758;
        case 0x38875cu: goto label_38875c;
        case 0x388760u: goto label_388760;
        case 0x388764u: goto label_388764;
        case 0x388768u: goto label_388768;
        case 0x38876cu: goto label_38876c;
        case 0x388770u: goto label_388770;
        case 0x388774u: goto label_388774;
        case 0x388778u: goto label_388778;
        case 0x38877cu: goto label_38877c;
        case 0x388780u: goto label_388780;
        case 0x388784u: goto label_388784;
        case 0x388788u: goto label_388788;
        case 0x38878cu: goto label_38878c;
        case 0x388790u: goto label_388790;
        case 0x388794u: goto label_388794;
        case 0x388798u: goto label_388798;
        case 0x38879cu: goto label_38879c;
        case 0x3887a0u: goto label_3887a0;
        case 0x3887a4u: goto label_3887a4;
        case 0x3887a8u: goto label_3887a8;
        case 0x3887acu: goto label_3887ac;
        case 0x3887b0u: goto label_3887b0;
        case 0x3887b4u: goto label_3887b4;
        case 0x3887b8u: goto label_3887b8;
        case 0x3887bcu: goto label_3887bc;
        case 0x3887c0u: goto label_3887c0;
        case 0x3887c4u: goto label_3887c4;
        case 0x3887c8u: goto label_3887c8;
        case 0x3887ccu: goto label_3887cc;
        case 0x3887d0u: goto label_3887d0;
        case 0x3887d4u: goto label_3887d4;
        case 0x3887d8u: goto label_3887d8;
        case 0x3887dcu: goto label_3887dc;
        case 0x3887e0u: goto label_3887e0;
        case 0x3887e4u: goto label_3887e4;
        case 0x3887e8u: goto label_3887e8;
        case 0x3887ecu: goto label_3887ec;
        case 0x3887f0u: goto label_3887f0;
        case 0x3887f4u: goto label_3887f4;
        case 0x3887f8u: goto label_3887f8;
        case 0x3887fcu: goto label_3887fc;
        case 0x388800u: goto label_388800;
        case 0x388804u: goto label_388804;
        case 0x388808u: goto label_388808;
        case 0x38880cu: goto label_38880c;
        case 0x388810u: goto label_388810;
        case 0x388814u: goto label_388814;
        case 0x388818u: goto label_388818;
        case 0x38881cu: goto label_38881c;
        case 0x388820u: goto label_388820;
        case 0x388824u: goto label_388824;
        case 0x388828u: goto label_388828;
        case 0x38882cu: goto label_38882c;
        case 0x388830u: goto label_388830;
        case 0x388834u: goto label_388834;
        case 0x388838u: goto label_388838;
        case 0x38883cu: goto label_38883c;
        case 0x388840u: goto label_388840;
        case 0x388844u: goto label_388844;
        case 0x388848u: goto label_388848;
        case 0x38884cu: goto label_38884c;
        case 0x388850u: goto label_388850;
        case 0x388854u: goto label_388854;
        case 0x388858u: goto label_388858;
        case 0x38885cu: goto label_38885c;
        case 0x388860u: goto label_388860;
        case 0x388864u: goto label_388864;
        case 0x388868u: goto label_388868;
        case 0x38886cu: goto label_38886c;
        case 0x388870u: goto label_388870;
        case 0x388874u: goto label_388874;
        case 0x388878u: goto label_388878;
        case 0x38887cu: goto label_38887c;
        case 0x388880u: goto label_388880;
        case 0x388884u: goto label_388884;
        case 0x388888u: goto label_388888;
        case 0x38888cu: goto label_38888c;
        case 0x388890u: goto label_388890;
        case 0x388894u: goto label_388894;
        case 0x388898u: goto label_388898;
        case 0x38889cu: goto label_38889c;
        case 0x3888a0u: goto label_3888a0;
        case 0x3888a4u: goto label_3888a4;
        case 0x3888a8u: goto label_3888a8;
        case 0x3888acu: goto label_3888ac;
        case 0x3888b0u: goto label_3888b0;
        case 0x3888b4u: goto label_3888b4;
        case 0x3888b8u: goto label_3888b8;
        case 0x3888bcu: goto label_3888bc;
        case 0x3888c0u: goto label_3888c0;
        case 0x3888c4u: goto label_3888c4;
        case 0x3888c8u: goto label_3888c8;
        case 0x3888ccu: goto label_3888cc;
        case 0x3888d0u: goto label_3888d0;
        case 0x3888d4u: goto label_3888d4;
        case 0x3888d8u: goto label_3888d8;
        case 0x3888dcu: goto label_3888dc;
        case 0x3888e0u: goto label_3888e0;
        case 0x3888e4u: goto label_3888e4;
        case 0x3888e8u: goto label_3888e8;
        case 0x3888ecu: goto label_3888ec;
        case 0x3888f0u: goto label_3888f0;
        case 0x3888f4u: goto label_3888f4;
        case 0x3888f8u: goto label_3888f8;
        case 0x3888fcu: goto label_3888fc;
        case 0x388900u: goto label_388900;
        case 0x388904u: goto label_388904;
        case 0x388908u: goto label_388908;
        case 0x38890cu: goto label_38890c;
        case 0x388910u: goto label_388910;
        case 0x388914u: goto label_388914;
        case 0x388918u: goto label_388918;
        case 0x38891cu: goto label_38891c;
        case 0x388920u: goto label_388920;
        case 0x388924u: goto label_388924;
        case 0x388928u: goto label_388928;
        case 0x38892cu: goto label_38892c;
        case 0x388930u: goto label_388930;
        case 0x388934u: goto label_388934;
        case 0x388938u: goto label_388938;
        case 0x38893cu: goto label_38893c;
        case 0x388940u: goto label_388940;
        case 0x388944u: goto label_388944;
        case 0x388948u: goto label_388948;
        case 0x38894cu: goto label_38894c;
        case 0x388950u: goto label_388950;
        case 0x388954u: goto label_388954;
        case 0x388958u: goto label_388958;
        case 0x38895cu: goto label_38895c;
        case 0x388960u: goto label_388960;
        case 0x388964u: goto label_388964;
        case 0x388968u: goto label_388968;
        case 0x38896cu: goto label_38896c;
        case 0x388970u: goto label_388970;
        case 0x388974u: goto label_388974;
        case 0x388978u: goto label_388978;
        case 0x38897cu: goto label_38897c;
        case 0x388980u: goto label_388980;
        case 0x388984u: goto label_388984;
        case 0x388988u: goto label_388988;
        case 0x38898cu: goto label_38898c;
        case 0x388990u: goto label_388990;
        case 0x388994u: goto label_388994;
        case 0x388998u: goto label_388998;
        case 0x38899cu: goto label_38899c;
        case 0x3889a0u: goto label_3889a0;
        case 0x3889a4u: goto label_3889a4;
        case 0x3889a8u: goto label_3889a8;
        case 0x3889acu: goto label_3889ac;
        case 0x3889b0u: goto label_3889b0;
        case 0x3889b4u: goto label_3889b4;
        case 0x3889b8u: goto label_3889b8;
        case 0x3889bcu: goto label_3889bc;
        case 0x3889c0u: goto label_3889c0;
        case 0x3889c4u: goto label_3889c4;
        case 0x3889c8u: goto label_3889c8;
        case 0x3889ccu: goto label_3889cc;
        case 0x3889d0u: goto label_3889d0;
        case 0x3889d4u: goto label_3889d4;
        case 0x3889d8u: goto label_3889d8;
        case 0x3889dcu: goto label_3889dc;
        case 0x3889e0u: goto label_3889e0;
        case 0x3889e4u: goto label_3889e4;
        case 0x3889e8u: goto label_3889e8;
        case 0x3889ecu: goto label_3889ec;
        case 0x3889f0u: goto label_3889f0;
        case 0x3889f4u: goto label_3889f4;
        case 0x3889f8u: goto label_3889f8;
        case 0x3889fcu: goto label_3889fc;
        default: break;
    }

    ctx->pc = 0x388660u;

label_388660:
    // 0x388660: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x388660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_388664:
    // 0x388664: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x388664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_388668:
    // 0x388668: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x388668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_38866c:
    // 0x38866c: 0x2442d0f8  addiu       $v0, $v0, -0x2F08
    ctx->pc = 0x38866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955256));
label_388670:
    // 0x388670: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x388670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_388674:
    // 0x388674: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x388674u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388678:
    // 0x388678: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x388678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_38867c:
    // 0x38867c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x38867cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_388680:
    // 0x388680: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x388680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_388684:
    // 0x388684: 0x27b10022  addiu       $s1, $sp, 0x22
    ctx->pc = 0x388684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
label_388688:
    // 0x388688: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x388688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_38868c:
    // 0x38868c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_388690:
    // 0x388690: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x388690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_388694:
    // 0x388694: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x388694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_388698:
    // 0x388698: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x388698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_38869c:
    // 0x38869c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x38869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_3886a0:
    // 0x3886a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3886a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_3886a4:
    // 0x3886a4: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x3886a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3886a8:
    // 0x3886a8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3886a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3886ac:
    // 0x3886ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3886acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3886b0:
    // 0x3886b0: 0xde440010  ld          $a0, 0x10($s2)
    ctx->pc = 0x3886b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_3886b4:
    // 0x3886b4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3886b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3886b8:
    // 0x3886b8: 0x30830070  andi        $v1, $a0, 0x70
    ctx->pc = 0x3886b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
label_3886bc:
    // 0x3886bc: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_3886c0:
    if (ctx->pc == 0x3886C0u) {
        ctx->pc = 0x3886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886BCu;
        // 0x3886c0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886C4u;
        goto label_3886c4;
    }
    ctx->pc = 0x3886BCu;
    {
        const bool branch_taken_0x3886bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3886C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886BCu;
        // 0x3886c0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886bc) {
            ctx->pc = 0x38870Cu;
            goto label_38870c;
        }
    }
    ctx->pc = 0x3886C4u;
label_3886c4:
    // 0x3886c4: 0x0  nop
    ctx->pc = 0x3886c4u;
    // NOP
label_3886c8:
    // 0x3886c8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3886c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_3886cc:
    // 0x3886cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3886ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3886d0:
    // 0x3886d0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3886d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3886d4:
    // 0x3886d4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3886d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_3886d8:
    // 0x3886d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3886d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3886dc:
    // 0x3886dc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3886dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3886e0:
    // 0x3886e0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_3886e4:
    if (ctx->pc == 0x3886E4u) {
        ctx->pc = 0x3886E8u;
        goto label_3886e8;
    }
    ctx->pc = 0x3886E0u;
    {
        const bool branch_taken_0x3886e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3886e0) {
            ctx->pc = 0x3886C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3886c8;
        }
    }
    ctx->pc = 0x3886E8u;
label_3886e8:
    // 0x3886e8: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x3886e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_3886ec:
    // 0x3886ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3886ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_3886f0:
    // 0x3886f0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3886f4:
    if (ctx->pc == 0x3886F4u) {
        ctx->pc = 0x3886F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F0u;
        // 0x3886f4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886F8u;
        goto label_3886f8;
    }
    ctx->pc = 0x3886F0u;
    {
        const bool branch_taken_0x3886f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F0u;
        // 0x3886f4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886f0) {
            ctx->pc = 0x388820u;
            goto label_388820;
        }
    }
    ctx->pc = 0x3886F8u;
label_3886f8:
    // 0x3886f8: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_3886fc:
    if (ctx->pc == 0x3886FCu) {
        ctx->pc = 0x3886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F8u;
        // 0x3886fc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388700u;
        goto label_388700;
    }
    ctx->pc = 0x3886F8u;
    {
        const bool branch_taken_0x3886f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F8u;
        // 0x3886fc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886f8) {
            ctx->pc = 0x388824u;
            goto label_388824;
        }
    }
    ctx->pc = 0x388700u;
label_388700:
    // 0x388700: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x388700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_388704:
    // 0x388704: 0x10000046  b           . + 4 + (0x46 << 2)
label_388708:
    if (ctx->pc == 0x388708u) {
        ctx->pc = 0x388708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388704u;
        // 0x388708: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38870Cu;
        goto label_38870c;
    }
    ctx->pc = 0x388704u;
    {
        const bool branch_taken_0x388704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388704u;
        // 0x388708: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388704) {
            ctx->pc = 0x388820u;
            goto label_388820;
        }
    }
    ctx->pc = 0x38870Cu;
label_38870c:
    // 0x38870c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x38870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_388710:
    // 0x388710: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_388714:
    if (ctx->pc == 0x388714u) {
        ctx->pc = 0x388714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388710u;
        // 0x388714: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388718u;
        goto label_388718;
    }
    ctx->pc = 0x388710u;
    {
        const bool branch_taken_0x388710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x388714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388710u;
        // 0x388714: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388710) {
            ctx->pc = 0x388774u;
            goto label_388774;
        }
    }
    ctx->pc = 0x388718u;
label_388718:
    // 0x388718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38871c:
    if (ctx->pc == 0x38871Cu) {
        ctx->pc = 0x38871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388718u;
        // 0x38871c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388720u;
        goto label_388720;
    }
    ctx->pc = 0x388718u;
    {
        const bool branch_taken_0x388718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388718u;
        // 0x38871c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388718) {
            ctx->pc = 0x388728u;
            goto label_388728;
        }
    }
    ctx->pc = 0x388720u;
label_388720:
    // 0x388720: 0x10000003  b           . + 4 + (0x3 << 2)
label_388724:
    if (ctx->pc == 0x388724u) {
        ctx->pc = 0x388724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388720u;
        // 0x388724: 0x2444d100  addiu       $a0, $v0, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388728u;
        goto label_388728;
    }
    ctx->pc = 0x388720u;
    {
        const bool branch_taken_0x388720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388720u;
        // 0x388724: 0x2444d100  addiu       $a0, $v0, -0x2F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388720) {
            ctx->pc = 0x388730u;
            goto label_388730;
        }
    }
    ctx->pc = 0x388728u;
label_388728:
    // 0x388728: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x388728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38872c:
    // 0x38872c: 0x2444d118  addiu       $a0, $v0, -0x2EE8
    ctx->pc = 0x38872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955288));
label_388730:
    // 0x388730: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x388730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_388734:
    // 0x388734: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x388734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_388738:
    // 0x388738: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x388738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_38873c:
    // 0x38873c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38873cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_388740:
    // 0x388740: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x388740u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_388744:
    // 0x388744: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x388744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_388748:
    // 0x388748: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x388748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38874c:
    // 0x38874c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_388750:
    if (ctx->pc == 0x388750u) {
        ctx->pc = 0x388750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38874Cu;
        // 0x388750: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388754u;
        goto label_388754;
    }
    ctx->pc = 0x38874Cu;
    {
        const bool branch_taken_0x38874c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x388750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38874Cu;
        // 0x388750: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38874c) {
            ctx->pc = 0x388730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388730;
        }
    }
    ctx->pc = 0x388754u;
label_388754:
    // 0x388754: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x388754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_388758:
    // 0x388758: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x388758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_38875c:
    // 0x38875c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_388760:
    if (ctx->pc == 0x388760u) {
        ctx->pc = 0x388760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38875Cu;
        // 0x388760: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388764u;
        goto label_388764;
    }
    ctx->pc = 0x38875Cu;
    {
        const bool branch_taken_0x38875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38875Cu;
        // 0x388760: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38875c) {
            ctx->pc = 0x388820u;
            goto label_388820;
        }
    }
    ctx->pc = 0x388764u;
label_388764:
    // 0x388764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x388764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388768:
    // 0x388768: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x388768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_38876c:
    // 0x38876c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_388770:
    if (ctx->pc == 0x388770u) {
        ctx->pc = 0x388770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38876Cu;
        // 0x388770: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388774u;
        goto label_388774;
    }
    ctx->pc = 0x38876Cu;
    {
        const bool branch_taken_0x38876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38876Cu;
        // 0x388770: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38876c) {
            ctx->pc = 0x388820u;
            goto label_388820;
        }
    }
    ctx->pc = 0x388774u;
label_388774:
    // 0x388774: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x388774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_388778:
    // 0x388778: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x388778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_38877c:
    // 0x38877c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x38877cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_388780:
    // 0x388780: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_388784:
    if (ctx->pc == 0x388784u) {
        ctx->pc = 0x388784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388780u;
        // 0x388784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388788u;
        goto label_388788;
    }
    ctx->pc = 0x388780u;
    {
        const bool branch_taken_0x388780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388780u;
        // 0x388784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388780) {
            ctx->pc = 0x3887C4u;
            goto label_3887c4;
        }
    }
    ctx->pc = 0x388788u;
label_388788:
    // 0x388788: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x388788u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_38878c:
    // 0x38878c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x38878cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
label_388790:
    // 0x388790: 0xc0ee516  jal         func_3B9458
label_388794:
    if (ctx->pc == 0x388794u) {
        ctx->pc = 0x388794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388790u;
        // 0x388794: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388798u;
        goto label_388798;
    }
    ctx->pc = 0x388790u;
    SET_GPR_U32(ctx, 31, 0x388798u);
    ctx->pc = 0x388794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388790u;
    // 0x388794: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x388790u, 0x388798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388798u;
label_388798:
    // 0x388798: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x388798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_38879c:
    // 0x38879c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x38879cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3887a0:
    // 0x3887a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3887a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3887a4:
    // 0x3887a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3887a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3887a8:
    // 0x3887a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3887a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3887ac:
    // 0x3887ac: 0xc0ee3a2  jal         func_3B8E88
label_3887b0:
    if (ctx->pc == 0x3887B0u) {
        ctx->pc = 0x3887B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887ACu;
        // 0x3887b0: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887B4u;
        goto label_3887b4;
    }
    ctx->pc = 0x3887ACu;
    SET_GPR_U32(ctx, 31, 0x3887B4u);
    ctx->pc = 0x3887B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3887ACu;
    // 0x3887b0: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3887ACu, 0x3887B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3887B4u;
label_3887b4:
    // 0x3887b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3887b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3887b8:
    // 0x3887b8: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x3887b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3887bc:
    // 0x3887bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3887c0:
    if (ctx->pc == 0x3887C0u) {
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887C4u;
        goto label_3887c4;
    }
    ctx->pc = 0x3887BCu;
    {
        const bool branch_taken_0x3887bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887bc) {
            ctx->pc = 0x388790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388790;
        }
    }
    ctx->pc = 0x3887C4u;
label_3887c4:
    // 0x3887c4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3887c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_3887c8:
    // 0x3887c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3887c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3887cc:
    // 0x3887cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3887ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3887d0:
    // 0x3887d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3887d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3887d4:
    // 0x3887d4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x3887d4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3887d8:
    // 0x3887d8: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_3887dc:
    if (ctx->pc == 0x3887DCu) {
        ctx->pc = 0x3887DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887D8u;
        // 0x3887dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887E0u;
        goto label_3887e0;
    }
    ctx->pc = 0x3887D8u;
    {
        const bool branch_taken_0x3887d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3887d8) {
            ctx->pc = 0x3887DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3887D8u;
            // 0x3887dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3887E0u;
            goto label_3887e0;
        }
    }
    ctx->pc = 0x3887E0u;
label_3887e0:
    // 0x3887e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3887e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3887e4:
    // 0x3887e4: 0x1010  mfhi        $v0
    ctx->pc = 0x3887e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3887e8:
    // 0x3887e8: 0x1812  mflo        $v1
    ctx->pc = 0x3887e8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3887ec:
    // 0x3887ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3887ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_3887f0:
    // 0x3887f0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3887f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3887f4:
    // 0x3887f4: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_3887f8:
    if (ctx->pc == 0x3887F8u) {
        ctx->pc = 0x3887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887F4u;
        // 0x3887f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887FCu;
        goto label_3887fc;
    }
    ctx->pc = 0x3887F4u;
    {
        const bool branch_taken_0x3887f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3887f4) {
            ctx->pc = 0x3887F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3887F4u;
            // 0x3887f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3887FCu;
            goto label_3887fc;
        }
    }
    ctx->pc = 0x3887FCu;
label_3887fc:
    // 0x3887fc: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_388800:
    if (ctx->pc == 0x388800u) {
        ctx->pc = 0x388800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887FCu;
        // 0x388800: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x388804u;
        goto label_388804;
    }
    ctx->pc = 0x3887FCu;
    {
        const bool branch_taken_0x3887fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3887fc) {
            ctx->pc = 0x388800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3887FCu;
            // 0x388800: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3887D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3887d8;
        }
    }
    ctx->pc = 0x388804u;
label_388804:
    // 0x388804: 0x1ae00006  blez        $s7, . + 4 + (0x6 << 2)
label_388808:
    if (ctx->pc == 0x388808u) {
        ctx->pc = 0x388808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388804u;
        // 0x388808: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38880Cu;
        goto label_38880c;
    }
    ctx->pc = 0x388804u;
    {
        const bool branch_taken_0x388804 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x388808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388804u;
        // 0x388808: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388804) {
            ctx->pc = 0x388820u;
            goto label_388820;
        }
    }
    ctx->pc = 0x38880Cu;
label_38880c:
    // 0x38880c: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x38880cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_388810:
    // 0x388810: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x388810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_388814:
    // 0x388814: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x388814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_388818:
    // 0x388818: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x388818u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_38881c:
    // 0x38881c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x38881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_388820:
    // 0x388820: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x388820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_388824:
    // 0x388824: 0x2622ffde  addiu       $v0, $s1, -0x22
    ctx->pc = 0x388824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967262));
label_388828:
    // 0x388828: 0x3a2b023  subu        $s6, $sp, $v0
    ctx->pc = 0x388828u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_38882c:
    // 0x38882c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_388830:
    // 0x388830: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x388830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_388834:
    // 0x388834: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x388834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_388838:
    // 0x388838: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x388838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38883c:
    // 0x38883c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x38883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_388840:
    // 0x388840: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x388840u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_388844:
    // 0x388844: 0xde460010  ld          $a2, 0x10($s2)
    ctx->pc = 0x388844u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_388848:
    // 0x388848: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x388848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_38884c:
    // 0x38884c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38884cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388850:
    // 0x388850: 0x82550018  lb          $s5, 0x18($s2)
    ctx->pc = 0x388850u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_388854:
    // 0x388854: 0x30d4000e  andi        $s4, $a2, 0xE
    ctx->pc = 0x388854u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)14);
label_388858:
    // 0x388858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x388858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38885c:
    // 0x38885c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x38885cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_388860:
    // 0x388860: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x388860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_388864:
    // 0x388864: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x388864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_388868:
    // 0x388868: 0x64980a  movz        $s3, $v1, $a0
    ctx->pc = 0x388868u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_38886c:
    // 0x38886c: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_388870:
    if (ctx->pc == 0x388870u) {
        ctx->pc = 0x388870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38886Cu;
        // 0x388870: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388874u;
        goto label_388874;
    }
    ctx->pc = 0x38886Cu;
    {
        const bool branch_taken_0x38886c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x388870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38886Cu;
        // 0x388870: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38886c) {
            ctx->pc = 0x3888A4u;
            goto label_3888a4;
        }
    }
    ctx->pc = 0x388874u;
label_388874:
    // 0x388874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x388874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388878:
    // 0x388878: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
label_38887c:
    if (ctx->pc == 0x38887Cu) {
        ctx->pc = 0x38887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388878u;
        // 0x38887c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388880u;
        goto label_388880;
    }
    ctx->pc = 0x388878u;
    {
        const bool branch_taken_0x388878 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x38887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388878u;
        // 0x38887c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388878) {
            ctx->pc = 0x3888A4u;
            goto label_3888a4;
        }
    }
    ctx->pc = 0x388880u;
label_388880:
    // 0x388880: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_388884:
    if (ctx->pc == 0x388884u) {
        ctx->pc = 0x388884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388880u;
        // 0x388884: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388888u;
        goto label_388888;
    }
    ctx->pc = 0x388880u;
    {
        const bool branch_taken_0x388880 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x388884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388880u;
        // 0x388884: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388880) {
            ctx->pc = 0x3888A4u;
            goto label_3888a4;
        }
    }
    ctx->pc = 0x388888u;
label_388888:
    // 0x388888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38888c:
    // 0x38888c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x38888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_388890:
    // 0x388890: 0xc0e384e  jal         func_38E138
label_388894:
    if (ctx->pc == 0x388894u) {
        ctx->pc = 0x388894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388890u;
        // 0x388894: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388898u;
        goto label_388898;
    }
    ctx->pc = 0x388890u;
    SET_GPR_U32(ctx, 31, 0x388898u);
    ctx->pc = 0x388894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388890u;
    // 0x388894: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x388890u, 0x388898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388898u;
label_388898:
    // 0x388898: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x388898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_38889c:
    // 0x38889c: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_3888a0:
    if (ctx->pc == 0x3888A0u) {
        ctx->pc = 0x3888A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38889Cu;
        // 0x3888a0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888A4u;
        goto label_3888a4;
    }
    ctx->pc = 0x38889Cu;
    {
        const bool branch_taken_0x38889c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38889c) {
            ctx->pc = 0x3888A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38889Cu;
            // 0x3888a0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889A4u;
            goto label_3889a4;
        }
    }
    ctx->pc = 0x3888A4u;
label_3888a4:
    // 0x3888a4: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
label_3888a8:
    if (ctx->pc == 0x3888A8u) {
        ctx->pc = 0x3888A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888A4u;
        // 0x3888a8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888ACu;
        goto label_3888ac;
    }
    ctx->pc = 0x3888A4u;
    {
        const bool branch_taken_0x3888a4 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x3888A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888A4u;
        // 0x3888a8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888a4) {
            ctx->pc = 0x3888B4u;
            goto label_3888b4;
        }
    }
    ctx->pc = 0x3888ACu;
label_3888ac:
    // 0x3888ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3888b0:
    if (ctx->pc == 0x3888B0u) {
        ctx->pc = 0x3888B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888ACu;
        // 0x3888b0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888B4u;
        goto label_3888b4;
    }
    ctx->pc = 0x3888ACu;
    {
        const bool branch_taken_0x3888ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888ACu;
        // 0x3888b0: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888ac) {
            ctx->pc = 0x3888D8u;
            goto label_3888d8;
        }
    }
    ctx->pc = 0x3888B4u;
label_3888b4:
    // 0x3888b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3888b8:
    // 0x3888b8: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x3888b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3888bc:
    // 0x3888bc: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x3888bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3888c0:
    // 0x3888c0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x3888c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_3888c4:
    // 0x3888c4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3888c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_3888c8:
    // 0x3888c8: 0xc0e3aca  jal         func_38EB28
label_3888cc:
    if (ctx->pc == 0x3888CCu) {
        ctx->pc = 0x3888CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888C8u;
        // 0x3888cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888D0u;
        goto label_3888d0;
    }
    ctx->pc = 0x3888C8u;
    SET_GPR_U32(ctx, 31, 0x3888D0u);
    ctx->pc = 0x3888CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888C8u;
    // 0x3888cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x3888C8u, 0x3888D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888D0u;
label_3888d0:
    // 0x3888d0: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
label_3888d4:
    if (ctx->pc == 0x3888D4u) {
        ctx->pc = 0x3888D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888D0u;
        // 0x3888d4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888D8u;
        goto label_3888d8;
    }
    ctx->pc = 0x3888D0u;
    {
        const bool branch_taken_0x3888d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3888D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888D0u;
        // 0x3888d4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888d0) {
            ctx->pc = 0x3889A0u;
            goto label_3889a0;
        }
    }
    ctx->pc = 0x3888D8u;
label_3888d8:
    // 0x3888d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3888dc:
    if (ctx->pc == 0x3888DCu) {
        ctx->pc = 0x3888DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888D8u;
        // 0x3888dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888E0u;
        goto label_3888e0;
    }
    ctx->pc = 0x3888D8u;
    {
        const bool branch_taken_0x3888d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888D8u;
        // 0x3888dc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888d8) {
            ctx->pc = 0x3888FCu;
            goto label_3888fc;
        }
    }
    ctx->pc = 0x3888E0u;
label_3888e0:
    // 0x3888e0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x3888e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3888e4:
    // 0x3888e4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3888e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3888e8:
    // 0x3888e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3888e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3888ec:
    // 0x3888ec: 0x40f809  jalr        $v0
label_3888f0:
    if (ctx->pc == 0x3888F0u) {
        ctx->pc = 0x3888F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888ECu;
        // 0x3888f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888F4u;
        goto label_3888f4;
    }
    ctx->pc = 0x3888ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3888F4u);
        ctx->pc = 0x3888F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888ECu;
        // 0x3888f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3888ECu, 0x3888F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3888F4u;
label_3888f4:
    // 0x3888f4: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_3888f8:
    if (ctx->pc == 0x3888F8u) {
        ctx->pc = 0x3888F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888F4u;
        // 0x3888f8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888FCu;
        goto label_3888fc;
    }
    ctx->pc = 0x3888F4u;
    {
        const bool branch_taken_0x3888f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3888f4) {
            ctx->pc = 0x3888F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3888F4u;
            // 0x3888f8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889A4u;
            goto label_3889a4;
        }
    }
    ctx->pc = 0x3888FCu;
label_3888fc:
    // 0x3888fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3888fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_388900:
    // 0x388900: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_388904:
    if (ctx->pc == 0x388904u) {
        ctx->pc = 0x388904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388900u;
        // 0x388904: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388908u;
        goto label_388908;
    }
    ctx->pc = 0x388900u;
    {
        const bool branch_taken_0x388900 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x388900) {
            ctx->pc = 0x388904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388900u;
            // 0x388904: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388930u;
            goto label_388930;
        }
    }
    ctx->pc = 0x388908u;
label_388908:
    // 0x388908: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_38890c:
    if (ctx->pc == 0x38890Cu) {
        ctx->pc = 0x38890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388908u;
        // 0x38890c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388910u;
        goto label_388910;
    }
    ctx->pc = 0x388908u;
    {
        const bool branch_taken_0x388908 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x38890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388908u;
        // 0x38890c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388908) {
            ctx->pc = 0x38892Cu;
            goto label_38892c;
        }
    }
    ctx->pc = 0x388910u;
label_388910:
    // 0x388910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388914:
    // 0x388914: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x388914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_388918:
    // 0x388918: 0xc0e384e  jal         func_38E138
label_38891c:
    if (ctx->pc == 0x38891Cu) {
        ctx->pc = 0x38891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388918u;
        // 0x38891c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388920u;
        goto label_388920;
    }
    ctx->pc = 0x388918u;
    SET_GPR_U32(ctx, 31, 0x388920u);
    ctx->pc = 0x38891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388918u;
    // 0x38891c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x388918u, 0x388920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388920u;
label_388920:
    // 0x388920: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x388920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_388924:
    // 0x388924: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_388928:
    if (ctx->pc == 0x388928u) {
        ctx->pc = 0x388928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388924u;
        // 0x388928: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38892Cu;
        goto label_38892c;
    }
    ctx->pc = 0x388924u;
    {
        const bool branch_taken_0x388924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388924) {
            ctx->pc = 0x388928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388924u;
            // 0x388928: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889A4u;
            goto label_3889a4;
        }
    }
    ctx->pc = 0x38892Cu;
label_38892c:
    // 0x38892c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x38892cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_388930:
    // 0x388930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x388930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_388934:
    // 0x388934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388938:
    // 0x388938: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x388938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38893c:
    // 0x38893c: 0x40f809  jalr        $v0
label_388940:
    if (ctx->pc == 0x388940u) {
        ctx->pc = 0x388940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38893Cu;
        // 0x388940: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388944u;
        goto label_388944;
    }
    ctx->pc = 0x38893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388944u);
        ctx->pc = 0x388940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38893Cu;
        // 0x388940: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38893Cu, 0x388944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388944u;
label_388944:
    // 0x388944: 0x54560017  bnel        $v0, $s6, . + 4 + (0x17 << 2)
label_388948:
    if (ctx->pc == 0x388948u) {
        ctx->pc = 0x388948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388944u;
        // 0x388948: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38894Cu;
        goto label_38894c;
    }
    ctx->pc = 0x388944u;
    {
        const bool branch_taken_0x388944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x388944) {
            ctx->pc = 0x388948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388944u;
            // 0x388948: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889A4u;
            goto label_3889a4;
        }
    }
    ctx->pc = 0x38894Cu;
label_38894c:
    // 0x38894c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388950:
    // 0x388950: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_388954:
    if (ctx->pc == 0x388954u) {
        ctx->pc = 0x388954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388950u;
        // 0x388954: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388958u;
        goto label_388958;
    }
    ctx->pc = 0x388950u;
    {
        const bool branch_taken_0x388950 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x388950) {
            ctx->pc = 0x388954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388950u;
            // 0x388954: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388980u;
            goto label_388980;
        }
    }
    ctx->pc = 0x388958u;
label_388958:
    // 0x388958: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_38895c:
    if (ctx->pc == 0x38895Cu) {
        ctx->pc = 0x38895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388958u;
        // 0x38895c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388960u;
        goto label_388960;
    }
    ctx->pc = 0x388958u;
    {
        const bool branch_taken_0x388958 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x38895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388958u;
        // 0x38895c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388958) {
            ctx->pc = 0x38897Cu;
            goto label_38897c;
        }
    }
    ctx->pc = 0x388960u;
label_388960:
    // 0x388960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388964:
    // 0x388964: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x388964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_388968:
    // 0x388968: 0xc0e384e  jal         func_38E138
label_38896c:
    if (ctx->pc == 0x38896Cu) {
        ctx->pc = 0x38896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388968u;
        // 0x38896c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388970u;
        goto label_388970;
    }
    ctx->pc = 0x388968u;
    SET_GPR_U32(ctx, 31, 0x388970u);
    ctx->pc = 0x38896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388968u;
    // 0x38896c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x388968u, 0x388970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388970u;
label_388970:
    // 0x388970: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x388970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_388974:
    // 0x388974: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_388978:
    if (ctx->pc == 0x388978u) {
        ctx->pc = 0x388978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388974u;
        // 0x388978: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38897Cu;
        goto label_38897c;
    }
    ctx->pc = 0x388974u;
    {
        const bool branch_taken_0x388974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388974) {
            ctx->pc = 0x388978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388974u;
            // 0x388978: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889A4u;
            goto label_3889a4;
        }
    }
    ctx->pc = 0x38897Cu;
label_38897c:
    // 0x38897c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x38897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_388980:
    // 0x388980: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388984:
    // 0x388984: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x388984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_388988:
    // 0x388988: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_38898c:
    if (ctx->pc == 0x38898Cu) {
        ctx->pc = 0x38898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388988u;
        // 0x38898c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388990u;
        goto label_388990;
    }
    ctx->pc = 0x388988u;
    {
        const bool branch_taken_0x388988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388988u;
        // 0x38898c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388988) {
            ctx->pc = 0x3889D0u;
            goto label_3889d0;
        }
    }
    ctx->pc = 0x388990u;
label_388990:
    // 0x388990: 0xc0e2552  jal         func_389548
label_388994:
    if (ctx->pc == 0x388994u) {
        ctx->pc = 0x388994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388990u;
        // 0x388994: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388998u;
        goto label_388998;
    }
    ctx->pc = 0x388990u;
    SET_GPR_U32(ctx, 31, 0x388998u);
    ctx->pc = 0x388994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388990u;
    // 0x388994: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x388990u, 0x388998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388998u;
label_388998:
    // 0x388998: 0x1000000d  b           . + 4 + (0xD << 2)
label_38899c:
    if (ctx->pc == 0x38899Cu) {
        ctx->pc = 0x38899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388998u;
        // 0x38899c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889A0u;
        goto label_3889a0;
    }
    ctx->pc = 0x388998u;
    {
        const bool branch_taken_0x388998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388998u;
        // 0x38899c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388998) {
            ctx->pc = 0x3889D0u;
            goto label_3889d0;
        }
    }
    ctx->pc = 0x3889A0u;
label_3889a0:
    // 0x3889a0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3889a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3889a4:
    // 0x3889a4: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x3889a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_3889a8:
    // 0x3889a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3889a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3889ac:
    // 0x3889ac: 0xa082001a  sb          $v0, 0x1A($a0)
    ctx->pc = 0x3889acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
label_3889b0:
    // 0x3889b0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3889b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3889b4:
    // 0x3889b4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x3889b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_3889b8:
    // 0x3889b8: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x3889b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_3889bc:
    // 0x3889bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3889c0:
    if (ctx->pc == 0x3889C0u) {
        ctx->pc = 0x3889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889BCu;
        // 0x3889c0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889C4u;
        goto label_3889c4;
    }
    ctx->pc = 0x3889BCu;
    {
        const bool branch_taken_0x3889bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889BCu;
        // 0x3889c0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889bc) {
            ctx->pc = 0x3889D0u;
            goto label_3889d0;
        }
    }
    ctx->pc = 0x3889C4u;
label_3889c4:
    // 0x3889c4: 0xc0e2552  jal         func_389548
label_3889c8:
    if (ctx->pc == 0x3889C8u) {
        ctx->pc = 0x3889C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889C4u;
        // 0x3889c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889CCu;
        goto label_3889cc;
    }
    ctx->pc = 0x3889C4u;
    SET_GPR_U32(ctx, 31, 0x3889CCu);
    ctx->pc = 0x3889C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3889C4u;
    // 0x3889c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x3889C4u, 0x3889CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3889CCu;
label_3889cc:
    // 0x3889cc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3889ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3889d0:
    // 0x3889d0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x3889d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3889d4:
    // 0x3889d4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3889d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3889d8:
    // 0x3889d8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3889d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3889dc:
    // 0x3889dc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3889dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3889e0:
    // 0x3889e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3889e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3889e4:
    // 0x3889e4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3889e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3889e8:
    // 0x3889e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3889e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3889ec:
    // 0x3889ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3889ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3889f0:
    // 0x3889f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3889f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3889f4:
    // 0x3889f4: 0x3e00008  jr          $ra
label_3889f8:
    if (ctx->pc == 0x3889F8u) {
        ctx->pc = 0x3889F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889F4u;
        // 0x3889f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889FCu;
        goto label_3889fc;
    }
    ctx->pc = 0x3889F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3889F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889F4u;
        // 0x3889f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3889F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3889FCu;
label_3889fc:
    // 0x3889fc: 0x0  nop
    ctx->pc = 0x3889fcu;
    // NOP
    ctx->pc = 0x388a00u;
}
