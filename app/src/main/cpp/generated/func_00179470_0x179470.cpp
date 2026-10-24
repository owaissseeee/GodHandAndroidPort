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

// Function: func_00179470
// Address: 0x179470 - 0x179798
void func_00179470_0x179470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179470_0x179470");
#endif

    switch (ctx->pc) {
        case 0x179470u: goto label_179470;
        case 0x179474u: goto label_179474;
        case 0x179478u: goto label_179478;
        case 0x17947cu: goto label_17947c;
        case 0x179480u: goto label_179480;
        case 0x179484u: goto label_179484;
        case 0x179488u: goto label_179488;
        case 0x17948cu: goto label_17948c;
        case 0x179490u: goto label_179490;
        case 0x179494u: goto label_179494;
        case 0x179498u: goto label_179498;
        case 0x17949cu: goto label_17949c;
        case 0x1794a0u: goto label_1794a0;
        case 0x1794a4u: goto label_1794a4;
        case 0x1794a8u: goto label_1794a8;
        case 0x1794acu: goto label_1794ac;
        case 0x1794b0u: goto label_1794b0;
        case 0x1794b4u: goto label_1794b4;
        case 0x1794b8u: goto label_1794b8;
        case 0x1794bcu: goto label_1794bc;
        case 0x1794c0u: goto label_1794c0;
        case 0x1794c4u: goto label_1794c4;
        case 0x1794c8u: goto label_1794c8;
        case 0x1794ccu: goto label_1794cc;
        case 0x1794d0u: goto label_1794d0;
        case 0x1794d4u: goto label_1794d4;
        case 0x1794d8u: goto label_1794d8;
        case 0x1794dcu: goto label_1794dc;
        case 0x1794e0u: goto label_1794e0;
        case 0x1794e4u: goto label_1794e4;
        case 0x1794e8u: goto label_1794e8;
        case 0x1794ecu: goto label_1794ec;
        case 0x1794f0u: goto label_1794f0;
        case 0x1794f4u: goto label_1794f4;
        case 0x1794f8u: goto label_1794f8;
        case 0x1794fcu: goto label_1794fc;
        case 0x179500u: goto label_179500;
        case 0x179504u: goto label_179504;
        case 0x179508u: goto label_179508;
        case 0x17950cu: goto label_17950c;
        case 0x179510u: goto label_179510;
        case 0x179514u: goto label_179514;
        case 0x179518u: goto label_179518;
        case 0x17951cu: goto label_17951c;
        case 0x179520u: goto label_179520;
        case 0x179524u: goto label_179524;
        case 0x179528u: goto label_179528;
        case 0x17952cu: goto label_17952c;
        case 0x179530u: goto label_179530;
        case 0x179534u: goto label_179534;
        case 0x179538u: goto label_179538;
        case 0x17953cu: goto label_17953c;
        case 0x179540u: goto label_179540;
        case 0x179544u: goto label_179544;
        case 0x179548u: goto label_179548;
        case 0x17954cu: goto label_17954c;
        case 0x179550u: goto label_179550;
        case 0x179554u: goto label_179554;
        case 0x179558u: goto label_179558;
        case 0x17955cu: goto label_17955c;
        case 0x179560u: goto label_179560;
        case 0x179564u: goto label_179564;
        case 0x179568u: goto label_179568;
        case 0x17956cu: goto label_17956c;
        case 0x179570u: goto label_179570;
        case 0x179574u: goto label_179574;
        case 0x179578u: goto label_179578;
        case 0x17957cu: goto label_17957c;
        case 0x179580u: goto label_179580;
        case 0x179584u: goto label_179584;
        case 0x179588u: goto label_179588;
        case 0x17958cu: goto label_17958c;
        case 0x179590u: goto label_179590;
        case 0x179594u: goto label_179594;
        case 0x179598u: goto label_179598;
        case 0x17959cu: goto label_17959c;
        case 0x1795a0u: goto label_1795a0;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795a8u: goto label_1795a8;
        case 0x1795acu: goto label_1795ac;
        case 0x1795b0u: goto label_1795b0;
        case 0x1795b4u: goto label_1795b4;
        case 0x1795b8u: goto label_1795b8;
        case 0x1795bcu: goto label_1795bc;
        case 0x1795c0u: goto label_1795c0;
        case 0x1795c4u: goto label_1795c4;
        case 0x1795c8u: goto label_1795c8;
        case 0x1795ccu: goto label_1795cc;
        case 0x1795d0u: goto label_1795d0;
        case 0x1795d4u: goto label_1795d4;
        case 0x1795d8u: goto label_1795d8;
        case 0x1795dcu: goto label_1795dc;
        case 0x1795e0u: goto label_1795e0;
        case 0x1795e4u: goto label_1795e4;
        case 0x1795e8u: goto label_1795e8;
        case 0x1795ecu: goto label_1795ec;
        case 0x1795f0u: goto label_1795f0;
        case 0x1795f4u: goto label_1795f4;
        case 0x1795f8u: goto label_1795f8;
        case 0x1795fcu: goto label_1795fc;
        case 0x179600u: goto label_179600;
        case 0x179604u: goto label_179604;
        case 0x179608u: goto label_179608;
        case 0x17960cu: goto label_17960c;
        case 0x179610u: goto label_179610;
        case 0x179614u: goto label_179614;
        case 0x179618u: goto label_179618;
        case 0x17961cu: goto label_17961c;
        case 0x179620u: goto label_179620;
        case 0x179624u: goto label_179624;
        case 0x179628u: goto label_179628;
        case 0x17962cu: goto label_17962c;
        case 0x179630u: goto label_179630;
        case 0x179634u: goto label_179634;
        case 0x179638u: goto label_179638;
        case 0x17963cu: goto label_17963c;
        case 0x179640u: goto label_179640;
        case 0x179644u: goto label_179644;
        case 0x179648u: goto label_179648;
        case 0x17964cu: goto label_17964c;
        case 0x179650u: goto label_179650;
        case 0x179654u: goto label_179654;
        case 0x179658u: goto label_179658;
        case 0x17965cu: goto label_17965c;
        case 0x179660u: goto label_179660;
        case 0x179664u: goto label_179664;
        case 0x179668u: goto label_179668;
        case 0x17966cu: goto label_17966c;
        case 0x179670u: goto label_179670;
        case 0x179674u: goto label_179674;
        case 0x179678u: goto label_179678;
        case 0x17967cu: goto label_17967c;
        case 0x179680u: goto label_179680;
        case 0x179684u: goto label_179684;
        case 0x179688u: goto label_179688;
        case 0x17968cu: goto label_17968c;
        case 0x179690u: goto label_179690;
        case 0x179694u: goto label_179694;
        case 0x179698u: goto label_179698;
        case 0x17969cu: goto label_17969c;
        case 0x1796a0u: goto label_1796a0;
        case 0x1796a4u: goto label_1796a4;
        case 0x1796a8u: goto label_1796a8;
        case 0x1796acu: goto label_1796ac;
        case 0x1796b0u: goto label_1796b0;
        case 0x1796b4u: goto label_1796b4;
        case 0x1796b8u: goto label_1796b8;
        case 0x1796bcu: goto label_1796bc;
        case 0x1796c0u: goto label_1796c0;
        case 0x1796c4u: goto label_1796c4;
        case 0x1796c8u: goto label_1796c8;
        case 0x1796ccu: goto label_1796cc;
        case 0x1796d0u: goto label_1796d0;
        case 0x1796d4u: goto label_1796d4;
        case 0x1796d8u: goto label_1796d8;
        case 0x1796dcu: goto label_1796dc;
        case 0x1796e0u: goto label_1796e0;
        case 0x1796e4u: goto label_1796e4;
        case 0x1796e8u: goto label_1796e8;
        case 0x1796ecu: goto label_1796ec;
        case 0x1796f0u: goto label_1796f0;
        case 0x1796f4u: goto label_1796f4;
        case 0x1796f8u: goto label_1796f8;
        case 0x1796fcu: goto label_1796fc;
        case 0x179700u: goto label_179700;
        case 0x179704u: goto label_179704;
        case 0x179708u: goto label_179708;
        case 0x17970cu: goto label_17970c;
        case 0x179710u: goto label_179710;
        case 0x179714u: goto label_179714;
        case 0x179718u: goto label_179718;
        case 0x17971cu: goto label_17971c;
        case 0x179720u: goto label_179720;
        case 0x179724u: goto label_179724;
        case 0x179728u: goto label_179728;
        case 0x17972cu: goto label_17972c;
        case 0x179730u: goto label_179730;
        case 0x179734u: goto label_179734;
        case 0x179738u: goto label_179738;
        case 0x17973cu: goto label_17973c;
        case 0x179740u: goto label_179740;
        case 0x179744u: goto label_179744;
        case 0x179748u: goto label_179748;
        case 0x17974cu: goto label_17974c;
        case 0x179750u: goto label_179750;
        case 0x179754u: goto label_179754;
        case 0x179758u: goto label_179758;
        case 0x17975cu: goto label_17975c;
        case 0x179760u: goto label_179760;
        case 0x179764u: goto label_179764;
        case 0x179768u: goto label_179768;
        case 0x17976cu: goto label_17976c;
        case 0x179770u: goto label_179770;
        case 0x179774u: goto label_179774;
        case 0x179778u: goto label_179778;
        case 0x17977cu: goto label_17977c;
        case 0x179780u: goto label_179780;
        case 0x179784u: goto label_179784;
        case 0x179788u: goto label_179788;
        case 0x17978cu: goto label_17978c;
        case 0x179790u: goto label_179790;
        case 0x179794u: goto label_179794;
        default: break;
    }

    ctx->pc = 0x179470u;

label_179470:
    // 0x179470: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x179470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_179474:
    // 0x179474: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x179474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_179478:
    // 0x179478: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x179478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_17947c:
    // 0x17947c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179480:
    // 0x179480: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x179480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_179484:
    // 0x179484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179488:
    // 0x179488: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x179488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_17948c:
    // 0x17948c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x17948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_179490:
    // 0x179490: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x179490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_179494:
    // 0x179494: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x179494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_179498:
    // 0x179498: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x179498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_17949c:
    // 0x17949c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1794a0:
    // 0x1794a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1794a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1794a4:
    // 0x1794a4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1794a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1794a8:
    // 0x1794a8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1794a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1794ac:
    // 0x1794ac: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1794acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1794b0:
    // 0x1794b0: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_1794b4:
    if (ctx->pc == 0x1794B4u) {
        ctx->pc = 0x1794B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B0u;
        // 0x1794b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794B8u;
        goto label_1794b8;
    }
    ctx->pc = 0x1794B0u;
    {
        const bool branch_taken_0x1794b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1794B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B0u;
        // 0x1794b4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794b0) {
            ctx->pc = 0x17958Cu;
            goto label_17958c;
        }
    }
    ctx->pc = 0x1794B8u;
label_1794b8:
    // 0x1794b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1794bc:
    if (ctx->pc == 0x1794BCu) {
        ctx->pc = 0x1794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B8u;
        // 0x1794bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794C0u;
        goto label_1794c0;
    }
    ctx->pc = 0x1794B8u;
    {
        const bool branch_taken_0x1794b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B8u;
        // 0x1794bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794b8) {
            ctx->pc = 0x1794D0u;
            goto label_1794d0;
        }
    }
    ctx->pc = 0x1794C0u;
label_1794c0:
    // 0x1794c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1794c4:
    if (ctx->pc == 0x1794C4u) {
        ctx->pc = 0x1794C8u;
        goto label_1794c8;
    }
    ctx->pc = 0x1794C0u;
    {
        const bool branch_taken_0x1794c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1794c0) {
            ctx->pc = 0x1794E8u;
            goto label_1794e8;
        }
    }
    ctx->pc = 0x1794C8u;
label_1794c8:
    // 0x1794c8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1794cc:
    if (ctx->pc == 0x1794CCu) {
        ctx->pc = 0x1794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794C8u;
        // 0x1794cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794D0u;
        goto label_1794d0;
    }
    ctx->pc = 0x1794C8u;
    {
        const bool branch_taken_0x1794c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794C8u;
        // 0x1794cc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794c8) {
            ctx->pc = 0x179608u;
            goto label_179608;
        }
    }
    ctx->pc = 0x1794D0u;
label_1794d0:
    // 0x1794d0: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_1794d4:
    if (ctx->pc == 0x1794D4u) {
        ctx->pc = 0x1794D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794D0u;
        // 0x1794d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794D8u;
        goto label_1794d8;
    }
    ctx->pc = 0x1794D0u;
    {
        const bool branch_taken_0x1794d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1794D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794D0u;
        // 0x1794d4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794d0) {
            ctx->pc = 0x1795B4u;
            goto label_1795b4;
        }
    }
    ctx->pc = 0x1794D8u;
label_1794d8:
    // 0x1794d8: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_1794dc:
    if (ctx->pc == 0x1794DCu) {
        ctx->pc = 0x1794DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794D8u;
        // 0x1794dc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794E0u;
        goto label_1794e0;
    }
    ctx->pc = 0x1794D8u;
    {
        const bool branch_taken_0x1794d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1794d8) {
            ctx->pc = 0x1794DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1794D8u;
            // 0x1794dc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1795F8u;
            goto label_1795f8;
        }
    }
    ctx->pc = 0x1794E0u;
label_1794e0:
    // 0x1794e0: 0x10000049  b           . + 4 + (0x49 << 2)
label_1794e4:
    if (ctx->pc == 0x1794E4u) {
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1794E8u;
        goto label_1794e8;
    }
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x179608u;
            goto label_179608;
        }
    }
    ctx->pc = 0x1794E8u;
label_1794e8:
    // 0x1794e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1794e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1794ec:
    // 0x1794ec: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1794ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1794f0:
    // 0x1794f0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1794f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1794f4:
    // 0x1794f4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1794f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1794f8:
    // 0x1794f8: 0x40f809  jalr        $v0
label_1794fc:
    if (ctx->pc == 0x1794FCu) {
        ctx->pc = 0x1794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794F8u;
        // 0x1794fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179500u;
        goto label_179500;
    }
    ctx->pc = 0x1794F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179500u);
        ctx->pc = 0x1794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794F8u;
        // 0x1794fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1794F8u, 0x179500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179500u;
label_179500:
    // 0x179500: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_179504:
    if (ctx->pc == 0x179504u) {
        ctx->pc = 0x179508u;
        goto label_179508;
    }
    ctx->pc = 0x179500u;
    {
        const bool branch_taken_0x179500 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x179500) {
            ctx->pc = 0x179520u;
            goto label_179520;
        }
    }
    ctx->pc = 0x179508u;
label_179508:
    // 0x179508: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x179508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17950c:
    // 0x17950c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17950cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_179510:
    // 0x179510: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x179510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_179514:
    // 0x179514: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x179514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_179518:
    // 0x179518: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x179518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17951c:
    // 0x17951c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_179520:
    // 0x179520: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x179520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_179524:
    // 0x179524: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x179524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_179528:
    // 0x179528: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x179528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17952c:
    // 0x17952c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179530:
    // 0x179530: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x179530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_179534:
    // 0x179534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179538:
    // 0x179538: 0xc0c1a0e  jal         func_306838
label_17953c:
    if (ctx->pc == 0x17953Cu) {
        ctx->pc = 0x17953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179538u;
        // 0x17953c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179540u;
        goto label_179540;
    }
    ctx->pc = 0x179538u;
    SET_GPR_U32(ctx, 31, 0x179540u);
    ctx->pc = 0x17953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179538u;
    // 0x17953c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x179538u, 0x179540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179540u;
label_179540:
    // 0x179540: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_179544:
    // 0x179544: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179548:
    // 0x179548: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x179548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17954c:
    // 0x17954c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17954cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179550:
    // 0x179550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_179554:
    // 0x179554: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179558:
    // 0x179558: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x179558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17955c:
    // 0x17955c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17955cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179560:
    // 0x179560: 0xc0b2e92  jal         func_2CBA48
label_179564:
    if (ctx->pc == 0x179564u) {
        ctx->pc = 0x179564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179560u;
        // 0x179564: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179568u;
        goto label_179568;
    }
    ctx->pc = 0x179560u;
    SET_GPR_U32(ctx, 31, 0x179568u);
    ctx->pc = 0x179564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179560u;
    // 0x179564: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x179560u, 0x179568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179568u;
label_179568:
    // 0x179568: 0xc05e67e  jal         func_1799F8
label_17956c:
    if (ctx->pc == 0x17956Cu) {
        ctx->pc = 0x17956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179568u;
        // 0x17956c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179570u;
        goto label_179570;
    }
    ctx->pc = 0x179568u;
    SET_GPR_U32(ctx, 31, 0x179570u);
    ctx->pc = 0x17956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179568u;
    // 0x17956c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1799F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1799F8u, 0x179568u, 0x179570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179570u;
label_179570:
    // 0x179570: 0xc06de42  jal         func_1B7908
label_179574:
    if (ctx->pc == 0x179574u) {
        ctx->pc = 0x179574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179570u;
        // 0x179574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179578u;
        goto label_179578;
    }
    ctx->pc = 0x179570u;
    SET_GPR_U32(ctx, 31, 0x179578u);
    ctx->pc = 0x179574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179570u;
    // 0x179574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x179570u, 0x179578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179578u;
label_179578:
    // 0x179578: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x179578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_17957c:
    // 0x17957c: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x17957cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_179580:
    // 0x179580: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x179580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_179584:
    // 0x179584: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x179584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_179588:
    // 0x179588: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x179588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_17958c:
    // 0x17958c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x17958cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_179590:
    // 0x179590: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_179594:
    // 0x179594: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x179594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_179598:
    // 0x179598: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_17959c:
    if (ctx->pc == 0x17959Cu) {
        ctx->pc = 0x17959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179598u;
        // 0x17959c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795A0u;
        goto label_1795a0;
    }
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179598u;
        // 0x17959c: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179598) {
            ctx->pc = 0x179604u;
            goto label_179604;
        }
    }
    ctx->pc = 0x1795A0u;
label_1795a0:
    // 0x1795a0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1795a4:
    // 0x1795a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1795a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1795a8:
    // 0x1795a8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x1795a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_1795ac:
    // 0x1795ac: 0x10000013  b           . + 4 + (0x13 << 2)
label_1795b0:
    if (ctx->pc == 0x1795B0u) {
        ctx->pc = 0x1795B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795ACu;
        // 0x1795b0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795B4u;
        goto label_1795b4;
    }
    ctx->pc = 0x1795ACu;
    {
        const bool branch_taken_0x1795ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795ACu;
        // 0x1795b0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795ac) {
            ctx->pc = 0x1795FCu;
            goto label_1795fc;
        }
    }
    ctx->pc = 0x1795B4u;
label_1795b4:
    // 0x1795b4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x1795b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_1795b8:
    // 0x1795b8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1795bc:
    // 0x1795bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1795bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1795c0:
    // 0x1795c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1795c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1795c4:
    // 0x1795c4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1795c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1795c8:
    // 0x1795c8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x1795c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_1795cc:
    // 0x1795cc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1795ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1795d0:
    // 0x1795d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1795d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1795d4:
    // 0x1795d4: 0x0  nop
    ctx->pc = 0x1795d4u;
    // NOP
label_1795d8:
    // 0x1795d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1795d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1795dc:
    // 0x1795dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1795dcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1795e0:
    // 0x1795e0: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1795e4:
    if (ctx->pc == 0x1795E4u) {
        ctx->pc = 0x1795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E0u;
        // 0x1795e4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795E8u;
        goto label_1795e8;
    }
    ctx->pc = 0x1795E0u;
    {
        const bool branch_taken_0x1795e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E0u;
        // 0x1795e4: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795e0) {
            ctx->pc = 0x179604u;
            goto label_179604;
        }
    }
    ctx->pc = 0x1795E8u;
label_1795e8:
    // 0x1795e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1795e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1795ec:
    // 0x1795ec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1795ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1795f0:
    // 0x1795f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1795f4:
    if (ctx->pc == 0x1795F4u) {
        ctx->pc = 0x1795F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795F0u;
        // 0x1795f4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1795F8u;
        goto label_1795f8;
    }
    ctx->pc = 0x1795F0u;
    {
        const bool branch_taken_0x1795f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795F0u;
        // 0x1795f4: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795f0) {
            ctx->pc = 0x179600u;
            goto label_179600;
        }
    }
    ctx->pc = 0x1795F8u;
label_1795f8:
    // 0x1795f8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1795f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1795fc:
    // 0x1795fc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1795fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_179600:
    // 0x179600: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x179600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_179604:
    // 0x179604: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_179608:
    // 0x179608: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x179608u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17960c:
    // 0x17960c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_179610:
    if (ctx->pc == 0x179610u) {
        ctx->pc = 0x179610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17960Cu;
        // 0x179610: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179614u;
        goto label_179614;
    }
    ctx->pc = 0x17960Cu;
    {
        const bool branch_taken_0x17960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x179610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17960Cu;
        // 0x179610: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17960c) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x179614u;
label_179614:
    // 0x179614: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x179614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_179618:
    // 0x179618: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x179618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17961c:
    // 0x17961c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x17961cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_179620:
    // 0x179620: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x179620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_179624:
    // 0x179624: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x179624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_179628:
    // 0x179628: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x179628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_17962c:
    // 0x17962c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x17962cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_179630:
    // 0x179630: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x179630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_179634:
    // 0x179634: 0x0  nop
    ctx->pc = 0x179634u;
    // NOP
label_179638:
    // 0x179638: 0xc05ce40  jal         func_173900
label_17963c:
    if (ctx->pc == 0x17963Cu) {
        ctx->pc = 0x17963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179638u;
        // 0x17963c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179640u;
        goto label_179640;
    }
    ctx->pc = 0x179638u;
    SET_GPR_U32(ctx, 31, 0x179640u);
    ctx->pc = 0x17963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179638u;
    // 0x17963c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x179638u, 0x179640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179640u;
label_179640:
    // 0x179640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179644:
    // 0x179644: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_179648:
    if (ctx->pc == 0x179648u) {
        ctx->pc = 0x179648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179644u;
        // 0x179648: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17964Cu;
        goto label_17964c;
    }
    ctx->pc = 0x179644u;
    {
        const bool branch_taken_0x179644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x179644) {
            ctx->pc = 0x179648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179644u;
            // 0x179648: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179734u;
            goto label_179734;
        }
    }
    ctx->pc = 0x17964Cu;
label_17964c:
    // 0x17964c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_179650:
    // 0x179650: 0xc0a4bd4  jal         func_292F50
label_179654:
    if (ctx->pc == 0x179654u) {
        ctx->pc = 0x179654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179650u;
        // 0x179654: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179658u;
        goto label_179658;
    }
    ctx->pc = 0x179650u;
    SET_GPR_U32(ctx, 31, 0x179658u);
    ctx->pc = 0x179654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179650u;
    // 0x179654: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x179650u, 0x179658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179658u;
label_179658:
    // 0x179658: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x179658u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17965c:
    // 0x17965c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x17965cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_179660:
    // 0x179660: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_179664:
    // 0x179664: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179664u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179668:
    // 0x179668: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x179668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_17966c:
    // 0x17966c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x17966cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_179670:
    // 0x179670: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x179670u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_179674:
    // 0x179674: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_179678:
    // 0x179678: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x179678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_17967c:
    // 0x17967c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x17967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_179680:
    // 0x179680: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x179680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_179684:
    // 0x179684: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x179684u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_179688:
    // 0x179688: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x179688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_17968c:
    // 0x17968c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x17968cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_179690:
    // 0x179690: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x179690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_179694:
    // 0x179694: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_179698:
    // 0x179698: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x179698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17969c:
    // 0x17969c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x17969cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1796a0:
    // 0x1796a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1796a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1796a4:
    // 0x1796a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1796a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1796a8:
    // 0x1796a8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1796a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1796ac:
    // 0x1796ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1796acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1796b0:
    // 0x1796b0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1796b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1796b4:
    // 0x1796b4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1796b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1796b8:
    // 0x1796b8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1796b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1796bc:
    // 0x1796bc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1796bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1796c0:
    // 0x1796c0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1796c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1796c4:
    // 0x1796c4: 0xc07df68  jal         func_1F7DA0
label_1796c8:
    if (ctx->pc == 0x1796C8u) {
        ctx->pc = 0x1796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796C4u;
        // 0x1796c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1796CCu;
        goto label_1796cc;
    }
    ctx->pc = 0x1796C4u;
    SET_GPR_U32(ctx, 31, 0x1796CCu);
    ctx->pc = 0x1796C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796C4u;
    // 0x1796c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1796C4u, 0x1796CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796CCu;
label_1796cc:
    // 0x1796cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1796ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1796d0:
    // 0x1796d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1796d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1796d4:
    // 0x1796d4: 0xc051dca  jal         func_147728
label_1796d8:
    if (ctx->pc == 0x1796D8u) {
        ctx->pc = 0x1796D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796D4u;
        // 0x1796d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1796DCu;
        goto label_1796dc;
    }
    ctx->pc = 0x1796D4u;
    SET_GPR_U32(ctx, 31, 0x1796DCu);
    ctx->pc = 0x1796D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796D4u;
    // 0x1796d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1796D4u, 0x1796DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796DCu;
label_1796dc:
    // 0x1796dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1796e0:
    // 0x1796e0: 0xc051f10  jal         func_147C40
label_1796e4:
    if (ctx->pc == 0x1796E4u) {
        ctx->pc = 0x1796E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796E0u;
        // 0x1796e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1796E8u;
        goto label_1796e8;
    }
    ctx->pc = 0x1796E0u;
    SET_GPR_U32(ctx, 31, 0x1796E8u);
    ctx->pc = 0x1796E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796E0u;
    // 0x1796e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1796E0u, 0x1796E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796E8u;
label_1796e8:
    // 0x1796e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1796e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1796ec:
    // 0x1796ec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1796ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1796f0:
    // 0x1796f0: 0xc051efe  jal         func_147BF8
label_1796f4:
    if (ctx->pc == 0x1796F4u) {
        ctx->pc = 0x1796F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796F0u;
        // 0x1796f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1796F8u;
        goto label_1796f8;
    }
    ctx->pc = 0x1796F0u;
    SET_GPR_U32(ctx, 31, 0x1796F8u);
    ctx->pc = 0x1796F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796F0u;
    // 0x1796f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1796F0u, 0x1796F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796F8u;
label_1796f8:
    // 0x1796f8: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1796f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1796fc:
    // 0x1796fc: 0xc051d4a  jal         func_147528
label_179700:
    if (ctx->pc == 0x179700u) {
        ctx->pc = 0x179700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796FCu;
        // 0x179700: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179704u;
        goto label_179704;
    }
    ctx->pc = 0x1796FCu;
    SET_GPR_U32(ctx, 31, 0x179704u);
    ctx->pc = 0x179700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796FCu;
    // 0x179700: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1796FCu, 0x179704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179704u;
label_179704:
    // 0x179704: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x179704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_179708:
    // 0x179708: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x179708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17970c:
    // 0x17970c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17970cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_179710:
    // 0x179710: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x179710u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_179714:
    // 0x179714: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x179714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_179718:
    // 0x179718: 0x0  nop
    ctx->pc = 0x179718u;
    // NOP
label_17971c:
    // 0x17971c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_179720:
    if (ctx->pc == 0x179720u) {
        ctx->pc = 0x179720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17971Cu;
        // 0x179720: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x179724u;
        goto label_179724;
    }
    ctx->pc = 0x17971Cu;
    {
        const bool branch_taken_0x17971c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x179720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17971Cu;
        // 0x179720: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17971c) {
            ctx->pc = 0x179730u;
            goto label_179730;
        }
    }
    ctx->pc = 0x179724u;
label_179724:
    // 0x179724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x179724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179728:
    // 0x179728: 0xc05bd90  jal         func_16F640
label_17972c:
    if (ctx->pc == 0x17972Cu) {
        ctx->pc = 0x17972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179728u;
        // 0x17972c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179730u;
        goto label_179730;
    }
    ctx->pc = 0x179728u;
    SET_GPR_U32(ctx, 31, 0x179730u);
    ctx->pc = 0x17972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179728u;
    // 0x17972c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x179728u, 0x179730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179730u;
label_179730:
    // 0x179730: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_179734:
    // 0x179734: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x179734u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_179738:
    // 0x179738: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_17973c:
    // 0x17973c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x17973cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_179740:
    // 0x179740: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_179744:
    // 0x179744: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x179744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_179748:
    // 0x179748: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17974c:
    if (ctx->pc == 0x17974Cu) {
        ctx->pc = 0x17974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179748u;
        // 0x17974c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179750u;
        goto label_179750;
    }
    ctx->pc = 0x179748u;
    {
        const bool branch_taken_0x179748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179748u;
        // 0x17974c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179748) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x179750u;
label_179750:
    // 0x179750: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_179754:
    // 0x179754: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_179758:
    if (ctx->pc == 0x179758u) {
        ctx->pc = 0x17975Cu;
        goto label_17975c;
    }
    ctx->pc = 0x179754u;
    {
        const bool branch_taken_0x179754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x179754) {
            ctx->pc = 0x179638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179638;
        }
    }
    ctx->pc = 0x17975Cu;
label_17975c:
    // 0x17975c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x17975cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_179760:
    // 0x179760: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x179760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_179764:
    // 0x179764: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x179764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_179768:
    // 0x179768: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x179768u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_17976c:
    // 0x17976c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x17976cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_179770:
    // 0x179770: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x179770u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_179774:
    // 0x179774: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x179774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_179778:
    // 0x179778: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x179778u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17977c:
    // 0x17977c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17977cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_179780:
    // 0x179780: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x179780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_179784:
    // 0x179784: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x179784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_179788:
    // 0x179788: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x179788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17978c:
    // 0x17978c: 0x3e00008  jr          $ra
label_179790:
    if (ctx->pc == 0x179790u) {
        ctx->pc = 0x179790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17978Cu;
        // 0x179790: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179794u;
        goto label_179794;
    }
    ctx->pc = 0x17978Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17978Cu;
        // 0x179790: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17978Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179794u;
label_179794:
    // 0x179794: 0x0  nop
    ctx->pc = 0x179794u;
    // NOP
    ctx->pc = 0x179798u;
}
