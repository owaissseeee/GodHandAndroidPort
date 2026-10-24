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

// Function: func_00260B30
// Address: 0x260b30 - 0x262750
void func_00260B30_0x260b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00260B30_0x260b30");
#endif

    switch (ctx->pc) {
        case 0x260cb0u: goto label_260cb0;
        case 0x260cd0u: goto label_260cd0;
        case 0x260ce8u: goto label_260ce8;
        case 0x260df4u: goto label_260df4;
        case 0x260e10u: goto label_260e10;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e48u: goto label_260e48;
        case 0x260e68u: goto label_260e68;
        case 0x260e84u: goto label_260e84;
        case 0x260e90u: goto label_260e90;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ed8u: goto label_260ed8;
        case 0x260ef4u: goto label_260ef4;
        case 0x260f00u: goto label_260f00;
        case 0x260f28u: goto label_260f28;
        case 0x260f48u: goto label_260f48;
        case 0x260f64u: goto label_260f64;
        case 0x260f70u: goto label_260f70;
        case 0x260f98u: goto label_260f98;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fe0u: goto label_260fe0;
        case 0x26100cu: goto label_26100c;
        case 0x26101cu: goto label_26101c;
        case 0x26106cu: goto label_26106c;
        case 0x261088u: goto label_261088;
        case 0x261098u: goto label_261098;
        case 0x2610f4u: goto label_2610f4;
        case 0x261110u: goto label_261110;
        case 0x26111cu: goto label_26111c;
        case 0x26114cu: goto label_26114c;
        case 0x261168u: goto label_261168;
        case 0x261174u: goto label_261174;
        case 0x26119cu: goto label_26119c;
        case 0x2611acu: goto label_2611ac;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611fcu: goto label_2611fc;
        case 0x26120cu: goto label_26120c;
        case 0x26121cu: goto label_26121c;
        case 0x261238u: goto label_261238;
        case 0x261244u: goto label_261244;
        case 0x26127cu: goto label_26127c;
        case 0x261298u: goto label_261298;
        case 0x2612c8u: goto label_2612c8;
        case 0x261308u: goto label_261308;
        case 0x261318u: goto label_261318;
        case 0x26134cu: goto label_26134c;
        case 0x2613dcu: goto label_2613dc;
        case 0x2613f8u: goto label_2613f8;
        case 0x261428u: goto label_261428;
        case 0x261468u: goto label_261468;
        case 0x261478u: goto label_261478;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e8u: goto label_2614e8;
        case 0x261530u: goto label_261530;
        case 0x261550u: goto label_261550;
        case 0x261564u: goto label_261564;
        case 0x261598u: goto label_261598;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615f0u: goto label_2615f0;
        case 0x26160cu: goto label_26160c;
        case 0x261618u: goto label_261618;
        case 0x261660u: goto label_261660;
        case 0x26167cu: goto label_26167c;
        case 0x261688u: goto label_261688;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616f0u: goto label_2616f0;
        case 0x26172cu: goto label_26172c;
        case 0x261748u: goto label_261748;
        case 0x261754u: goto label_261754;
        case 0x26179cu: goto label_26179c;
        case 0x2617e8u: goto label_2617e8;
        case 0x261804u: goto label_261804;
        case 0x261810u: goto label_261810;
        case 0x26185cu: goto label_26185c;
        case 0x261878u: goto label_261878;
        case 0x261884u: goto label_261884;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618fcu: goto label_2618fc;
        case 0x261908u: goto label_261908;
        case 0x26195cu: goto label_26195c;
        case 0x261978u: goto label_261978;
        case 0x261984u: goto label_261984;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619f4u: goto label_2619f4;
        case 0x261a48u: goto label_261a48;
        case 0x261a64u: goto label_261a64;
        case 0x261a70u: goto label_261a70;
        case 0x261ac0u: goto label_261ac0;
        case 0x261adcu: goto label_261adc;
        case 0x261ae8u: goto label_261ae8;
        case 0x261b30u: goto label_261b30;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b58u: goto label_261b58;
        case 0x261b88u: goto label_261b88;
        case 0x261ba4u: goto label_261ba4;
        case 0x261bb0u: goto label_261bb0;
        case 0x261c4cu: goto label_261c4c;
        case 0x261c68u: goto label_261c68;
        case 0x261c78u: goto label_261c78;
        case 0x261cb0u: goto label_261cb0;
        case 0x261cd0u: goto label_261cd0;
        case 0x261ce4u: goto label_261ce4;
        case 0x261cf0u: goto label_261cf0;
        case 0x261d30u: goto label_261d30;
        case 0x261d4cu: goto label_261d4c;
        case 0x261d5cu: goto label_261d5c;
        case 0x261d94u: goto label_261d94;
        case 0x261db0u: goto label_261db0;
        case 0x261dc0u: goto label_261dc0;
        case 0x261de0u: goto label_261de0;
        case 0x261e10u: goto label_261e10;
        case 0x261e2cu: goto label_261e2c;
        case 0x261e3cu: goto label_261e3c;
        case 0x261e64u: goto label_261e64;
        case 0x261e8cu: goto label_261e8c;
        case 0x261ea8u: goto label_261ea8;
        case 0x261eb8u: goto label_261eb8;
        case 0x261f04u: goto label_261f04;
        case 0x261f20u: goto label_261f20;
        case 0x261f30u: goto label_261f30;
        case 0x261f5cu: goto label_261f5c;
        case 0x261f78u: goto label_261f78;
        case 0x261f88u: goto label_261f88;
        case 0x261fd4u: goto label_261fd4;
        case 0x261ff0u: goto label_261ff0;
        case 0x261ffcu: goto label_261ffc;
        case 0x262044u: goto label_262044;
        case 0x262060u: goto label_262060;
        case 0x26206cu: goto label_26206c;
        case 0x26208cu: goto label_26208c;
        case 0x2620b4u: goto label_2620b4;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620dcu: goto label_2620dc;
        case 0x262138u: goto label_262138;
        case 0x262154u: goto label_262154;
        case 0x262160u: goto label_262160;
        case 0x26219cu: goto label_26219c;
        case 0x2621b8u: goto label_2621b8;
        case 0x2621c4u: goto label_2621c4;
        case 0x2621ecu: goto label_2621ec;
        case 0x26222cu: goto label_26222c;
        case 0x262248u: goto label_262248;
        case 0x262254u: goto label_262254;
        case 0x262284u: goto label_262284;
        case 0x2622a0u: goto label_2622a0;
        case 0x2622acu: goto label_2622ac;
        case 0x2622f4u: goto label_2622f4;
        case 0x262334u: goto label_262334;
        case 0x262358u: goto label_262358;
        case 0x262374u: goto label_262374;
        case 0x262380u: goto label_262380;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623c0u: goto label_2623c0;
        case 0x2623e8u: goto label_2623e8;
        case 0x262410u: goto label_262410;
        case 0x262420u: goto label_262420;
        case 0x26243cu: goto label_26243c;
        case 0x262448u: goto label_262448;
        case 0x262468u: goto label_262468;
        case 0x262490u: goto label_262490;
        case 0x2624acu: goto label_2624ac;
        case 0x2624b8u: goto label_2624b8;
        case 0x2624e0u: goto label_2624e0;
        case 0x262500u: goto label_262500;
        case 0x26251cu: goto label_26251c;
        case 0x262528u: goto label_262528;
        case 0x262550u: goto label_262550;
        case 0x262578u: goto label_262578;
        case 0x262594u: goto label_262594;
        case 0x2625a0u: goto label_2625a0;
        case 0x2625c0u: goto label_2625c0;
        case 0x262600u: goto label_262600;
        case 0x26261cu: goto label_26261c;
        case 0x262628u: goto label_262628;
        case 0x262648u: goto label_262648;
        case 0x26266cu: goto label_26266c;
        case 0x262680u: goto label_262680;
        case 0x262690u: goto label_262690;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626f8u: goto label_2626f8;
        case 0x262704u: goto label_262704;
        case 0x262724u: goto label_262724;
        default: break;
    }

    ctx->pc = 0x260b30u;

    // 0x260b30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x260b34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x260b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x260b38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x260b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x260b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260b40: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x260b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x260b44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x260b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x260b48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x260b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x260b4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x260b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x260b50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x260b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x260b54: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x260b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x260b58: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x260b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x260b5c: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x260b5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x260b60: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x260b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x260b64: 0x504006f0  beql        $v0, $zero, . + 4 + (0x6F0 << 2)
    ctx->pc = 0x260B64u;
    {
        const bool branch_taken_0x260b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b64) {
            ctx->pc = 0x260B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B64u;
            // 0x260b68: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x260B6Cu;
    // 0x260b6c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x260b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260b70: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x260b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260b74: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x260b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260b78: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x260b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x260b7c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x260B7Cu;
    {
        const bool branch_taken_0x260b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b7c) {
            ctx->pc = 0x260B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B7Cu;
            // 0x260b80: 0x8e111870  lw          $s1, 0x1870($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260B9Cu;
            goto label_260b9c;
        }
    }
    ctx->pc = 0x260B84u;
    // 0x260b84: 0x8e111884  lw          $s1, 0x1884($s0)
    ctx->pc = 0x260b84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6276)));
    // 0x260b88: 0x8e121888  lw          $s2, 0x1888($s0)
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6280)));
    // 0x260b8c: 0x8e13188c  lw          $s3, 0x188C($s0)
    ctx->pc = 0x260b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6284)));
    // 0x260b90: 0x8e151890  lw          $s5, 0x1890($s0)
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6288)));
    // 0x260b94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x260B94u;
    {
        const bool branch_taken_0x260b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B94u;
        // 0x260b98: 0x86141894  lh          $s4, 0x1894($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b94) {
            ctx->pc = 0x260BACu;
            goto label_260bac;
        }
    }
    ctx->pc = 0x260B9Cu;
label_260b9c:
    // 0x260b9c: 0x8e121874  lw          $s2, 0x1874($s0)
    ctx->pc = 0x260b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6260)));
    // 0x260ba0: 0x8e131878  lw          $s3, 0x1878($s0)
    ctx->pc = 0x260ba0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6264)));
    // 0x260ba4: 0x8e15187c  lw          $s5, 0x187C($s0)
    ctx->pc = 0x260ba4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6268)));
    // 0x260ba8: 0x86141880  lh          $s4, 0x1880($s0)
    ctx->pc = 0x260ba8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6272)));
label_260bac:
    // 0x260bac: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x260bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x260bb0: 0x24030256  addiu       $v1, $zero, 0x256
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x260bb4: 0x3882023b  xori        $v0, $a0, 0x23B
    ctx->pc = 0x260bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)571);
    // 0x260bb8: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x260BB8u;
    {
        const bool branch_taken_0x260bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BB8u;
        // 0x260bbc: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bb8) {
            ctx->pc = 0x260BFCu;
            goto label_260bfc;
        }
    }
    ctx->pc = 0x260BC0u;
    // 0x260bc0: 0x28820257  slti        $v0, $a0, 0x257
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)599) ? 1 : 0);
    // 0x260bc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260BC4u;
    {
        const bool branch_taken_0x260bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BC4u;
        // 0x260bc8: 0x28820252  slti        $v0, $a0, 0x252 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)594) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bc4) {
            ctx->pc = 0x260BE0u;
            goto label_260be0;
        }
    }
    ctx->pc = 0x260BCCu;
    // 0x260bcc: 0x2402027e  addiu       $v0, $zero, 0x27E
    ctx->pc = 0x260bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
    // 0x260bd0: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x260BD0u;
    {
        const bool branch_taken_0x260bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x260bd0) {
            ctx->pc = 0x260BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BD0u;
            // 0x260bd4: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260C00u;
            goto label_260c00;
        }
    }
    ctx->pc = 0x260BD8u;
    // 0x260bd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x260BD8u;
    {
        const bool branch_taken_0x260bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD8u;
        // 0x260bdc: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bd8) {
            ctx->pc = 0x260C20u;
            goto label_260c20;
        }
    }
    ctx->pc = 0x260BE0u;
label_260be0:
    // 0x260be0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x260BE0u;
    {
        const bool branch_taken_0x260be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BE0u;
        // 0x260be4: 0x28820250  slti        $v0, $a0, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260be0) {
            ctx->pc = 0x260C1Cu;
            goto label_260c1c;
        }
    }
    ctx->pc = 0x260BE8u;
    // 0x260be8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x260BE8u;
    {
        const bool branch_taken_0x260be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260be8) {
            ctx->pc = 0x260BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260BE8u;
            // 0x260bec: 0x8e0216ec  lw          $v0, 0x16EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260C20u;
            goto label_260c20;
        }
    }
    ctx->pc = 0x260BF0u;
    // 0x260bf0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x260bf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260BF4u;
    {
        const bool branch_taken_0x260bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BF4u;
        // 0x260bf8: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bf4) {
            ctx->pc = 0x260C08u;
            goto label_260c08;
        }
    }
    ctx->pc = 0x260BFCu;
label_260bfc:
    // 0x260bfc: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x260bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
label_260c00:
    // 0x260c00: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x260c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x260c04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_260c08:
    // 0x260c08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260C08u;
    {
        const bool branch_taken_0x260c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C08u;
        // 0x260c0c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c08) {
            ctx->pc = 0x260C1Cu;
            goto label_260c1c;
        }
    }
    ctx->pc = 0x260C10u;
    // 0x260c10: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x260c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x260c14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x260c18: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x260c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_260c1c:
    // 0x260c1c: 0x8e0216ec  lw          $v0, 0x16EC($s0)
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5868)));
label_260c20:
    // 0x260c20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260C20u;
    {
        const bool branch_taken_0x260c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C20u;
        // 0x260c24: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c20) {
            ctx->pc = 0x260C34u;
            goto label_260c34;
        }
    }
    ctx->pc = 0x260C28u;
    // 0x260c28: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x260c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x260c2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x260c30: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x260c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_260c34:
    // 0x260c34: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x260c34u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260c38: 0x0  nop
    ctx->pc = 0x260c38u;
    // NOP
    // 0x260c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260c40: 0xc601076c  lwc1        $f1, 0x76C($s0)
    ctx->pc = 0x260c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260c44: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x260c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x260c48: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x260c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260c50: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x260c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x260c54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260c54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260c58: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x260c58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x260c5c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x260C5Cu;
    {
        const bool branch_taken_0x260c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c5c) {
            ctx->pc = 0x260C8Cu;
            goto label_260c8c;
        }
    }
    ctx->pc = 0x260C64u;
    // 0x260c64: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x260c64u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260c68: 0x0  nop
    ctx->pc = 0x260c68u;
    // NOP
    // 0x260c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260c70: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x260c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x260c74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x260c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x260c78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260c7c: 0x0  nop
    ctx->pc = 0x260c7cu;
    // NOP
    // 0x260c80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x260c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x260c84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260c88: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x260c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_260c8c:
    // 0x260c8c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x260c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x260c90: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x260c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x260c94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260c9c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260ca0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x260ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x260ca4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x260ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x260ca8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260CA8u;
    SET_GPR_U32(ctx, 31, 0x260CB0u);
    ctx->pc = 0x260CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CA8u;
    // 0x260cac: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260CA8u, 0x260CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CB0u;
label_260cb0:
    // 0x260cb0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x260cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x260cb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x260cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x260cb8: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x260cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x260cbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260cc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x260cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x260cc4: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x260cc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x260cc8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260CC8u;
    SET_GPR_U32(ctx, 31, 0x260CD0u);
    ctx->pc = 0x260CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CC8u;
    // 0x260ccc: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260CC8u, 0x260CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CD0u;
label_260cd0:
    // 0x260cd0: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x260cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x260cd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260cd8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x260cd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x260cdc: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x260cdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x260ce0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260CE0u;
    SET_GPR_U32(ctx, 31, 0x260CE8u);
    ctx->pc = 0x260CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CE0u;
    // 0x260ce4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260CE0u, 0x260CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CE8u;
label_260ce8:
    // 0x260ce8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x260ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x260cec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x260cf0: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x260cf4: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x260cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x260cf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x260cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x260cfc: 0x2cc50006  sltiu       $a1, $a2, 0x6
    ctx->pc = 0x260cfcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x260d00: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x260d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x260d04: 0xa4940044  sh          $s4, 0x44($a0)
    ctx->pc = 0x260d04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x260d08: 0xac950040  sw          $s5, 0x40($a0)
    ctx->pc = 0x260d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 21));
    // 0x260d0c: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x260d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x260d10: 0xa4540044  sh          $s4, 0x44($v0)
    ctx->pc = 0x260d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x260d14: 0xac550040  sw          $s5, 0x40($v0)
    ctx->pc = 0x260d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 21));
    // 0x260d18: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x260d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x260d1c: 0xa4740044  sh          $s4, 0x44($v1)
    ctx->pc = 0x260d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x260d20: 0xac750040  sw          $s5, 0x40($v1)
    ctx->pc = 0x260d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 21));
    // 0x260d24: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260d28: 0xa4540044  sh          $s4, 0x44($v0)
    ctx->pc = 0x260d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x260d2c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x260D2Cu;
    {
        const bool branch_taken_0x260d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D2Cu;
        // 0x260d30: 0xac550040  sw          $s5, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d2c) {
            ctx->pc = 0x260D98u;
            goto label_260d98;
        }
    }
    ctx->pc = 0x260D34u;
    // 0x260d34: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x260d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x260d38: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x260d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x260d3c: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x260d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x260d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260d44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260d48: 0x800008  jr          $a0
    ctx->pc = 0x260D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260D50u: goto label_260d50;
            case 0x260D5Cu: goto label_260d5c;
            case 0x260D68u: goto label_260d68;
            case 0x260D74u: goto label_260d74;
            case 0x260D80u: goto label_260d80;
            case 0x260D8Cu: goto label_260d8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260D48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260D50u;
label_260d50:
    // 0x260d50: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x260D54u;
    {
        const bool branch_taken_0x260d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D54u;
        // 0x260d58: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d54) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D5Cu;
label_260d5c:
    // 0x260d5c: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x260D60u;
    {
        const bool branch_taken_0x260d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D60u;
        // 0x260d64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d60) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D68u;
label_260d68:
    // 0x260d68: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260D6Cu;
    {
        const bool branch_taken_0x260d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D6Cu;
        // 0x260d70: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d6c) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D74u;
label_260d74:
    // 0x260d74: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x260D78u;
    {
        const bool branch_taken_0x260d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D78u;
        // 0x260d7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d78) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D80u;
label_260d80:
    // 0x260d80: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260D84u;
    {
        const bool branch_taken_0x260d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D84u;
        // 0x260d88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d84) {
            ctx->pc = 0x260D94u;
            goto label_260d94;
        }
    }
    ctx->pc = 0x260D8Cu;
label_260d8c:
    // 0x260d8c: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x260d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x260d90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x260d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_260d94:
    // 0x260d94: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x260d94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_260d98:
    // 0x260d98: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x260d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x260d9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x260D9Cu;
    {
        const bool branch_taken_0x260d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D9Cu;
        // 0x260da0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d9c) {
            ctx->pc = 0x260DBCu;
            goto label_260dbc;
        }
    }
    ctx->pc = 0x260DA4u;
    // 0x260da4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x260da8: 0x24423ff0  addiu       $v0, $v0, 0x3FF0
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16368));
    // 0x260dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x260dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260db0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x260db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260db4: 0x800008  jr          $a0
    ctx->pc = 0x260DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260DBCu: goto label_260dbc;
            case 0x260E30u: goto label_260e30;
            case 0x260EA0u: goto label_260ea0;
            case 0x260F10u: goto label_260f10;
            case 0x260F80u: goto label_260f80;
            case 0x260FF0u: goto label_260ff0;
            case 0x261034u: goto label_261034;
            case 0x2610B4u: goto label_2610b4;
            case 0x26112Cu: goto label_26112c;
            case 0x26118Cu: goto label_26118c;
            case 0x2611FCu: goto label_2611fc;
            case 0x26125Cu: goto label_26125c;
            case 0x261354u: goto label_261354;
            case 0x261488u: goto label_261488;
            case 0x261504u: goto label_261504;
            case 0x26156Cu: goto label_26156c;
            case 0x2615D0u: goto label_2615d0;
            case 0x26163Cu: goto label_26163c;
            case 0x2616A4u: goto label_2616a4;
            case 0x26170Cu: goto label_26170c;
            case 0x261770u: goto label_261770;
            case 0x2617ACu: goto label_2617ac;
            case 0x261824u: goto label_261824;
            case 0x2618A0u: goto label_2618a0;
            case 0x261920u: goto label_261920;
            case 0x261994u: goto label_261994;
            case 0x261A0Cu: goto label_261a0c;
            case 0x261A88u: goto label_261a88;
            case 0x261B00u: goto label_261b00;
            case 0x261B68u: goto label_261b68;
            case 0x261BDCu: goto label_261bdc;
            case 0x261BECu: goto label_261bec;
            case 0x261BFCu: goto label_261bfc;
            case 0x261C0Cu: goto label_261c0c;
            case 0x261C1Cu: goto label_261c1c;
            case 0x261C88u: goto label_261c88;
            case 0x261CF8u: goto label_261cf8;
            case 0x261D6Cu: goto label_261d6c;
            case 0x261DE8u: goto label_261de8;
            case 0x261E6Cu: goto label_261e6c;
            case 0x261ED4u: goto label_261ed4;
            case 0x261F44u: goto label_261f44;
            case 0x261F9Cu: goto label_261f9c;
            case 0x26200Cu: goto label_26200c;
            case 0x262094u: goto label_262094;
            case 0x262100u: goto label_262100;
            case 0x26217Cu: goto label_26217c;
            case 0x2621F4u: goto label_2621f4;
            case 0x262264u: goto label_262264;
            case 0x2622C4u: goto label_2622c4;
            case 0x2623B0u: goto label_2623b0;
            case 0x262400u: goto label_262400;
            case 0x262470u: goto label_262470;
            case 0x2624E8u: goto label_2624e8;
            case 0x262558u: goto label_262558;
            case 0x2625C8u: goto label_2625c8;
            case 0x262650u: goto label_262650;
            case 0x262698u: goto label_262698;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x260DBCu;
label_260dbc:
    // 0x260dbc: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x260dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260dc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260dcc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x260dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260dd4: 0x0  nop
    ctx->pc = 0x260dd4u;
    // NOP
    // 0x260dd8: 0x0  nop
    ctx->pc = 0x260dd8u;
    // NOP
    // 0x260ddc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x260ddcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x260de0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260de4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x260de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x260de8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x260de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x260dec: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260DECu;
    SET_GPR_U32(ctx, 31, 0x260DF4u);
    ctx->pc = 0x260DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DECu;
    // 0x260df0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260DECu, 0x260DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DF4u;
label_260df4:
    // 0x260df4: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260dfc: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260e00: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e04: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x260e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x260e08: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x260E08u;
    SET_GPR_U32(ctx, 31, 0x260E10u);
    ctx->pc = 0x260E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E08u;
    // 0x260e0c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260E08u, 0x260E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E10u;
label_260e10:
    // 0x260e10: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e14: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x260E14u;
    SET_GPR_U32(ctx, 31, 0x260E1Cu);
    ctx->pc = 0x260E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E14u;
    // 0x260e18: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x260E14u, 0x260E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E1Cu;
label_260e1c:
    // 0x260e1c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x260e20: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x260e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x260e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e28: 0x10000602  b           . + 4 + (0x602 << 2)
    ctx->pc = 0x260E28u;
    {
        const bool branch_taken_0x260e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E28u;
        // 0x260e2c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e28) {
            ctx->pc = 0x262634u;
            goto label_262634;
        }
    }
    ctx->pc = 0x260E30u;
label_260e30:
    // 0x260e30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260e3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260e40: 0xc098284  jal         func_260A10
    ctx->pc = 0x260E40u;
    SET_GPR_U32(ctx, 31, 0x260E48u);
    ctx->pc = 0x260E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E40u;
    // 0x260e44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x260E40u, 0x260E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E48u;
label_260e48:
    // 0x260e48: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x260e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260e4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e50: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e54: 0x0  nop
    ctx->pc = 0x260e54u;
    // NOP
    // 0x260e58: 0x0  nop
    ctx->pc = 0x260e58u;
    // NOP
    // 0x260e5c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x260e5cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x260e60: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260E60u;
    SET_GPR_U32(ctx, 31, 0x260E68u);
    ctx->pc = 0x260E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E60u;
    // 0x260e64: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260E60u, 0x260E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E68u;
label_260e68:
    // 0x260e68: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260e70: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260e70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260e74: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e78: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x260e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x260e7c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x260E7Cu;
    SET_GPR_U32(ctx, 31, 0x260E84u);
    ctx->pc = 0x260E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E7Cu;
    // 0x260e80: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260E7Cu, 0x260E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E84u;
label_260e84:
    // 0x260e84: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260e88: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x260E88u;
    SET_GPR_U32(ctx, 31, 0x260E90u);
    ctx->pc = 0x260E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E88u;
    // 0x260e8c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x260E88u, 0x260E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E90u;
label_260e90:
    // 0x260e90: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x260e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x260e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260e98: 0x100005c4  b           . + 4 + (0x5C4 << 2)
    ctx->pc = 0x260E98u;
    {
        const bool branch_taken_0x260e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E98u;
        // 0x260e9c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e98) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x260EA0u;
label_260ea0:
    // 0x260ea0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260eac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260eb0: 0xc098284  jal         func_260A10
    ctx->pc = 0x260EB0u;
    SET_GPR_U32(ctx, 31, 0x260EB8u);
    ctx->pc = 0x260EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EB0u;
    // 0x260eb4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x260EB0u, 0x260EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EB8u;
label_260eb8:
    // 0x260eb8: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x260eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260ebc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ec0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260ec4: 0x0  nop
    ctx->pc = 0x260ec4u;
    // NOP
    // 0x260ec8: 0x0  nop
    ctx->pc = 0x260ec8u;
    // NOP
    // 0x260ecc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x260eccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x260ed0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260ED0u;
    SET_GPR_U32(ctx, 31, 0x260ED8u);
    ctx->pc = 0x260ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260ED0u;
    // 0x260ed4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260ED0u, 0x260ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ED8u;
label_260ed8:
    // 0x260ed8: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260ee0: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260ee4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260ee8: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x260ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x260eec: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x260EECu;
    SET_GPR_U32(ctx, 31, 0x260EF4u);
    ctx->pc = 0x260EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EECu;
    // 0x260ef0: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260EECu, 0x260EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EF4u;
label_260ef4:
    // 0x260ef4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260ef8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x260EF8u;
    SET_GPR_U32(ctx, 31, 0x260F00u);
    ctx->pc = 0x260EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EF8u;
    // 0x260efc: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x260EF8u, 0x260F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F00u;
label_260f00:
    // 0x260f00: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x260f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x260f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260f08: 0x100005a8  b           . + 4 + (0x5A8 << 2)
    ctx->pc = 0x260F08u;
    {
        const bool branch_taken_0x260f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F08u;
        // 0x260f0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f08) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x260F10u;
label_260f10:
    // 0x260f10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260f1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260f20: 0xc098284  jal         func_260A10
    ctx->pc = 0x260F20u;
    SET_GPR_U32(ctx, 31, 0x260F28u);
    ctx->pc = 0x260F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F20u;
    // 0x260f24: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x260F20u, 0x260F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F28u;
label_260f28:
    // 0x260f28: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x260f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260f2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f30: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260f34: 0x0  nop
    ctx->pc = 0x260f34u;
    // NOP
    // 0x260f38: 0x0  nop
    ctx->pc = 0x260f38u;
    // NOP
    // 0x260f3c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x260f3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x260f40: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260F40u;
    SET_GPR_U32(ctx, 31, 0x260F48u);
    ctx->pc = 0x260F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F40u;
    // 0x260f44: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260F40u, 0x260F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F48u;
label_260f48:
    // 0x260f48: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260f4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260f50: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260f50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260f54: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260f58: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x260f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x260f5c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x260F5Cu;
    SET_GPR_U32(ctx, 31, 0x260F64u);
    ctx->pc = 0x260F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F5Cu;
    // 0x260f60: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260F5Cu, 0x260F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F64u;
label_260f64:
    // 0x260f64: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260f68: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x260F68u;
    SET_GPR_U32(ctx, 31, 0x260F70u);
    ctx->pc = 0x260F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F68u;
    // 0x260f6c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x260F68u, 0x260F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F70u;
label_260f70:
    // 0x260f70: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x260f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x260f74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260f78: 0x1000058c  b           . + 4 + (0x58C << 2)
    ctx->pc = 0x260F78u;
    {
        const bool branch_taken_0x260f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F78u;
        // 0x260f7c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f78) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x260F80u;
label_260f80:
    // 0x260f80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x260f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260f8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x260f90: 0xc098284  jal         func_260A10
    ctx->pc = 0x260F90u;
    SET_GPR_U32(ctx, 31, 0x260F98u);
    ctx->pc = 0x260F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F90u;
    // 0x260f94: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x260F90u, 0x260F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F98u;
label_260f98:
    // 0x260f98: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x260f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260f9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fa0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260fa4: 0x0  nop
    ctx->pc = 0x260fa4u;
    // NOP
    // 0x260fa8: 0x0  nop
    ctx->pc = 0x260fa8u;
    // NOP
    // 0x260fac: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x260facu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x260fb0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x260FB0u;
    SET_GPR_U32(ctx, 31, 0x260FB8u);
    ctx->pc = 0x260FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FB0u;
    // 0x260fb4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x260FB0u, 0x260FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FB8u;
label_260fb8:
    // 0x260fb8: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260fc0: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260fc4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260fc8: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x260fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x260fcc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x260FCCu;
    SET_GPR_U32(ctx, 31, 0x260FD4u);
    ctx->pc = 0x260FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FCCu;
    // 0x260fd0: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x260FCCu, 0x260FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FD4u;
label_260fd4:
    // 0x260fd4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x260fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260fd8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x260FD8u;
    SET_GPR_U32(ctx, 31, 0x260FE0u);
    ctx->pc = 0x260FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FD8u;
    // 0x260fdc: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x260FD8u, 0x260FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FE0u;
label_260fe0:
    // 0x260fe0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x260fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260fe8: 0x10000570  b           . + 4 + (0x570 << 2)
    ctx->pc = 0x260FE8u;
    {
        const bool branch_taken_0x260fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FE8u;
        // 0x260fec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fe8) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x260FF0u;
label_260ff0:
    // 0x260ff0: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x260ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x260ff4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260ff8: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x260ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x260ffc: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x260ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261000: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261004: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261004u;
    SET_GPR_U32(ctx, 31, 0x26100Cu);
    ctx->pc = 0x261008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261004u;
    // 0x261008: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261004u, 0x26100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26100Cu;
label_26100c:
    // 0x26100c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261010: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261014: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261014u;
    SET_GPR_U32(ctx, 31, 0x26101Cu);
    ctx->pc = 0x261018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261014u;
    // 0x261018: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261014u, 0x26101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26101Cu;
label_26101c:
    // 0x26101c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261028: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26102c: 0x10000543  b           . + 4 + (0x543 << 2)
    ctx->pc = 0x26102Cu;
    {
        const bool branch_taken_0x26102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26102Cu;
        // 0x261030: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26102c) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x261034u;
label_261034:
    // 0x261034: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26103c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26103cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261044: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x261048: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26104c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26104cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261050: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261050u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261054: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261058: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26105c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26105cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261060: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261064: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261064u;
    SET_GPR_U32(ctx, 31, 0x26106Cu);
    ctx->pc = 0x261068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261064u;
    // 0x261068: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261064u, 0x26106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26106Cu;
label_26106c:
    // 0x26106c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261074: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261074u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261078: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26107c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26107cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261080: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261080u;
    SET_GPR_U32(ctx, 31, 0x261088u);
    ctx->pc = 0x261084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261080u;
    // 0x261084: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261080u, 0x261088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261088u;
label_261088:
    // 0x261088: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26108c: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x26108cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261090: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261090u;
    SET_GPR_U32(ctx, 31, 0x261098u);
    ctx->pc = 0x261094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261090u;
    // 0x261094: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261090u, 0x261098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261098u;
label_261098:
    // 0x261098: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26109c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26109cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2610a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2610a4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2610a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2610a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2610ac: 0x100003f5  b           . + 4 + (0x3F5 << 2)
    ctx->pc = 0x2610ACu;
    {
        const bool branch_taken_0x2610ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610ACu;
        // 0x2610b0: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610ac) {
            ctx->pc = 0x262084u;
            goto label_262084;
        }
    }
    ctx->pc = 0x2610B4u;
label_2610b4:
    // 0x2610b4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x2610b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2610b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2610b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2610bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2610c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2610c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2610c4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2610c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2610c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2610c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2610cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2610ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2610d0: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2610d0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2610d4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2610d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2610d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2610d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2610dc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2610dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2610e0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2610e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2610e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2610e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2610e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2610e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2610ec: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2610ECu;
    SET_GPR_U32(ctx, 31, 0x2610F4u);
    ctx->pc = 0x2610F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610ECu;
    // 0x2610f0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2610ECu, 0x2610F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2610F4u;
label_2610f4:
    // 0x2610f4: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2610f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2610f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2610fc: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2610fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261100: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261104: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261108: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261108u;
    SET_GPR_U32(ctx, 31, 0x261110u);
    ctx->pc = 0x26110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261108u;
    // 0x26110c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261108u, 0x261110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261110u;
label_261110:
    // 0x261110: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261114: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261114u;
    SET_GPR_U32(ctx, 31, 0x26111Cu);
    ctx->pc = 0x261118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261114u;
    // 0x261118: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261114u, 0x26111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26111Cu;
label_26111c:
    // 0x26111c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261120: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261124: 0x10000545  b           . + 4 + (0x545 << 2)
    ctx->pc = 0x261124u;
    {
        const bool branch_taken_0x261124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261124u;
        // 0x261128: 0xe7b50010  swc1        $f21, 0x10($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261124) {
            ctx->pc = 0x26263Cu;
            goto label_26263c;
        }
    }
    ctx->pc = 0x26112Cu;
label_26112c:
    // 0x26112c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26112cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261138: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26113c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261140: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261144: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261144u;
    SET_GPR_U32(ctx, 31, 0x26114Cu);
    ctx->pc = 0x261148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261144u;
    // 0x261148: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261144u, 0x26114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26114Cu;
label_26114c:
    // 0x26114c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261154: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261158: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26115c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26115cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261160: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261160u;
    SET_GPR_U32(ctx, 31, 0x261168u);
    ctx->pc = 0x261164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261160u;
    // 0x261164: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261160u, 0x261168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261168u;
label_261168:
    // 0x261168: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26116c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26116Cu;
    SET_GPR_U32(ctx, 31, 0x261174u);
    ctx->pc = 0x261170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26116Cu;
    // 0x261170: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26116Cu, 0x261174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261174u;
label_261174:
    // 0x261174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261178: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26117c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26117cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261184: 0x10000483  b           . + 4 + (0x483 << 2)
    ctx->pc = 0x261184u;
    {
        const bool branch_taken_0x261184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261184u;
        // 0x261188: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261184) {
            ctx->pc = 0x262394u;
            goto label_262394;
        }
    }
    ctx->pc = 0x26118Cu;
label_26118c:
    // 0x26118c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26118cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261194: 0xc098284  jal         func_260A10
    ctx->pc = 0x261194u;
    SET_GPR_U32(ctx, 31, 0x26119Cu);
    ctx->pc = 0x261198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261194u;
    // 0x261198: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x261194u, 0x26119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26119Cu;
label_26119c:
    // 0x26119c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2611a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2611a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611a4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2611A4u;
    SET_GPR_U32(ctx, 31, 0x2611ACu);
    ctx->pc = 0x2611A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611A4u;
    // 0x2611a8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2611A4u, 0x2611ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611ACu;
label_2611ac:
    // 0x2611ac: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2611acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2611b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2611b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2611b4: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2611b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2611b8: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2611bc: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2611bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2611c0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2611C0u;
    SET_GPR_U32(ctx, 31, 0x2611C8u);
    ctx->pc = 0x2611C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611C0u;
    // 0x2611c4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2611C0u, 0x2611C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611C8u;
label_2611c8:
    // 0x2611c8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2611c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2611cc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2611CCu;
    SET_GPR_U32(ctx, 31, 0x2611D4u);
    ctx->pc = 0x2611D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611CCu;
    // 0x2611d0: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2611CCu, 0x2611D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611D4u;
label_2611d4:
    // 0x2611d4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2611d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2611d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2611d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2611dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2611e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2611e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2611e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2611e8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2611ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2611ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2611f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2611f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2611f4: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x2611F4u;
    SET_GPR_U32(ctx, 31, 0x2611FCu);
    ctx->pc = 0x2611F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611F4u;
    // 0x2611f8: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x2611F4u, 0x2611FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611FCu;
label_2611fc:
    // 0x2611fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2611fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261204: 0xc098284  jal         func_260A10
    ctx->pc = 0x261204u;
    SET_GPR_U32(ctx, 31, 0x26120Cu);
    ctx->pc = 0x261208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261204u;
    // 0x261208: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x261204u, 0x26120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26120Cu;
label_26120c:
    // 0x26120c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261214: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261214u;
    SET_GPR_U32(ctx, 31, 0x26121Cu);
    ctx->pc = 0x261218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261214u;
    // 0x261218: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261214u, 0x26121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26121Cu;
label_26121c:
    // 0x26121c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261224: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261228: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26122c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26122cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261230: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261230u;
    SET_GPR_U32(ctx, 31, 0x261238u);
    ctx->pc = 0x261234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261230u;
    // 0x261234: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261230u, 0x261238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261238u;
label_261238:
    // 0x261238: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26123c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26123Cu;
    SET_GPR_U32(ctx, 31, 0x261244u);
    ctx->pc = 0x261240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26123Cu;
    // 0x261240: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26123Cu, 0x261244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261244u;
label_261244:
    // 0x261244: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261248: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26124c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26124cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261254: 0x100004b9  b           . + 4 + (0x4B9 << 2)
    ctx->pc = 0x261254u;
    {
        const bool branch_taken_0x261254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261254u;
        // 0x261258: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261254) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x26125Cu;
label_26125c:
    // 0x26125c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261264: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261268: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26126c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261270: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261274: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261274u;
    SET_GPR_U32(ctx, 31, 0x26127Cu);
    ctx->pc = 0x261278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261274u;
    // 0x261278: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261274u, 0x26127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26127Cu;
label_26127c:
    // 0x26127c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261284: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261284u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261288: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26128c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26128cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261290: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261290u;
    SET_GPR_U32(ctx, 31, 0x261298u);
    ctx->pc = 0x261294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261290u;
    // 0x261294: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261290u, 0x261298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261298u;
label_261298:
    // 0x261298: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x261298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x26129c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x26129cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2612a0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2612A0u;
    {
        const bool branch_taken_0x2612a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2612a0) {
            ctx->pc = 0x2612C0u;
            goto label_2612c0;
        }
    }
    ctx->pc = 0x2612A8u;
    // 0x2612a8: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x2612a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2612ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2612acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2612b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2612b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2612b4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2612b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2612b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2612b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2612bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2612bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2612c0:
    // 0x2612c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2612C0u;
    SET_GPR_U32(ctx, 31, 0x2612C8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2612C0u, 0x2612C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612C8u;
label_2612c8:
    // 0x2612c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2612c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2612cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2612CCu;
    {
        const bool branch_taken_0x2612cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612CCu;
        // 0x2612d0: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612cc) {
            ctx->pc = 0x2612E8u;
            goto label_2612e8;
        }
    }
    ctx->pc = 0x2612D4u;
    // 0x2612d4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2612d8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2612d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2612dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2612dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2612e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2612E0u;
    {
        const bool branch_taken_0x2612e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612E0u;
        // 0x2612e4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612e0) {
            ctx->pc = 0x2612FCu;
            goto label_2612fc;
        }
    }
    ctx->pc = 0x2612E8u;
label_2612e8:
    // 0x2612e8: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2612e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2612ec: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2612ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2612f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2612f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2612f4: 0x0  nop
    ctx->pc = 0x2612f4u;
    // NOP
    // 0x2612f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2612f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2612fc:
    // 0x2612fc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2612fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x261300: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x261300u;
    SET_GPR_U32(ctx, 31, 0x261308u);
    ctx->pc = 0x261304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261300u;
    // 0x261304: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x261300u, 0x261308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261308u;
label_261308:
    // 0x261308: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26130c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261310: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261310u;
    SET_GPR_U32(ctx, 31, 0x261318u);
    ctx->pc = 0x261314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261310u;
    // 0x261314: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261310u, 0x261318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261318u;
label_261318:
    // 0x261318: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x26131c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x26131cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x261320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261324: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261328: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26132c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26132cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261334: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x261334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x261338: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26133c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x261340: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x261340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261344: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x261344u;
    SET_GPR_U32(ctx, 31, 0x26134Cu);
    ctx->pc = 0x261348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261344u;
    // 0x261348: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x261344u, 0x26134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26134Cu;
label_26134c:
    // 0x26134c: 0x100004f6  b           . + 4 + (0x4F6 << 2)
    ctx->pc = 0x26134Cu;
    {
        const bool branch_taken_0x26134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26134Cu;
        // 0x261350: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26134c) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x261354u;
label_261354:
    // 0x261354: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x261354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x261358: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x261358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x26135c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26135cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261360: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x261360u;
    {
        const bool branch_taken_0x261360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261360) {
            ctx->pc = 0x261364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261360u;
            // 0x261364: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x261378u;
            goto label_261378;
        }
    }
    ctx->pc = 0x261368u;
    // 0x261368: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x261368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
    // 0x26136c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26136cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261370: 0x0  nop
    ctx->pc = 0x261370u;
    // NOP
    // 0x261374: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x261374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_261378:
    // 0x261378: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x261378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x26137c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26137cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261384: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x261384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261388: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x261388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26138c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26138Cu;
    {
        const bool branch_taken_0x26138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26138Cu;
        // 0x261390: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26138c) {
            ctx->pc = 0x2613A0u;
            goto label_2613a0;
        }
    }
    ctx->pc = 0x261394u;
    // 0x261394: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x261398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x261398u;
    {
        const bool branch_taken_0x261398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261398u;
        // 0x26139c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261398) {
            ctx->pc = 0x2613A4u;
            goto label_2613a4;
        }
    }
    ctx->pc = 0x2613A0u;
label_2613a0:
    // 0x2613a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2613a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2613a4:
    // 0x2613a4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2613A4u;
    {
        const bool branch_taken_0x2613a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2613a4) {
            ctx->pc = 0x2613A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2613A4u;
            // 0x2613a8: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2613D4u;
            goto label_2613d4;
        }
    }
    ctx->pc = 0x2613ACu;
    // 0x2613ac: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2613b0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2613b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2613b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2613b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2613b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2613bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2613c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2613c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2613c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2613c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2613c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2613c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2613cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2613ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2613d0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2613d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
label_2613d4:
    // 0x2613d4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2613D4u;
    SET_GPR_U32(ctx, 31, 0x2613DCu);
    ctx->pc = 0x2613D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613D4u;
    // 0x2613d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2613D4u, 0x2613DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613DCu;
label_2613dc:
    // 0x2613dc: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2613e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2613e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2613e4: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2613e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2613e8: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2613ec: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2613ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2613f0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2613F0u;
    SET_GPR_U32(ctx, 31, 0x2613F8u);
    ctx->pc = 0x2613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2613F0u;
    // 0x2613f4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2613F0u, 0x2613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2613F8u;
label_2613f8:
    // 0x2613f8: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x2613f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2613fc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2613fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x261400: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261400u;
    {
        const bool branch_taken_0x261400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x261400) {
            ctx->pc = 0x261420u;
            goto label_261420;
        }
    }
    ctx->pc = 0x261408u;
    // 0x261408: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x261408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26140c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x261410: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x261410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261414: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x261414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x261418: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x261418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26141c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_261420:
    // 0x261420: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x261420u;
    SET_GPR_U32(ctx, 31, 0x261428u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x261420u, 0x261428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261428u;
label_261428:
    // 0x261428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x261428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26142c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26142Cu;
    {
        const bool branch_taken_0x26142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26142Cu;
        // 0x261430: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26142c) {
            ctx->pc = 0x261448u;
            goto label_261448;
        }
    }
    ctx->pc = 0x261434u;
    // 0x261434: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x261434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x261438: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x261438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26143c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26143cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261440: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261440u;
    {
        const bool branch_taken_0x261440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261440u;
        // 0x261444: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261440) {
            ctx->pc = 0x26145Cu;
            goto label_26145c;
        }
    }
    ctx->pc = 0x261448u;
label_261448:
    // 0x261448: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x26144c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x26144cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x261450: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261454: 0x0  nop
    ctx->pc = 0x261454u;
    // NOP
    // 0x261458: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26145c:
    // 0x26145c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x26145cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x261460: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x261460u;
    SET_GPR_U32(ctx, 31, 0x261468u);
    ctx->pc = 0x261464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261460u;
    // 0x261464: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x261460u, 0x261468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261468u;
label_261468:
    // 0x261468: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26146c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261470: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261470u;
    SET_GPR_U32(ctx, 31, 0x261478u);
    ctx->pc = 0x261474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261470u;
    // 0x261474: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261470u, 0x261478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261478u;
label_261478:
    // 0x261478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26147c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26147cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261480: 0x100003f4  b           . + 4 + (0x3F4 << 2)
    ctx->pc = 0x261480u;
    {
        const bool branch_taken_0x261480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261480u;
        // 0x261484: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261480) {
            ctx->pc = 0x262454u;
            goto label_262454;
        }
    }
    ctx->pc = 0x261488u;
label_261488:
    // 0x261488: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26148c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261494: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261498: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26149c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26149cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2614a0: 0x0  nop
    ctx->pc = 0x2614a0u;
    // NOP
    // 0x2614a4: 0x0  nop
    ctx->pc = 0x2614a4u;
    // NOP
    // 0x2614a8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2614a8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2614ac: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2614acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2614b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2614b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2614b4: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x2614b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2614b8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2614B8u;
    SET_GPR_U32(ctx, 31, 0x2614C0u);
    ctx->pc = 0x2614BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614B8u;
    // 0x2614bc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2614B8u, 0x2614C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614C0u;
label_2614c0:
    // 0x2614c0: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2614c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2614c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2614c8: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2614c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2614cc: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2614ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2614d0: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2614d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2614d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2614D4u;
    SET_GPR_U32(ctx, 31, 0x2614DCu);
    ctx->pc = 0x2614D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614D4u;
    // 0x2614d8: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2614D4u, 0x2614DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614DCu;
label_2614dc:
    // 0x2614dc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2614dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2614e0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2614E0u;
    SET_GPR_U32(ctx, 31, 0x2614E8u);
    ctx->pc = 0x2614E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614E0u;
    // 0x2614e4: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2614E0u, 0x2614E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614E8u;
label_2614e8:
    // 0x2614e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2614e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2614ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2614ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2614f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2614f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2614f4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2614f8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2614f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2614fc: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x2614FCu;
    {
        const bool branch_taken_0x2614fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614FCu;
        // 0x261500: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614fc) {
            ctx->pc = 0x261DD8u;
            goto label_261dd8;
        }
    }
    ctx->pc = 0x261504u;
label_261504:
    // 0x261504: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x261508: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26150c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26150cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261510: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261514: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26151c: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x261520: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x261520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x261524: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x261524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261528: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261528u;
    SET_GPR_U32(ctx, 31, 0x261530u);
    ctx->pc = 0x26152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261528u;
    // 0x26152c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261528u, 0x261530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261530u;
label_261530:
    // 0x261530: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x261534: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x261538: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x261538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x26153c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26153cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261540: 0xa4530046  sh          $s3, 0x46($v0)
    ctx->pc = 0x261540u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261544: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x261548: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x261548u;
    SET_GPR_U32(ctx, 31, 0x261550u);
    ctx->pc = 0x26154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261548u;
    // 0x26154c: 0x8e05067c  lw          $a1, 0x67C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x261548u, 0x261550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261550u;
label_261550:
    // 0x261550: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x261550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x261554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261558: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x261558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x26155c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x26155Cu;
    SET_GPR_U32(ctx, 31, 0x261564u);
    ctx->pc = 0x261560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26155Cu;
    // 0x261560: 0x8e040678  lw          $a0, 0x678($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x26155Cu, 0x261564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261564u;
label_261564:
    // 0x261564: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x261564u;
    {
        const bool branch_taken_0x261564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261564u;
        // 0x261568: 0x8e040678  lw          $a0, 0x678($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261564) {
            ctx->pc = 0x261CE8u;
            goto label_261ce8;
        }
    }
    ctx->pc = 0x26156Cu;
label_26156c:
    // 0x26156c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26156cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x261570: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x261574: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26157c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x26157cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261584: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x261588: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x261588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26158c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26158cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261590: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261590u;
    SET_GPR_U32(ctx, 31, 0x261598u);
    ctx->pc = 0x261594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261590u;
    // 0x261594: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261590u, 0x261598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261598u;
label_261598:
    // 0x261598: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x261598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x26159c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26159cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2615a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2615a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2615a4: 0xa4530046  sh          $s3, 0x46($v0)
    ctx->pc = 0x2615a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2615a8: 0x8e040678  lw          $a0, 0x678($s0)
    ctx->pc = 0x2615a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x2615ac: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x2615ACu;
    SET_GPR_U32(ctx, 31, 0x2615B4u);
    ctx->pc = 0x2615B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615ACu;
    // 0x2615b0: 0x8e05067c  lw          $a1, 0x67C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x2615ACu, 0x2615B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615B4u;
label_2615b4:
    // 0x2615b4: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x2615b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x2615b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2615b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2615bc: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2615bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2615c0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2615C0u;
    SET_GPR_U32(ctx, 31, 0x2615C8u);
    ctx->pc = 0x2615C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615C0u;
    // 0x2615c4: 0x8e040678  lw          $a0, 0x678($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2615C0u, 0x2615C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615C8u;
label_2615c8:
    // 0x2615c8: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2615C8u;
    {
        const bool branch_taken_0x2615c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615C8u;
        // 0x2615cc: 0x8e040678  lw          $a0, 0x678($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615c8) {
            ctx->pc = 0x261CE8u;
            goto label_261ce8;
        }
    }
    ctx->pc = 0x2615D0u;
label_2615d0:
    // 0x2615d0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2615d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2615d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2615d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2615d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2615dc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2615dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2615e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2615e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2615e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2615e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2615e8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2615E8u;
    SET_GPR_U32(ctx, 31, 0x2615F0u);
    ctx->pc = 0x2615ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615E8u;
    // 0x2615ec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2615E8u, 0x2615F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615F0u;
label_2615f0:
    // 0x2615f0: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2615f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2615f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2615f8: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2615f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2615fc: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261600: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261604: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261604u;
    SET_GPR_U32(ctx, 31, 0x26160Cu);
    ctx->pc = 0x261608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261604u;
    // 0x261608: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261604u, 0x26160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26160Cu;
label_26160c:
    // 0x26160c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261610: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261610u;
    SET_GPR_U32(ctx, 31, 0x261618u);
    ctx->pc = 0x261614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261610u;
    // 0x261614: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261610u, 0x261618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261618u;
label_261618:
    // 0x261618: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26161c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26161cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261620: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261624: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x261624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x261628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26162c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261630: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x261630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261634: 0x100003c4  b           . + 4 + (0x3C4 << 2)
    ctx->pc = 0x261634u;
    {
        const bool branch_taken_0x261634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261634u;
        // 0x261638: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261634) {
            ctx->pc = 0x262548u;
            goto label_262548;
        }
    }
    ctx->pc = 0x26163Cu;
label_26163c:
    // 0x26163c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x26163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x261640: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x261640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x261644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26164c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261650: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261654: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261658: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261658u;
    SET_GPR_U32(ctx, 31, 0x261660u);
    ctx->pc = 0x26165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261658u;
    // 0x26165c: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261658u, 0x261660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261660u;
label_261660:
    // 0x261660: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261664: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261668: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261668u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x26166c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x26166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261670: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261674: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261674u;
    SET_GPR_U32(ctx, 31, 0x26167Cu);
    ctx->pc = 0x261678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261674u;
    // 0x261678: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261674u, 0x26167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26167Cu;
label_26167c:
    // 0x26167c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261680: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261680u;
    SET_GPR_U32(ctx, 31, 0x261688u);
    ctx->pc = 0x261684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261680u;
    // 0x261684: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261680u, 0x261688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261688u;
label_261688:
    // 0x261688: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26168c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26168cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261690: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261694: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261698: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26169c: 0x100003c6  b           . + 4 + (0x3C6 << 2)
    ctx->pc = 0x26169Cu;
    {
        const bool branch_taken_0x26169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26169Cu;
        // 0x2616a0: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26169c) {
            ctx->pc = 0x2625B8u;
            goto label_2625b8;
        }
    }
    ctx->pc = 0x2616A4u;
label_2616a4:
    // 0x2616a4: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2616a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x2616a8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2616a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2616ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2616acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2616b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2616b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616b4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2616b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2616b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2616bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2616bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2616c0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2616C0u;
    SET_GPR_U32(ctx, 31, 0x2616C8u);
    ctx->pc = 0x2616C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616C0u;
    // 0x2616c4: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2616C0u, 0x2616C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616C8u;
label_2616c8:
    // 0x2616c8: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2616c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2616cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2616ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2616d0: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2616d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2616d4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2616d8: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2616d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2616dc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2616DCu;
    SET_GPR_U32(ctx, 31, 0x2616E4u);
    ctx->pc = 0x2616E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616DCu;
    // 0x2616e0: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2616DCu, 0x2616E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616E4u;
label_2616e4:
    // 0x2616e4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2616e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2616e8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2616E8u;
    SET_GPR_U32(ctx, 31, 0x2616F0u);
    ctx->pc = 0x2616ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616E8u;
    // 0x2616ec: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2616E8u, 0x2616F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616F0u;
label_2616f0:
    // 0x2616f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2616f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2616f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2616f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2616f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2616f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2616fc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2616fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261700: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261704: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x261704u;
    {
        const bool branch_taken_0x261704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261704u;
        // 0x261708: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261704) {
            ctx->pc = 0x2625B8u;
            goto label_2625b8;
        }
    }
    ctx->pc = 0x26170Cu;
label_26170c:
    // 0x26170c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x261710: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261718: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26171c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26171cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261720: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261724: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261724u;
    SET_GPR_U32(ctx, 31, 0x26172Cu);
    ctx->pc = 0x261728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261724u;
    // 0x261728: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261724u, 0x26172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26172Cu;
label_26172c:
    // 0x26172c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261734: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261734u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261738: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26173c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26173cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261740: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261740u;
    SET_GPR_U32(ctx, 31, 0x261748u);
    ctx->pc = 0x261744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261740u;
    // 0x261744: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261740u, 0x261748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261748u;
label_261748:
    // 0x261748: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26174c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26174Cu;
    SET_GPR_U32(ctx, 31, 0x261754u);
    ctx->pc = 0x261750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26174Cu;
    // 0x261750: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26174Cu, 0x261754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261754u;
label_261754:
    // 0x261754: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26175c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261760: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261764: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261768: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x261768u;
    {
        const bool branch_taken_0x261768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261768u;
        // 0x26176c: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261768) {
            ctx->pc = 0x262084u;
            goto label_262084;
        }
    }
    ctx->pc = 0x261770u;
label_261770:
    // 0x261770: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x261770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x261774: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x261778: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26177c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26177cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261780: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x261780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261788: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x261788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x26178c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26178cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x261790: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x261790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261794: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261794u;
    SET_GPR_U32(ctx, 31, 0x26179Cu);
    ctx->pc = 0x261798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261794u;
    // 0x261798: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261794u, 0x26179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26179Cu;
label_26179c:
    // 0x26179c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2617a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2617a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2617a4: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2617A4u;
    {
        const bool branch_taken_0x2617a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2617A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617A4u;
        // 0x2617a8: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617a4) {
            ctx->pc = 0x261CC0u;
            goto label_261cc0;
        }
    }
    ctx->pc = 0x2617ACu;
label_2617ac:
    // 0x2617ac: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x2617acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2617b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2617b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2617b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2617b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2617b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2617bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2617bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2617c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2617c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2617c4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2617c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2617c8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2617c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2617cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2617ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2617d0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2617d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2617d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2617d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2617d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2617d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2617dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2617dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2617e0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2617E0u;
    SET_GPR_U32(ctx, 31, 0x2617E8u);
    ctx->pc = 0x2617E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617E0u;
    // 0x2617e4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2617E0u, 0x2617E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617E8u;
label_2617e8:
    // 0x2617e8: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2617e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2617ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2617ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2617f0: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2617f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2617f4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2617f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2617f8: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2617f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2617fc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2617FCu;
    SET_GPR_U32(ctx, 31, 0x261804u);
    ctx->pc = 0x261800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617FCu;
    // 0x261800: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2617FCu, 0x261804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261804u;
label_261804:
    // 0x261804: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261808: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261808u;
    SET_GPR_U32(ctx, 31, 0x261810u);
    ctx->pc = 0x26180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261808u;
    // 0x26180c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261808u, 0x261810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261810u;
label_261810:
    // 0x261810: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x261814: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x261818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26181c: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x26181Cu;
    {
        const bool branch_taken_0x26181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26181Cu;
        // 0x261820: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26181c) {
            ctx->pc = 0x2621D0u;
            goto label_2621d0;
        }
    }
    ctx->pc = 0x261824u;
label_261824:
    // 0x261824: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x261824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261828: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26182c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261834: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x261834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x261838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26183c: 0x0  nop
    ctx->pc = 0x26183cu;
    // NOP
    // 0x261840: 0x0  nop
    ctx->pc = 0x261840u;
    // NOP
    // 0x261844: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x261844u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x261848: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26184c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26184cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261850: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261854: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261854u;
    SET_GPR_U32(ctx, 31, 0x26185Cu);
    ctx->pc = 0x261858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261854u;
    // 0x261858: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261854u, 0x26185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26185Cu;
label_26185c:
    // 0x26185c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261864: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261864u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261868: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26186c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26186cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261870: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261870u;
    SET_GPR_U32(ctx, 31, 0x261878u);
    ctx->pc = 0x261874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261870u;
    // 0x261874: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261870u, 0x261878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261878u;
label_261878:
    // 0x261878: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26187c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26187Cu;
    SET_GPR_U32(ctx, 31, 0x261884u);
    ctx->pc = 0x261880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26187Cu;
    // 0x261880: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26187Cu, 0x261884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261884u;
label_261884:
    // 0x261884: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26188c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26188cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x261890: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x261890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x261894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261898: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x261898u;
    {
        const bool branch_taken_0x261898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261898u;
        // 0x26189c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261898) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x2618A0u;
label_2618a0:
    // 0x2618a0: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x2618a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2618a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2618a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2618a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2618a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2618ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2618acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2618b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2618b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2618b4: 0x0  nop
    ctx->pc = 0x2618b4u;
    // NOP
    // 0x2618b8: 0x0  nop
    ctx->pc = 0x2618b8u;
    // NOP
    // 0x2618bc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2618bcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2618c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2618c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2618c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2618c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2618c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2618c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2618cc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2618ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2618d0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2618d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2618d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2618d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2618d8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2618D8u;
    SET_GPR_U32(ctx, 31, 0x2618E0u);
    ctx->pc = 0x2618DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618D8u;
    // 0x2618dc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2618D8u, 0x2618E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618E0u;
label_2618e0:
    // 0x2618e0: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2618e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2618e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2618e8: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2618e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2618ec: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2618ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2618f0: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2618f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2618f4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2618F4u;
    SET_GPR_U32(ctx, 31, 0x2618FCu);
    ctx->pc = 0x2618F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618F4u;
    // 0x2618f8: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2618F4u, 0x2618FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618FCu;
label_2618fc:
    // 0x2618fc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2618fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261900: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261900u;
    SET_GPR_U32(ctx, 31, 0x261908u);
    ctx->pc = 0x261904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261900u;
    // 0x261904: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261900u, 0x261908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261908u;
label_261908:
    // 0x261908: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26190c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26190cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261910: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261918: 0x1000029e  b           . + 4 + (0x29E << 2)
    ctx->pc = 0x261918u;
    {
        const bool branch_taken_0x261918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261918u;
        // 0x26191c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261918) {
            ctx->pc = 0x262394u;
            goto label_262394;
        }
    }
    ctx->pc = 0x261920u;
label_261920:
    // 0x261920: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x261920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x261924: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26192c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26192cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261930: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261938: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x261938u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x26193c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26193cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261944: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261948: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x261948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26194c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26194cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261950: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x261950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x261954: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261954u;
    SET_GPR_U32(ctx, 31, 0x26195Cu);
    ctx->pc = 0x261958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261954u;
    // 0x261958: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261954u, 0x26195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26195Cu;
label_26195c:
    // 0x26195c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261960: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261964: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261968: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26196c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26196cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261970: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261970u;
    SET_GPR_U32(ctx, 31, 0x261978u);
    ctx->pc = 0x261974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261970u;
    // 0x261974: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261970u, 0x261978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261978u;
label_261978:
    // 0x261978: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26197c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26197Cu;
    SET_GPR_U32(ctx, 31, 0x261984u);
    ctx->pc = 0x261980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26197Cu;
    // 0x261980: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26197Cu, 0x261984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261984u;
label_261984:
    // 0x261984: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x261984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x261988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26198c: 0x10000307  b           . + 4 + (0x307 << 2)
    ctx->pc = 0x26198Cu;
    {
        const bool branch_taken_0x26198c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26198Cu;
        // 0x261990: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26198c) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x261994u;
label_261994:
    // 0x261994: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26199c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2619a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2619a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2619a4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2619a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2619a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2619a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2619ac: 0x0  nop
    ctx->pc = 0x2619acu;
    // NOP
    // 0x2619b0: 0x0  nop
    ctx->pc = 0x2619b0u;
    // NOP
    // 0x2619b4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2619b4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2619b8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2619b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2619bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2619bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2619c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2619c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2619c4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2619C4u;
    SET_GPR_U32(ctx, 31, 0x2619CCu);
    ctx->pc = 0x2619C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619C4u;
    // 0x2619c8: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2619C4u, 0x2619CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619CCu;
label_2619cc:
    // 0x2619cc: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2619ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2619d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2619d4: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2619d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2619d8: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2619dc: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2619dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2619e0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2619E0u;
    SET_GPR_U32(ctx, 31, 0x2619E8u);
    ctx->pc = 0x2619E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619E0u;
    // 0x2619e4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2619E0u, 0x2619E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619E8u;
label_2619e8:
    // 0x2619e8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2619e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2619ec: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2619ECu;
    SET_GPR_U32(ctx, 31, 0x2619F4u);
    ctx->pc = 0x2619F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619ECu;
    // 0x2619f0: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2619ECu, 0x2619F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619F4u;
label_2619f4:
    // 0x2619f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2619f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2619f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2619f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2619fc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2619fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x261a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261a04: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x261A04u;
    {
        const bool branch_taken_0x261a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A04u;
        // 0x261a08: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a04) {
            ctx->pc = 0x2621D8u;
            goto label_2621d8;
        }
    }
    ctx->pc = 0x261A0Cu;
label_261a0c:
    // 0x261a0c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261a10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261a20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x261a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x261a24: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261a24u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261a28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261a2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261a30: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261a34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x261a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261a38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261a3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x261a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x261a40: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261A40u;
    SET_GPR_U32(ctx, 31, 0x261A48u);
    ctx->pc = 0x261A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A40u;
    // 0x261a44: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261A40u, 0x261A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A48u;
label_261a48:
    // 0x261a48: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261a50: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261a50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261a54: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261a58: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261a5c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261A5Cu;
    SET_GPR_U32(ctx, 31, 0x261A64u);
    ctx->pc = 0x261A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A5Cu;
    // 0x261a60: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261A5Cu, 0x261A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A64u;
label_261a64:
    // 0x261a64: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261a68: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261A68u;
    SET_GPR_U32(ctx, 31, 0x261A70u);
    ctx->pc = 0x261A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A68u;
    // 0x261a6c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261A68u, 0x261A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A70u;
label_261a70:
    // 0x261a70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261a78: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x261a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261a80: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x261A80u;
    {
        const bool branch_taken_0x261a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A80u;
        // 0x261a84: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a80) {
            ctx->pc = 0x2621D8u;
            goto label_2621d8;
        }
    }
    ctx->pc = 0x261A88u;
label_261a88:
    // 0x261a88: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261a8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261a94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261a98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261a9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261aa0: 0x0  nop
    ctx->pc = 0x261aa0u;
    // NOP
    // 0x261aa4: 0x0  nop
    ctx->pc = 0x261aa4u;
    // NOP
    // 0x261aa8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261aa8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261aac: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ab0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x261ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261ab4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261ab8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261AB8u;
    SET_GPR_U32(ctx, 31, 0x261AC0u);
    ctx->pc = 0x261ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AB8u;
    // 0x261abc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261AB8u, 0x261AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AC0u;
label_261ac0:
    // 0x261ac0: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261ac8: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261acc: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ad0: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261ad4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261AD4u;
    SET_GPR_U32(ctx, 31, 0x261ADCu);
    ctx->pc = 0x261AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AD4u;
    // 0x261ad8: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261AD4u, 0x261ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ae0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261AE0u;
    SET_GPR_U32(ctx, 31, 0x261AE8u);
    ctx->pc = 0x261AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AE0u;
    // 0x261ae4: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261AE0u, 0x261AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AE8u;
label_261ae8:
    // 0x261ae8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261aec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261af0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x261af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x261af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261af8: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x261AF8u;
    {
        const bool branch_taken_0x261af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AF8u;
        // 0x261afc: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261af8) {
            ctx->pc = 0x2621D8u;
            goto label_2621d8;
        }
    }
    ctx->pc = 0x261B00u;
label_261b00:
    // 0x261b00: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261b04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261b0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261b10: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b14: 0x0  nop
    ctx->pc = 0x261b14u;
    // NOP
    // 0x261b18: 0x0  nop
    ctx->pc = 0x261b18u;
    // NOP
    // 0x261b1c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261b1cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261b20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261b24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x261b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261b28: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261B28u;
    SET_GPR_U32(ctx, 31, 0x261B30u);
    ctx->pc = 0x261B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B28u;
    // 0x261b2c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261B28u, 0x261B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B30u;
label_261b30:
    // 0x261b30: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261b38: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261b38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261b3c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b40: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261b44: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261B44u;
    SET_GPR_U32(ctx, 31, 0x261B4Cu);
    ctx->pc = 0x261B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B44u;
    // 0x261b48: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261B44u, 0x261B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B4Cu;
label_261b4c:
    // 0x261b4c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b50: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261B50u;
    SET_GPR_U32(ctx, 31, 0x261B58u);
    ctx->pc = 0x261B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B50u;
    // 0x261b54: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261B50u, 0x261B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B58u;
label_261b58:
    // 0x261b58: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x261b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x261b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261b60: 0x10000292  b           . + 4 + (0x292 << 2)
    ctx->pc = 0x261B60u;
    {
        const bool branch_taken_0x261b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B60u;
        // 0x261b64: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b60) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x261B68u;
label_261b68:
    // 0x261b68: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261b6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261b70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b74: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x261b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261b7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261b80: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261B80u;
    SET_GPR_U32(ctx, 31, 0x261B88u);
    ctx->pc = 0x261B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B80u;
    // 0x261b84: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261B80u, 0x261B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B88u;
label_261b88:
    // 0x261b88: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261b90: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261b90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261b94: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261b98: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261b9c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261B9Cu;
    SET_GPR_U32(ctx, 31, 0x261BA4u);
    ctx->pc = 0x261BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B9Cu;
    // 0x261ba0: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261B9Cu, 0x261BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BA4u;
label_261ba4:
    // 0x261ba4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ba8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261BA8u;
    SET_GPR_U32(ctx, 31, 0x261BB0u);
    ctx->pc = 0x261BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BA8u;
    // 0x261bac: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261BA8u, 0x261BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BB0u;
label_261bb0:
    // 0x261bb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261bb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x261bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x261bb8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261bbc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261bc4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x261bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261bcc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261bd0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x261bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x261bd4: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x261BD4u;
    {
        const bool branch_taken_0x261bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BD4u;
        // 0x261bd8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bd4) {
            ctx->pc = 0x2621E4u;
            goto label_2621e4;
        }
    }
    ctx->pc = 0x261BDCu;
label_261bdc:
    // 0x261bdc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261be0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261be4: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x261BE4u;
    {
        const bool branch_taken_0x261be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BE4u;
        // 0x261be8: 0x8e020680  lw          $v0, 0x680($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261be4) {
            ctx->pc = 0x26265Cu;
            goto label_26265c;
        }
    }
    ctx->pc = 0x261BECu;
label_261bec:
    // 0x261bec: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261bf4: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x261BF4u;
    {
        const bool branch_taken_0x261bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BF4u;
        // 0x261bf8: 0x8e020680  lw          $v0, 0x680($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bf4) {
            ctx->pc = 0x26265Cu;
            goto label_26265c;
        }
    }
    ctx->pc = 0x261BFCu;
label_261bfc:
    // 0x261bfc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x261bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x261c00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261c04: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x261C04u;
    {
        const bool branch_taken_0x261c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C04u;
        // 0x261c08: 0x8e020680  lw          $v0, 0x680($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c04) {
            ctx->pc = 0x26265Cu;
            goto label_26265c;
        }
    }
    ctx->pc = 0x261C0Cu;
label_261c0c:
    // 0x261c0c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261c14: 0x10000291  b           . + 4 + (0x291 << 2)
    ctx->pc = 0x261C14u;
    {
        const bool branch_taken_0x261c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C14u;
        // 0x261c18: 0x8e020680  lw          $v0, 0x680($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c14) {
            ctx->pc = 0x26265Cu;
            goto label_26265c;
        }
    }
    ctx->pc = 0x261C1Cu;
label_261c1c:
    // 0x261c1c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261c20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261c28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261c2c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261c30: 0x0  nop
    ctx->pc = 0x261c30u;
    // NOP
    // 0x261c34: 0x0  nop
    ctx->pc = 0x261c34u;
    // NOP
    // 0x261c38: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261c38u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261c3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261c40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x261c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261c44: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261C44u;
    SET_GPR_U32(ctx, 31, 0x261C4Cu);
    ctx->pc = 0x261C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C44u;
    // 0x261c48: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261C44u, 0x261C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C4Cu;
label_261c4c:
    // 0x261c4c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261c54: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261c54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261c58: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261c5c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261c60: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261C60u;
    SET_GPR_U32(ctx, 31, 0x261C68u);
    ctx->pc = 0x261C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C60u;
    // 0x261c64: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261C60u, 0x261C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C68u;
label_261c68:
    // 0x261c68: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261c6c: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261c70: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261C70u;
    SET_GPR_U32(ctx, 31, 0x261C78u);
    ctx->pc = 0x261C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C70u;
    // 0x261c74: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261C70u, 0x261C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C78u;
label_261c78:
    // 0x261c78: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261c80: 0x1000024a  b           . + 4 + (0x24A << 2)
    ctx->pc = 0x261C80u;
    {
        const bool branch_taken_0x261c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C80u;
        // 0x261c84: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c80) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x261C88u;
label_261c88:
    // 0x261c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261c90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x261c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x261c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261c9c: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x261c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x261ca0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x261ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x261ca4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x261ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261ca8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261CA8u;
    SET_GPR_U32(ctx, 31, 0x261CB0u);
    ctx->pc = 0x261CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CA8u;
    // 0x261cac: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261CA8u, 0x261CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CB0u;
label_261cb0:
    // 0x261cb0: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x261cb4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x261cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x261cb8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x261cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x261cbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261cc0:
    // 0x261cc0: 0xa4530046  sh          $s3, 0x46($v0)
    ctx->pc = 0x261cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261cc4: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x261cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x261cc8: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x261CC8u;
    SET_GPR_U32(ctx, 31, 0x261CD0u);
    ctx->pc = 0x261CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CC8u;
    // 0x261ccc: 0x8e050674  lw          $a1, 0x674($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x261CC8u, 0x261CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CD0u;
label_261cd0:
    // 0x261cd0: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x261cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x261cd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261cd8: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261cdc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261CDCu;
    SET_GPR_U32(ctx, 31, 0x261CE4u);
    ctx->pc = 0x261CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CDCu;
    // 0x261ce0: 0x8e040670  lw          $a0, 0x670($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261CDCu, 0x261CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CE4u;
label_261ce4:
    // 0x261ce4: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_261ce8:
    // 0x261ce8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261CE8u;
    SET_GPR_U32(ctx, 31, 0x261CF0u);
    ctx->pc = 0x261CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261CE8u;
    // 0x261cec: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261CE8u, 0x261CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261CF0u;
label_261cf0:
    // 0x261cf0: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x261CF0u;
    {
        const bool branch_taken_0x261cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CF0u;
        // 0x261cf4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261cf0) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x261CF8u;
label_261cf8:
    // 0x261cf8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x261cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261cfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261d04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261d08: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x261d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x261d0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x261d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x261d10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261d14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x261d14u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x261d18: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261d20: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x261d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261d24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x261d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x261d28: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261D28u;
    SET_GPR_U32(ctx, 31, 0x261D30u);
    ctx->pc = 0x261D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D28u;
    // 0x261d2c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261D28u, 0x261D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D30u;
label_261d30:
    // 0x261d30: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261d38: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261d38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261d3c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d40: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261d44: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261D44u;
    SET_GPR_U32(ctx, 31, 0x261D4Cu);
    ctx->pc = 0x261D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D44u;
    // 0x261d48: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261D44u, 0x261D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D4Cu;
label_261d4c:
    // 0x261d4c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d50: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261d54: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261D54u;
    SET_GPR_U32(ctx, 31, 0x261D5Cu);
    ctx->pc = 0x261D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D54u;
    // 0x261d58: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261D54u, 0x261D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D5Cu;
label_261d5c:
    // 0x261d5c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261d64: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x261D64u;
    {
        const bool branch_taken_0x261d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D64u;
        // 0x261d68: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d64) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x261D6Cu;
label_261d6c:
    // 0x261d6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261d70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261d74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261d7c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x261d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x261d80: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x261d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x261d88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261d8c: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261D8Cu;
    SET_GPR_U32(ctx, 31, 0x261D94u);
    ctx->pc = 0x261D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261D8Cu;
    // 0x261d90: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261D8Cu, 0x261D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261D94u;
label_261d94:
    // 0x261d94: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261d98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261d9c: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261da0: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261da4: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261da8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261DA8u;
    SET_GPR_U32(ctx, 31, 0x261DB0u);
    ctx->pc = 0x261DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DA8u;
    // 0x261dac: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261DA8u, 0x261DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DB0u;
label_261db0:
    // 0x261db0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261db4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261db8: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261DB8u;
    SET_GPR_U32(ctx, 31, 0x261DC0u);
    ctx->pc = 0x261DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DB8u;
    // 0x261dbc: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261DB8u, 0x261DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DC0u;
label_261dc0:
    // 0x261dc0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261dc8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261dcc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261dd0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x261dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x261dd4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_261dd8:
    // 0x261dd8: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x261DD8u;
    SET_GPR_U32(ctx, 31, 0x261DE0u);
    ctx->pc = 0x261DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261DD8u;
    // 0x261ddc: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x261DD8u, 0x261DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261DE0u;
label_261de0:
    // 0x261de0: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x261DE0u;
    {
        const bool branch_taken_0x261de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DE0u;
        // 0x261de4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261de0) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x261DE8u;
label_261de8:
    // 0x261de8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x261de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x261dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261df0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261df4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261df8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261dfc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x261e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x261e04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261e08: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261E08u;
    SET_GPR_U32(ctx, 31, 0x261E10u);
    ctx->pc = 0x261E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E08u;
    // 0x261e0c: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261E08u, 0x261E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E10u;
label_261e10:
    // 0x261e10: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261e18: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261e18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261e1c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e20: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261e24: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261E24u;
    SET_GPR_U32(ctx, 31, 0x261E2Cu);
    ctx->pc = 0x261E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E24u;
    // 0x261e28: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261E24u, 0x261E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E2Cu;
label_261e2c:
    // 0x261e2c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e30: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261e34: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261E34u;
    SET_GPR_U32(ctx, 31, 0x261E3Cu);
    ctx->pc = 0x261E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E34u;
    // 0x261e38: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261E34u, 0x261E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E3Cu;
label_261e3c:
    // 0x261e3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261e40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261e44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261e48: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261e4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261e50: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e54: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x261e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x261e58: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261e5c: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x261E5Cu;
    SET_GPR_U32(ctx, 31, 0x261E64u);
    ctx->pc = 0x261E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E5Cu;
    // 0x261e60: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x261E5Cu, 0x261E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E64u;
label_261e64:
    // 0x261e64: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x261E64u;
    {
        const bool branch_taken_0x261e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E64u;
        // 0x261e68: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e64) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x261E6Cu;
label_261e6c:
    // 0x261e6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261e70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261e74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e78: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261e80: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261e84: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261E84u;
    SET_GPR_U32(ctx, 31, 0x261E8Cu);
    ctx->pc = 0x261E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261E84u;
    // 0x261e88: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261E84u, 0x261E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E8Cu;
label_261e8c:
    // 0x261e8c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261e94: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261e94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261e98: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261e9c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261ea0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261EA0u;
    SET_GPR_U32(ctx, 31, 0x261EA8u);
    ctx->pc = 0x261EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EA0u;
    // 0x261ea4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261EA0u, 0x261EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EA8u;
label_261ea8:
    // 0x261ea8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261eac: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261eb0: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261EB0u;
    SET_GPR_U32(ctx, 31, 0x261EB8u);
    ctx->pc = 0x261EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EB0u;
    // 0x261eb4: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261EB0u, 0x261EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261EB8u;
label_261eb8:
    // 0x261eb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x261eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x261ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261ec0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x261ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x261ec4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ec8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x261ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x261ecc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x261ECCu;
    {
        const bool branch_taken_0x261ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ECCu;
        // 0x261ed0: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ecc) {
            ctx->pc = 0x262084u;
            goto label_262084;
        }
    }
    ctx->pc = 0x261ED4u;
label_261ed4:
    // 0x261ed4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ed8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261ee0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261ee4: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ee8: 0x0  nop
    ctx->pc = 0x261ee8u;
    // NOP
    // 0x261eec: 0x0  nop
    ctx->pc = 0x261eecu;
    // NOP
    // 0x261ef0: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261ef0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261ef4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261ef8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x261ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x261efc: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261EFCu;
    SET_GPR_U32(ctx, 31, 0x261F04u);
    ctx->pc = 0x261F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261EFCu;
    // 0x261f00: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261EFCu, 0x261F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F04u;
label_261f04:
    // 0x261f04: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261f0c: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261f10: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f14: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261f18: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261F18u;
    SET_GPR_U32(ctx, 31, 0x261F20u);
    ctx->pc = 0x261F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F18u;
    // 0x261f1c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261F18u, 0x261F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F20u;
label_261f20:
    // 0x261f20: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f24: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261f28: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261F28u;
    SET_GPR_U32(ctx, 31, 0x261F30u);
    ctx->pc = 0x261F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F28u;
    // 0x261f2c: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261F28u, 0x261F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F30u;
label_261f30:
    // 0x261f30: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x261f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x261f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x261f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x261f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f3c: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x261F3Cu;
    {
        const bool branch_taken_0x261f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F3Cu;
        // 0x261f40: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f3c) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x261F44u;
label_261f44:
    // 0x261f44: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261f50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x261f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x261f54: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261F54u;
    SET_GPR_U32(ctx, 31, 0x261F5Cu);
    ctx->pc = 0x261F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F54u;
    // 0x261f58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261F54u, 0x261F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F5Cu;
label_261f5c:
    // 0x261f5c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261f64: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261f64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261f68: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f6c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261f70: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261F70u;
    SET_GPR_U32(ctx, 31, 0x261F78u);
    ctx->pc = 0x261F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F70u;
    // 0x261f74: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261F70u, 0x261F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F78u;
label_261f78:
    // 0x261f78: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261f7c: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x261f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x261f80: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x261F80u;
    SET_GPR_U32(ctx, 31, 0x261F88u);
    ctx->pc = 0x261F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261F80u;
    // 0x261f84: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x261F80u, 0x261F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F88u;
label_261f88:
    // 0x261f88: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x261f8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x261f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x261f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261f94: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x261F94u;
    {
        const bool branch_taken_0x261f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F94u;
        // 0x261f98: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f94) {
            ctx->pc = 0x262534u;
            goto label_262534;
        }
    }
    ctx->pc = 0x261F9Cu;
label_261f9c:
    // 0x261f9c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x261f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261fa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x261fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x261fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x261fa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x261fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x261fac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x261fb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261fb4: 0x0  nop
    ctx->pc = 0x261fb4u;
    // NOP
    // 0x261fb8: 0x0  nop
    ctx->pc = 0x261fb8u;
    // NOP
    // 0x261fbc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x261fbcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x261fc0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261fc4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x261fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x261fc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x261fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x261fcc: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x261FCCu;
    SET_GPR_U32(ctx, 31, 0x261FD4u);
    ctx->pc = 0x261FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FCCu;
    // 0x261fd0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x261FCCu, 0x261FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FD4u;
label_261fd4:
    // 0x261fd4: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261fd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261fdc: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x261fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x261fe0: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261fe4: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x261fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x261fe8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x261FE8u;
    SET_GPR_U32(ctx, 31, 0x261FF0u);
    ctx->pc = 0x261FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FE8u;
    // 0x261fec: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x261FE8u, 0x261FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FF0u;
label_261ff0:
    // 0x261ff0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x261ff4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x261FF4u;
    SET_GPR_U32(ctx, 31, 0x261FFCu);
    ctx->pc = 0x261FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261FF4u;
    // 0x261ff8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x261FF4u, 0x261FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FFCu;
label_261ffc:
    // 0x261ffc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x261ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x262000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262004: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x262004u;
    {
        const bool branch_taken_0x262004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262004u;
        // 0x262008: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262004) {
            ctx->pc = 0x262078u;
            goto label_262078;
        }
    }
    ctx->pc = 0x26200Cu;
label_26200c:
    // 0x26200c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x26200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262010: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262018: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x262018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26201c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x26201cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x262020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262024: 0x0  nop
    ctx->pc = 0x262024u;
    // NOP
    // 0x262028: 0x0  nop
    ctx->pc = 0x262028u;
    // NOP
    // 0x26202c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x26202cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x262030: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262034: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x262034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262038: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26203c: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x26203Cu;
    SET_GPR_U32(ctx, 31, 0x262044u);
    ctx->pc = 0x262040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26203Cu;
    // 0x262040: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x26203Cu, 0x262044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262044u;
label_262044:
    // 0x262044: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26204c: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x26204cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262050: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262054: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262058: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262058u;
    SET_GPR_U32(ctx, 31, 0x262060u);
    ctx->pc = 0x26205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262058u;
    // 0x26205c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262058u, 0x262060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262060u;
label_262060:
    // 0x262060: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262064: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262064u;
    SET_GPR_U32(ctx, 31, 0x26206Cu);
    ctx->pc = 0x262068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262064u;
    // 0x262068: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262064u, 0x26206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26206Cu;
label_26206c:
    // 0x26206c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x26206cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x262070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262074: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x262074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_262078:
    // 0x262078: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26207c: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x26207cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x262080: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x262080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_262084:
    // 0x262084: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x262084u;
    SET_GPR_U32(ctx, 31, 0x26208Cu);
    ctx->pc = 0x262088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262084u;
    // 0x262088: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x262084u, 0x26208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26208Cu;
label_26208c:
    // 0x26208c: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x26208Cu;
    {
        const bool branch_taken_0x26208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26208Cu;
        // 0x262090: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26208c) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262094u;
label_262094:
    // 0x262094: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x262098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26209c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620a0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2620a4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2620a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2620a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2620a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2620ac: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2620ACu;
    SET_GPR_U32(ctx, 31, 0x2620B4u);
    ctx->pc = 0x2620B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620ACu;
    // 0x2620b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2620ACu, 0x2620B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620B4u;
label_2620b4:
    // 0x2620b4: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2620b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2620bc: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2620bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2620c0: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2620c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2620c4: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2620c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2620c8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2620C8u;
    SET_GPR_U32(ctx, 31, 0x2620D0u);
    ctx->pc = 0x2620CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620C8u;
    // 0x2620cc: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2620C8u, 0x2620D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620D0u;
label_2620d0:
    // 0x2620d0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2620d4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2620D4u;
    SET_GPR_U32(ctx, 31, 0x2620DCu);
    ctx->pc = 0x2620D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2620D4u;
    // 0x2620d8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2620D4u, 0x2620DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620DCu;
label_2620dc:
    // 0x2620dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2620e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2620e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2620e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2620e8: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x2620ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2620ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2620f0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2620f4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2620f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2620f8: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x2620F8u;
    {
        const bool branch_taken_0x2620f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2620FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2620F8u;
        // 0x2620fc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620f8) {
            ctx->pc = 0x262548u;
            goto label_262548;
        }
    }
    ctx->pc = 0x262100u;
label_262100:
    // 0x262100: 0xc6020114  lwc1        $f2, 0x114($s0)
    ctx->pc = 0x262100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262104: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26210c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26210cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262110: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x262110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x262114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262118: 0x0  nop
    ctx->pc = 0x262118u;
    // NOP
    // 0x26211c: 0x0  nop
    ctx->pc = 0x26211cu;
    // NOP
    // 0x262120: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x262120u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x262124: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262128: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x262128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26212c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26212cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x262130: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262130u;
    SET_GPR_U32(ctx, 31, 0x262138u);
    ctx->pc = 0x262134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262130u;
    // 0x262134: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262130u, 0x262138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262138u;
label_262138:
    // 0x262138: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26213c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262140: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262144: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262148: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x26214c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x26214Cu;
    SET_GPR_U32(ctx, 31, 0x262154u);
    ctx->pc = 0x262150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26214Cu;
    // 0x262150: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x26214Cu, 0x262154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262154u;
label_262154:
    // 0x262154: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262158: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262158u;
    SET_GPR_U32(ctx, 31, 0x262160u);
    ctx->pc = 0x26215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262158u;
    // 0x26215c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262158u, 0x262160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262160u;
label_262160:
    // 0x262160: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x262164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262168: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x262168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26216c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26216cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x262170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262174: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x262174u;
    {
        const bool branch_taken_0x262174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262174u;
        // 0x262178: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262174) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x26217Cu;
label_26217c:
    // 0x26217c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x262180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x262184: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262188: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26218c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x262190: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x262190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x262194: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262194u;
    SET_GPR_U32(ctx, 31, 0x26219Cu);
    ctx->pc = 0x262198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262194u;
    // 0x262198: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262194u, 0x26219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26219Cu;
label_26219c:
    // 0x26219c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2621a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2621a4: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2621a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2621a8: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2621ac: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2621acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2621b0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2621B0u;
    SET_GPR_U32(ctx, 31, 0x2621B8u);
    ctx->pc = 0x2621B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621B0u;
    // 0x2621b4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2621B0u, 0x2621B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621B8u;
label_2621b8:
    // 0x2621b8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2621b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2621bc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2621BCu;
    SET_GPR_U32(ctx, 31, 0x2621C4u);
    ctx->pc = 0x2621C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621BCu;
    // 0x2621c0: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2621BCu, 0x2621C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621C4u;
label_2621c4:
    // 0x2621c4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2621c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2621c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2621c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2621cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2621ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2621d0:
    // 0x2621d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2621d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2621d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2621d8:
    // 0x2621d8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2621d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2621dc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2621dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2621e0: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2621e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2621e4:
    // 0x2621e4: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x2621E4u;
    SET_GPR_U32(ctx, 31, 0x2621ECu);
    ctx->pc = 0x2621E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621E4u;
    // 0x2621e8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x2621E4u, 0x2621ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621ECu;
label_2621ec:
    // 0x2621ec: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2621ECu;
    {
        const bool branch_taken_0x2621ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621ECu;
        // 0x2621f0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2621ec) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x2621F4u;
label_2621f4:
    // 0x2621f4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x2621f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2621f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2621f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2621fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262200: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x262200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x262204: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x262204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x262208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26220c: 0x0  nop
    ctx->pc = 0x26220cu;
    // NOP
    // 0x262210: 0x0  nop
    ctx->pc = 0x262210u;
    // NOP
    // 0x262214: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x262214u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x262218: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26221c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26221cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262220: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x262224: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262224u;
    SET_GPR_U32(ctx, 31, 0x26222Cu);
    ctx->pc = 0x262228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262224u;
    // 0x262228: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262224u, 0x26222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26222Cu;
label_26222c:
    // 0x26222c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262230: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262234: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262234u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262238: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26223c: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x26223cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262240: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262240u;
    SET_GPR_U32(ctx, 31, 0x262248u);
    ctx->pc = 0x262244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262240u;
    // 0x262244: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262240u, 0x262248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262248u;
label_262248:
    // 0x262248: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26224c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x26224Cu;
    SET_GPR_U32(ctx, 31, 0x262254u);
    ctx->pc = 0x262250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26224Cu;
    // 0x262250: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x26224Cu, 0x262254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262254u;
label_262254:
    // 0x262254: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x262254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x262258: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26225c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x26225Cu;
    {
        const bool branch_taken_0x26225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26225Cu;
        // 0x262260: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26225c) {
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x262264u;
label_262264:
    // 0x262264: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x262264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x262268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26226c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26226cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262270: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262274: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x262274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262278: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26227c: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x26227Cu;
    SET_GPR_U32(ctx, 31, 0x262284u);
    ctx->pc = 0x262280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26227Cu;
    // 0x262280: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x26227Cu, 0x262284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262284u;
label_262284:
    // 0x262284: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26228c: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x26228cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262290: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262294: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262298: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262298u;
    SET_GPR_U32(ctx, 31, 0x2622A0u);
    ctx->pc = 0x26229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262298u;
    // 0x26229c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262298u, 0x2622A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622A0u;
label_2622a0:
    // 0x2622a0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2622a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2622a4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2622A4u;
    SET_GPR_U32(ctx, 31, 0x2622ACu);
    ctx->pc = 0x2622A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2622A4u;
    // 0x2622a8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2622A4u, 0x2622ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622ACu;
label_2622ac:
    // 0x2622ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2622acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2622b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2622b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2622b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2622b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2622b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2622b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2622bc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2622BCu;
    {
        const bool branch_taken_0x2622bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622BCu;
        // 0x2622c0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622bc) {
            ctx->pc = 0x26253Cu;
            goto label_26253c;
        }
    }
    ctx->pc = 0x2622C4u;
label_2622c4:
    // 0x2622c4: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2622c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2622cc: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2622CCu;
    {
        const bool branch_taken_0x2622cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2622cc) {
            ctx->pc = 0x2622ECu;
            goto label_2622ec;
        }
    }
    ctx->pc = 0x2622D4u;
    // 0x2622d4: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x2622d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2622d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2622dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2622dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2622e0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2622e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2622e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2622e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2622e8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2622e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2622ec:
    // 0x2622ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2622ECu;
    SET_GPR_U32(ctx, 31, 0x2622F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2622ECu, 0x2622F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622F4u;
label_2622f4:
    // 0x2622f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2622f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2622f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2622F8u;
    {
        const bool branch_taken_0x2622f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2622FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2622F8u;
        // 0x2622fc: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2622f8) {
            ctx->pc = 0x262314u;
            goto label_262314;
        }
    }
    ctx->pc = 0x262300u;
    // 0x262300: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x262304: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x262304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x262308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26230c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26230Cu;
    {
        const bool branch_taken_0x26230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26230Cu;
        // 0x262310: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26230c) {
            ctx->pc = 0x262328u;
            goto label_262328;
        }
    }
    ctx->pc = 0x262314u;
label_262314:
    // 0x262314: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x262314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x262318: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x262318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x26231c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26231cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262320: 0x0  nop
    ctx->pc = 0x262320u;
    // NOP
    // 0x262324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x262324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_262328:
    // 0x262328: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x262328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26232c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x26232Cu;
    SET_GPR_U32(ctx, 31, 0x262334u);
    ctx->pc = 0x262330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26232Cu;
    // 0x262330: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x26232Cu, 0x262334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262334u;
label_262334:
    // 0x262334: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x262334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x262338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26233c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26233cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262340: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262344: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x262344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x262348: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x262348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26234c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26234cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x262350: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262350u;
    SET_GPR_U32(ctx, 31, 0x262358u);
    ctx->pc = 0x262354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262350u;
    // 0x262354: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262350u, 0x262358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262358u;
label_262358:
    // 0x262358: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26235c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262360: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262360u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262364: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262368: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x26236c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x26236Cu;
    SET_GPR_U32(ctx, 31, 0x262374u);
    ctx->pc = 0x262370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26236Cu;
    // 0x262370: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x26236Cu, 0x262374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262374u;
label_262374:
    // 0x262374: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262378: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262378u;
    SET_GPR_U32(ctx, 31, 0x262380u);
    ctx->pc = 0x26237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262378u;
    // 0x26237c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262378u, 0x262380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262380u;
label_262380:
    // 0x262380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x262384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262388: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x262388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26238c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x262390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_262394:
    // 0x262394: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262398: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x262398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26239c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26239cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2623a0: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x2623A0u;
    SET_GPR_U32(ctx, 31, 0x2623A8u);
    ctx->pc = 0x2623A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623A0u;
    // 0x2623a4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x2623A0u, 0x2623A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623A8u;
label_2623a8:
    // 0x2623a8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x2623A8u;
    {
        const bool branch_taken_0x2623a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623A8u;
        // 0x2623ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623a8) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x2623B0u;
label_2623b0:
    // 0x2623b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2623b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2623b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623b8: 0xc098284  jal         func_260A10
    ctx->pc = 0x2623B8u;
    SET_GPR_U32(ctx, 31, 0x2623C0u);
    ctx->pc = 0x2623BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623B8u;
    // 0x2623bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x2623B8u, 0x2623C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623C0u;
label_2623c0:
    // 0x2623c0: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x2623c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2623c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2623c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2623c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2623cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2623ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2623d0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2623d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2623d4: 0x0  nop
    ctx->pc = 0x2623d4u;
    // NOP
    // 0x2623d8: 0x0  nop
    ctx->pc = 0x2623d8u;
    // NOP
    // 0x2623dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2623dcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2623e0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2623E0u;
    SET_GPR_U32(ctx, 31, 0x2623E8u);
    ctx->pc = 0x2623E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2623E0u;
    // 0x2623e4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2623E0u, 0x2623E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623E8u;
label_2623e8:
    // 0x2623e8: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2623e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2623ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2623ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2623f0: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2623f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2623f4: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2623f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2623F8u;
    {
        const bool branch_taken_0x2623f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2623F8u;
        // 0x2623fc: 0xac52004c  sw          $s2, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623f8) {
            ctx->pc = 0x262434u;
            goto label_262434;
        }
    }
    ctx->pc = 0x262400u;
label_262400:
    // 0x262400: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x262400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262408: 0xc098284  jal         func_260A10
    ctx->pc = 0x262408u;
    SET_GPR_U32(ctx, 31, 0x262410u);
    ctx->pc = 0x26240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262408u;
    // 0x26240c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x262408u, 0x262410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262410u;
label_262410:
    // 0x262410: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262418: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262418u;
    SET_GPR_U32(ctx, 31, 0x262420u);
    ctx->pc = 0x26241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262418u;
    // 0x26241c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262418u, 0x262420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262420u;
label_262420:
    // 0x262420: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262428: 0xa4530046  sh          $s3, 0x46($v0)
    ctx->pc = 0x262428u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x26242c: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x26242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262430: 0xac72004c  sw          $s2, 0x4C($v1)
    ctx->pc = 0x262430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 18));
label_262434:
    // 0x262434: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262434u;
    SET_GPR_U32(ctx, 31, 0x26243Cu);
    ctx->pc = 0x262438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262434u;
    // 0x262438: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262434u, 0x26243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26243Cu;
label_26243c:
    // 0x26243c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262440: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262440u;
    SET_GPR_U32(ctx, 31, 0x262448u);
    ctx->pc = 0x262444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262440u;
    // 0x262444: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262440u, 0x262448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262448u;
label_262448:
    // 0x262448: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x262448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26244c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262450: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x262450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_262454:
    // 0x262454: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262458: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x262458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26245c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26245cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x262460: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x262460u;
    SET_GPR_U32(ctx, 31, 0x262468u);
    ctx->pc = 0x262464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262460u;
    // 0x262464: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x262460u, 0x262468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262468u;
label_262468:
    // 0x262468: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x262468u;
    {
        const bool branch_taken_0x262468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262468u;
        // 0x26246c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262468) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262470u;
label_262470:
    // 0x262470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x262474: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x262474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x262478: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26247c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262480: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x262480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262484: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x262484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x262488: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262488u;
    SET_GPR_U32(ctx, 31, 0x262490u);
    ctx->pc = 0x26248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262488u;
    // 0x26248c: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262488u, 0x262490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262490u;
label_262490:
    // 0x262490: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262498: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x26249c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x26249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2624a0: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2624a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2624a4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2624A4u;
    SET_GPR_U32(ctx, 31, 0x2624ACu);
    ctx->pc = 0x2624A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624A4u;
    // 0x2624a8: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2624A4u, 0x2624ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624ACu;
label_2624ac:
    // 0x2624ac: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2624acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2624b0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2624B0u;
    SET_GPR_U32(ctx, 31, 0x2624B8u);
    ctx->pc = 0x2624B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624B0u;
    // 0x2624b4: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2624B0u, 0x2624B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624B8u;
label_2624b8:
    // 0x2624b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2624b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2624bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2624bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2624c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2624c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2624c4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2624c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2624c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2624c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2624cc: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2624ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2624d0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2624d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2624d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2624d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2624d8: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x2624D8u;
    SET_GPR_U32(ctx, 31, 0x2624E0u);
    ctx->pc = 0x2624DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624D8u;
    // 0x2624dc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x2624D8u, 0x2624E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2624E0u;
label_2624e0:
    // 0x2624e0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2624E0u;
    {
        const bool branch_taken_0x2624e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2624E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2624E0u;
        // 0x2624e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2624e0) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x2624E8u;
label_2624e8:
    // 0x2624e8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2624e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2624ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2624ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2624f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2624f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2624f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2624f8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2624F8u;
    SET_GPR_U32(ctx, 31, 0x262500u);
    ctx->pc = 0x2624FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2624F8u;
    // 0x2624fc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2624F8u, 0x262500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262500u;
label_262500:
    // 0x262500: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262508: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262508u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x26250c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x26250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262510: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262514: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262514u;
    SET_GPR_U32(ctx, 31, 0x26251Cu);
    ctx->pc = 0x262518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262514u;
    // 0x262518: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262514u, 0x26251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26251Cu;
label_26251c:
    // 0x26251c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262520: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262520u;
    SET_GPR_U32(ctx, 31, 0x262528u);
    ctx->pc = 0x262524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262520u;
    // 0x262524: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262520u, 0x262528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262528u;
label_262528:
    // 0x262528: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x262528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x26252c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26252cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x262530: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x262530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_262534:
    // 0x262534: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x262534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x262538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26253c:
    // 0x26253c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262540: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x262540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x262544: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x262544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_262548:
    // 0x262548: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x262548u;
    SET_GPR_U32(ctx, 31, 0x262550u);
    ctx->pc = 0x26254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262548u;
    // 0x26254c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x262548u, 0x262550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262550u;
label_262550:
    // 0x262550: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x262550u;
    {
        const bool branch_taken_0x262550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262550u;
        // 0x262554: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262550) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262558u;
label_262558:
    // 0x262558: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x262558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x26255c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26255cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x262560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262564: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262568: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26256c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26256cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x262570: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x262570u;
    SET_GPR_U32(ctx, 31, 0x262578u);
    ctx->pc = 0x262574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262570u;
    // 0x262574: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x262570u, 0x262578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262578u;
label_262578:
    // 0x262578: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x26257c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262580: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262580u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262584: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x262584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262588: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x26258c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x26258Cu;
    SET_GPR_U32(ctx, 31, 0x262594u);
    ctx->pc = 0x262590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26258Cu;
    // 0x262590: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x26258Cu, 0x262594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262594u;
label_262594:
    // 0x262594: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262598: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262598u;
    SET_GPR_U32(ctx, 31, 0x2625A0u);
    ctx->pc = 0x26259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262598u;
    // 0x26259c: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262598u, 0x2625A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625A0u;
label_2625a0:
    // 0x2625a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2625a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2625a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2625a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2625a8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2625ac:
    // 0x2625ac: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2625acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2625b0: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2625b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2625b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2625b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2625b8:
    // 0x2625b8: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x2625B8u;
    SET_GPR_U32(ctx, 31, 0x2625C0u);
    ctx->pc = 0x2625BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625B8u;
    // 0x2625bc: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x2625B8u, 0x2625C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625C0u;
label_2625c0:
    // 0x2625c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2625C0u;
    {
        const bool branch_taken_0x2625c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625C0u;
        // 0x2625c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625c0) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x2625C8u;
label_2625c8:
    // 0x2625c8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x2625c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2625cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2625ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2625d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2625d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2625d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2625d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2625d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2625dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2625dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2625e0: 0x0  nop
    ctx->pc = 0x2625e0u;
    // NOP
    // 0x2625e4: 0x0  nop
    ctx->pc = 0x2625e4u;
    // NOP
    // 0x2625e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2625e8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2625ec: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2625ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2625f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2625f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2625f4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x2625f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2625f8: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2625F8u;
    SET_GPR_U32(ctx, 31, 0x262600u);
    ctx->pc = 0x2625FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2625F8u;
    // 0x2625fc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2625F8u, 0x262600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262600u;
label_262600:
    // 0x262600: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x262600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262608: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x262608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x26260c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x26260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262610: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262614: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262614u;
    SET_GPR_U32(ctx, 31, 0x26261Cu);
    ctx->pc = 0x262618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262614u;
    // 0x262618: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262614u, 0x26261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26261Cu;
label_26261c:
    // 0x26261c: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x26261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262620: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x262620u;
    SET_GPR_U32(ctx, 31, 0x262628u);
    ctx->pc = 0x262624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262620u;
    // 0x262624: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x262620u, 0x262628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262628u;
label_262628:
    // 0x262628: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x262628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x26262c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26262cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262630: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x262630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_262634:
    // 0x262634: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262638: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x262638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26263c:
    // 0x26263c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x26263cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x262640: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x262640u;
    SET_GPR_U32(ctx, 31, 0x262648u);
    ctx->pc = 0x262644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262640u;
    // 0x262644: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x262640u, 0x262648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262648u;
label_262648:
    // 0x262648: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x262648u;
    {
        const bool branch_taken_0x262648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262648u;
        // 0x26264c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262648) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262650u;
label_262650:
    // 0x262650: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x262650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x262654: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x262658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26265c:
    // 0x26265c: 0xa4530046  sh          $s3, 0x46($v0)
    ctx->pc = 0x26265cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x262660: 0x8e040680  lw          $a0, 0x680($s0)
    ctx->pc = 0x262660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x262664: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x262664u;
    SET_GPR_U32(ctx, 31, 0x26266Cu);
    ctx->pc = 0x262668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262664u;
    // 0x262668: 0x8e050684  lw          $a1, 0x684($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x262664u, 0x26266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26266Cu;
label_26266c:
    // 0x26266c: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x26266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x262670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262674: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x262674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x262678: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x262678u;
    SET_GPR_U32(ctx, 31, 0x262680u);
    ctx->pc = 0x26267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262678u;
    // 0x26267c: 0x8e040680  lw          $a0, 0x680($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x262678u, 0x262680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262680u;
label_262680:
    // 0x262680: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x262684: 0x8e040680  lw          $a0, 0x680($s0)
    ctx->pc = 0x262684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x262688: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x262688u;
    SET_GPR_U32(ctx, 31, 0x262690u);
    ctx->pc = 0x26268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262688u;
    // 0x26268c: 0x24a57b00  addiu       $a1, $a1, 0x7B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x262688u, 0x262690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262690u;
label_262690:
    // 0x262690: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x262690u;
    {
        const bool branch_taken_0x262690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262690u;
        // 0x262694: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262690) {
            ctx->pc = 0x262728u;
            goto label_262728;
        }
    }
    ctx->pc = 0x262698u;
label_262698:
    // 0x262698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26269c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2626a0: 0xc098284  jal         func_260A10
    ctx->pc = 0x2626A0u;
    SET_GPR_U32(ctx, 31, 0x2626A8u);
    ctx->pc = 0x2626A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626A0u;
    // 0x2626a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260A10u, 0x2626A0u, 0x2626A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626A8u;
label_2626a8:
    // 0x2626a8: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x2626a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2626ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2626b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2626b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2626b4: 0x0  nop
    ctx->pc = 0x2626b4u;
    // NOP
    // 0x2626b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2626b8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2626bc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2626bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2626c0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2626c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2626c4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2626c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2626c8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2626c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2626cc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2626ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2626d0: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2626d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2626d4: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x2626D4u;
    SET_GPR_U32(ctx, 31, 0x2626DCu);
    ctx->pc = 0x2626D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626D4u;
    // 0x2626d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x2626D4u, 0x2626DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626DCu;
label_2626dc:
    // 0x2626dc: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x2626dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2626e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2626e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2626e4: 0xa4730046  sh          $s3, 0x46($v1)
    ctx->pc = 0x2626e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 19));
    // 0x2626e8: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2626e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2626ec: 0xac52004c  sw          $s2, 0x4C($v0)
    ctx->pc = 0x2626ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 18));
    // 0x2626f0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x2626F0u;
    SET_GPR_U32(ctx, 31, 0x2626F8u);
    ctx->pc = 0x2626F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626F0u;
    // 0x2626f4: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x2626F0u, 0x2626F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626F8u;
label_2626f8:
    // 0x2626f8: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x2626f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2626fc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x2626FCu;
    SET_GPR_U32(ctx, 31, 0x262704u);
    ctx->pc = 0x262700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626FCu;
    // 0x262700: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x2626FCu, 0x262704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262704u;
label_262704:
    // 0x262704: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x262704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x262708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26270c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x262710: 0x8e040688  lw          $a0, 0x688($s0)
    ctx->pc = 0x262710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x262714: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x262714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x262718: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x262718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26271c: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x26271Cu;
    SET_GPR_U32(ctx, 31, 0x262724u);
    ctx->pc = 0x262720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26271Cu;
    // 0x262720: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x26271Cu, 0x262724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262724u;
label_262724:
    // 0x262724: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x262724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_262728:
    // 0x262728: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x262728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26272c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26272cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x262730: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x262730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x262734: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x262734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262738: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x262738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26273c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262740: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x262740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x262744: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x262744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x262748: 0x3e00008  jr          $ra
    ctx->pc = 0x262748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262748u;
        // 0x26274c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262750u;
}
