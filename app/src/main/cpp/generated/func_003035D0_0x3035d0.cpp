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

// Function: func_003035D0
// Address: 0x3035d0 - 0x3039e8
void func_003035D0_0x3035d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003035D0_0x3035d0");
#endif

    switch (ctx->pc) {
        case 0x3035d0u: goto label_3035d0;
        case 0x3035d4u: goto label_3035d4;
        case 0x3035d8u: goto label_3035d8;
        case 0x3035dcu: goto label_3035dc;
        case 0x3035e0u: goto label_3035e0;
        case 0x3035e4u: goto label_3035e4;
        case 0x3035e8u: goto label_3035e8;
        case 0x3035ecu: goto label_3035ec;
        case 0x3035f0u: goto label_3035f0;
        case 0x3035f4u: goto label_3035f4;
        case 0x3035f8u: goto label_3035f8;
        case 0x3035fcu: goto label_3035fc;
        case 0x303600u: goto label_303600;
        case 0x303604u: goto label_303604;
        case 0x303608u: goto label_303608;
        case 0x30360cu: goto label_30360c;
        case 0x303610u: goto label_303610;
        case 0x303614u: goto label_303614;
        case 0x303618u: goto label_303618;
        case 0x30361cu: goto label_30361c;
        case 0x303620u: goto label_303620;
        case 0x303624u: goto label_303624;
        case 0x303628u: goto label_303628;
        case 0x30362cu: goto label_30362c;
        case 0x303630u: goto label_303630;
        case 0x303634u: goto label_303634;
        case 0x303638u: goto label_303638;
        case 0x30363cu: goto label_30363c;
        case 0x303640u: goto label_303640;
        case 0x303644u: goto label_303644;
        case 0x303648u: goto label_303648;
        case 0x30364cu: goto label_30364c;
        case 0x303650u: goto label_303650;
        case 0x303654u: goto label_303654;
        case 0x303658u: goto label_303658;
        case 0x30365cu: goto label_30365c;
        case 0x303660u: goto label_303660;
        case 0x303664u: goto label_303664;
        case 0x303668u: goto label_303668;
        case 0x30366cu: goto label_30366c;
        case 0x303670u: goto label_303670;
        case 0x303674u: goto label_303674;
        case 0x303678u: goto label_303678;
        case 0x30367cu: goto label_30367c;
        case 0x303680u: goto label_303680;
        case 0x303684u: goto label_303684;
        case 0x303688u: goto label_303688;
        case 0x30368cu: goto label_30368c;
        case 0x303690u: goto label_303690;
        case 0x303694u: goto label_303694;
        case 0x303698u: goto label_303698;
        case 0x30369cu: goto label_30369c;
        case 0x3036a0u: goto label_3036a0;
        case 0x3036a4u: goto label_3036a4;
        case 0x3036a8u: goto label_3036a8;
        case 0x3036acu: goto label_3036ac;
        case 0x3036b0u: goto label_3036b0;
        case 0x3036b4u: goto label_3036b4;
        case 0x3036b8u: goto label_3036b8;
        case 0x3036bcu: goto label_3036bc;
        case 0x3036c0u: goto label_3036c0;
        case 0x3036c4u: goto label_3036c4;
        case 0x3036c8u: goto label_3036c8;
        case 0x3036ccu: goto label_3036cc;
        case 0x3036d0u: goto label_3036d0;
        case 0x3036d4u: goto label_3036d4;
        case 0x3036d8u: goto label_3036d8;
        case 0x3036dcu: goto label_3036dc;
        case 0x3036e0u: goto label_3036e0;
        case 0x3036e4u: goto label_3036e4;
        case 0x3036e8u: goto label_3036e8;
        case 0x3036ecu: goto label_3036ec;
        case 0x3036f0u: goto label_3036f0;
        case 0x3036f4u: goto label_3036f4;
        case 0x3036f8u: goto label_3036f8;
        case 0x3036fcu: goto label_3036fc;
        case 0x303700u: goto label_303700;
        case 0x303704u: goto label_303704;
        case 0x303708u: goto label_303708;
        case 0x30370cu: goto label_30370c;
        case 0x303710u: goto label_303710;
        case 0x303714u: goto label_303714;
        case 0x303718u: goto label_303718;
        case 0x30371cu: goto label_30371c;
        case 0x303720u: goto label_303720;
        case 0x303724u: goto label_303724;
        case 0x303728u: goto label_303728;
        case 0x30372cu: goto label_30372c;
        case 0x303730u: goto label_303730;
        case 0x303734u: goto label_303734;
        case 0x303738u: goto label_303738;
        case 0x30373cu: goto label_30373c;
        case 0x303740u: goto label_303740;
        case 0x303744u: goto label_303744;
        case 0x303748u: goto label_303748;
        case 0x30374cu: goto label_30374c;
        case 0x303750u: goto label_303750;
        case 0x303754u: goto label_303754;
        case 0x303758u: goto label_303758;
        case 0x30375cu: goto label_30375c;
        case 0x303760u: goto label_303760;
        case 0x303764u: goto label_303764;
        case 0x303768u: goto label_303768;
        case 0x30376cu: goto label_30376c;
        case 0x303770u: goto label_303770;
        case 0x303774u: goto label_303774;
        case 0x303778u: goto label_303778;
        case 0x30377cu: goto label_30377c;
        case 0x303780u: goto label_303780;
        case 0x303784u: goto label_303784;
        case 0x303788u: goto label_303788;
        case 0x30378cu: goto label_30378c;
        case 0x303790u: goto label_303790;
        case 0x303794u: goto label_303794;
        case 0x303798u: goto label_303798;
        case 0x30379cu: goto label_30379c;
        case 0x3037a0u: goto label_3037a0;
        case 0x3037a4u: goto label_3037a4;
        case 0x3037a8u: goto label_3037a8;
        case 0x3037acu: goto label_3037ac;
        case 0x3037b0u: goto label_3037b0;
        case 0x3037b4u: goto label_3037b4;
        case 0x3037b8u: goto label_3037b8;
        case 0x3037bcu: goto label_3037bc;
        case 0x3037c0u: goto label_3037c0;
        case 0x3037c4u: goto label_3037c4;
        case 0x3037c8u: goto label_3037c8;
        case 0x3037ccu: goto label_3037cc;
        case 0x3037d0u: goto label_3037d0;
        case 0x3037d4u: goto label_3037d4;
        case 0x3037d8u: goto label_3037d8;
        case 0x3037dcu: goto label_3037dc;
        case 0x3037e0u: goto label_3037e0;
        case 0x3037e4u: goto label_3037e4;
        case 0x3037e8u: goto label_3037e8;
        case 0x3037ecu: goto label_3037ec;
        case 0x3037f0u: goto label_3037f0;
        case 0x3037f4u: goto label_3037f4;
        case 0x3037f8u: goto label_3037f8;
        case 0x3037fcu: goto label_3037fc;
        case 0x303800u: goto label_303800;
        case 0x303804u: goto label_303804;
        case 0x303808u: goto label_303808;
        case 0x30380cu: goto label_30380c;
        case 0x303810u: goto label_303810;
        case 0x303814u: goto label_303814;
        case 0x303818u: goto label_303818;
        case 0x30381cu: goto label_30381c;
        case 0x303820u: goto label_303820;
        case 0x303824u: goto label_303824;
        case 0x303828u: goto label_303828;
        case 0x30382cu: goto label_30382c;
        case 0x303830u: goto label_303830;
        case 0x303834u: goto label_303834;
        case 0x303838u: goto label_303838;
        case 0x30383cu: goto label_30383c;
        case 0x303840u: goto label_303840;
        case 0x303844u: goto label_303844;
        case 0x303848u: goto label_303848;
        case 0x30384cu: goto label_30384c;
        case 0x303850u: goto label_303850;
        case 0x303854u: goto label_303854;
        case 0x303858u: goto label_303858;
        case 0x30385cu: goto label_30385c;
        case 0x303860u: goto label_303860;
        case 0x303864u: goto label_303864;
        case 0x303868u: goto label_303868;
        case 0x30386cu: goto label_30386c;
        case 0x303870u: goto label_303870;
        case 0x303874u: goto label_303874;
        case 0x303878u: goto label_303878;
        case 0x30387cu: goto label_30387c;
        case 0x303880u: goto label_303880;
        case 0x303884u: goto label_303884;
        case 0x303888u: goto label_303888;
        case 0x30388cu: goto label_30388c;
        case 0x303890u: goto label_303890;
        case 0x303894u: goto label_303894;
        case 0x303898u: goto label_303898;
        case 0x30389cu: goto label_30389c;
        case 0x3038a0u: goto label_3038a0;
        case 0x3038a4u: goto label_3038a4;
        case 0x3038a8u: goto label_3038a8;
        case 0x3038acu: goto label_3038ac;
        case 0x3038b0u: goto label_3038b0;
        case 0x3038b4u: goto label_3038b4;
        case 0x3038b8u: goto label_3038b8;
        case 0x3038bcu: goto label_3038bc;
        case 0x3038c0u: goto label_3038c0;
        case 0x3038c4u: goto label_3038c4;
        case 0x3038c8u: goto label_3038c8;
        case 0x3038ccu: goto label_3038cc;
        case 0x3038d0u: goto label_3038d0;
        case 0x3038d4u: goto label_3038d4;
        case 0x3038d8u: goto label_3038d8;
        case 0x3038dcu: goto label_3038dc;
        case 0x3038e0u: goto label_3038e0;
        case 0x3038e4u: goto label_3038e4;
        case 0x3038e8u: goto label_3038e8;
        case 0x3038ecu: goto label_3038ec;
        case 0x3038f0u: goto label_3038f0;
        case 0x3038f4u: goto label_3038f4;
        case 0x3038f8u: goto label_3038f8;
        case 0x3038fcu: goto label_3038fc;
        case 0x303900u: goto label_303900;
        case 0x303904u: goto label_303904;
        case 0x303908u: goto label_303908;
        case 0x30390cu: goto label_30390c;
        case 0x303910u: goto label_303910;
        case 0x303914u: goto label_303914;
        case 0x303918u: goto label_303918;
        case 0x30391cu: goto label_30391c;
        case 0x303920u: goto label_303920;
        case 0x303924u: goto label_303924;
        case 0x303928u: goto label_303928;
        case 0x30392cu: goto label_30392c;
        case 0x303930u: goto label_303930;
        case 0x303934u: goto label_303934;
        case 0x303938u: goto label_303938;
        case 0x30393cu: goto label_30393c;
        case 0x303940u: goto label_303940;
        case 0x303944u: goto label_303944;
        case 0x303948u: goto label_303948;
        case 0x30394cu: goto label_30394c;
        case 0x303950u: goto label_303950;
        case 0x303954u: goto label_303954;
        case 0x303958u: goto label_303958;
        case 0x30395cu: goto label_30395c;
        case 0x303960u: goto label_303960;
        case 0x303964u: goto label_303964;
        case 0x303968u: goto label_303968;
        case 0x30396cu: goto label_30396c;
        case 0x303970u: goto label_303970;
        case 0x303974u: goto label_303974;
        case 0x303978u: goto label_303978;
        case 0x30397cu: goto label_30397c;
        case 0x303980u: goto label_303980;
        case 0x303984u: goto label_303984;
        case 0x303988u: goto label_303988;
        case 0x30398cu: goto label_30398c;
        case 0x303990u: goto label_303990;
        case 0x303994u: goto label_303994;
        case 0x303998u: goto label_303998;
        case 0x30399cu: goto label_30399c;
        case 0x3039a0u: goto label_3039a0;
        case 0x3039a4u: goto label_3039a4;
        case 0x3039a8u: goto label_3039a8;
        case 0x3039acu: goto label_3039ac;
        case 0x3039b0u: goto label_3039b0;
        case 0x3039b4u: goto label_3039b4;
        case 0x3039b8u: goto label_3039b8;
        case 0x3039bcu: goto label_3039bc;
        case 0x3039c0u: goto label_3039c0;
        case 0x3039c4u: goto label_3039c4;
        case 0x3039c8u: goto label_3039c8;
        case 0x3039ccu: goto label_3039cc;
        case 0x3039d0u: goto label_3039d0;
        case 0x3039d4u: goto label_3039d4;
        case 0x3039d8u: goto label_3039d8;
        case 0x3039dcu: goto label_3039dc;
        case 0x3039e0u: goto label_3039e0;
        case 0x3039e4u: goto label_3039e4;
        default: break;
    }

    ctx->pc = 0x3035d0u;

label_3035d0:
    // 0x3035d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3035d4:
    // 0x3035d4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3035d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_3035d8:
    // 0x3035d8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3035d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_3035dc:
    // 0x3035dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3035dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3035e0:
    // 0x3035e0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3035e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_3035e4:
    // 0x3035e4: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3035e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_3035e8:
    // 0x3035e8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3035e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_3035ec:
    // 0x3035ec: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3035ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_3035f0:
    // 0x3035f0: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x3035f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3035f4:
    // 0x3035f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3035f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3035f8:
    // 0x3035f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3035f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3035fc:
    // 0x3035fc: 0x86420186  lh          $v0, 0x186($s2)
    ctx->pc = 0x3035fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 390)));
label_303600:
    // 0x303600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303604:
    // 0x303604: 0x0  nop
    ctx->pc = 0x303604u;
    // NOP
label_303608:
    // 0x303608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30360c:
    // 0x30360c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30360cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303610:
    // 0x303610: 0x0  nop
    ctx->pc = 0x303610u;
    // NOP
label_303614:
    // 0x303614: 0x450100ec  bc1t        . + 4 + (0xEC << 2)
label_303618:
    if (ctx->pc == 0x303618u) {
        ctx->pc = 0x303618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303614u;
        // 0x303618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30361Cu;
        goto label_30361c;
    }
    ctx->pc = 0x303614u;
    {
        const bool branch_taken_0x303614 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x303618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303614u;
        // 0x303618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303614) {
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x30361Cu;
label_30361c:
    // 0x30361c: 0x86420188  lh          $v0, 0x188($s2)
    ctx->pc = 0x30361cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 392)));
label_303620:
    // 0x303620: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
label_303624:
    if (ctx->pc == 0x303624u) {
        ctx->pc = 0x303624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303620u;
        // 0x303624: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303628u;
        goto label_303628;
    }
    ctx->pc = 0x303620u;
    {
        const bool branch_taken_0x303620 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x303620) {
            ctx->pc = 0x303624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303620u;
            // 0x303624: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303628u;
label_303628:
    // 0x303628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30362c:
    // 0x30362c: 0x0  nop
    ctx->pc = 0x30362cu;
    // NOP
label_303630:
    // 0x303630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_303634:
    // 0x303634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x303634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303638:
    // 0x303638: 0x0  nop
    ctx->pc = 0x303638u;
    // NOP
label_30363c:
    // 0x30363c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_303640:
    if (ctx->pc == 0x303640u) {
        ctx->pc = 0x303640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30363Cu;
        // 0x303640: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303644u;
        goto label_303644;
    }
    ctx->pc = 0x30363Cu;
    {
        const bool branch_taken_0x30363c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30363c) {
            ctx->pc = 0x303640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30363Cu;
            // 0x303640: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303654u;
            goto label_303654;
        }
    }
    ctx->pc = 0x303644u;
label_303644:
    // 0x303644: 0xc0c0a46  jal         func_302918
label_303648:
    if (ctx->pc == 0x303648u) {
        ctx->pc = 0x303648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303644u;
        // 0x303648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30364Cu;
        goto label_30364c;
    }
    ctx->pc = 0x303644u;
    SET_GPR_U32(ctx, 31, 0x30364Cu);
    ctx->pc = 0x303648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303644u;
    // 0x303648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x303644u, 0x30364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30364Cu;
label_30364c:
    // 0x30364c: 0x100000de  b           . + 4 + (0xDE << 2)
label_303650:
    if (ctx->pc == 0x303650u) {
        ctx->pc = 0x303650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30364Cu;
        // 0x303650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303654u;
        goto label_303654;
    }
    ctx->pc = 0x30364Cu;
    {
        const bool branch_taken_0x30364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30364Cu;
        // 0x303650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30364c) {
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x303654u;
label_303654:
    // 0x303654: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x303654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_303658:
    // 0x303658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x303658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30365c:
    // 0x30365c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30365cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_303660:
    // 0x303660: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_303664:
    if (ctx->pc == 0x303664u) {
        ctx->pc = 0x303664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303660u;
        // 0x303664: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303668u;
        goto label_303668;
    }
    ctx->pc = 0x303660u;
    {
        const bool branch_taken_0x303660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303660) {
            ctx->pc = 0x303664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303660u;
            // 0x303664: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303684u;
            goto label_303684;
        }
    }
    ctx->pc = 0x303668u;
label_303668:
    // 0x303668: 0xc0c7426  jal         func_31D098
label_30366c:
    if (ctx->pc == 0x30366Cu) {
        ctx->pc = 0x30366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303668u;
        // 0x30366c: 0x26440220  addiu       $a0, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303670u;
        goto label_303670;
    }
    ctx->pc = 0x303668u;
    SET_GPR_U32(ctx, 31, 0x303670u);
    ctx->pc = 0x30366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303668u;
    // 0x30366c: 0x26440220  addiu       $a0, $s2, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x303668u, 0x303670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303670u;
label_303670:
    // 0x303670: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x303670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_303674:
    // 0x303674: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x303674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_303678:
    // 0x303678: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_30367c:
    if (ctx->pc == 0x30367Cu) {
        ctx->pc = 0x30367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303678u;
        // 0x30367c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303680u;
        goto label_303680;
    }
    ctx->pc = 0x303678u;
    {
        const bool branch_taken_0x303678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303678u;
        // 0x30367c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303678) {
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x303680u;
label_303680:
    // 0x303680: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x303680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_303684:
    // 0x303684: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x303684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_303688:
    // 0x303688: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x303688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30368c:
    // 0x30368c: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_303690:
    if (ctx->pc == 0x303690u) {
        ctx->pc = 0x303690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30368Cu;
        // 0x303690: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303694u;
        goto label_303694;
    }
    ctx->pc = 0x30368Cu;
    {
        const bool branch_taken_0x30368c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30368Cu;
        // 0x303690: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30368c) {
            ctx->pc = 0x30383Cu;
            goto label_30383c;
        }
    }
    ctx->pc = 0x303694u;
label_303694:
    // 0x303694: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x303694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_303698:
    // 0x303698: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x303698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_30369c:
    // 0x30369c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_3036a0:
    if (ctx->pc == 0x3036A0u) {
        ctx->pc = 0x3036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30369Cu;
        // 0x3036a0: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036A4u;
        goto label_3036a4;
    }
    ctx->pc = 0x30369Cu;
    {
        const bool branch_taken_0x30369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30369c) {
            ctx->pc = 0x3036A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30369Cu;
            // 0x3036a0: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3036FCu;
            goto label_3036fc;
        }
    }
    ctx->pc = 0x3036A4u;
label_3036a4:
    // 0x3036a4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x3036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3036a8:
    // 0x3036a8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3036a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3036ac:
    // 0x3036ac: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3036acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3036b0:
    // 0x3036b0: 0x60f809  jalr        $v1
label_3036b4:
    if (ctx->pc == 0x3036B4u) {
        ctx->pc = 0x3036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036B0u;
        // 0x3036b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036B8u;
        goto label_3036b8;
    }
    ctx->pc = 0x3036B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3036B8u);
        ctx->pc = 0x3036B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036B0u;
        // 0x3036b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3036B0u, 0x3036B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3036B8u;
label_3036b8:
    // 0x3036b8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x3036b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3036bc:
    // 0x3036bc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3036bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3036c0:
    // 0x3036c0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3036c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3036c4:
    // 0x3036c4: 0x60f809  jalr        $v1
label_3036c8:
    if (ctx->pc == 0x3036C8u) {
        ctx->pc = 0x3036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C4u;
        // 0x3036c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036CCu;
        goto label_3036cc;
    }
    ctx->pc = 0x3036C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3036CCu);
        ctx->pc = 0x3036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036C4u;
        // 0x3036c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3036C4u, 0x3036CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3036CCu;
label_3036cc:
    // 0x3036cc: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x3036ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3036d0:
    // 0x3036d0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_3036d4:
    // 0x3036d4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_3036d8:
    // 0x3036d8: 0x60f809  jalr        $v1
label_3036dc:
    if (ctx->pc == 0x3036DCu) {
        ctx->pc = 0x3036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036D8u;
        // 0x3036dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036E0u;
        goto label_3036e0;
    }
    ctx->pc = 0x3036D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3036E0u);
        ctx->pc = 0x3036DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036D8u;
        // 0x3036dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3036D8u, 0x3036E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3036E0u;
label_3036e0:
    // 0x3036e0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x3036e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3036e4:
    // 0x3036e4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x3036e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_3036e8:
    // 0x3036e8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x3036e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_3036ec:
    // 0x3036ec: 0x60f809  jalr        $v1
label_3036f0:
    if (ctx->pc == 0x3036F0u) {
        ctx->pc = 0x3036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036ECu;
        // 0x3036f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036F4u;
        goto label_3036f4;
    }
    ctx->pc = 0x3036ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3036F4u);
        ctx->pc = 0x3036F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036ECu;
        // 0x3036f0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3036ECu, 0x3036F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3036F4u;
label_3036f4:
    // 0x3036f4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_3036f8:
    if (ctx->pc == 0x3036F8u) {
        ctx->pc = 0x3036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036F4u;
        // 0x3036f8: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3036FCu;
        goto label_3036fc;
    }
    ctx->pc = 0x3036F4u;
    {
        const bool branch_taken_0x3036f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3036F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3036F4u;
        // 0x3036f8: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3036f4) {
            ctx->pc = 0x30382Cu;
            goto label_30382c;
        }
    }
    ctx->pc = 0x3036FCu;
label_3036fc:
    // 0x3036fc: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
label_303700:
    if (ctx->pc == 0x303700u) {
        ctx->pc = 0x303704u;
        goto label_303704;
    }
    ctx->pc = 0x3036FCu;
    {
        const bool branch_taken_0x3036fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3036fc) {
            ctx->pc = 0x3037D0u;
            goto label_3037d0;
        }
    }
    ctx->pc = 0x303704u;
label_303704:
    // 0x303704: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x303704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_303708:
    // 0x303708: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x303708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_30370c:
    // 0x30370c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_303710:
    // 0x303710: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_303714:
    if (ctx->pc == 0x303714u) {
        ctx->pc = 0x303714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303710u;
        // 0x303714: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303718u;
        goto label_303718;
    }
    ctx->pc = 0x303710u;
    {
        const bool branch_taken_0x303710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303710) {
            ctx->pc = 0x303714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303710u;
            // 0x303714: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303774u;
            goto label_303774;
        }
    }
    ctx->pc = 0x303718u;
label_303718:
    // 0x303718: 0x8e450108  lw          $a1, 0x108($s2)
    ctx->pc = 0x303718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_30371c:
    // 0x30371c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_303720:
    // 0x303720: 0xc051d4a  jal         func_147528
label_303724:
    if (ctx->pc == 0x303724u) {
        ctx->pc = 0x303724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303720u;
        // 0x303724: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303728u;
        goto label_303728;
    }
    ctx->pc = 0x303720u;
    SET_GPR_U32(ctx, 31, 0x303728u);
    ctx->pc = 0x303724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303720u;
    // 0x303724: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x303720u, 0x303728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303728u;
label_303728:
    // 0x303728: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x303728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_30372c:
    // 0x30372c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x30372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_303730:
    // 0x303730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_303734:
    // 0x303734: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x303734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_303738:
    // 0x303738: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x303738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30373c:
    // 0x30373c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x30373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_303740:
    // 0x303740: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x303740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303744:
    // 0x303744: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x303744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303748:
    // 0x303748: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x303748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_30374c:
    // 0x30374c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x30374cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_303750:
    // 0x303750: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x303750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_303754:
    // 0x303754: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x303754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_303758:
    // 0x303758: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x303758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30375c:
    // 0x30375c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x30375cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303760:
    // 0x303760: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x303760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_303764:
    // 0x303764: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x303764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_303768:
    // 0x303768: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x303768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_30376c:
    // 0x30376c: 0x10000004  b           . + 4 + (0x4 << 2)
label_303770:
    if (ctx->pc == 0x303770u) {
        ctx->pc = 0x303770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30376Cu;
        // 0x303770: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x303774u;
        goto label_303774;
    }
    ctx->pc = 0x30376Cu;
    {
        const bool branch_taken_0x30376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30376Cu;
        // 0x303770: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30376c) {
            ctx->pc = 0x303780u;
            goto label_303780;
        }
    }
    ctx->pc = 0x303774u;
label_303774:
    // 0x303774: 0xc051d4a  jal         func_147528
label_303778:
    if (ctx->pc == 0x303778u) {
        ctx->pc = 0x303778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303774u;
        // 0x303778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30377Cu;
        goto label_30377c;
    }
    ctx->pc = 0x303774u;
    SET_GPR_U32(ctx, 31, 0x30377Cu);
    ctx->pc = 0x303778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303774u;
    // 0x303778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x303774u, 0x30377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30377Cu;
label_30377c:
    // 0x30377c: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x30377cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_303780:
    // 0x303780: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_303784:
    // 0x303784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x303784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303788:
    // 0x303788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30378c:
    // 0x30378c: 0xc051dca  jal         func_147728
label_303790:
    if (ctx->pc == 0x303790u) {
        ctx->pc = 0x303790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30378Cu;
        // 0x303790: 0x264501b0  addiu       $a1, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303794u;
        goto label_303794;
    }
    ctx->pc = 0x30378Cu;
    SET_GPR_U32(ctx, 31, 0x303794u);
    ctx->pc = 0x303790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30378Cu;
    // 0x303790: 0x264501b0  addiu       $a1, $s2, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x30378Cu, 0x303794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303794u;
label_303794:
    // 0x303794: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x303794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303798:
    // 0x303798: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x303798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30379c:
    // 0x30379c: 0x264501c0  addiu       $a1, $s2, 0x1C0
    ctx->pc = 0x30379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
label_3037a0:
    // 0x3037a0: 0xc051db4  jal         func_1476D0
label_3037a4:
    if (ctx->pc == 0x3037A4u) {
        ctx->pc = 0x3037A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037A0u;
        // 0x3037a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037A8u;
        goto label_3037a8;
    }
    ctx->pc = 0x3037A0u;
    SET_GPR_U32(ctx, 31, 0x3037A8u);
    ctx->pc = 0x3037A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037A0u;
    // 0x3037a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x3037A0u, 0x3037A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037A8u;
label_3037a8:
    // 0x3037a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3037a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3037ac:
    // 0x3037ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3037acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3037b0:
    // 0x3037b0: 0xc051d52  jal         func_147548
label_3037b4:
    if (ctx->pc == 0x3037B4u) {
        ctx->pc = 0x3037B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037B0u;
        // 0x3037b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037B8u;
        goto label_3037b8;
    }
    ctx->pc = 0x3037B0u;
    SET_GPR_U32(ctx, 31, 0x3037B8u);
    ctx->pc = 0x3037B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037B0u;
    // 0x3037b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x3037B0u, 0x3037B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037B8u;
label_3037b8:
    // 0x3037b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3037b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3037bc:
    // 0x3037bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3037bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3037c0:
    // 0x3037c0: 0xc051d52  jal         func_147548
label_3037c4:
    if (ctx->pc == 0x3037C4u) {
        ctx->pc = 0x3037C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037C0u;
        // 0x3037c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037C8u;
        goto label_3037c8;
    }
    ctx->pc = 0x3037C0u;
    SET_GPR_U32(ctx, 31, 0x3037C8u);
    ctx->pc = 0x3037C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037C0u;
    // 0x3037c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x3037C0u, 0x3037C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037C8u;
label_3037c8:
    // 0x3037c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3037cc:
    if (ctx->pc == 0x3037CCu) {
        ctx->pc = 0x3037D0u;
        goto label_3037d0;
    }
    ctx->pc = 0x3037C8u;
    {
        const bool branch_taken_0x3037c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3037c8) {
            ctx->pc = 0x3037ECu;
            goto label_3037ec;
        }
    }
    ctx->pc = 0x3037D0u;
label_3037d0:
    // 0x3037d0: 0xc0ad86c  jal         func_2B61B0
label_3037d4:
    if (ctx->pc == 0x3037D4u) {
        ctx->pc = 0x3037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037D0u;
        // 0x3037d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037D8u;
        goto label_3037d8;
    }
    ctx->pc = 0x3037D0u;
    SET_GPR_U32(ctx, 31, 0x3037D8u);
    ctx->pc = 0x3037D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037D0u;
    // 0x3037d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x3037D0u, 0x3037D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037D8u;
label_3037d8:
    // 0x3037d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3037d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3037dc:
    // 0x3037dc: 0xc051d4a  jal         func_147528
label_3037e0:
    if (ctx->pc == 0x3037E0u) {
        ctx->pc = 0x3037E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037DCu;
        // 0x3037e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3037E4u;
        goto label_3037e4;
    }
    ctx->pc = 0x3037DCu;
    SET_GPR_U32(ctx, 31, 0x3037E4u);
    ctx->pc = 0x3037E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037DCu;
    // 0x3037e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x3037DCu, 0x3037E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3037E4u;
label_3037e4:
    // 0x3037e4: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x3037e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3037e8:
    // 0x3037e8: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x3037e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3037ec:
    // 0x3037ec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x3037ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_3037f0:
    // 0x3037f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3037f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3037f4:
    // 0x3037f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3037f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3037f8:
    // 0x3037f8: 0xc051f22  jal         func_147C88
label_3037fc:
    if (ctx->pc == 0x3037FCu) {
        ctx->pc = 0x3037FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3037F8u;
        // 0x3037fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303800u;
        goto label_303800;
    }
    ctx->pc = 0x3037F8u;
    SET_GPR_U32(ctx, 31, 0x303800u);
    ctx->pc = 0x3037FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3037F8u;
    // 0x3037fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x3037F8u, 0x303800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303800u;
label_303800:
    // 0x303800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x303800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_303804:
    // 0x303804: 0xc0ad88c  jal         func_2B6230
label_303808:
    if (ctx->pc == 0x303808u) {
        ctx->pc = 0x303808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303804u;
        // 0x303808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30380Cu;
        goto label_30380c;
    }
    ctx->pc = 0x303804u;
    SET_GPR_U32(ctx, 31, 0x30380Cu);
    ctx->pc = 0x303808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303804u;
    // 0x303808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x303804u, 0x30380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30380Cu;
label_30380c:
    // 0x30380c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x30380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_303810:
    // 0x303810: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x303810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_303814:
    // 0x303814: 0xc051f18  jal         func_147C60
label_303818:
    if (ctx->pc == 0x303818u) {
        ctx->pc = 0x303818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303814u;
        // 0x303818: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30381Cu;
        goto label_30381c;
    }
    ctx->pc = 0x303814u;
    SET_GPR_U32(ctx, 31, 0x30381Cu);
    ctx->pc = 0x303818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303814u;
    // 0x303818: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x303814u, 0x30381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30381Cu;
label_30381c:
    // 0x30381c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_303820:
    // 0x303820: 0xc0ad8a2  jal         func_2B6288
label_303824:
    if (ctx->pc == 0x303824u) {
        ctx->pc = 0x303824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303820u;
        // 0x303824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303828u;
        goto label_303828;
    }
    ctx->pc = 0x303820u;
    SET_GPR_U32(ctx, 31, 0x303828u);
    ctx->pc = 0x303824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303820u;
    // 0x303824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x303820u, 0x303828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303828u;
label_303828:
    // 0x303828: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x303828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_30382c:
    // 0x30382c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x30382cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_303830:
    // 0x303830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x303830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_303834:
    // 0x303834: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x303834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
label_303838:
    // 0x303838: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x303838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_30383c:
    // 0x30383c: 0x80620137  lb          $v0, 0x137($v1)
    ctx->pc = 0x30383cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 311)));
label_303840:
    // 0x303840: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_303844:
    if (ctx->pc == 0x303844u) {
        ctx->pc = 0x303844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303840u;
        // 0x303844: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303848u;
        goto label_303848;
    }
    ctx->pc = 0x303840u;
    {
        const bool branch_taken_0x303840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303840u;
        // 0x303844: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303840) {
            ctx->pc = 0x3038C8u;
            goto label_3038c8;
        }
    }
    ctx->pc = 0x303848u;
label_303848:
    // 0x303848: 0x90a200bd  lbu         $v0, 0xBD($a1)
    ctx->pc = 0x303848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 189)));
label_30384c:
    // 0x30384c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_303850:
    if (ctx->pc == 0x303850u) {
        ctx->pc = 0x303850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30384Cu;
        // 0x303850: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303854u;
        goto label_303854;
    }
    ctx->pc = 0x30384Cu;
    {
        const bool branch_taken_0x30384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30384Cu;
        // 0x303850: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30384c) {
            ctx->pc = 0x3038CCu;
            goto label_3038cc;
        }
    }
    ctx->pc = 0x303854u;
label_303854:
    // 0x303854: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x303854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_303858:
    // 0x303858: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_30385c:
    if (ctx->pc == 0x30385Cu) {
        ctx->pc = 0x30385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303858u;
        // 0x30385c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303860u;
        goto label_303860;
    }
    ctx->pc = 0x303858u;
    {
        const bool branch_taken_0x303858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303858u;
        // 0x30385c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303858) {
            ctx->pc = 0x303874u;
            goto label_303874;
        }
    }
    ctx->pc = 0x303860u;
label_303860:
    // 0x303860: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x303860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_303864:
    // 0x303864: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x303864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_303868:
    // 0x303868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x303868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30386c:
    // 0x30386c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_303870:
    if (ctx->pc == 0x303870u) {
        ctx->pc = 0x303870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30386Cu;
        // 0x303870: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303874u;
        goto label_303874;
    }
    ctx->pc = 0x30386Cu;
    {
        const bool branch_taken_0x30386c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30386Cu;
        // 0x303870: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30386c) {
            ctx->pc = 0x303888u;
            goto label_303888;
        }
    }
    ctx->pc = 0x303874u;
label_303874:
    // 0x303874: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x303874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_303878:
    // 0x303878: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x303878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_30387c:
    // 0x30387c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30387cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_303880:
    // 0x303880: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_303884:
    if (ctx->pc == 0x303884u) {
        ctx->pc = 0x303884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303880u;
        // 0x303884: 0x80a200bc  lb          $v0, 0xBC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303888u;
        goto label_303888;
    }
    ctx->pc = 0x303880u;
    {
        const bool branch_taken_0x303880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303880) {
            ctx->pc = 0x303884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303880u;
            // 0x303884: 0x80a200bc  lb          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3038BCu;
            goto label_3038bc;
        }
    }
    ctx->pc = 0x303888u;
label_303888:
    // 0x303888: 0xc0be8d4  jal         func_2FA350
label_30388c:
    if (ctx->pc == 0x30388Cu) {
        ctx->pc = 0x30388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303888u;
        // 0x30388c: 0x2644022c  addiu       $a0, $s2, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303890u;
        goto label_303890;
    }
    ctx->pc = 0x303888u;
    SET_GPR_U32(ctx, 31, 0x303890u);
    ctx->pc = 0x30388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303888u;
    // 0x30388c: 0x2644022c  addiu       $a0, $s2, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x303888u, 0x303890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303890u;
label_303890:
    // 0x303890: 0xc641022c  lwc1        $f1, 0x22C($s2)
    ctx->pc = 0x303890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303894:
    // 0x303894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_303898:
    // 0x303898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x303898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30389c:
    // 0x30389c: 0x0  nop
    ctx->pc = 0x30389cu;
    // NOP
label_3038a0:
    // 0x3038a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3038a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3038a4:
    // 0x3038a4: 0x0  nop
    ctx->pc = 0x3038a4u;
    // NOP
label_3038a8:
    // 0x3038a8: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
label_3038ac:
    if (ctx->pc == 0x3038ACu) {
        ctx->pc = 0x3038ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038A8u;
        // 0x3038ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038B0u;
        goto label_3038b0;
    }
    ctx->pc = 0x3038A8u;
    {
        const bool branch_taken_0x3038a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3038a8) {
            ctx->pc = 0x3038ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038A8u;
            // 0x3038ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x3038B0u;
label_3038b0:
    // 0x3038b0: 0x8e440100  lw          $a0, 0x100($s2)
    ctx->pc = 0x3038b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_3038b4:
    // 0x3038b4: 0xae40022c  sw          $zero, 0x22C($s2)
    ctx->pc = 0x3038b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 0));
label_3038b8:
    // 0x3038b8: 0x808200bc  lb          $v0, 0xBC($a0)
    ctx->pc = 0x3038b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 188)));
label_3038bc:
    // 0x3038bc: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x3038bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_3038c0:
    // 0x3038c0: 0x10000041  b           . + 4 + (0x41 << 2)
label_3038c4:
    if (ctx->pc == 0x3038C4u) {
        ctx->pc = 0x3038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038C0u;
        // 0x3038c4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038C8u;
        goto label_3038c8;
    }
    ctx->pc = 0x3038C0u;
    {
        const bool branch_taken_0x3038c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3038C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038C0u;
        // 0x3038c4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038c0) {
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x3038C8u;
label_3038c8:
    // 0x3038c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3038c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3038cc:
    // 0x3038cc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3038ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_3038d0:
    // 0x3038d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3038d4:
    if (ctx->pc == 0x3038D4u) {
        ctx->pc = 0x3038D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D0u;
        // 0x3038d4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038D8u;
        goto label_3038d8;
    }
    ctx->pc = 0x3038D0u;
    {
        const bool branch_taken_0x3038d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3038D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038D0u;
        // 0x3038d4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038d0) {
            ctx->pc = 0x3038ECu;
            goto label_3038ec;
        }
    }
    ctx->pc = 0x3038D8u;
label_3038d8:
    // 0x3038d8: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x3038d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_3038dc:
    // 0x3038dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3038dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_3038e0:
    // 0x3038e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3038e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3038e4:
    // 0x3038e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3038e8:
    if (ctx->pc == 0x3038E8u) {
        ctx->pc = 0x3038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038E4u;
        // 0x3038e8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3038ECu;
        goto label_3038ec;
    }
    ctx->pc = 0x3038E4u;
    {
        const bool branch_taken_0x3038e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3038E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038E4u;
        // 0x3038e8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3038e4) {
            ctx->pc = 0x303900u;
            goto label_303900;
        }
    }
    ctx->pc = 0x3038ECu;
label_3038ec:
    // 0x3038ec: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3038ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_3038f0:
    // 0x3038f0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x3038f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
label_3038f4:
    // 0x3038f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3038f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3038f8:
    // 0x3038f8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_3038fc:
    if (ctx->pc == 0x3038FCu) {
        ctx->pc = 0x3038FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3038F8u;
        // 0x3038fc: 0xc640017c  lwc1        $f0, 0x17C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x303900u;
        goto label_303900;
    }
    ctx->pc = 0x3038F8u;
    {
        const bool branch_taken_0x3038f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3038f8) {
            ctx->pc = 0x3038FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3038F8u;
            // 0x3038fc: 0xc640017c  lwc1        $f0, 0x17C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x303910u;
            goto label_303910;
        }
    }
    ctx->pc = 0x303900u;
label_303900:
    // 0x303900: 0xc0be8f8  jal         func_2FA3E0
label_303904:
    if (ctx->pc == 0x303904u) {
        ctx->pc = 0x303904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303900u;
        // 0x303904: 0x2644017c  addiu       $a0, $s2, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303908u;
        goto label_303908;
    }
    ctx->pc = 0x303900u;
    SET_GPR_U32(ctx, 31, 0x303908u);
    ctx->pc = 0x303904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303900u;
    // 0x303904: 0x2644017c  addiu       $a0, $s2, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA3E0u, 0x303900u, 0x303908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303908u;
label_303908:
    // 0x303908: 0x10000007  b           . + 4 + (0x7 << 2)
label_30390c:
    if (ctx->pc == 0x30390Cu) {
        ctx->pc = 0x30390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303908u;
        // 0x30390c: 0xc640017c  lwc1        $f0, 0x17C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x303910u;
        goto label_303910;
    }
    ctx->pc = 0x303908u;
    {
        const bool branch_taken_0x303908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303908u;
        // 0x30390c: 0xc640017c  lwc1        $f0, 0x17C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x303908) {
            ctx->pc = 0x303928u;
            goto label_303928;
        }
    }
    ctx->pc = 0x303910u;
label_303910:
    // 0x303910: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x303910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_303914:
    // 0x303914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x303914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303918:
    // 0x303918: 0x0  nop
    ctx->pc = 0x303918u;
    // NOP
label_30391c:
    // 0x30391c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30391cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_303920:
    // 0x303920: 0xe640017c  swc1        $f0, 0x17C($s2)
    ctx->pc = 0x303920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
label_303924:
    // 0x303924: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x303924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303928:
    // 0x303928: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x303928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30392c:
    // 0x30392c: 0x0  nop
    ctx->pc = 0x30392cu;
    // NOP
label_303930:
    // 0x303930: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x303930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303934:
    // 0x303934: 0x0  nop
    ctx->pc = 0x303934u;
    // NOP
label_303938:
    // 0x303938: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_30393c:
    if (ctx->pc == 0x30393Cu) {
        ctx->pc = 0x30393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303938u;
        // 0x30393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303940u;
        goto label_303940;
    }
    ctx->pc = 0x303938u;
    {
        const bool branch_taken_0x303938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303938u;
        // 0x30393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303938) {
            ctx->pc = 0x3039C8u;
            goto label_3039c8;
        }
    }
    ctx->pc = 0x303940u;
label_303940:
    // 0x303940: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x303940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_303944:
    // 0x303944: 0x906200bd  lbu         $v0, 0xBD($v1)
    ctx->pc = 0x303944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 189)));
label_303948:
    // 0x303948: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x303948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30394c:
    // 0x30394c: 0x0  nop
    ctx->pc = 0x30394cu;
    // NOP
label_303950:
    // 0x303950: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x303950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_303954:
    // 0x303954: 0xe643017c  swc1        $f3, 0x17C($s2)
    ctx->pc = 0x303954u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
label_303958:
    // 0x303958: 0x80630137  lb          $v1, 0x137($v1)
    ctx->pc = 0x303958u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 311)));
label_30395c:
    // 0x30395c: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_303960:
    if (ctx->pc == 0x303960u) {
        ctx->pc = 0x303960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30395Cu;
        // 0x303960: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x303964u;
        goto label_303964;
    }
    ctx->pc = 0x30395Cu;
    {
        const bool branch_taken_0x30395c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30395c) {
            ctx->pc = 0x303960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30395Cu;
            // 0x303960: 0x8e430100  lw          $v1, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3039BCu;
            goto label_3039bc;
        }
    }
    ctx->pc = 0x303964u;
label_303964:
    // 0x303964: 0x86420188  lh          $v0, 0x188($s2)
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 392)));
label_303968:
    // 0x303968: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x303968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30396c:
    // 0x30396c: 0x0  nop
    ctx->pc = 0x30396cu;
    // NOP
label_303970:
    // 0x303970: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x303970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_303974:
    // 0x303974: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x303974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_303978:
    // 0x303978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30397c:
    // 0x30397c: 0x0  nop
    ctx->pc = 0x30397cu;
    // NOP
label_303980:
    // 0x303980: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_303984:
    // 0x303984: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x303984u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_303988:
    // 0x303988: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x303988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_30398c:
    // 0x30398c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30398cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_303990:
    // 0x303990: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x303990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_303994:
    // 0x303994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_303998:
    // 0x303998: 0x0  nop
    ctx->pc = 0x303998u;
    // NOP
label_30399c:
    // 0x30399c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30399cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3039a0:
    // 0x3039a0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3039a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3039a4:
    // 0x3039a4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3039a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3039a8:
    // 0x3039a8: 0x0  nop
    ctx->pc = 0x3039a8u;
    // NOP
label_3039ac:
    // 0x3039ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3039b0:
    if (ctx->pc == 0x3039B0u) {
        ctx->pc = 0x3039B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039ACu;
        // 0x3039b0: 0xe640017c  swc1        $f0, 0x17C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3039B4u;
        goto label_3039b4;
    }
    ctx->pc = 0x3039ACu;
    {
        const bool branch_taken_0x3039ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3039B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039ACu;
        // 0x3039b0: 0xe640017c  swc1        $f0, 0x17C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039ac) {
            ctx->pc = 0x3039B8u;
            goto label_3039b8;
        }
    }
    ctx->pc = 0x3039B4u;
label_3039b4:
    // 0x3039b4: 0xe644017c  swc1        $f4, 0x17C($s2)
    ctx->pc = 0x3039b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 380), bits); }
label_3039b8:
    // 0x3039b8: 0x8e430100  lw          $v1, 0x100($s2)
    ctx->pc = 0x3039b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_3039bc:
    // 0x3039bc: 0x806200bc  lb          $v0, 0xBC($v1)
    ctx->pc = 0x3039bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 188)));
label_3039c0:
    // 0x3039c0: 0x28440001  slti        $a0, $v0, 0x1
    ctx->pc = 0x3039c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_3039c4:
    // 0x3039c4: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3039c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3039c8:
    // 0x3039c8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3039c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3039cc:
    // 0x3039cc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3039ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3039d0:
    // 0x3039d0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3039d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3039d4:
    // 0x3039d4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3039d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3039d8:
    // 0x3039d8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3039d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3039dc:
    // 0x3039dc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3039dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3039e0:
    // 0x3039e0: 0x3e00008  jr          $ra
label_3039e4:
    if (ctx->pc == 0x3039E4u) {
        ctx->pc = 0x3039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E0u;
        // 0x3039e4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3039E8u;
        goto label_fallthrough_0x3039e0;
    }
    ctx->pc = 0x3039E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039E0u;
        // 0x3039e4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3039E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3039e0:
    ctx->pc = 0x3039E8u;
}
