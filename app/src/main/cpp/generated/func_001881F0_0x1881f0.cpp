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

// Function: func_001881F0
// Address: 0x1881f0 - 0x188528
void func_001881F0_0x1881f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001881F0_0x1881f0");
#endif

    switch (ctx->pc) {
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        case 0x188214u: goto label_188214;
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884d4u: goto label_1884d4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884dcu: goto label_1884dc;
        case 0x1884e0u: goto label_1884e0;
        case 0x1884e4u: goto label_1884e4;
        case 0x1884e8u: goto label_1884e8;
        case 0x1884ecu: goto label_1884ec;
        case 0x1884f0u: goto label_1884f0;
        case 0x1884f4u: goto label_1884f4;
        case 0x1884f8u: goto label_1884f8;
        case 0x1884fcu: goto label_1884fc;
        case 0x188500u: goto label_188500;
        case 0x188504u: goto label_188504;
        case 0x188508u: goto label_188508;
        case 0x18850cu: goto label_18850c;
        case 0x188510u: goto label_188510;
        case 0x188514u: goto label_188514;
        case 0x188518u: goto label_188518;
        case 0x18851cu: goto label_18851c;
        case 0x188520u: goto label_188520;
        case 0x188524u: goto label_188524;
        default: break;
    }

    ctx->pc = 0x1881f0u;

label_1881f0:
    // 0x1881f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1881f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1881f4:
    // 0x1881f4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1881f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1881f8:
    // 0x1881f8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1881f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1881fc:
    // 0x1881fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1881fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188200:
    // 0x188200: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x188200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_188204:
    // 0x188204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188208:
    // 0x188208: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x188208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18820c:
    // 0x18820c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_188210:
    // 0x188210: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x188210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_188214:
    // 0x188214: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x188214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_188218:
    // 0x188218: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x188218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18821c:
    // 0x18821c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_188220:
    // 0x188220: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x188220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_188224:
    // 0x188224: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x188224u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_188228:
    // 0x188228: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x188228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18822c:
    // 0x18822c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18822cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_188230:
    // 0x188230: 0x1070003b  beq         $v1, $s0, . + 4 + (0x3B << 2)
label_188234:
    if (ctx->pc == 0x188234u) {
        ctx->pc = 0x188234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188230u;
        // 0x188234: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188238u;
        goto label_188238;
    }
    ctx->pc = 0x188230u;
    {
        const bool branch_taken_0x188230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x188234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188230u;
        // 0x188234: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188230) {
            ctx->pc = 0x188320u;
            goto label_188320;
        }
    }
    ctx->pc = 0x188238u;
label_188238:
    // 0x188238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18823c:
    if (ctx->pc == 0x18823Cu) {
        ctx->pc = 0x18823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188238u;
        // 0x18823c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188240u;
        goto label_188240;
    }
    ctx->pc = 0x188238u;
    {
        const bool branch_taken_0x188238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188238u;
        // 0x18823c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188238) {
            ctx->pc = 0x188250u;
            goto label_188250;
        }
    }
    ctx->pc = 0x188240u;
label_188240:
    // 0x188240: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_188244:
    if (ctx->pc == 0x188244u) {
        ctx->pc = 0x188248u;
        goto label_188248;
    }
    ctx->pc = 0x188240u;
    {
        const bool branch_taken_0x188240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188240) {
            ctx->pc = 0x188268u;
            goto label_188268;
        }
    }
    ctx->pc = 0x188248u;
label_188248:
    // 0x188248: 0x10000054  b           . + 4 + (0x54 << 2)
label_18824c:
    if (ctx->pc == 0x18824Cu) {
        ctx->pc = 0x18824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188248u;
        // 0x18824c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188250u;
        goto label_188250;
    }
    ctx->pc = 0x188248u;
    {
        const bool branch_taken_0x188248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188248u;
        // 0x18824c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188248) {
            ctx->pc = 0x18839Cu;
            goto label_18839c;
        }
    }
    ctx->pc = 0x188250u;
label_188250:
    // 0x188250: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_188254:
    if (ctx->pc == 0x188254u) {
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188250u;
        // 0x188254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188258u;
        goto label_188258;
    }
    ctx->pc = 0x188250u;
    {
        const bool branch_taken_0x188250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188250u;
        // 0x188254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188250) {
            ctx->pc = 0x188348u;
            goto label_188348;
        }
    }
    ctx->pc = 0x188258u;
label_188258:
    // 0x188258: 0x5062004c  beql        $v1, $v0, . + 4 + (0x4C << 2)
label_18825c:
    if (ctx->pc == 0x18825Cu) {
        ctx->pc = 0x18825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188258u;
        // 0x18825c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188260u;
        goto label_188260;
    }
    ctx->pc = 0x188258u;
    {
        const bool branch_taken_0x188258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188258) {
            ctx->pc = 0x18825Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188258u;
            // 0x18825c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18838Cu;
            goto label_18838c;
        }
    }
    ctx->pc = 0x188260u;
label_188260:
    // 0x188260: 0x1000004e  b           . + 4 + (0x4E << 2)
label_188264:
    if (ctx->pc == 0x188264u) {
        ctx->pc = 0x188264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188260u;
        // 0x188264: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188268u;
        goto label_188268;
    }
    ctx->pc = 0x188260u;
    {
        const bool branch_taken_0x188260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188260u;
        // 0x188264: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188260) {
            ctx->pc = 0x18839Cu;
            goto label_18839c;
        }
    }
    ctx->pc = 0x188268u;
label_188268:
    // 0x188268: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x188268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18826c:
    // 0x18826c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_188270:
    // 0x188270: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_188274:
    // 0x188274: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_188278:
    // 0x188278: 0x40f809  jalr        $v0
label_18827c:
    if (ctx->pc == 0x18827Cu) {
        ctx->pc = 0x18827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188278u;
        // 0x18827c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188280u;
        goto label_188280;
    }
    ctx->pc = 0x188278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188280u);
        ctx->pc = 0x18827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188278u;
        // 0x18827c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188278u, 0x188280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188280u;
label_188280:
    // 0x188280: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_188284:
    if (ctx->pc == 0x188284u) {
        ctx->pc = 0x188288u;
        goto label_188288;
    }
    ctx->pc = 0x188280u;
    {
        const bool branch_taken_0x188280 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x188280) {
            ctx->pc = 0x1882A0u;
            goto label_1882a0;
        }
    }
    ctx->pc = 0x188288u;
label_188288:
    // 0x188288: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x188288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18828c:
    // 0x18828c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_188290:
    // 0x188290: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x188290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188294:
    // 0x188294: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x188294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_188298:
    // 0x188298: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x188298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18829c:
    // 0x18829c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1882a0:
    // 0x1882a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1882a4:
    // 0x1882a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1882a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1882a8:
    // 0x1882a8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1882a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1882ac:
    // 0x1882ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1882acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882b0:
    // 0x1882b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1882b4:
    // 0x1882b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1882b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882b8:
    // 0x1882b8: 0xc0c1a0e  jal         func_306838
label_1882bc:
    if (ctx->pc == 0x1882BCu) {
        ctx->pc = 0x1882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B8u;
        // 0x1882bc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882C0u;
        goto label_1882c0;
    }
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x1882BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882B8u;
    // 0x1882bc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1882B8u, 0x1882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1882c4:
    // 0x1882c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1882c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882c8:
    // 0x1882c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1882c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882cc:
    // 0x1882cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882d0:
    // 0x1882d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1882d4:
    // 0x1882d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1882d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882d8:
    // 0x1882d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1882d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1882dc:
    // 0x1882dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882e0:
    // 0x1882e0: 0xc0b2e92  jal         func_2CBA48
label_1882e4:
    if (ctx->pc == 0x1882E4u) {
        ctx->pc = 0x1882E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E0u;
        // 0x1882e4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882E8u;
        goto label_1882e8;
    }
    ctx->pc = 0x1882E0u;
    SET_GPR_U32(ctx, 31, 0x1882E8u);
    ctx->pc = 0x1882E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882E0u;
    // 0x1882e4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1882E0u, 0x1882E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882E8u;
label_1882e8:
    // 0x1882e8: 0xc0621e6  jal         func_188798
label_1882ec:
    if (ctx->pc == 0x1882ECu) {
        ctx->pc = 0x1882ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E8u;
        // 0x1882ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882F0u;
        goto label_1882f0;
    }
    ctx->pc = 0x1882E8u;
    SET_GPR_U32(ctx, 31, 0x1882F0u);
    ctx->pc = 0x1882ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882E8u;
    // 0x1882ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188798u, 0x1882E8u, 0x1882F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882F0u;
label_1882f0:
    // 0x1882f0: 0xc06de42  jal         func_1B7908
label_1882f4:
    if (ctx->pc == 0x1882F4u) {
        ctx->pc = 0x1882F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882F0u;
        // 0x1882f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882F8u;
        goto label_1882f8;
    }
    ctx->pc = 0x1882F0u;
    SET_GPR_U32(ctx, 31, 0x1882F8u);
    ctx->pc = 0x1882F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882F0u;
    // 0x1882f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1882F0u, 0x1882F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882F8u;
label_1882f8:
    // 0x1882f8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
label_1882fc:
    // 0x1882fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_188300:
    if (ctx->pc == 0x188300u) {
        ctx->pc = 0x188300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882FCu;
        // 0x188300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188304u;
        goto label_188304;
    }
    ctx->pc = 0x1882FCu;
    {
        const bool branch_taken_0x1882fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882FCu;
        // 0x188300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882fc) {
            ctx->pc = 0x18830Cu;
            goto label_18830c;
        }
    }
    ctx->pc = 0x188304u;
label_188304:
    // 0x188304: 0xc07f5c6  jal         func_1FD718
label_188308:
    if (ctx->pc == 0x188308u) {
        ctx->pc = 0x188308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188304u;
        // 0x188308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18830Cu;
        goto label_18830c;
    }
    ctx->pc = 0x188304u;
    SET_GPR_U32(ctx, 31, 0x18830Cu);
    ctx->pc = 0x188308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188304u;
    // 0x188308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x188304u, 0x18830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18830Cu;
label_18830c:
    // 0x18830c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_188310:
    // 0x188310: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x188310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_188314:
    // 0x188314: 0xa6220600  sh          $v0, 0x600($s1)
    ctx->pc = 0x188314u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
label_188318:
    // 0x188318: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x188318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18831c:
    // 0x18831c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18831cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_188320:
    // 0x188320: 0x96220600  lhu         $v0, 0x600($s1)
    ctx->pc = 0x188320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1536)));
label_188324:
    // 0x188324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_188328:
    // 0x188328: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x188328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18832c:
    // 0x18832c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_188330:
    if (ctx->pc == 0x188330u) {
        ctx->pc = 0x188330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18832Cu;
        // 0x188330: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188334u;
        goto label_188334;
    }
    ctx->pc = 0x18832Cu;
    {
        const bool branch_taken_0x18832c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x188330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18832Cu;
        // 0x188330: 0xa6220600  sh          $v0, 0x600($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18832c) {
            ctx->pc = 0x188398u;
            goto label_188398;
        }
    }
    ctx->pc = 0x188334u;
label_188334:
    // 0x188334: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_188338:
    // 0x188338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18833c:
    // 0x18833c: 0xa6220600  sh          $v0, 0x600($s1)
    ctx->pc = 0x18833cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
label_188340:
    // 0x188340: 0x10000013  b           . + 4 + (0x13 << 2)
label_188344:
    if (ctx->pc == 0x188344u) {
        ctx->pc = 0x188344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188340u;
        // 0x188344: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188348u;
        goto label_188348;
    }
    ctx->pc = 0x188340u;
    {
        const bool branch_taken_0x188340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188340u;
        // 0x188344: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188340) {
            ctx->pc = 0x188390u;
            goto label_188390;
        }
    }
    ctx->pc = 0x188348u;
label_188348:
    // 0x188348: 0x96220600  lhu         $v0, 0x600($s1)
    ctx->pc = 0x188348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1536)));
label_18834c:
    // 0x18834c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_188350:
    // 0x188350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188354:
    // 0x188354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_188358:
    // 0x188358: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18835c:
    // 0x18835c: 0xa6220600  sh          $v0, 0x600($s1)
    ctx->pc = 0x18835cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1536), (uint16_t)GPR_U32(ctx, 2));
label_188360:
    // 0x188360: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_188364:
    // 0x188364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188368:
    // 0x188368: 0x0  nop
    ctx->pc = 0x188368u;
    // NOP
label_18836c:
    // 0x18836c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18836cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_188370:
    // 0x188370: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x188370u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_188374:
    // 0x188374: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_188378:
    if (ctx->pc == 0x188378u) {
        ctx->pc = 0x188378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188374u;
        // 0x188378: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18837Cu;
        goto label_18837c;
    }
    ctx->pc = 0x188374u;
    {
        const bool branch_taken_0x188374 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x188378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188374u;
        // 0x188378: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188374) {
            ctx->pc = 0x188398u;
            goto label_188398;
        }
    }
    ctx->pc = 0x18837Cu;
label_18837c:
    // 0x18837c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_188380:
    // 0x188380: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x188380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_188384:
    // 0x188384: 0x10000003  b           . + 4 + (0x3 << 2)
label_188388:
    if (ctx->pc == 0x188388u) {
        ctx->pc = 0x188388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188384u;
        // 0x188388: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18838Cu;
        goto label_18838c;
    }
    ctx->pc = 0x188384u;
    {
        const bool branch_taken_0x188384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188384u;
        // 0x188388: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188384) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x18838Cu;
label_18838c:
    // 0x18838c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18838cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_188390:
    // 0x188390: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x188390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_188394:
    // 0x188394: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x188394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_188398:
    // 0x188398: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x188398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18839c:
    // 0x18839c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1883a0:
    if (ctx->pc == 0x1883A0u) {
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883A4u;
        goto label_1883a4;
    }
    ctx->pc = 0x18839Cu;
    {
        const bool branch_taken_0x18839c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18839c) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1883A4u;
label_1883a4:
    // 0x1883a4: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1883a8:
    // 0x1883a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1883a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1883ac:
    // 0x1883ac: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1883b0:
    // 0x1883b0: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1883b4:
    // 0x1883b4: 0x26350650  addiu       $s5, $s1, 0x650
    ctx->pc = 0x1883b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
label_1883b8:
    // 0x1883b8: 0x26300620  addiu       $s0, $s1, 0x620
    ctx->pc = 0x1883b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
label_1883bc:
    // 0x1883bc: 0x26340640  addiu       $s4, $s1, 0x640
    ctx->pc = 0x1883bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
label_1883c0:
    // 0x1883c0: 0x26330630  addiu       $s3, $s1, 0x630
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
label_1883c4:
    // 0x1883c4: 0x26320610  addiu       $s2, $s1, 0x610
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
label_1883c8:
    // 0x1883c8: 0xc05ce40  jal         func_173900
label_1883cc:
    if (ctx->pc == 0x1883CCu) {
        ctx->pc = 0x1883CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883C8u;
        // 0x1883cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D0u;
        goto label_1883d0;
    }
    ctx->pc = 0x1883C8u;
    SET_GPR_U32(ctx, 31, 0x1883D0u);
    ctx->pc = 0x1883CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883C8u;
    // 0x1883cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1883C8u, 0x1883D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883D0u;
label_1883d0:
    // 0x1883d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1883d4:
    // 0x1883d4: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1883d8:
    if (ctx->pc == 0x1883D8u) {
        ctx->pc = 0x1883D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D4u;
        // 0x1883d8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883DCu;
        goto label_1883dc;
    }
    ctx->pc = 0x1883D4u;
    {
        const bool branch_taken_0x1883d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1883d4) {
            ctx->pc = 0x1883D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1883D4u;
            // 0x1883d8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1884C4u;
            goto label_1884c4;
        }
    }
    ctx->pc = 0x1883DCu;
label_1883dc:
    // 0x1883dc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1883dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_1883e0:
    // 0x1883e0: 0xc0a4bd4  jal         func_292F50
label_1883e4:
    if (ctx->pc == 0x1883E4u) {
        ctx->pc = 0x1883E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883E0u;
        // 0x1883e4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883E8u;
        goto label_1883e8;
    }
    ctx->pc = 0x1883E0u;
    SET_GPR_U32(ctx, 31, 0x1883E8u);
    ctx->pc = 0x1883E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883E0u;
    // 0x1883e4: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1883E0u, 0x1883E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E8u;
label_1883e8:
    // 0x1883e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1883e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1883ec:
    // 0x1883ec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1883ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1883f0:
    // 0x1883f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1883f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1883f4:
    // 0x1883f4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1883f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1883f8:
    // 0x1883f8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1883f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1883fc:
    // 0x1883fc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1883fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_188400:
    // 0x188400: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x188400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_188404:
    // 0x188404: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x188404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_188408:
    // 0x188408: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x188408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18840c:
    // 0x18840c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_188410:
    // 0x188410: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x188410u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_188414:
    // 0x188414: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x188414u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_188418:
    // 0x188418: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x188418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18841c:
    // 0x18841c: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18841cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_188420:
    // 0x188420: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x188420u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_188424:
    // 0x188424: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x188424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_188428:
    // 0x188428: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x188428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18842c:
    // 0x18842c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18842cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_188430:
    // 0x188430: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x188430u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_188434:
    // 0x188434: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x188434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_188438:
    // 0x188438: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x188438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18843c:
    // 0x18843c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18843cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_188440:
    // 0x188440: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x188440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_188444:
    // 0x188444: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x188444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_188448:
    // 0x188448: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x188448u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18844c:
    // 0x18844c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18844cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_188450:
    // 0x188450: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x188450u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_188454:
    // 0x188454: 0xc07df68  jal         func_1F7DA0
label_188458:
    if (ctx->pc == 0x188458u) {
        ctx->pc = 0x188458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188454u;
        // 0x188458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18845Cu;
        goto label_18845c;
    }
    ctx->pc = 0x188454u;
    SET_GPR_U32(ctx, 31, 0x18845Cu);
    ctx->pc = 0x188458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188454u;
    // 0x188458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x188454u, 0x18845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18845Cu;
label_18845c:
    // 0x18845c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_188460:
    // 0x188460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188464:
    // 0x188464: 0xc051dca  jal         func_147728
label_188468:
    if (ctx->pc == 0x188468u) {
        ctx->pc = 0x188468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188464u;
        // 0x188468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18846Cu;
        goto label_18846c;
    }
    ctx->pc = 0x188464u;
    SET_GPR_U32(ctx, 31, 0x18846Cu);
    ctx->pc = 0x188468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188464u;
    // 0x188468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x188464u, 0x18846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18846Cu;
label_18846c:
    // 0x18846c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_188470:
    // 0x188470: 0xc051f10  jal         func_147C40
label_188474:
    if (ctx->pc == 0x188474u) {
        ctx->pc = 0x188474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188470u;
        // 0x188474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188478u;
        goto label_188478;
    }
    ctx->pc = 0x188470u;
    SET_GPR_U32(ctx, 31, 0x188478u);
    ctx->pc = 0x188474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188470u;
    // 0x188474: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x188470u, 0x188478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188478u;
label_188478:
    // 0x188478: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x188478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18847c:
    // 0x18847c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18847cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_188480:
    // 0x188480: 0xc051efe  jal         func_147BF8
label_188484:
    if (ctx->pc == 0x188484u) {
        ctx->pc = 0x188484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188480u;
        // 0x188484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188488u;
        goto label_188488;
    }
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x188484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188480u;
    // 0x188484: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x188480u, 0x188488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18848c:
    // 0x18848c: 0xc051d4a  jal         func_147528
label_188490:
    if (ctx->pc == 0x188490u) {
        ctx->pc = 0x188490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18848Cu;
        // 0x188490: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188494u;
        goto label_188494;
    }
    ctx->pc = 0x18848Cu;
    SET_GPR_U32(ctx, 31, 0x188494u);
    ctx->pc = 0x188490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18848Cu;
    // 0x188490: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18848Cu, 0x188494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188494u;
label_188494:
    // 0x188494: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x188494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188498:
    // 0x188498: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x188498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18849c:
    // 0x18849c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18849cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1884a0:
    // 0x1884a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1884a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1884a4:
    // 0x1884a4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1884a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1884a8:
    // 0x1884a8: 0x0  nop
    ctx->pc = 0x1884a8u;
    // NOP
label_1884ac:
    // 0x1884ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1884b0:
    if (ctx->pc == 0x1884B0u) {
        ctx->pc = 0x1884B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884ACu;
        // 0x1884b0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B4u;
        goto label_1884b4;
    }
    ctx->pc = 0x1884ACu;
    {
        const bool branch_taken_0x1884ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1884B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884ACu;
        // 0x1884b0: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884ac) {
            ctx->pc = 0x1884C0u;
            goto label_1884c0;
        }
    }
    ctx->pc = 0x1884B4u;
label_1884b4:
    // 0x1884b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1884b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1884b8:
    // 0x1884b8: 0xc05bd90  jal         func_16F640
label_1884bc:
    if (ctx->pc == 0x1884BCu) {
        ctx->pc = 0x1884BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B8u;
        // 0x1884bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884C0u;
        goto label_1884c0;
    }
    ctx->pc = 0x1884B8u;
    SET_GPR_U32(ctx, 31, 0x1884C0u);
    ctx->pc = 0x1884BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884B8u;
    // 0x1884bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1884B8u, 0x1884C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884C0u;
label_1884c0:
    // 0x1884c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1884c4:
    // 0x1884c4: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1884c8:
    // 0x1884c8: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1884c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1884cc:
    // 0x1884cc: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1884ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1884d0:
    // 0x1884d0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1884d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1884d4:
    // 0x1884d4: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x1884d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_1884d8:
    // 0x1884d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1884dc:
    if (ctx->pc == 0x1884DCu) {
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884D8u;
        // 0x1884dc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884E0u;
        goto label_1884e0;
    }
    ctx->pc = 0x1884D8u;
    {
        const bool branch_taken_0x1884d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884D8u;
        // 0x1884dc: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884d8) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884E0u;
label_1884e0:
    // 0x1884e0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1884e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1884e4:
    // 0x1884e4: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1884e8:
    if (ctx->pc == 0x1884E8u) {
        ctx->pc = 0x1884ECu;
        goto label_1884ec;
    }
    ctx->pc = 0x1884E4u;
    {
        const bool branch_taken_0x1884e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1884e4) {
            ctx->pc = 0x1883C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1883c8;
        }
    }
    ctx->pc = 0x1884ECu;
label_1884ec:
    // 0x1884ec: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1884ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1884f0:
    // 0x1884f0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1884f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1884f4:
    // 0x1884f4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1884f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1884f8:
    // 0x1884f8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1884f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1884fc:
    // 0x1884fc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1884fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_188500:
    // 0x188500: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x188500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_188504:
    // 0x188504: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x188504u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_188508:
    // 0x188508: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x188508u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18850c:
    // 0x18850c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18850cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_188510:
    // 0x188510: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x188510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_188514:
    // 0x188514: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x188514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_188518:
    // 0x188518: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x188518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18851c:
    // 0x18851c: 0x3e00008  jr          $ra
label_188520:
    if (ctx->pc == 0x188520u) {
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188524u;
        goto label_188524;
    }
    ctx->pc = 0x18851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188524u;
label_188524:
    // 0x188524: 0x0  nop
    ctx->pc = 0x188524u;
    // NOP
    ctx->pc = 0x188528u;
}
